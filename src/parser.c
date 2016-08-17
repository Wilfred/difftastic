#include "tree_sitter/parser.h"

#define STATE_COUNT 148
#define SYMBOL_COUNT 59

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
    sym_method_declaration,
    sym_parameters,
    sym__parameter_list,
    sym_parameter_declaration,
    sym_block,
    sym_type_declaration,
    sym_type_spec,
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
    aux_sym_type_declaration_repeat1,
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
    anon_sym_type,
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
    [sym_method_declaration] = "method_declaration",
    [sym_parameters] = "parameters",
    [sym__parameter_list] = "_parameter_list",
    [sym_parameter_declaration] = "parameter_declaration",
    [sym_block] = "block",
    [sym_type_declaration] = "type_declaration",
    [sym_type_spec] = "type_spec",
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
    [aux_sym_type_declaration_repeat1] = "type_declaration_repeat1",
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
    [anon_sym_type] = "type",
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
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_parameters] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__parameter_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_parameter_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_type_declaration_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_type] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ('q' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
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
            if (lookahead == 't')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(50);
            if (lookahead == '{')
                ADVANCE(53);
            if (lookahead == '}')
                ADVANCE(54);
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
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'y')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'p')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_type);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_var);
        case 53:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 54:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 55:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(55);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'p')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (lookahead == 'a')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (lookahead == 'c')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            if (lookahead == 'k')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            if (lookahead == 'a')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            if (lookahead == 'g')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (lookahead == 'e')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            ACCEPT_TOKEN(anon_sym_package);
        case 63:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 64:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(64);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(65);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 'i')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 65:
            if (lookahead == 'o')
                ADVANCE(66);
            LEX_ERROR();
        case 66:
            if (lookahead == 'n')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 's')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            if (lookahead == 't')
                ADVANCE(69);
            LEX_ERROR();
        case 69:
            ACCEPT_TOKEN(anon_sym_const);
        case 70:
            if (lookahead == 'u')
                ADVANCE(71);
            LEX_ERROR();
        case 71:
            if (lookahead == 'n')
                ADVANCE(72);
            LEX_ERROR();
        case 72:
            if (lookahead == 'c')
                ADVANCE(73);
            LEX_ERROR();
        case 73:
            ACCEPT_TOKEN(anon_sym_func);
        case 74:
            if (lookahead == 'm')
                ADVANCE(75);
            LEX_ERROR();
        case 75:
            if (lookahead == 'p')
                ADVANCE(76);
            LEX_ERROR();
        case 76:
            if (lookahead == 'o')
                ADVANCE(77);
            LEX_ERROR();
        case 77:
            if (lookahead == 'r')
                ADVANCE(78);
            LEX_ERROR();
        case 78:
            if (lookahead == 't')
                ADVANCE(79);
            LEX_ERROR();
        case 79:
            ACCEPT_TOKEN(anon_sym_import);
        case 80:
            if (lookahead == 'y')
                ADVANCE(81);
            LEX_ERROR();
        case 81:
            if (lookahead == 'p')
                ADVANCE(82);
            LEX_ERROR();
        case 82:
            if (lookahead == 'e')
                ADVANCE(83);
            LEX_ERROR();
        case 83:
            ACCEPT_TOKEN(anon_sym_type);
        case 84:
            if (lookahead == 'a')
                ADVANCE(85);
            LEX_ERROR();
        case 85:
            if (lookahead == 'r')
                ADVANCE(86);
            LEX_ERROR();
        case 86:
            ACCEPT_TOKEN(anon_sym_var);
        case 87:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(87);
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
                ADVANCE(65);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 89:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(89);
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
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
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
        case 91:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
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
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 95:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(95);
            if (lookahead == '(')
                ADVANCE(8);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                ('g' <= lookahead && lookahead <= 's') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'c')
                ADVANCE(24);
            if (lookahead == 'f')
                ADVANCE(29);
            if (lookahead == 't')
                ADVANCE(46);
            if (lookahead == 'v')
                ADVANCE(50);
            if (lookahead == '{')
                ADVANCE(53);
            LEX_ERROR();
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
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
        case 98:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(98);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(65);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(84);
            if (lookahead == '{')
                ADVANCE(53);
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
            if (lookahead == '}')
                ADVANCE(54);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
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
        case 101:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
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
        case 102:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(102);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 103:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(103);
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
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 105:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(105);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(65);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 106:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(106);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(65);
            if (lookahead == 'f')
                ADVANCE(70);
            if (lookahead == 't')
                ADVANCE(80);
            if (lookahead == 'v')
                ADVANCE(84);
            LEX_ERROR();
        case 107:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(107);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 108:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
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
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
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
    [0] = 55,
    [1] = 63,
    [2] = 64,
    [3] = 87,
    [4] = 64,
    [5] = 64,
    [6] = 88,
    [7] = 88,
    [8] = 88,
    [9] = 88,
    [10] = 63,
    [11] = 89,
    [12] = 90,
    [13] = 90,
    [14] = 90,
    [15] = 90,
    [16] = 88,
    [17] = 91,
    [18] = 87,
    [19] = 88,
    [20] = 88,
    [21] = 92,
    [22] = 93,
    [23] = 88,
    [24] = 87,
    [25] = 92,
    [26] = 92,
    [27] = 88,
    [28] = 91,
    [29] = 93,
    [30] = 87,
    [31] = 91,
    [32] = 94,
    [33] = 95,
    [34] = 91,
    [35] = 96,
    [36] = 96,
    [37] = 95,
    [38] = 97,
    [39] = 96,
    [40] = 96,
    [41] = 95,
    [42] = 87,
    [43] = 96,
    [44] = 97,
    [45] = 98,
    [46] = 88,
    [47] = 91,
    [48] = 99,
    [49] = 98,
    [50] = 88,
    [51] = 96,
    [52] = 98,
    [53] = 98,
    [54] = 88,
    [55] = 96,
    [56] = 87,
    [57] = 87,
    [58] = 94,
    [59] = 95,
    [60] = 98,
    [61] = 88,
    [62] = 88,
    [63] = 88,
    [64] = 100,
    [65] = 91,
    [66] = 101,
    [67] = 100,
    [68] = 87,
    [69] = 101,
    [70] = 100,
    [71] = 92,
    [72] = 100,
    [73] = 93,
    [74] = 88,
    [75] = 88,
    [76] = 102,
    [77] = 103,
    [78] = 102,
    [79] = 92,
    [80] = 104,
    [81] = 104,
    [82] = 104,
    [83] = 104,
    [84] = 104,
    [85] = 92,
    [86] = 103,
    [87] = 104,
    [88] = 92,
    [89] = 103,
    [90] = 92,
    [91] = 91,
    [92] = 93,
    [93] = 105,
    [94] = 103,
    [95] = 105,
    [96] = 88,
    [97] = 106,
    [98] = 106,
    [99] = 106,
    [100] = 106,
    [101] = 106,
    [102] = 88,
    [103] = 103,
    [104] = 106,
    [105] = 88,
    [106] = 103,
    [107] = 88,
    [108] = 88,
    [109] = 100,
    [110] = 91,
    [111] = 92,
    [112] = 100,
    [113] = 93,
    [114] = 88,
    [115] = 88,
    [116] = 107,
    [117] = 103,
    [118] = 107,
    [119] = 92,
    [120] = 103,
    [121] = 92,
    [122] = 91,
    [123] = 93,
    [124] = 107,
    [125] = 103,
    [126] = 88,
    [127] = 103,
    [128] = 88,
    [129] = 64,
    [130] = 64,
    [131] = 108,
    [132] = 109,
    [133] = 64,
    [134] = 64,
    [135] = 92,
    [136] = 92,
    [137] = 93,
    [138] = 64,
    [139] = 109,
    [140] = 92,
    [141] = 92,
    [142] = 64,
    [143] = 108,
    [144] = 93,
    [145] = 63,
    [146] = 63,
    [147] = 88,
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
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 36,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 38,
        [sym__top_level_declaration] = 38,
        [sym__declaration] = 38,
        [sym_const_declaration] = 38,
        [sym_var_declaration] = 38,
        [sym_function_declaration] = 38,
        [sym_method_declaration] = 38,
        [sym_type_declaration] = 38,
        [aux_sym_source_file_repeat1] = 38,
        [aux_sym_source_file_repeat2] = 38,
        [ts_builtin_sym_end] = 38,
        [anon_sym_import] = 38,
        [anon_sym_const] = 38,
        [anon_sym_var] = 38,
        [anon_sym_func] = 38,
        [anon_sym_type] = 38,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 40,
        [sym__declaration] = 40,
        [sym_const_declaration] = 40,
        [sym_var_declaration] = 40,
        [sym_function_declaration] = 40,
        [sym_method_declaration] = 40,
        [sym_type_declaration] = 40,
        [aux_sym_source_file_repeat1] = 42,
        [aux_sym_source_file_repeat2] = 40,
        [ts_builtin_sym_end] = 40,
        [anon_sym_import] = 26,
        [anon_sym_const] = 40,
        [anon_sym_var] = 40,
        [anon_sym_func] = 40,
        [anon_sym_type] = 40,
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
        [aux_sym_source_file_repeat2] = 44,
        [ts_builtin_sym_end] = 46,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [7] = {
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
        [anon_sym_type] = 48,
        [sym_comment] = 8,
    },
    [8] = {
        [sym__top_level_declaration] = 50,
        [sym__declaration] = 50,
        [sym_const_declaration] = 50,
        [sym_var_declaration] = 50,
        [sym_function_declaration] = 50,
        [sym_method_declaration] = 50,
        [sym_type_declaration] = 50,
        [aux_sym_source_file_repeat2] = 50,
        [ts_builtin_sym_end] = 50,
        [anon_sym_const] = 50,
        [anon_sym_var] = 50,
        [anon_sym_func] = 50,
        [anon_sym_type] = 50,
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
        [aux_sym_source_file_repeat2] = 52,
        [ts_builtin_sym_end] = 54,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 54,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 56,
        [sym__string_literal] = 58,
        [anon_sym_LPAREN] = 60,
        [anon_sym_DOT] = 62,
        [sym_identifier] = 62,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 66,
        [sym_identifier_list] = 68,
        [anon_sym_LPAREN] = 70,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 74,
        [sym_identifier_list] = 76,
        [anon_sym_LPAREN] = 78,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [14] = {
        [sym_parameters] = 80,
        [anon_sym_LPAREN] = 82,
        [sym_identifier] = 84,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_type_spec] = 86,
        [anon_sym_LPAREN] = 88,
        [sym_identifier] = 90,
        [sym_comment] = 8,
    },
    [16] = {
        [sym__top_level_declaration] = 92,
        [sym__declaration] = 92,
        [sym_const_declaration] = 92,
        [sym_var_declaration] = 92,
        [sym_function_declaration] = 92,
        [sym_method_declaration] = 92,
        [sym_type_declaration] = 92,
        [aux_sym_source_file_repeat2] = 92,
        [ts_builtin_sym_end] = 92,
        [anon_sym_const] = 92,
        [anon_sym_var] = 92,
        [anon_sym_func] = 92,
        [anon_sym_type] = 92,
        [sym_comment] = 8,
    },
    [17] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 96,
        [anon_sym_RPAREN] = 98,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 102,
        [sym_identifier] = 104,
        [sym_comment] = 8,
    },
    [19] = {
        [sym__top_level_declaration] = 106,
        [sym__declaration] = 106,
        [sym_const_declaration] = 106,
        [sym_var_declaration] = 106,
        [sym_function_declaration] = 106,
        [sym_method_declaration] = 106,
        [sym_type_declaration] = 106,
        [aux_sym_source_file_repeat2] = 106,
        [ts_builtin_sym_end] = 106,
        [anon_sym_const] = 106,
        [anon_sym_var] = 106,
        [anon_sym_func] = 106,
        [anon_sym_type] = 106,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__top_level_declaration] = 108,
        [sym__declaration] = 108,
        [sym_const_declaration] = 108,
        [sym_var_declaration] = 108,
        [sym_function_declaration] = 108,
        [sym_method_declaration] = 108,
        [sym_type_declaration] = 108,
        [aux_sym_source_file_repeat2] = 108,
        [ts_builtin_sym_end] = 108,
        [anon_sym_const] = 108,
        [anon_sym_var] = 108,
        [anon_sym_func] = 108,
        [anon_sym_type] = 108,
        [sym_comment] = 8,
    },
    [21] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 110,
        [sym_comment] = 8,
    },
    [22] = {
        [anon_sym_RPAREN] = 112,
        [sym_comment] = 8,
    },
    [23] = {
        [sym__top_level_declaration] = 114,
        [sym__declaration] = 114,
        [sym_const_declaration] = 114,
        [sym_var_declaration] = 114,
        [sym_function_declaration] = 114,
        [sym_method_declaration] = 114,
        [sym_type_declaration] = 114,
        [aux_sym_source_file_repeat2] = 114,
        [ts_builtin_sym_end] = 114,
        [anon_sym_const] = 114,
        [anon_sym_var] = 114,
        [anon_sym_func] = 114,
        [anon_sym_type] = 114,
        [sym_comment] = 8,
    },
    [24] = {
        [sym__type] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [25] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 106,
        [sym_comment] = 8,
    },
    [26] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 108,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_method_declaration] = 120,
        [sym_type_declaration] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [28] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 122,
        [anon_sym_RPAREN] = 124,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_RPAREN] = 126,
        [sym_comment] = 8,
    },
    [30] = {
        [sym_identifier] = 128,
        [sym_comment] = 8,
    },
    [31] = {
        [sym__parameter_list] = 130,
        [sym_parameter_declaration] = 132,
        [anon_sym_RPAREN] = 134,
        [sym_identifier] = 136,
        [sym_comment] = 8,
    },
    [32] = {
        [sym_parameters] = 138,
        [anon_sym_LPAREN] = 140,
        [sym_comment] = 8,
    },
    [33] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_var_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_parameters] = 144,
        [sym_block] = 146,
        [sym_type_declaration] = 142,
        [sym__type] = 144,
        [aux_sym_source_file_repeat2] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_LPAREN] = 148,
        [anon_sym_const] = 142,
        [anon_sym_var] = 142,
        [anon_sym_func] = 142,
        [anon_sym_LBRACE] = 150,
        [anon_sym_type] = 142,
        [sym_identifier] = 152,
        [sym_comment] = 8,
    },
    [34] = {
        [sym__parameter_list] = 154,
        [sym_parameter_declaration] = 132,
        [anon_sym_RPAREN] = 156,
        [sym_identifier] = 136,
        [sym_comment] = 8,
    },
    [35] = {
        [anon_sym_RPAREN] = 158,
        [anon_sym_COMMA] = 160,
        [sym_comment] = 8,
    },
    [36] = {
        [anon_sym_RPAREN] = 162,
        [anon_sym_COMMA] = 162,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__top_level_declaration] = 164,
        [sym__declaration] = 164,
        [sym_const_declaration] = 164,
        [sym_var_declaration] = 164,
        [sym_function_declaration] = 164,
        [sym_method_declaration] = 164,
        [sym_parameters] = 164,
        [sym_block] = 164,
        [sym_type_declaration] = 164,
        [sym__type] = 164,
        [aux_sym_source_file_repeat2] = 164,
        [ts_builtin_sym_end] = 164,
        [anon_sym_LPAREN] = 164,
        [anon_sym_const] = 164,
        [anon_sym_var] = 164,
        [anon_sym_func] = 164,
        [anon_sym_LBRACE] = 164,
        [anon_sym_type] = 164,
        [sym_identifier] = 164,
        [sym_comment] = 8,
    },
    [38] = {
        [sym__type] = 166,
        [anon_sym_RPAREN] = 162,
        [anon_sym_COMMA] = 162,
        [sym_identifier] = 168,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RPAREN] = 170,
        [anon_sym_COMMA] = 170,
        [sym_comment] = 8,
    },
    [40] = {
        [anon_sym_RPAREN] = 108,
        [anon_sym_COMMA] = 108,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__top_level_declaration] = 172,
        [sym__declaration] = 172,
        [sym_const_declaration] = 172,
        [sym_var_declaration] = 172,
        [sym_function_declaration] = 172,
        [sym_method_declaration] = 172,
        [sym_parameters] = 172,
        [sym_block] = 172,
        [sym_type_declaration] = 172,
        [sym__type] = 172,
        [aux_sym_source_file_repeat2] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_LPAREN] = 172,
        [anon_sym_const] = 172,
        [anon_sym_var] = 172,
        [anon_sym_func] = 172,
        [anon_sym_LBRACE] = 172,
        [anon_sym_type] = 172,
        [sym_identifier] = 172,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_parameter_declaration] = 174,
        [sym_identifier] = 176,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_RPAREN] = 178,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 8,
    },
    [44] = {
        [sym__type] = 166,
        [anon_sym_RPAREN] = 178,
        [anon_sym_COMMA] = 178,
        [sym_identifier] = 168,
        [sym_comment] = 8,
    },
    [45] = {
        [sym__top_level_declaration] = 180,
        [sym__declaration] = 180,
        [sym_const_declaration] = 180,
        [sym_var_declaration] = 180,
        [sym_function_declaration] = 180,
        [sym_method_declaration] = 180,
        [sym_block] = 182,
        [sym_type_declaration] = 180,
        [aux_sym_source_file_repeat2] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_const] = 180,
        [anon_sym_var] = 180,
        [anon_sym_func] = 180,
        [anon_sym_LBRACE] = 150,
        [anon_sym_type] = 180,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__top_level_declaration] = 180,
        [sym__declaration] = 180,
        [sym_const_declaration] = 180,
        [sym_var_declaration] = 180,
        [sym_function_declaration] = 180,
        [sym_method_declaration] = 180,
        [sym_type_declaration] = 180,
        [aux_sym_source_file_repeat2] = 180,
        [ts_builtin_sym_end] = 180,
        [anon_sym_const] = 180,
        [anon_sym_var] = 180,
        [anon_sym_func] = 180,
        [anon_sym_type] = 180,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__parameter_list] = 184,
        [sym_parameter_declaration] = 132,
        [anon_sym_RPAREN] = 186,
        [sym_identifier] = 136,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_RBRACE] = 188,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__top_level_declaration] = 108,
        [sym__declaration] = 108,
        [sym_const_declaration] = 108,
        [sym_var_declaration] = 108,
        [sym_function_declaration] = 108,
        [sym_method_declaration] = 108,
        [sym_block] = 108,
        [sym_type_declaration] = 108,
        [aux_sym_source_file_repeat2] = 108,
        [ts_builtin_sym_end] = 108,
        [anon_sym_const] = 108,
        [anon_sym_var] = 108,
        [anon_sym_func] = 108,
        [anon_sym_LBRACE] = 108,
        [anon_sym_type] = 108,
        [sym_comment] = 8,
    },
    [50] = {
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
        [anon_sym_var] = 190,
        [anon_sym_func] = 190,
        [anon_sym_type] = 190,
        [sym_comment] = 8,
    },
    [51] = {
        [anon_sym_RPAREN] = 192,
        [anon_sym_COMMA] = 160,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__top_level_declaration] = 164,
        [sym__declaration] = 164,
        [sym_const_declaration] = 164,
        [sym_var_declaration] = 164,
        [sym_function_declaration] = 164,
        [sym_method_declaration] = 164,
        [sym_block] = 164,
        [sym_type_declaration] = 164,
        [aux_sym_source_file_repeat2] = 164,
        [ts_builtin_sym_end] = 164,
        [anon_sym_const] = 164,
        [anon_sym_var] = 164,
        [anon_sym_func] = 164,
        [anon_sym_LBRACE] = 164,
        [anon_sym_type] = 164,
        [sym_comment] = 8,
    },
    [53] = {
        [sym__top_level_declaration] = 172,
        [sym__declaration] = 172,
        [sym_const_declaration] = 172,
        [sym_var_declaration] = 172,
        [sym_function_declaration] = 172,
        [sym_method_declaration] = 172,
        [sym_block] = 172,
        [sym_type_declaration] = 172,
        [aux_sym_source_file_repeat2] = 172,
        [ts_builtin_sym_end] = 172,
        [anon_sym_const] = 172,
        [anon_sym_var] = 172,
        [anon_sym_func] = 172,
        [anon_sym_LBRACE] = 172,
        [anon_sym_type] = 172,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__top_level_declaration] = 194,
        [sym__declaration] = 194,
        [sym_const_declaration] = 194,
        [sym_var_declaration] = 194,
        [sym_function_declaration] = 194,
        [sym_method_declaration] = 194,
        [sym_type_declaration] = 194,
        [aux_sym_source_file_repeat2] = 194,
        [ts_builtin_sym_end] = 194,
        [anon_sym_const] = 194,
        [anon_sym_var] = 194,
        [anon_sym_func] = 194,
        [anon_sym_type] = 194,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RPAREN] = 196,
        [anon_sym_COMMA] = 160,
        [sym_comment] = 8,
    },
    [56] = {
        [sym_identifier] = 164,
        [sym_comment] = 8,
    },
    [57] = {
        [sym_identifier] = 172,
        [sym_comment] = 8,
    },
    [58] = {
        [sym_parameters] = 198,
        [anon_sym_LPAREN] = 140,
        [sym_comment] = 8,
    },
    [59] = {
        [sym__top_level_declaration] = 200,
        [sym__declaration] = 200,
        [sym_const_declaration] = 200,
        [sym_var_declaration] = 200,
        [sym_function_declaration] = 200,
        [sym_method_declaration] = 200,
        [sym_parameters] = 202,
        [sym_block] = 204,
        [sym_type_declaration] = 200,
        [sym__type] = 202,
        [aux_sym_source_file_repeat2] = 200,
        [ts_builtin_sym_end] = 200,
        [anon_sym_LPAREN] = 148,
        [anon_sym_const] = 200,
        [anon_sym_var] = 200,
        [anon_sym_func] = 200,
        [anon_sym_LBRACE] = 150,
        [anon_sym_type] = 200,
        [sym_identifier] = 152,
        [sym_comment] = 8,
    },
    [60] = {
        [sym__top_level_declaration] = 206,
        [sym__declaration] = 206,
        [sym_const_declaration] = 206,
        [sym_var_declaration] = 206,
        [sym_function_declaration] = 206,
        [sym_method_declaration] = 206,
        [sym_block] = 208,
        [sym_type_declaration] = 206,
        [aux_sym_source_file_repeat2] = 206,
        [ts_builtin_sym_end] = 206,
        [anon_sym_const] = 206,
        [anon_sym_var] = 206,
        [anon_sym_func] = 206,
        [anon_sym_LBRACE] = 150,
        [anon_sym_type] = 206,
        [sym_comment] = 8,
    },
    [61] = {
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
        [anon_sym_type] = 206,
        [sym_comment] = 8,
    },
    [62] = {
        [sym__top_level_declaration] = 210,
        [sym__declaration] = 210,
        [sym_const_declaration] = 210,
        [sym_var_declaration] = 210,
        [sym_function_declaration] = 210,
        [sym_method_declaration] = 210,
        [sym_type_declaration] = 210,
        [aux_sym_source_file_repeat2] = 210,
        [ts_builtin_sym_end] = 210,
        [anon_sym_const] = 210,
        [anon_sym_var] = 210,
        [anon_sym_func] = 210,
        [anon_sym_type] = 210,
        [sym_comment] = 8,
    },
    [63] = {
        [sym__top_level_declaration] = 212,
        [sym__declaration] = 212,
        [sym_const_declaration] = 212,
        [sym_var_declaration] = 212,
        [sym_function_declaration] = 212,
        [sym_method_declaration] = 212,
        [sym_type_declaration] = 212,
        [aux_sym_source_file_repeat2] = 212,
        [ts_builtin_sym_end] = 212,
        [anon_sym_const] = 212,
        [anon_sym_var] = 212,
        [anon_sym_func] = 212,
        [anon_sym_type] = 212,
        [sym_comment] = 8,
    },
    [64] = {
        [sym__type] = 214,
        [anon_sym_EQ] = 216,
        [sym_identifier] = 218,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_var_spec] = 220,
        [sym_identifier_list] = 222,
        [aux_sym_var_declaration_repeat1] = 224,
        [anon_sym_RPAREN] = 226,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [66] = {
        [sym__type] = 228,
        [aux_sym_identifier_list_repeat1] = 230,
        [anon_sym_EQ] = 228,
        [anon_sym_COMMA] = 232,
        [sym_identifier] = 228,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__type] = 234,
        [anon_sym_EQ] = 234,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [68] = {
        [sym_identifier] = 236,
        [sym_comment] = 8,
    },
    [69] = {
        [sym__type] = 238,
        [aux_sym_identifier_list_repeat1] = 240,
        [anon_sym_EQ] = 238,
        [anon_sym_COMMA] = 232,
        [sym_identifier] = 238,
        [sym_comment] = 8,
    },
    [70] = {
        [sym__type] = 242,
        [anon_sym_EQ] = 242,
        [sym_identifier] = 242,
        [sym_comment] = 8,
    },
    [71] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 244,
        [sym_comment] = 8,
    },
    [72] = {
        [sym__type] = 246,
        [anon_sym_EQ] = 248,
        [sym_identifier] = 250,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 252,
        [sym_comment] = 8,
    },
    [74] = {
        [sym__top_level_declaration] = 254,
        [sym__declaration] = 254,
        [sym_const_declaration] = 254,
        [sym_var_declaration] = 254,
        [sym_function_declaration] = 254,
        [sym_method_declaration] = 254,
        [sym_type_declaration] = 254,
        [aux_sym_source_file_repeat2] = 254,
        [ts_builtin_sym_end] = 254,
        [anon_sym_const] = 254,
        [anon_sym_var] = 254,
        [anon_sym_func] = 254,
        [anon_sym_type] = 254,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__top_level_declaration] = 256,
        [sym__declaration] = 256,
        [sym_const_declaration] = 256,
        [sym_var_declaration] = 256,
        [sym_function_declaration] = 256,
        [sym_method_declaration] = 256,
        [sym_type_declaration] = 256,
        [aux_sym_source_file_repeat2] = 256,
        [ts_builtin_sym_end] = 256,
        [anon_sym_const] = 256,
        [anon_sym_var] = 256,
        [anon_sym_func] = 256,
        [anon_sym_type] = 256,
        [sym_comment] = 8,
    },
    [76] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 258,
        [anon_sym_EQ] = 260,
        [sym_comment] = 8,
    },
    [77] = {
        [sym_expression_list] = 262,
        [sym__expression] = 264,
        [sym_unary_expression] = 266,
        [sym_binary_expression] = 266,
        [sym__primary_expression] = 266,
        [sym__string_literal] = 268,
        [sym_int_literal] = 268,
        [sym_float_literal] = 268,
        [sym_identifier] = 268,
        [sym_raw_string_literal] = 270,
        [sym_interpreted_string_literal] = 270,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 8,
    },
    [78] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 108,
        [anon_sym_EQ] = 108,
        [sym_comment] = 8,
    },
    [79] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 274,
        [sym_comment] = 8,
    },
    [80] = {
        [aux_sym_expression_list_repeat1] = 276,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 278,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 8,
    },
    [81] = {
        [aux_sym_expression_list_repeat1] = 282,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 282,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [82] = {
        [aux_sym_expression_list_repeat1] = 284,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 284,
        [anon_sym_COMMA] = 284,
        [sym_comment] = 8,
    },
    [83] = {
        [aux_sym_expression_list_repeat1] = 286,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [anon_sym_COMMA] = 286,
        [sym_comment] = 8,
    },
    [84] = {
        [aux_sym_expression_list_repeat1] = 288,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 288,
        [anon_sym_COMMA] = 288,
        [sym_comment] = 8,
    },
    [85] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 290,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__expression] = 292,
        [sym_unary_expression] = 266,
        [sym_binary_expression] = 266,
        [sym__primary_expression] = 266,
        [sym__string_literal] = 268,
        [sym_int_literal] = 268,
        [sym_float_literal] = 268,
        [sym_identifier] = 268,
        [sym_raw_string_literal] = 270,
        [sym_interpreted_string_literal] = 270,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 8,
    },
    [87] = {
        [aux_sym_expression_list_repeat1] = 294,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 296,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 8,
    },
    [88] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 298,
        [sym_comment] = 8,
    },
    [89] = {
        [sym_expression_list] = 300,
        [sym__expression] = 264,
        [sym_unary_expression] = 266,
        [sym_binary_expression] = 266,
        [sym__primary_expression] = 266,
        [sym__string_literal] = 268,
        [sym_int_literal] = 268,
        [sym_float_literal] = 268,
        [sym_identifier] = 268,
        [sym_raw_string_literal] = 270,
        [sym_interpreted_string_literal] = 270,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 8,
    },
    [90] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 302,
        [sym_comment] = 8,
    },
    [91] = {
        [sym_var_spec] = 220,
        [sym_identifier_list] = 222,
        [aux_sym_var_declaration_repeat1] = 304,
        [anon_sym_RPAREN] = 306,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RPAREN] = 308,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__top_level_declaration] = 258,
        [sym__declaration] = 258,
        [sym_const_declaration] = 258,
        [sym_var_declaration] = 258,
        [sym_function_declaration] = 258,
        [sym_method_declaration] = 258,
        [sym_type_declaration] = 258,
        [aux_sym_source_file_repeat2] = 258,
        [ts_builtin_sym_end] = 258,
        [anon_sym_const] = 258,
        [anon_sym_EQ] = 310,
        [anon_sym_var] = 258,
        [anon_sym_func] = 258,
        [anon_sym_type] = 258,
        [sym_comment] = 8,
    },
    [94] = {
        [sym_expression_list] = 312,
        [sym__expression] = 314,
        [sym_unary_expression] = 316,
        [sym_binary_expression] = 316,
        [sym__primary_expression] = 316,
        [sym__string_literal] = 318,
        [sym_int_literal] = 318,
        [sym_float_literal] = 318,
        [sym_identifier] = 318,
        [sym_raw_string_literal] = 320,
        [sym_interpreted_string_literal] = 320,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 8,
    },
    [95] = {
        [sym__top_level_declaration] = 108,
        [sym__declaration] = 108,
        [sym_const_declaration] = 108,
        [sym_var_declaration] = 108,
        [sym_function_declaration] = 108,
        [sym_method_declaration] = 108,
        [sym_type_declaration] = 108,
        [aux_sym_source_file_repeat2] = 108,
        [ts_builtin_sym_end] = 108,
        [anon_sym_const] = 108,
        [anon_sym_EQ] = 108,
        [anon_sym_var] = 108,
        [anon_sym_func] = 108,
        [anon_sym_type] = 108,
        [sym_comment] = 8,
    },
    [96] = {
        [sym__top_level_declaration] = 274,
        [sym__declaration] = 274,
        [sym_const_declaration] = 274,
        [sym_var_declaration] = 274,
        [sym_function_declaration] = 274,
        [sym_method_declaration] = 274,
        [sym_type_declaration] = 274,
        [aux_sym_source_file_repeat2] = 274,
        [ts_builtin_sym_end] = 274,
        [anon_sym_const] = 274,
        [anon_sym_var] = 274,
        [anon_sym_func] = 274,
        [anon_sym_type] = 274,
        [sym_comment] = 8,
    },
    [97] = {
        [sym__top_level_declaration] = 278,
        [sym__declaration] = 278,
        [sym_const_declaration] = 278,
        [sym_var_declaration] = 278,
        [sym_function_declaration] = 278,
        [sym_method_declaration] = 278,
        [sym_type_declaration] = 278,
        [aux_sym_source_file_repeat2] = 278,
        [aux_sym_expression_list_repeat1] = 324,
        [ts_builtin_sym_end] = 278,
        [anon_sym_const] = 278,
        [anon_sym_var] = 278,
        [anon_sym_func] = 278,
        [anon_sym_COMMA] = 326,
        [anon_sym_type] = 278,
        [sym_comment] = 8,
    },
    [98] = {
        [sym__top_level_declaration] = 282,
        [sym__declaration] = 282,
        [sym_const_declaration] = 282,
        [sym_var_declaration] = 282,
        [sym_function_declaration] = 282,
        [sym_method_declaration] = 282,
        [sym_type_declaration] = 282,
        [aux_sym_source_file_repeat2] = 282,
        [aux_sym_expression_list_repeat1] = 282,
        [ts_builtin_sym_end] = 282,
        [anon_sym_const] = 282,
        [anon_sym_var] = 282,
        [anon_sym_func] = 282,
        [anon_sym_COMMA] = 282,
        [anon_sym_type] = 282,
        [sym_comment] = 8,
    },
    [99] = {
        [sym__top_level_declaration] = 284,
        [sym__declaration] = 284,
        [sym_const_declaration] = 284,
        [sym_var_declaration] = 284,
        [sym_function_declaration] = 284,
        [sym_method_declaration] = 284,
        [sym_type_declaration] = 284,
        [aux_sym_source_file_repeat2] = 284,
        [aux_sym_expression_list_repeat1] = 284,
        [ts_builtin_sym_end] = 284,
        [anon_sym_const] = 284,
        [anon_sym_var] = 284,
        [anon_sym_func] = 284,
        [anon_sym_COMMA] = 284,
        [anon_sym_type] = 284,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_type_declaration] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [aux_sym_expression_list_repeat1] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_const] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_COMMA] = 286,
        [anon_sym_type] = 286,
        [sym_comment] = 8,
    },
    [101] = {
        [sym__top_level_declaration] = 288,
        [sym__declaration] = 288,
        [sym_const_declaration] = 288,
        [sym_var_declaration] = 288,
        [sym_function_declaration] = 288,
        [sym_method_declaration] = 288,
        [sym_type_declaration] = 288,
        [aux_sym_source_file_repeat2] = 288,
        [aux_sym_expression_list_repeat1] = 288,
        [ts_builtin_sym_end] = 288,
        [anon_sym_const] = 288,
        [anon_sym_var] = 288,
        [anon_sym_func] = 288,
        [anon_sym_COMMA] = 288,
        [anon_sym_type] = 288,
        [sym_comment] = 8,
    },
    [102] = {
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
        [anon_sym_type] = 290,
        [sym_comment] = 8,
    },
    [103] = {
        [sym__expression] = 328,
        [sym_unary_expression] = 316,
        [sym_binary_expression] = 316,
        [sym__primary_expression] = 316,
        [sym__string_literal] = 318,
        [sym_int_literal] = 318,
        [sym_float_literal] = 318,
        [sym_identifier] = 318,
        [sym_raw_string_literal] = 320,
        [sym_interpreted_string_literal] = 320,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__top_level_declaration] = 296,
        [sym__declaration] = 296,
        [sym_const_declaration] = 296,
        [sym_var_declaration] = 296,
        [sym_function_declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_type_declaration] = 296,
        [aux_sym_source_file_repeat2] = 296,
        [aux_sym_expression_list_repeat1] = 330,
        [ts_builtin_sym_end] = 296,
        [anon_sym_const] = 296,
        [anon_sym_var] = 296,
        [anon_sym_func] = 296,
        [anon_sym_COMMA] = 326,
        [anon_sym_type] = 296,
        [sym_comment] = 8,
    },
    [105] = {
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
        [anon_sym_type] = 298,
        [sym_comment] = 8,
    },
    [106] = {
        [sym_expression_list] = 332,
        [sym__expression] = 314,
        [sym_unary_expression] = 316,
        [sym_binary_expression] = 316,
        [sym__primary_expression] = 316,
        [sym__string_literal] = 318,
        [sym_int_literal] = 318,
        [sym_float_literal] = 318,
        [sym_identifier] = 318,
        [sym_raw_string_literal] = 320,
        [sym_interpreted_string_literal] = 320,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 8,
    },
    [107] = {
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
        [anon_sym_type] = 302,
        [sym_comment] = 8,
    },
    [108] = {
        [sym__top_level_declaration] = 334,
        [sym__declaration] = 334,
        [sym_const_declaration] = 334,
        [sym_var_declaration] = 334,
        [sym_function_declaration] = 334,
        [sym_method_declaration] = 334,
        [sym_type_declaration] = 334,
        [aux_sym_source_file_repeat2] = 334,
        [ts_builtin_sym_end] = 334,
        [anon_sym_const] = 334,
        [anon_sym_var] = 334,
        [anon_sym_func] = 334,
        [anon_sym_type] = 334,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__type] = 336,
        [anon_sym_EQ] = 338,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [110] = {
        [sym_const_spec] = 342,
        [sym_identifier_list] = 344,
        [aux_sym_const_declaration_repeat1] = 346,
        [anon_sym_RPAREN] = 348,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [111] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 350,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__type] = 352,
        [anon_sym_EQ] = 354,
        [sym_identifier] = 340,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_RPAREN] = 356,
        [sym_comment] = 8,
    },
    [114] = {
        [sym__top_level_declaration] = 358,
        [sym__declaration] = 358,
        [sym_const_declaration] = 358,
        [sym_var_declaration] = 358,
        [sym_function_declaration] = 358,
        [sym_method_declaration] = 358,
        [sym_type_declaration] = 358,
        [aux_sym_source_file_repeat2] = 358,
        [ts_builtin_sym_end] = 358,
        [anon_sym_const] = 358,
        [anon_sym_var] = 358,
        [anon_sym_func] = 358,
        [anon_sym_type] = 358,
        [sym_comment] = 8,
    },
    [115] = {
        [sym__top_level_declaration] = 360,
        [sym__declaration] = 360,
        [sym_const_declaration] = 360,
        [sym_var_declaration] = 360,
        [sym_function_declaration] = 360,
        [sym_method_declaration] = 360,
        [sym_type_declaration] = 360,
        [aux_sym_source_file_repeat2] = 360,
        [ts_builtin_sym_end] = 360,
        [anon_sym_const] = 360,
        [anon_sym_var] = 360,
        [anon_sym_func] = 360,
        [anon_sym_type] = 360,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_EQ] = 362,
        [sym_comment] = 8,
    },
    [117] = {
        [sym_expression_list] = 364,
        [sym__expression] = 264,
        [sym_unary_expression] = 266,
        [sym_binary_expression] = 266,
        [sym__primary_expression] = 266,
        [sym__string_literal] = 268,
        [sym_int_literal] = 268,
        [sym_float_literal] = 268,
        [sym_identifier] = 268,
        [sym_raw_string_literal] = 270,
        [sym_interpreted_string_literal] = 270,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 8,
    },
    [118] = {
        [anon_sym_EQ] = 108,
        [sym_comment] = 8,
    },
    [119] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 366,
        [sym_comment] = 8,
    },
    [120] = {
        [sym_expression_list] = 368,
        [sym__expression] = 264,
        [sym_unary_expression] = 266,
        [sym_binary_expression] = 266,
        [sym__primary_expression] = 266,
        [sym__string_literal] = 268,
        [sym_int_literal] = 268,
        [sym_float_literal] = 268,
        [sym_identifier] = 268,
        [sym_raw_string_literal] = 270,
        [sym_interpreted_string_literal] = 270,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 272,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 272,
        [sym_comment] = 8,
    },
    [121] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 370,
        [sym_comment] = 8,
    },
    [122] = {
        [sym_const_spec] = 342,
        [sym_identifier_list] = 344,
        [aux_sym_const_declaration_repeat1] = 372,
        [anon_sym_RPAREN] = 374,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_RPAREN] = 376,
        [sym_comment] = 8,
    },
    [124] = {
        [anon_sym_EQ] = 378,
        [sym_comment] = 8,
    },
    [125] = {
        [sym_expression_list] = 380,
        [sym__expression] = 314,
        [sym_unary_expression] = 316,
        [sym_binary_expression] = 316,
        [sym__primary_expression] = 316,
        [sym__string_literal] = 318,
        [sym_int_literal] = 318,
        [sym_float_literal] = 318,
        [sym_identifier] = 318,
        [sym_raw_string_literal] = 320,
        [sym_interpreted_string_literal] = 320,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__top_level_declaration] = 366,
        [sym__declaration] = 366,
        [sym_const_declaration] = 366,
        [sym_var_declaration] = 366,
        [sym_function_declaration] = 366,
        [sym_method_declaration] = 366,
        [sym_type_declaration] = 366,
        [aux_sym_source_file_repeat2] = 366,
        [ts_builtin_sym_end] = 366,
        [anon_sym_const] = 366,
        [anon_sym_var] = 366,
        [anon_sym_func] = 366,
        [anon_sym_type] = 366,
        [sym_comment] = 8,
    },
    [127] = {
        [sym_expression_list] = 382,
        [sym__expression] = 314,
        [sym_unary_expression] = 316,
        [sym_binary_expression] = 316,
        [sym__primary_expression] = 316,
        [sym__string_literal] = 318,
        [sym_int_literal] = 318,
        [sym_float_literal] = 318,
        [sym_identifier] = 318,
        [sym_raw_string_literal] = 320,
        [sym_interpreted_string_literal] = 320,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 322,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 322,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__top_level_declaration] = 370,
        [sym__declaration] = 370,
        [sym_const_declaration] = 370,
        [sym_var_declaration] = 370,
        [sym_function_declaration] = 370,
        [sym_method_declaration] = 370,
        [sym_type_declaration] = 370,
        [aux_sym_source_file_repeat2] = 370,
        [ts_builtin_sym_end] = 370,
        [anon_sym_const] = 370,
        [anon_sym_var] = 370,
        [anon_sym_func] = 370,
        [anon_sym_type] = 370,
        [sym_comment] = 8,
    },
    [129] = {
        [sym_import_declaration] = 384,
        [sym__top_level_declaration] = 384,
        [sym__declaration] = 384,
        [sym_const_declaration] = 384,
        [sym_var_declaration] = 384,
        [sym_function_declaration] = 384,
        [sym_method_declaration] = 384,
        [sym_type_declaration] = 384,
        [aux_sym_source_file_repeat1] = 384,
        [aux_sym_source_file_repeat2] = 384,
        [ts_builtin_sym_end] = 384,
        [anon_sym_import] = 384,
        [anon_sym_const] = 384,
        [anon_sym_var] = 384,
        [anon_sym_func] = 384,
        [anon_sym_type] = 384,
        [sym_comment] = 8,
    },
    [130] = {
        [sym_import_declaration] = 386,
        [sym__top_level_declaration] = 386,
        [sym__declaration] = 386,
        [sym_const_declaration] = 386,
        [sym_var_declaration] = 386,
        [sym_function_declaration] = 386,
        [sym_method_declaration] = 386,
        [sym_type_declaration] = 386,
        [aux_sym_source_file_repeat1] = 386,
        [aux_sym_source_file_repeat2] = 386,
        [ts_builtin_sym_end] = 386,
        [anon_sym_import] = 386,
        [anon_sym_const] = 386,
        [anon_sym_var] = 386,
        [anon_sym_func] = 386,
        [anon_sym_type] = 386,
        [sym_comment] = 8,
    },
    [131] = {
        [sym_import_spec] = 388,
        [sym__string_literal] = 390,
        [aux_sym_import_declaration_repeat1] = 392,
        [anon_sym_RPAREN] = 394,
        [anon_sym_DOT] = 396,
        [sym_identifier] = 396,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__string_literal] = 400,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [133] = {
        [sym_import_declaration] = 286,
        [sym__top_level_declaration] = 286,
        [sym__declaration] = 286,
        [sym_const_declaration] = 286,
        [sym_var_declaration] = 286,
        [sym_function_declaration] = 286,
        [sym_method_declaration] = 286,
        [sym_type_declaration] = 286,
        [aux_sym_source_file_repeat1] = 286,
        [aux_sym_source_file_repeat2] = 286,
        [ts_builtin_sym_end] = 286,
        [anon_sym_import] = 286,
        [anon_sym_const] = 286,
        [anon_sym_var] = 286,
        [anon_sym_func] = 286,
        [anon_sym_type] = 286,
        [sym_comment] = 8,
    },
    [134] = {
        [sym_import_declaration] = 402,
        [sym__top_level_declaration] = 402,
        [sym__declaration] = 402,
        [sym_const_declaration] = 402,
        [sym_var_declaration] = 402,
        [sym_function_declaration] = 402,
        [sym_method_declaration] = 402,
        [sym_type_declaration] = 402,
        [aux_sym_source_file_repeat1] = 402,
        [aux_sym_source_file_repeat2] = 402,
        [ts_builtin_sym_end] = 402,
        [anon_sym_import] = 402,
        [anon_sym_const] = 402,
        [anon_sym_var] = 402,
        [anon_sym_func] = 402,
        [anon_sym_type] = 402,
        [sym_comment] = 8,
    },
    [135] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 404,
        [sym_comment] = 8,
    },
    [136] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 386,
        [sym_comment] = 8,
    },
    [137] = {
        [anon_sym_RPAREN] = 406,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_import_declaration] = 408,
        [sym__top_level_declaration] = 408,
        [sym__declaration] = 408,
        [sym_const_declaration] = 408,
        [sym_var_declaration] = 408,
        [sym_function_declaration] = 408,
        [sym_method_declaration] = 408,
        [sym_type_declaration] = 408,
        [aux_sym_source_file_repeat1] = 408,
        [aux_sym_source_file_repeat2] = 408,
        [ts_builtin_sym_end] = 408,
        [anon_sym_import] = 408,
        [anon_sym_const] = 408,
        [anon_sym_var] = 408,
        [anon_sym_func] = 408,
        [anon_sym_type] = 408,
        [sym_comment] = 8,
    },
    [139] = {
        [sym__string_literal] = 410,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [140] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 286,
        [sym_comment] = 8,
    },
    [141] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 402,
        [sym_comment] = 8,
    },
    [142] = {
        [sym_import_declaration] = 412,
        [sym__top_level_declaration] = 412,
        [sym__declaration] = 412,
        [sym_const_declaration] = 412,
        [sym_var_declaration] = 412,
        [sym_function_declaration] = 412,
        [sym_method_declaration] = 412,
        [sym_type_declaration] = 412,
        [aux_sym_source_file_repeat1] = 412,
        [aux_sym_source_file_repeat2] = 412,
        [ts_builtin_sym_end] = 412,
        [anon_sym_import] = 412,
        [anon_sym_const] = 412,
        [anon_sym_var] = 412,
        [anon_sym_func] = 412,
        [anon_sym_type] = 412,
        [sym_comment] = 8,
    },
    [143] = {
        [sym_import_spec] = 388,
        [sym__string_literal] = 390,
        [aux_sym_import_declaration_repeat1] = 414,
        [anon_sym_RPAREN] = 416,
        [anon_sym_DOT] = 396,
        [sym_identifier] = 396,
        [sym_raw_string_literal] = 398,
        [sym_interpreted_string_literal] = 398,
        [sym_comment] = 8,
    },
    [144] = {
        [anon_sym_RPAREN] = 418,
        [sym_comment] = 8,
    },
    [145] = {
        [ts_builtin_sym_end] = 420,
        [sym_comment] = 8,
    },
    [146] = {
        [ts_builtin_sym_end] = 422,
        [sym_comment] = 8,
    },
    [147] = {
        [sym__top_level_declaration] = 424,
        [sym__declaration] = 424,
        [sym_const_declaration] = 424,
        [sym_var_declaration] = 424,
        [sym_function_declaration] = 424,
        [sym_method_declaration] = 424,
        [sym_type_declaration] = 424,
        [aux_sym_source_file_repeat2] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_const] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_type] = 424,
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
    [34] = {.count = 1}, SHIFT(15, 0),
    [36] = {.count = 1}, SHIFT(4, 0),
    [38] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [40] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [42] = {.count = 1}, SHIFT(147, 0),
    [44] = {.count = 1}, SHIFT(146, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(145, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(129, 0),
    [58] = {.count = 1}, SHIFT(130, 0),
    [60] = {.count = 1}, SHIFT(131, 0),
    [62] = {.count = 1}, SHIFT(132, 0),
    [64] = {.count = 1}, SHIFT(133, 0),
    [66] = {.count = 1}, SHIFT(108, 0),
    [68] = {.count = 1}, SHIFT(109, 0),
    [70] = {.count = 1}, SHIFT(110, 0),
    [72] = {.count = 1}, SHIFT(66, 0),
    [74] = {.count = 1}, SHIFT(63, 0),
    [76] = {.count = 1}, SHIFT(64, 0),
    [78] = {.count = 1}, SHIFT(65, 0),
    [80] = {.count = 1}, SHIFT(30, 0),
    [82] = {.count = 1}, SHIFT(31, 0),
    [84] = {.count = 1}, SHIFT(32, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(21, 0),
    [96] = {.count = 1}, SHIFT(22, 0),
    [98] = {.count = 1}, SHIFT(23, 0),
    [100] = {.count = 1}, SHIFT(24, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [108] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [110] = {.count = 1}, SHIFT(28, 0),
    [112] = {.count = 1}, SHIFT(27, 0),
    [114] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [116] = {.count = 1}, SHIFT(25, 0),
    [118] = {.count = 1}, SHIFT(26, 0),
    [120] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [122] = {.count = 1}, SHIFT(29, 0),
    [124] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [126] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [128] = {.count = 1}, SHIFT(58, 0),
    [130] = {.count = 1}, SHIFT(55, 0),
    [132] = {.count = 1}, SHIFT(36, 0),
    [134] = {.count = 1}, SHIFT(56, 0),
    [136] = {.count = 1}, SHIFT(38, 0),
    [138] = {.count = 1}, SHIFT(33, 0),
    [140] = {.count = 1}, SHIFT(34, 0),
    [142] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [144] = {.count = 1}, SHIFT(45, 0),
    [146] = {.count = 1}, SHIFT(46, 0),
    [148] = {.count = 1}, SHIFT(47, 0),
    [150] = {.count = 1}, SHIFT(48, 0),
    [152] = {.count = 1}, SHIFT(49, 0),
    [154] = {.count = 1}, SHIFT(35, 0),
    [156] = {.count = 1}, SHIFT(37, 0),
    [158] = {.count = 1}, SHIFT(41, 0),
    [160] = {.count = 1}, SHIFT(42, 0),
    [162] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [164] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [166] = {.count = 1}, SHIFT(39, 0),
    [168] = {.count = 1}, SHIFT(40, 0),
    [170] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [172] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [174] = {.count = 1}, SHIFT(43, 0),
    [176] = {.count = 1}, SHIFT(44, 0),
    [178] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [180] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [182] = {.count = 1}, SHIFT(54, 0),
    [184] = {.count = 1}, SHIFT(51, 0),
    [186] = {.count = 1}, SHIFT(52, 0),
    [188] = {.count = 1}, SHIFT(50, 0),
    [190] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [192] = {.count = 1}, SHIFT(53, 0),
    [194] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [196] = {.count = 1}, SHIFT(57, 0),
    [198] = {.count = 1}, SHIFT(59, 0),
    [200] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [202] = {.count = 1}, SHIFT(60, 0),
    [204] = {.count = 1}, SHIFT(61, 0),
    [206] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [208] = {.count = 1}, SHIFT(62, 0),
    [210] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [212] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [214] = {.count = 1}, SHIFT(93, 0),
    [216] = {.count = 1}, SHIFT(94, 0),
    [218] = {.count = 1}, SHIFT(95, 0),
    [220] = {.count = 1}, SHIFT(71, 0),
    [222] = {.count = 1}, SHIFT(72, 0),
    [224] = {.count = 1}, SHIFT(73, 0),
    [226] = {.count = 1}, SHIFT(74, 0),
    [228] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [230] = {.count = 1}, SHIFT(67, 0),
    [232] = {.count = 1}, SHIFT(68, 0),
    [234] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [236] = {.count = 1}, SHIFT(69, 0),
    [238] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [240] = {.count = 1}, SHIFT(70, 0),
    [242] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [244] = {.count = 1}, SHIFT(91, 0),
    [246] = {.count = 1}, SHIFT(76, 0),
    [248] = {.count = 1}, SHIFT(77, 0),
    [250] = {.count = 1}, SHIFT(78, 0),
    [252] = {.count = 1}, SHIFT(75, 0),
    [254] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [256] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [258] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [260] = {.count = 1}, SHIFT(89, 0),
    [262] = {.count = 1}, SHIFT(79, 0),
    [264] = {.count = 1}, SHIFT(80, 0),
    [266] = {.count = 1}, SHIFT(81, 0),
    [268] = {.count = 1}, SHIFT(82, 0),
    [270] = {.count = 1}, SHIFT(83, 0),
    [272] = {.count = 1}, SHIFT(84, 0),
    [274] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [276] = {.count = 1}, SHIFT(85, 0),
    [278] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [280] = {.count = 1}, SHIFT(86, 0),
    [282] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [284] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [286] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [288] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [290] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [292] = {.count = 1}, SHIFT(87, 0),
    [294] = {.count = 1}, SHIFT(88, 0),
    [296] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [298] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [300] = {.count = 1}, SHIFT(90, 0),
    [302] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [304] = {.count = 1}, SHIFT(92, 0),
    [306] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [308] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [310] = {.count = 1}, SHIFT(106, 0),
    [312] = {.count = 1}, SHIFT(96, 0),
    [314] = {.count = 1}, SHIFT(97, 0),
    [316] = {.count = 1}, SHIFT(98, 0),
    [318] = {.count = 1}, SHIFT(99, 0),
    [320] = {.count = 1}, SHIFT(100, 0),
    [322] = {.count = 1}, SHIFT(101, 0),
    [324] = {.count = 1}, SHIFT(102, 0),
    [326] = {.count = 1}, SHIFT(103, 0),
    [328] = {.count = 1}, SHIFT(104, 0),
    [330] = {.count = 1}, SHIFT(105, 0),
    [332] = {.count = 1}, SHIFT(107, 0),
    [334] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [336] = {.count = 1}, SHIFT(124, 0),
    [338] = {.count = 1}, SHIFT(125, 0),
    [340] = {.count = 1}, SHIFT(118, 0),
    [342] = {.count = 1}, SHIFT(111, 0),
    [344] = {.count = 1}, SHIFT(112, 0),
    [346] = {.count = 1}, SHIFT(113, 0),
    [348] = {.count = 1}, SHIFT(114, 0),
    [350] = {.count = 1}, SHIFT(122, 0),
    [352] = {.count = 1}, SHIFT(116, 0),
    [354] = {.count = 1}, SHIFT(117, 0),
    [356] = {.count = 1}, SHIFT(115, 0),
    [358] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [360] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [362] = {.count = 1}, SHIFT(120, 0),
    [364] = {.count = 1}, SHIFT(119, 0),
    [366] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [368] = {.count = 1}, SHIFT(121, 0),
    [370] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [372] = {.count = 1}, SHIFT(123, 0),
    [374] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [376] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [378] = {.count = 1}, SHIFT(127, 0),
    [380] = {.count = 1}, SHIFT(126, 0),
    [382] = {.count = 1}, SHIFT(128, 0),
    [384] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [386] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [388] = {.count = 1}, SHIFT(135, 0),
    [390] = {.count = 1}, SHIFT(136, 0),
    [392] = {.count = 1}, SHIFT(137, 0),
    [394] = {.count = 1}, SHIFT(138, 0),
    [396] = {.count = 1}, SHIFT(139, 0),
    [398] = {.count = 1}, SHIFT(140, 0),
    [400] = {.count = 1}, SHIFT(134, 0),
    [402] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [404] = {.count = 1}, SHIFT(143, 0),
    [406] = {.count = 1}, SHIFT(142, 0),
    [408] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [410] = {.count = 1}, SHIFT(141, 0),
    [412] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [414] = {.count = 1}, SHIFT(144, 0),
    [416] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [418] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [420] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [422] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [424] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
