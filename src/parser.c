#include "tree_sitter/parser.h"

#define STATE_COUNT 99
#define SYMBOL_COUNT 49

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
    anon_sym_COMMA,
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
    [anon_sym_COMMA] = ",",
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
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ('d' <= lookahead && lookahead <= 'h') ||
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
            if (lookahead == 'i')
                ADVANCE(29);
            if (lookahead == 'p')
                ADVANCE(35);
            if (lookahead == 'v')
                ADVANCE(42);
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
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'm')
                ADVANCE(30);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 30:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'p')
                ADVANCE(31);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 31:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'o')
                ADVANCE(32);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 32:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(33);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 33:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 't')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_import);
        case 35:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 36:
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
                ADVANCE(37);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 37:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'k')
                ADVANCE(38);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 38:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'a')
                ADVANCE(39);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 39:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'g')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'e')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_package);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            if (lookahead == 'r')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(21);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            ACCEPT_TOKEN(anon_sym_var);
        case 45:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(45);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'p')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == 'a')
                ADVANCE(47);
            LEX_ERROR();
        case 47:
            if (lookahead == 'c')
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            if (lookahead == 'k')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (lookahead == 'a')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            if (lookahead == 'g')
                ADVANCE(51);
            LEX_ERROR();
        case 51:
            if (lookahead == 'e')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            ACCEPT_TOKEN(anon_sym_package);
        case 53:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(53);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 54:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(54);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(55);
            if (lookahead == 'i')
                ADVANCE(60);
            if (lookahead == 'v')
                ADVANCE(66);
            LEX_ERROR();
        case 55:
            if (lookahead == 'o')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            if (lookahead == 'n')
                ADVANCE(57);
            LEX_ERROR();
        case 57:
            if (lookahead == 's')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            if (lookahead == 't')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            ACCEPT_TOKEN(anon_sym_const);
        case 60:
            if (lookahead == 'm')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (lookahead == 'p')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            if (lookahead == 'o')
                ADVANCE(63);
            LEX_ERROR();
        case 63:
            if (lookahead == 'r')
                ADVANCE(64);
            LEX_ERROR();
        case 64:
            if (lookahead == 't')
                ADVANCE(65);
            LEX_ERROR();
        case 65:
            ACCEPT_TOKEN(anon_sym_import);
        case 66:
            if (lookahead == 'a')
                ADVANCE(67);
            LEX_ERROR();
        case 67:
            if (lookahead == 'r')
                ADVANCE(68);
            LEX_ERROR();
        case 68:
            ACCEPT_TOKEN(anon_sym_var);
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
            LEX_ERROR();
        case 70:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(55);
            if (lookahead == 'v')
                ADVANCE(66);
            LEX_ERROR();
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
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
        case 72:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
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
        case 73:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(73);
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
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
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
        case 75:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(75);
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
        case 76:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 77:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 78:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(78);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 79:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(79);
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
        case 80:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(80);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 81:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(81);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            if (lookahead == 'c')
                ADVANCE(55);
            if (lookahead == 'v')
                ADVANCE(66);
            LEX_ERROR();
        case 82:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(82);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(55);
            if (lookahead == 'v')
                ADVANCE(66);
            LEX_ERROR();
        case 83:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(83);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 84:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(84);
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
        case 85:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(85);
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
    [0] = 45,
    [1] = 53,
    [2] = 54,
    [3] = 69,
    [4] = 54,
    [5] = 54,
    [6] = 70,
    [7] = 70,
    [8] = 70,
    [9] = 70,
    [10] = 53,
    [11] = 71,
    [12] = 72,
    [13] = 72,
    [14] = 70,
    [15] = 73,
    [16] = 74,
    [17] = 75,
    [18] = 73,
    [19] = 69,
    [20] = 75,
    [21] = 73,
    [22] = 76,
    [23] = 73,
    [24] = 77,
    [25] = 70,
    [26] = 70,
    [27] = 78,
    [28] = 79,
    [29] = 78,
    [30] = 76,
    [31] = 80,
    [32] = 80,
    [33] = 80,
    [34] = 80,
    [35] = 80,
    [36] = 76,
    [37] = 79,
    [38] = 80,
    [39] = 76,
    [40] = 79,
    [41] = 76,
    [42] = 74,
    [43] = 77,
    [44] = 81,
    [45] = 79,
    [46] = 81,
    [47] = 70,
    [48] = 82,
    [49] = 82,
    [50] = 82,
    [51] = 82,
    [52] = 82,
    [53] = 70,
    [54] = 79,
    [55] = 82,
    [56] = 70,
    [57] = 79,
    [58] = 70,
    [59] = 70,
    [60] = 73,
    [61] = 74,
    [62] = 76,
    [63] = 73,
    [64] = 77,
    [65] = 70,
    [66] = 70,
    [67] = 83,
    [68] = 79,
    [69] = 83,
    [70] = 76,
    [71] = 79,
    [72] = 76,
    [73] = 74,
    [74] = 77,
    [75] = 83,
    [76] = 79,
    [77] = 70,
    [78] = 79,
    [79] = 70,
    [80] = 54,
    [81] = 54,
    [82] = 84,
    [83] = 85,
    [84] = 54,
    [85] = 54,
    [86] = 76,
    [87] = 76,
    [88] = 77,
    [89] = 54,
    [90] = 85,
    [91] = 76,
    [92] = 76,
    [93] = 54,
    [94] = 84,
    [95] = 77,
    [96] = 53,
    [97] = 53,
    [98] = 70,
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
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 32,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 34,
        [sym__top_level_declaration] = 34,
        [sym__declaration] = 34,
        [sym_const_declaration] = 34,
        [sym_var_declaration] = 34,
        [sym_function_declaration] = 34,
        [sym_method_declaration] = 34,
        [sym_type_declaration] = 34,
        [aux_sym_source_file_repeat1] = 34,
        [aux_sym_source_file_repeat2] = 34,
        [ts_builtin_sym_end] = 34,
        [anon_sym_import] = 34,
        [anon_sym_const] = 34,
        [anon_sym_var] = 34,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 36,
        [sym__declaration] = 36,
        [sym_const_declaration] = 36,
        [sym_var_declaration] = 36,
        [sym_function_declaration] = 36,
        [sym_method_declaration] = 36,
        [sym_type_declaration] = 36,
        [aux_sym_source_file_repeat1] = 38,
        [aux_sym_source_file_repeat2] = 36,
        [ts_builtin_sym_end] = 36,
        [anon_sym_import] = 26,
        [anon_sym_const] = 36,
        [anon_sym_var] = 36,
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
        [aux_sym_source_file_repeat2] = 40,
        [ts_builtin_sym_end] = 42,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [sym_comment] = 8,
    },
    [7] = {
        [sym__top_level_declaration] = 44,
        [sym__declaration] = 44,
        [sym_const_declaration] = 44,
        [sym_var_declaration] = 44,
        [sym_function_declaration] = 44,
        [sym_method_declaration] = 44,
        [sym_type_declaration] = 44,
        [aux_sym_source_file_repeat2] = 44,
        [ts_builtin_sym_end] = 44,
        [anon_sym_const] = 44,
        [anon_sym_var] = 44,
        [sym_comment] = 8,
    },
    [8] = {
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
        [aux_sym_source_file_repeat2] = 48,
        [ts_builtin_sym_end] = 50,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 50,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 52,
        [sym__string_literal] = 54,
        [anon_sym_LPAREN] = 56,
        [anon_sym_DOT] = 58,
        [sym_identifier] = 58,
        [sym_raw_string_literal] = 60,
        [sym_interpreted_string_literal] = 60,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 62,
        [sym_identifier_list] = 64,
        [anon_sym_LPAREN] = 66,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [13] = {
        [sym_var_spec] = 70,
        [sym_identifier_list] = 72,
        [anon_sym_LPAREN] = 74,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [14] = {
        [sym__top_level_declaration] = 76,
        [sym__declaration] = 76,
        [sym_const_declaration] = 76,
        [sym_var_declaration] = 76,
        [sym_function_declaration] = 76,
        [sym_method_declaration] = 76,
        [sym_type_declaration] = 76,
        [aux_sym_source_file_repeat2] = 76,
        [ts_builtin_sym_end] = 76,
        [anon_sym_const] = 76,
        [anon_sym_var] = 76,
        [sym_comment] = 8,
    },
    [15] = {
        [sym__type] = 78,
        [anon_sym_EQ] = 80,
        [sym_identifier] = 82,
        [sym_comment] = 8,
    },
    [16] = {
        [sym_var_spec] = 84,
        [sym_identifier_list] = 86,
        [aux_sym_var_declaration_repeat1] = 88,
        [anon_sym_RPAREN] = 90,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [17] = {
        [sym__type] = 92,
        [aux_sym_identifier_list_repeat1] = 94,
        [anon_sym_EQ] = 92,
        [anon_sym_COMMA] = 96,
        [sym_identifier] = 92,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 98,
        [anon_sym_EQ] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 8,
    },
    [19] = {
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__type] = 102,
        [aux_sym_identifier_list_repeat1] = 104,
        [anon_sym_EQ] = 102,
        [anon_sym_COMMA] = 96,
        [sym_identifier] = 102,
        [sym_comment] = 8,
    },
    [21] = {
        [sym__type] = 106,
        [anon_sym_EQ] = 106,
        [sym_identifier] = 106,
        [sym_comment] = 8,
    },
    [22] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 108,
        [sym_comment] = 8,
    },
    [23] = {
        [sym__type] = 110,
        [anon_sym_EQ] = 112,
        [sym_identifier] = 114,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_RPAREN] = 116,
        [sym_comment] = 8,
    },
    [25] = {
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
        [anon_sym_var] = 118,
        [sym_comment] = 8,
    },
    [26] = {
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
        [sym_comment] = 8,
    },
    [27] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 122,
        [anon_sym_EQ] = 124,
        [sym_comment] = 8,
    },
    [28] = {
        [sym_expression_list] = 126,
        [sym__expression] = 128,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 8,
    },
    [29] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 138,
        [anon_sym_EQ] = 138,
        [sym_comment] = 8,
    },
    [30] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 140,
        [sym_comment] = 8,
    },
    [31] = {
        [aux_sym_expression_list_repeat1] = 142,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 144,
        [anon_sym_COMMA] = 146,
        [sym_comment] = 8,
    },
    [32] = {
        [aux_sym_expression_list_repeat1] = 148,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 148,
        [anon_sym_COMMA] = 148,
        [sym_comment] = 8,
    },
    [33] = {
        [aux_sym_expression_list_repeat1] = 150,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 150,
        [anon_sym_COMMA] = 150,
        [sym_comment] = 8,
    },
    [34] = {
        [aux_sym_expression_list_repeat1] = 152,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 152,
        [anon_sym_COMMA] = 152,
        [sym_comment] = 8,
    },
    [35] = {
        [aux_sym_expression_list_repeat1] = 154,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 154,
        [anon_sym_COMMA] = 154,
        [sym_comment] = 8,
    },
    [36] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 156,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__expression] = 158,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 8,
    },
    [38] = {
        [aux_sym_expression_list_repeat1] = 160,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 162,
        [anon_sym_COMMA] = 146,
        [sym_comment] = 8,
    },
    [39] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 164,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_expression_list] = 166,
        [sym__expression] = 128,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 8,
    },
    [41] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 168,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_var_spec] = 84,
        [sym_identifier_list] = 86,
        [aux_sym_var_declaration_repeat1] = 170,
        [anon_sym_RPAREN] = 172,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_RPAREN] = 174,
        [sym_comment] = 8,
    },
    [44] = {
        [sym__top_level_declaration] = 122,
        [sym__declaration] = 122,
        [sym_const_declaration] = 122,
        [sym_var_declaration] = 122,
        [sym_function_declaration] = 122,
        [sym_method_declaration] = 122,
        [sym_type_declaration] = 122,
        [aux_sym_source_file_repeat2] = 122,
        [ts_builtin_sym_end] = 122,
        [anon_sym_const] = 122,
        [anon_sym_EQ] = 176,
        [anon_sym_var] = 122,
        [sym_comment] = 8,
    },
    [45] = {
        [sym_expression_list] = 178,
        [sym__expression] = 180,
        [sym_unary_expression] = 182,
        [sym_binary_expression] = 182,
        [sym__primary_expression] = 182,
        [sym__string_literal] = 184,
        [sym_int_literal] = 184,
        [sym_float_literal] = 184,
        [sym_identifier] = 184,
        [sym_raw_string_literal] = 186,
        [sym_interpreted_string_literal] = 186,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 8,
    },
    [46] = {
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
        [anon_sym_EQ] = 138,
        [anon_sym_var] = 138,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__top_level_declaration] = 140,
        [sym__declaration] = 140,
        [sym_const_declaration] = 140,
        [sym_var_declaration] = 140,
        [sym_function_declaration] = 140,
        [sym_method_declaration] = 140,
        [sym_type_declaration] = 140,
        [aux_sym_source_file_repeat2] = 140,
        [ts_builtin_sym_end] = 140,
        [anon_sym_const] = 140,
        [anon_sym_var] = 140,
        [sym_comment] = 8,
    },
    [48] = {
        [sym__top_level_declaration] = 144,
        [sym__declaration] = 144,
        [sym_const_declaration] = 144,
        [sym_var_declaration] = 144,
        [sym_function_declaration] = 144,
        [sym_method_declaration] = 144,
        [sym_type_declaration] = 144,
        [aux_sym_source_file_repeat2] = 144,
        [aux_sym_expression_list_repeat1] = 190,
        [ts_builtin_sym_end] = 144,
        [anon_sym_const] = 144,
        [anon_sym_var] = 144,
        [anon_sym_COMMA] = 192,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__top_level_declaration] = 148,
        [sym__declaration] = 148,
        [sym_const_declaration] = 148,
        [sym_var_declaration] = 148,
        [sym_function_declaration] = 148,
        [sym_method_declaration] = 148,
        [sym_type_declaration] = 148,
        [aux_sym_source_file_repeat2] = 148,
        [aux_sym_expression_list_repeat1] = 148,
        [ts_builtin_sym_end] = 148,
        [anon_sym_const] = 148,
        [anon_sym_var] = 148,
        [anon_sym_COMMA] = 148,
        [sym_comment] = 8,
    },
    [50] = {
        [sym__top_level_declaration] = 150,
        [sym__declaration] = 150,
        [sym_const_declaration] = 150,
        [sym_var_declaration] = 150,
        [sym_function_declaration] = 150,
        [sym_method_declaration] = 150,
        [sym_type_declaration] = 150,
        [aux_sym_source_file_repeat2] = 150,
        [aux_sym_expression_list_repeat1] = 150,
        [ts_builtin_sym_end] = 150,
        [anon_sym_const] = 150,
        [anon_sym_var] = 150,
        [anon_sym_COMMA] = 150,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__top_level_declaration] = 152,
        [sym__declaration] = 152,
        [sym_const_declaration] = 152,
        [sym_var_declaration] = 152,
        [sym_function_declaration] = 152,
        [sym_method_declaration] = 152,
        [sym_type_declaration] = 152,
        [aux_sym_source_file_repeat2] = 152,
        [aux_sym_expression_list_repeat1] = 152,
        [ts_builtin_sym_end] = 152,
        [anon_sym_const] = 152,
        [anon_sym_var] = 152,
        [anon_sym_COMMA] = 152,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__top_level_declaration] = 154,
        [sym__declaration] = 154,
        [sym_const_declaration] = 154,
        [sym_var_declaration] = 154,
        [sym_function_declaration] = 154,
        [sym_method_declaration] = 154,
        [sym_type_declaration] = 154,
        [aux_sym_source_file_repeat2] = 154,
        [aux_sym_expression_list_repeat1] = 154,
        [ts_builtin_sym_end] = 154,
        [anon_sym_const] = 154,
        [anon_sym_var] = 154,
        [anon_sym_COMMA] = 154,
        [sym_comment] = 8,
    },
    [53] = {
        [sym__top_level_declaration] = 156,
        [sym__declaration] = 156,
        [sym_const_declaration] = 156,
        [sym_var_declaration] = 156,
        [sym_function_declaration] = 156,
        [sym_method_declaration] = 156,
        [sym_type_declaration] = 156,
        [aux_sym_source_file_repeat2] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_const] = 156,
        [anon_sym_var] = 156,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__expression] = 194,
        [sym_unary_expression] = 182,
        [sym_binary_expression] = 182,
        [sym__primary_expression] = 182,
        [sym__string_literal] = 184,
        [sym_int_literal] = 184,
        [sym_float_literal] = 184,
        [sym_identifier] = 184,
        [sym_raw_string_literal] = 186,
        [sym_interpreted_string_literal] = 186,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 8,
    },
    [55] = {
        [sym__top_level_declaration] = 162,
        [sym__declaration] = 162,
        [sym_const_declaration] = 162,
        [sym_var_declaration] = 162,
        [sym_function_declaration] = 162,
        [sym_method_declaration] = 162,
        [sym_type_declaration] = 162,
        [aux_sym_source_file_repeat2] = 162,
        [aux_sym_expression_list_repeat1] = 196,
        [ts_builtin_sym_end] = 162,
        [anon_sym_const] = 162,
        [anon_sym_var] = 162,
        [anon_sym_COMMA] = 192,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__top_level_declaration] = 164,
        [sym__declaration] = 164,
        [sym_const_declaration] = 164,
        [sym_var_declaration] = 164,
        [sym_function_declaration] = 164,
        [sym_method_declaration] = 164,
        [sym_type_declaration] = 164,
        [aux_sym_source_file_repeat2] = 164,
        [ts_builtin_sym_end] = 164,
        [anon_sym_const] = 164,
        [anon_sym_var] = 164,
        [sym_comment] = 8,
    },
    [57] = {
        [sym_expression_list] = 198,
        [sym__expression] = 180,
        [sym_unary_expression] = 182,
        [sym_binary_expression] = 182,
        [sym__primary_expression] = 182,
        [sym__string_literal] = 184,
        [sym_int_literal] = 184,
        [sym_float_literal] = 184,
        [sym_identifier] = 184,
        [sym_raw_string_literal] = 186,
        [sym_interpreted_string_literal] = 186,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__top_level_declaration] = 168,
        [sym__declaration] = 168,
        [sym_const_declaration] = 168,
        [sym_var_declaration] = 168,
        [sym_function_declaration] = 168,
        [sym_method_declaration] = 168,
        [sym_type_declaration] = 168,
        [aux_sym_source_file_repeat2] = 168,
        [ts_builtin_sym_end] = 168,
        [anon_sym_const] = 168,
        [anon_sym_var] = 168,
        [sym_comment] = 8,
    },
    [59] = {
        [sym__top_level_declaration] = 200,
        [sym__declaration] = 200,
        [sym_const_declaration] = 200,
        [sym_var_declaration] = 200,
        [sym_function_declaration] = 200,
        [sym_method_declaration] = 200,
        [sym_type_declaration] = 200,
        [aux_sym_source_file_repeat2] = 200,
        [ts_builtin_sym_end] = 200,
        [anon_sym_const] = 200,
        [anon_sym_var] = 200,
        [sym_comment] = 8,
    },
    [60] = {
        [sym__type] = 202,
        [anon_sym_EQ] = 204,
        [sym_identifier] = 206,
        [sym_comment] = 8,
    },
    [61] = {
        [sym_const_spec] = 208,
        [sym_identifier_list] = 210,
        [aux_sym_const_declaration_repeat1] = 212,
        [anon_sym_RPAREN] = 214,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [62] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 216,
        [sym_comment] = 8,
    },
    [63] = {
        [sym__type] = 218,
        [anon_sym_EQ] = 220,
        [sym_identifier] = 206,
        [sym_comment] = 8,
    },
    [64] = {
        [anon_sym_RPAREN] = 222,
        [sym_comment] = 8,
    },
    [65] = {
        [sym__top_level_declaration] = 224,
        [sym__declaration] = 224,
        [sym_const_declaration] = 224,
        [sym_var_declaration] = 224,
        [sym_function_declaration] = 224,
        [sym_method_declaration] = 224,
        [sym_type_declaration] = 224,
        [aux_sym_source_file_repeat2] = 224,
        [ts_builtin_sym_end] = 224,
        [anon_sym_const] = 224,
        [anon_sym_var] = 224,
        [sym_comment] = 8,
    },
    [66] = {
        [sym__top_level_declaration] = 226,
        [sym__declaration] = 226,
        [sym_const_declaration] = 226,
        [sym_var_declaration] = 226,
        [sym_function_declaration] = 226,
        [sym_method_declaration] = 226,
        [sym_type_declaration] = 226,
        [aux_sym_source_file_repeat2] = 226,
        [ts_builtin_sym_end] = 226,
        [anon_sym_const] = 226,
        [anon_sym_var] = 226,
        [sym_comment] = 8,
    },
    [67] = {
        [anon_sym_EQ] = 228,
        [sym_comment] = 8,
    },
    [68] = {
        [sym_expression_list] = 230,
        [sym__expression] = 128,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_EQ] = 138,
        [sym_comment] = 8,
    },
    [70] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 232,
        [sym_comment] = 8,
    },
    [71] = {
        [sym_expression_list] = 234,
        [sym__expression] = 128,
        [sym_unary_expression] = 130,
        [sym_binary_expression] = 130,
        [sym__primary_expression] = 130,
        [sym__string_literal] = 132,
        [sym_int_literal] = 132,
        [sym_float_literal] = 132,
        [sym_identifier] = 132,
        [sym_raw_string_literal] = 134,
        [sym_interpreted_string_literal] = 134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 136,
        [sym_comment] = 8,
    },
    [72] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 236,
        [sym_comment] = 8,
    },
    [73] = {
        [sym_const_spec] = 208,
        [sym_identifier_list] = 210,
        [aux_sym_const_declaration_repeat1] = 238,
        [anon_sym_RPAREN] = 240,
        [sym_identifier] = 68,
        [sym_comment] = 8,
    },
    [74] = {
        [anon_sym_RPAREN] = 242,
        [sym_comment] = 8,
    },
    [75] = {
        [anon_sym_EQ] = 244,
        [sym_comment] = 8,
    },
    [76] = {
        [sym_expression_list] = 246,
        [sym__expression] = 180,
        [sym_unary_expression] = 182,
        [sym_binary_expression] = 182,
        [sym__primary_expression] = 182,
        [sym__string_literal] = 184,
        [sym_int_literal] = 184,
        [sym_float_literal] = 184,
        [sym_identifier] = 184,
        [sym_raw_string_literal] = 186,
        [sym_interpreted_string_literal] = 186,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 8,
    },
    [77] = {
        [sym__top_level_declaration] = 232,
        [sym__declaration] = 232,
        [sym_const_declaration] = 232,
        [sym_var_declaration] = 232,
        [sym_function_declaration] = 232,
        [sym_method_declaration] = 232,
        [sym_type_declaration] = 232,
        [aux_sym_source_file_repeat2] = 232,
        [ts_builtin_sym_end] = 232,
        [anon_sym_const] = 232,
        [anon_sym_var] = 232,
        [sym_comment] = 8,
    },
    [78] = {
        [sym_expression_list] = 248,
        [sym__expression] = 180,
        [sym_unary_expression] = 182,
        [sym_binary_expression] = 182,
        [sym__primary_expression] = 182,
        [sym__string_literal] = 184,
        [sym_int_literal] = 184,
        [sym_float_literal] = 184,
        [sym_identifier] = 184,
        [sym_raw_string_literal] = 186,
        [sym_interpreted_string_literal] = 186,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 188,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 188,
        [sym_comment] = 8,
    },
    [79] = {
        [sym__top_level_declaration] = 236,
        [sym__declaration] = 236,
        [sym_const_declaration] = 236,
        [sym_var_declaration] = 236,
        [sym_function_declaration] = 236,
        [sym_method_declaration] = 236,
        [sym_type_declaration] = 236,
        [aux_sym_source_file_repeat2] = 236,
        [ts_builtin_sym_end] = 236,
        [anon_sym_const] = 236,
        [anon_sym_var] = 236,
        [sym_comment] = 8,
    },
    [80] = {
        [sym_import_declaration] = 250,
        [sym__top_level_declaration] = 250,
        [sym__declaration] = 250,
        [sym_const_declaration] = 250,
        [sym_var_declaration] = 250,
        [sym_function_declaration] = 250,
        [sym_method_declaration] = 250,
        [sym_type_declaration] = 250,
        [aux_sym_source_file_repeat1] = 250,
        [aux_sym_source_file_repeat2] = 250,
        [ts_builtin_sym_end] = 250,
        [anon_sym_import] = 250,
        [anon_sym_const] = 250,
        [anon_sym_var] = 250,
        [sym_comment] = 8,
    },
    [81] = {
        [sym_import_declaration] = 252,
        [sym__top_level_declaration] = 252,
        [sym__declaration] = 252,
        [sym_const_declaration] = 252,
        [sym_var_declaration] = 252,
        [sym_function_declaration] = 252,
        [sym_method_declaration] = 252,
        [sym_type_declaration] = 252,
        [aux_sym_source_file_repeat1] = 252,
        [aux_sym_source_file_repeat2] = 252,
        [ts_builtin_sym_end] = 252,
        [anon_sym_import] = 252,
        [anon_sym_const] = 252,
        [anon_sym_var] = 252,
        [sym_comment] = 8,
    },
    [82] = {
        [sym_import_spec] = 254,
        [sym__string_literal] = 256,
        [aux_sym_import_declaration_repeat1] = 258,
        [anon_sym_RPAREN] = 260,
        [anon_sym_DOT] = 262,
        [sym_identifier] = 262,
        [sym_raw_string_literal] = 264,
        [sym_interpreted_string_literal] = 264,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__string_literal] = 266,
        [sym_raw_string_literal] = 60,
        [sym_interpreted_string_literal] = 60,
        [sym_comment] = 8,
    },
    [84] = {
        [sym_import_declaration] = 152,
        [sym__top_level_declaration] = 152,
        [sym__declaration] = 152,
        [sym_const_declaration] = 152,
        [sym_var_declaration] = 152,
        [sym_function_declaration] = 152,
        [sym_method_declaration] = 152,
        [sym_type_declaration] = 152,
        [aux_sym_source_file_repeat1] = 152,
        [aux_sym_source_file_repeat2] = 152,
        [ts_builtin_sym_end] = 152,
        [anon_sym_import] = 152,
        [anon_sym_const] = 152,
        [anon_sym_var] = 152,
        [sym_comment] = 8,
    },
    [85] = {
        [sym_import_declaration] = 268,
        [sym__top_level_declaration] = 268,
        [sym__declaration] = 268,
        [sym_const_declaration] = 268,
        [sym_var_declaration] = 268,
        [sym_function_declaration] = 268,
        [sym_method_declaration] = 268,
        [sym_type_declaration] = 268,
        [aux_sym_source_file_repeat1] = 268,
        [aux_sym_source_file_repeat2] = 268,
        [ts_builtin_sym_end] = 268,
        [anon_sym_import] = 268,
        [anon_sym_const] = 268,
        [anon_sym_var] = 268,
        [sym_comment] = 8,
    },
    [86] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 270,
        [sym_comment] = 8,
    },
    [87] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 252,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RPAREN] = 272,
        [sym_comment] = 8,
    },
    [89] = {
        [sym_import_declaration] = 274,
        [sym__top_level_declaration] = 274,
        [sym__declaration] = 274,
        [sym_const_declaration] = 274,
        [sym_var_declaration] = 274,
        [sym_function_declaration] = 274,
        [sym_method_declaration] = 274,
        [sym_type_declaration] = 274,
        [aux_sym_source_file_repeat1] = 274,
        [aux_sym_source_file_repeat2] = 274,
        [ts_builtin_sym_end] = 274,
        [anon_sym_import] = 274,
        [anon_sym_const] = 274,
        [anon_sym_var] = 274,
        [sym_comment] = 8,
    },
    [90] = {
        [sym__string_literal] = 276,
        [sym_raw_string_literal] = 264,
        [sym_interpreted_string_literal] = 264,
        [sym_comment] = 8,
    },
    [91] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 152,
        [sym_comment] = 8,
    },
    [92] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 268,
        [sym_comment] = 8,
    },
    [93] = {
        [sym_import_declaration] = 278,
        [sym__top_level_declaration] = 278,
        [sym__declaration] = 278,
        [sym_const_declaration] = 278,
        [sym_var_declaration] = 278,
        [sym_function_declaration] = 278,
        [sym_method_declaration] = 278,
        [sym_type_declaration] = 278,
        [aux_sym_source_file_repeat1] = 278,
        [aux_sym_source_file_repeat2] = 278,
        [ts_builtin_sym_end] = 278,
        [anon_sym_import] = 278,
        [anon_sym_const] = 278,
        [anon_sym_var] = 278,
        [sym_comment] = 8,
    },
    [94] = {
        [sym_import_spec] = 254,
        [sym__string_literal] = 256,
        [aux_sym_import_declaration_repeat1] = 280,
        [anon_sym_RPAREN] = 282,
        [anon_sym_DOT] = 262,
        [sym_identifier] = 262,
        [sym_raw_string_literal] = 264,
        [sym_interpreted_string_literal] = 264,
        [sym_comment] = 8,
    },
    [95] = {
        [anon_sym_RPAREN] = 284,
        [sym_comment] = 8,
    },
    [96] = {
        [ts_builtin_sym_end] = 286,
        [sym_comment] = 8,
    },
    [97] = {
        [ts_builtin_sym_end] = 288,
        [sym_comment] = 8,
    },
    [98] = {
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
    [32] = {.count = 1}, SHIFT(4, 0),
    [34] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [36] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [38] = {.count = 1}, SHIFT(98, 0),
    [40] = {.count = 1}, SHIFT(97, 0),
    [42] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [44] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [46] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [48] = {.count = 1}, SHIFT(96, 0),
    [50] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [52] = {.count = 1}, SHIFT(80, 0),
    [54] = {.count = 1}, SHIFT(81, 0),
    [56] = {.count = 1}, SHIFT(82, 0),
    [58] = {.count = 1}, SHIFT(83, 0),
    [60] = {.count = 1}, SHIFT(84, 0),
    [62] = {.count = 1}, SHIFT(59, 0),
    [64] = {.count = 1}, SHIFT(60, 0),
    [66] = {.count = 1}, SHIFT(61, 0),
    [68] = {.count = 1}, SHIFT(17, 0),
    [70] = {.count = 1}, SHIFT(14, 0),
    [72] = {.count = 1}, SHIFT(15, 0),
    [74] = {.count = 1}, SHIFT(16, 0),
    [76] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [78] = {.count = 1}, SHIFT(44, 0),
    [80] = {.count = 1}, SHIFT(45, 0),
    [82] = {.count = 1}, SHIFT(46, 0),
    [84] = {.count = 1}, SHIFT(22, 0),
    [86] = {.count = 1}, SHIFT(23, 0),
    [88] = {.count = 1}, SHIFT(24, 0),
    [90] = {.count = 1}, SHIFT(25, 0),
    [92] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [94] = {.count = 1}, SHIFT(18, 0),
    [96] = {.count = 1}, SHIFT(19, 0),
    [98] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [104] = {.count = 1}, SHIFT(21, 0),
    [106] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [108] = {.count = 1}, SHIFT(42, 0),
    [110] = {.count = 1}, SHIFT(27, 0),
    [112] = {.count = 1}, SHIFT(28, 0),
    [114] = {.count = 1}, SHIFT(29, 0),
    [116] = {.count = 1}, SHIFT(26, 0),
    [118] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [120] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [122] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [124] = {.count = 1}, SHIFT(40, 0),
    [126] = {.count = 1}, SHIFT(30, 0),
    [128] = {.count = 1}, SHIFT(31, 0),
    [130] = {.count = 1}, SHIFT(32, 0),
    [132] = {.count = 1}, SHIFT(33, 0),
    [134] = {.count = 1}, SHIFT(34, 0),
    [136] = {.count = 1}, SHIFT(35, 0),
    [138] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [140] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [142] = {.count = 1}, SHIFT(36, 0),
    [144] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [146] = {.count = 1}, SHIFT(37, 0),
    [148] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [150] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [152] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [154] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [156] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [158] = {.count = 1}, SHIFT(38, 0),
    [160] = {.count = 1}, SHIFT(39, 0),
    [162] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [164] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [166] = {.count = 1}, SHIFT(41, 0),
    [168] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [170] = {.count = 1}, SHIFT(43, 0),
    [172] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [174] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [176] = {.count = 1}, SHIFT(57, 0),
    [178] = {.count = 1}, SHIFT(47, 0),
    [180] = {.count = 1}, SHIFT(48, 0),
    [182] = {.count = 1}, SHIFT(49, 0),
    [184] = {.count = 1}, SHIFT(50, 0),
    [186] = {.count = 1}, SHIFT(51, 0),
    [188] = {.count = 1}, SHIFT(52, 0),
    [190] = {.count = 1}, SHIFT(53, 0),
    [192] = {.count = 1}, SHIFT(54, 0),
    [194] = {.count = 1}, SHIFT(55, 0),
    [196] = {.count = 1}, SHIFT(56, 0),
    [198] = {.count = 1}, SHIFT(58, 0),
    [200] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [202] = {.count = 1}, SHIFT(75, 0),
    [204] = {.count = 1}, SHIFT(76, 0),
    [206] = {.count = 1}, SHIFT(69, 0),
    [208] = {.count = 1}, SHIFT(62, 0),
    [210] = {.count = 1}, SHIFT(63, 0),
    [212] = {.count = 1}, SHIFT(64, 0),
    [214] = {.count = 1}, SHIFT(65, 0),
    [216] = {.count = 1}, SHIFT(73, 0),
    [218] = {.count = 1}, SHIFT(67, 0),
    [220] = {.count = 1}, SHIFT(68, 0),
    [222] = {.count = 1}, SHIFT(66, 0),
    [224] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [226] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [228] = {.count = 1}, SHIFT(71, 0),
    [230] = {.count = 1}, SHIFT(70, 0),
    [232] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [234] = {.count = 1}, SHIFT(72, 0),
    [236] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [238] = {.count = 1}, SHIFT(74, 0),
    [240] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [242] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [244] = {.count = 1}, SHIFT(78, 0),
    [246] = {.count = 1}, SHIFT(77, 0),
    [248] = {.count = 1}, SHIFT(79, 0),
    [250] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [252] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [254] = {.count = 1}, SHIFT(86, 0),
    [256] = {.count = 1}, SHIFT(87, 0),
    [258] = {.count = 1}, SHIFT(88, 0),
    [260] = {.count = 1}, SHIFT(89, 0),
    [262] = {.count = 1}, SHIFT(90, 0),
    [264] = {.count = 1}, SHIFT(91, 0),
    [266] = {.count = 1}, SHIFT(85, 0),
    [268] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [270] = {.count = 1}, SHIFT(94, 0),
    [272] = {.count = 1}, SHIFT(93, 0),
    [274] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [276] = {.count = 1}, SHIFT(92, 0),
    [278] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [280] = {.count = 1}, SHIFT(95, 0),
    [282] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [284] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [286] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [288] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [290] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
