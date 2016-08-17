#include "tree_sitter/parser.h"

#define STATE_COUNT 76
#define SYMBOL_COUNT 46

enum {
    sym_source_file = ts_builtin_sym_start,
    sym_package_clause,
    sym_import_declaration,
    sym_import_spec,
    sym__top_level_declaration,
    sym__declaration,
    sym_const_declaration,
    sym_const_spec,
    sym_function_declaration,
    sym_method_declaration,
    sym_type_declaration,
    sym_var_declaration,
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
    [sym_function_declaration] = "function_declaration",
    [sym_method_declaration] = "method_declaration",
    [sym_type_declaration] = "type_declaration",
    [sym_var_declaration] = "var_declaration",
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
    [sym_function_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_type_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
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
                ('q' <= lookahead && lookahead <= 'z'))
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
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(42);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'p')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            if (lookahead == 'a')
                ADVANCE(44);
            LEX_ERROR();
        case 44:
            if (lookahead == 'c')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == 'k')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == 'a')
                ADVANCE(47);
            LEX_ERROR();
        case 47:
            if (lookahead == 'g')
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            if (lookahead == 'e')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            ACCEPT_TOKEN(anon_sym_package);
        case 50:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(50);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 51:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(51);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(52);
            if (lookahead == 'i')
                ADVANCE(57);
            LEX_ERROR();
        case 52:
            if (lookahead == 'o')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 'n')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 's')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            if (lookahead == 't')
                ADVANCE(56);
            LEX_ERROR();
        case 56:
            ACCEPT_TOKEN(anon_sym_const);
        case 57:
            if (lookahead == 'm')
                ADVANCE(58);
            LEX_ERROR();
        case 58:
            if (lookahead == 'p')
                ADVANCE(59);
            LEX_ERROR();
        case 59:
            if (lookahead == 'o')
                ADVANCE(60);
            LEX_ERROR();
        case 60:
            if (lookahead == 'r')
                ADVANCE(61);
            LEX_ERROR();
        case 61:
            if (lookahead == 't')
                ADVANCE(62);
            LEX_ERROR();
        case 62:
            ACCEPT_TOKEN(anon_sym_import);
        case 63:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(63);
            if (lookahead == '/')
                ADVANCE(12);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(21);
            if (lookahead == '_')
                ADVANCE(21);
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
                ADVANCE(52);
            LEX_ERROR();
        case 65:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(65);
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
        case 66:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(66);
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
        case 67:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(67);
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
        case 68:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(68);
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
        case 69:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(69);
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
        case 70:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(70);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 71:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(71);
            if (lookahead == ')')
                ADVANCE(9);
            if (lookahead == '/')
                ADVANCE(12);
            LEX_ERROR();
        case 72:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(72);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(20);
            LEX_ERROR();
        case 73:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(73);
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
        case 74:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(74);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == ';')
                ADVANCE(19);
            LEX_ERROR();
        case 75:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(75);
            if (lookahead == ',')
                ADVANCE(10);
            if (lookahead == '/')
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(52);
            LEX_ERROR();
        case 76:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(76);
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
        case 77:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(77);
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
    [0] = 42,
    [1] = 50,
    [2] = 51,
    [3] = 63,
    [4] = 51,
    [5] = 51,
    [6] = 64,
    [7] = 64,
    [8] = 64,
    [9] = 64,
    [10] = 50,
    [11] = 65,
    [12] = 66,
    [13] = 64,
    [14] = 67,
    [15] = 68,
    [16] = 69,
    [17] = 67,
    [18] = 63,
    [19] = 69,
    [20] = 67,
    [21] = 70,
    [22] = 67,
    [23] = 71,
    [24] = 64,
    [25] = 64,
    [26] = 72,
    [27] = 73,
    [28] = 72,
    [29] = 70,
    [30] = 74,
    [31] = 74,
    [32] = 74,
    [33] = 74,
    [34] = 74,
    [35] = 70,
    [36] = 73,
    [37] = 74,
    [38] = 70,
    [39] = 73,
    [40] = 70,
    [41] = 68,
    [42] = 71,
    [43] = 72,
    [44] = 73,
    [45] = 64,
    [46] = 75,
    [47] = 75,
    [48] = 75,
    [49] = 75,
    [50] = 75,
    [51] = 64,
    [52] = 73,
    [53] = 75,
    [54] = 64,
    [55] = 73,
    [56] = 64,
    [57] = 51,
    [58] = 51,
    [59] = 76,
    [60] = 77,
    [61] = 51,
    [62] = 51,
    [63] = 70,
    [64] = 70,
    [65] = 71,
    [66] = 51,
    [67] = 77,
    [68] = 70,
    [69] = 70,
    [70] = 51,
    [71] = 76,
    [72] = 71,
    [73] = 50,
    [74] = 50,
    [75] = 64,
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
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [sym_var_declaration] = 18,
        [aux_sym_source_file_repeat1] = 20,
        [aux_sym_source_file_repeat2] = 22,
        [ts_builtin_sym_end] = 24,
        [anon_sym_import] = 26,
        [anon_sym_const] = 28,
        [sym_comment] = 8,
    },
    [3] = {
        [sym_identifier] = 30,
        [sym_comment] = 8,
    },
    [4] = {
        [sym_import_declaration] = 32,
        [sym__top_level_declaration] = 32,
        [sym__declaration] = 32,
        [sym_const_declaration] = 32,
        [sym_function_declaration] = 32,
        [sym_method_declaration] = 32,
        [sym_type_declaration] = 32,
        [sym_var_declaration] = 32,
        [aux_sym_source_file_repeat1] = 32,
        [aux_sym_source_file_repeat2] = 32,
        [ts_builtin_sym_end] = 32,
        [anon_sym_import] = 32,
        [anon_sym_const] = 32,
        [sym_comment] = 8,
    },
    [5] = {
        [sym_import_declaration] = 12,
        [sym__top_level_declaration] = 34,
        [sym__declaration] = 34,
        [sym_const_declaration] = 34,
        [sym_function_declaration] = 34,
        [sym_method_declaration] = 34,
        [sym_type_declaration] = 34,
        [sym_var_declaration] = 34,
        [aux_sym_source_file_repeat1] = 36,
        [aux_sym_source_file_repeat2] = 34,
        [ts_builtin_sym_end] = 34,
        [anon_sym_import] = 26,
        [anon_sym_const] = 34,
        [sym_comment] = 8,
    },
    [6] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [sym_var_declaration] = 18,
        [aux_sym_source_file_repeat2] = 38,
        [ts_builtin_sym_end] = 40,
        [anon_sym_const] = 28,
        [sym_comment] = 8,
    },
    [7] = {
        [sym__top_level_declaration] = 42,
        [sym__declaration] = 42,
        [sym_const_declaration] = 42,
        [sym_function_declaration] = 42,
        [sym_method_declaration] = 42,
        [sym_type_declaration] = 42,
        [sym_var_declaration] = 42,
        [aux_sym_source_file_repeat2] = 42,
        [ts_builtin_sym_end] = 42,
        [anon_sym_const] = 42,
        [sym_comment] = 8,
    },
    [8] = {
        [sym__top_level_declaration] = 44,
        [sym__declaration] = 44,
        [sym_const_declaration] = 44,
        [sym_function_declaration] = 44,
        [sym_method_declaration] = 44,
        [sym_type_declaration] = 44,
        [sym_var_declaration] = 44,
        [aux_sym_source_file_repeat2] = 44,
        [ts_builtin_sym_end] = 44,
        [anon_sym_const] = 44,
        [sym_comment] = 8,
    },
    [9] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [sym_var_declaration] = 18,
        [aux_sym_source_file_repeat2] = 46,
        [ts_builtin_sym_end] = 48,
        [anon_sym_const] = 28,
        [sym_comment] = 8,
    },
    [10] = {
        [ts_builtin_sym_end] = 48,
        [sym_comment] = 8,
    },
    [11] = {
        [sym_import_spec] = 50,
        [sym__string_literal] = 52,
        [anon_sym_LPAREN] = 54,
        [anon_sym_DOT] = 56,
        [sym_identifier] = 56,
        [sym_raw_string_literal] = 58,
        [sym_interpreted_string_literal] = 58,
        [sym_comment] = 8,
    },
    [12] = {
        [sym_const_spec] = 60,
        [sym_identifier_list] = 62,
        [anon_sym_LPAREN] = 64,
        [sym_identifier] = 66,
        [sym_comment] = 8,
    },
    [13] = {
        [sym__top_level_declaration] = 68,
        [sym__declaration] = 68,
        [sym_const_declaration] = 68,
        [sym_function_declaration] = 68,
        [sym_method_declaration] = 68,
        [sym_type_declaration] = 68,
        [sym_var_declaration] = 68,
        [aux_sym_source_file_repeat2] = 68,
        [ts_builtin_sym_end] = 68,
        [anon_sym_const] = 68,
        [sym_comment] = 8,
    },
    [14] = {
        [sym__type] = 70,
        [anon_sym_EQ] = 72,
        [sym_identifier] = 74,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_const_spec] = 76,
        [sym_identifier_list] = 78,
        [aux_sym_const_declaration_repeat1] = 80,
        [anon_sym_RPAREN] = 82,
        [sym_identifier] = 66,
        [sym_comment] = 8,
    },
    [16] = {
        [sym__type] = 84,
        [aux_sym_identifier_list_repeat1] = 86,
        [anon_sym_EQ] = 84,
        [anon_sym_COMMA] = 88,
        [sym_identifier] = 84,
        [sym_comment] = 8,
    },
    [17] = {
        [sym__type] = 90,
        [anon_sym_EQ] = 90,
        [sym_identifier] = 90,
        [sym_comment] = 8,
    },
    [18] = {
        [sym_identifier] = 92,
        [sym_comment] = 8,
    },
    [19] = {
        [sym__type] = 94,
        [aux_sym_identifier_list_repeat1] = 96,
        [anon_sym_EQ] = 94,
        [anon_sym_COMMA] = 88,
        [sym_identifier] = 94,
        [sym_comment] = 8,
    },
    [20] = {
        [sym__type] = 98,
        [anon_sym_EQ] = 98,
        [sym_identifier] = 98,
        [sym_comment] = 8,
    },
    [21] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 100,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__type] = 102,
        [anon_sym_EQ] = 104,
        [sym_identifier] = 74,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_RPAREN] = 106,
        [sym_comment] = 8,
    },
    [24] = {
        [sym__top_level_declaration] = 108,
        [sym__declaration] = 108,
        [sym_const_declaration] = 108,
        [sym_function_declaration] = 108,
        [sym_method_declaration] = 108,
        [sym_type_declaration] = 108,
        [sym_var_declaration] = 108,
        [aux_sym_source_file_repeat2] = 108,
        [ts_builtin_sym_end] = 108,
        [anon_sym_const] = 108,
        [sym_comment] = 8,
    },
    [25] = {
        [sym__top_level_declaration] = 110,
        [sym__declaration] = 110,
        [sym_const_declaration] = 110,
        [sym_function_declaration] = 110,
        [sym_method_declaration] = 110,
        [sym_type_declaration] = 110,
        [sym_var_declaration] = 110,
        [aux_sym_source_file_repeat2] = 110,
        [ts_builtin_sym_end] = 110,
        [anon_sym_const] = 110,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_EQ] = 112,
        [sym_comment] = 8,
    },
    [27] = {
        [sym_expression_list] = 114,
        [sym__expression] = 116,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_EQ] = 126,
        [sym_comment] = 8,
    },
    [29] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 128,
        [sym_comment] = 8,
    },
    [30] = {
        [aux_sym_expression_list_repeat1] = 130,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 132,
        [anon_sym_COMMA] = 134,
        [sym_comment] = 8,
    },
    [31] = {
        [aux_sym_expression_list_repeat1] = 136,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 136,
        [anon_sym_COMMA] = 136,
        [sym_comment] = 8,
    },
    [32] = {
        [aux_sym_expression_list_repeat1] = 138,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 138,
        [anon_sym_COMMA] = 138,
        [sym_comment] = 8,
    },
    [33] = {
        [aux_sym_expression_list_repeat1] = 140,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 140,
        [anon_sym_COMMA] = 140,
        [sym_comment] = 8,
    },
    [34] = {
        [aux_sym_expression_list_repeat1] = 142,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 142,
        [anon_sym_COMMA] = 142,
        [sym_comment] = 8,
    },
    [35] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 144,
        [sym_comment] = 8,
    },
    [36] = {
        [sym__expression] = 146,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [37] = {
        [aux_sym_expression_list_repeat1] = 148,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 150,
        [anon_sym_COMMA] = 134,
        [sym_comment] = 8,
    },
    [38] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 152,
        [sym_comment] = 8,
    },
    [39] = {
        [sym_expression_list] = 154,
        [sym__expression] = 116,
        [sym_unary_expression] = 118,
        [sym_binary_expression] = 118,
        [sym__primary_expression] = 118,
        [sym__string_literal] = 120,
        [sym_int_literal] = 120,
        [sym_float_literal] = 120,
        [sym_identifier] = 120,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 124,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 124,
        [sym_comment] = 8,
    },
    [40] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 156,
        [sym_comment] = 8,
    },
    [41] = {
        [sym_const_spec] = 76,
        [sym_identifier_list] = 78,
        [aux_sym_const_declaration_repeat1] = 158,
        [anon_sym_RPAREN] = 160,
        [sym_identifier] = 66,
        [sym_comment] = 8,
    },
    [42] = {
        [anon_sym_RPAREN] = 162,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_EQ] = 164,
        [sym_comment] = 8,
    },
    [44] = {
        [sym_expression_list] = 166,
        [sym__expression] = 168,
        [sym_unary_expression] = 170,
        [sym_binary_expression] = 170,
        [sym__primary_expression] = 170,
        [sym__string_literal] = 172,
        [sym_int_literal] = 172,
        [sym_float_literal] = 172,
        [sym_identifier] = 172,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 8,
    },
    [45] = {
        [sym__top_level_declaration] = 128,
        [sym__declaration] = 128,
        [sym_const_declaration] = 128,
        [sym_function_declaration] = 128,
        [sym_method_declaration] = 128,
        [sym_type_declaration] = 128,
        [sym_var_declaration] = 128,
        [aux_sym_source_file_repeat2] = 128,
        [ts_builtin_sym_end] = 128,
        [anon_sym_const] = 128,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__top_level_declaration] = 132,
        [sym__declaration] = 132,
        [sym_const_declaration] = 132,
        [sym_function_declaration] = 132,
        [sym_method_declaration] = 132,
        [sym_type_declaration] = 132,
        [sym_var_declaration] = 132,
        [aux_sym_source_file_repeat2] = 132,
        [aux_sym_expression_list_repeat1] = 178,
        [ts_builtin_sym_end] = 132,
        [anon_sym_const] = 132,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 8,
    },
    [47] = {
        [sym__top_level_declaration] = 136,
        [sym__declaration] = 136,
        [sym_const_declaration] = 136,
        [sym_function_declaration] = 136,
        [sym_method_declaration] = 136,
        [sym_type_declaration] = 136,
        [sym_var_declaration] = 136,
        [aux_sym_source_file_repeat2] = 136,
        [aux_sym_expression_list_repeat1] = 136,
        [ts_builtin_sym_end] = 136,
        [anon_sym_const] = 136,
        [anon_sym_COMMA] = 136,
        [sym_comment] = 8,
    },
    [48] = {
        [sym__top_level_declaration] = 138,
        [sym__declaration] = 138,
        [sym_const_declaration] = 138,
        [sym_function_declaration] = 138,
        [sym_method_declaration] = 138,
        [sym_type_declaration] = 138,
        [sym_var_declaration] = 138,
        [aux_sym_source_file_repeat2] = 138,
        [aux_sym_expression_list_repeat1] = 138,
        [ts_builtin_sym_end] = 138,
        [anon_sym_const] = 138,
        [anon_sym_COMMA] = 138,
        [sym_comment] = 8,
    },
    [49] = {
        [sym__top_level_declaration] = 140,
        [sym__declaration] = 140,
        [sym_const_declaration] = 140,
        [sym_function_declaration] = 140,
        [sym_method_declaration] = 140,
        [sym_type_declaration] = 140,
        [sym_var_declaration] = 140,
        [aux_sym_source_file_repeat2] = 140,
        [aux_sym_expression_list_repeat1] = 140,
        [ts_builtin_sym_end] = 140,
        [anon_sym_const] = 140,
        [anon_sym_COMMA] = 140,
        [sym_comment] = 8,
    },
    [50] = {
        [sym__top_level_declaration] = 142,
        [sym__declaration] = 142,
        [sym_const_declaration] = 142,
        [sym_function_declaration] = 142,
        [sym_method_declaration] = 142,
        [sym_type_declaration] = 142,
        [sym_var_declaration] = 142,
        [aux_sym_source_file_repeat2] = 142,
        [aux_sym_expression_list_repeat1] = 142,
        [ts_builtin_sym_end] = 142,
        [anon_sym_const] = 142,
        [anon_sym_COMMA] = 142,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__top_level_declaration] = 144,
        [sym__declaration] = 144,
        [sym_const_declaration] = 144,
        [sym_function_declaration] = 144,
        [sym_method_declaration] = 144,
        [sym_type_declaration] = 144,
        [sym_var_declaration] = 144,
        [aux_sym_source_file_repeat2] = 144,
        [ts_builtin_sym_end] = 144,
        [anon_sym_const] = 144,
        [sym_comment] = 8,
    },
    [52] = {
        [sym__expression] = 182,
        [sym_unary_expression] = 170,
        [sym_binary_expression] = 170,
        [sym__primary_expression] = 170,
        [sym__string_literal] = 172,
        [sym_int_literal] = 172,
        [sym_float_literal] = 172,
        [sym_identifier] = 172,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 8,
    },
    [53] = {
        [sym__top_level_declaration] = 150,
        [sym__declaration] = 150,
        [sym_const_declaration] = 150,
        [sym_function_declaration] = 150,
        [sym_method_declaration] = 150,
        [sym_type_declaration] = 150,
        [sym_var_declaration] = 150,
        [aux_sym_source_file_repeat2] = 150,
        [aux_sym_expression_list_repeat1] = 184,
        [ts_builtin_sym_end] = 150,
        [anon_sym_const] = 150,
        [anon_sym_COMMA] = 180,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__top_level_declaration] = 152,
        [sym__declaration] = 152,
        [sym_const_declaration] = 152,
        [sym_function_declaration] = 152,
        [sym_method_declaration] = 152,
        [sym_type_declaration] = 152,
        [sym_var_declaration] = 152,
        [aux_sym_source_file_repeat2] = 152,
        [ts_builtin_sym_end] = 152,
        [anon_sym_const] = 152,
        [sym_comment] = 8,
    },
    [55] = {
        [sym_expression_list] = 186,
        [sym__expression] = 168,
        [sym_unary_expression] = 170,
        [sym_binary_expression] = 170,
        [sym__primary_expression] = 170,
        [sym__string_literal] = 172,
        [sym_int_literal] = 172,
        [sym_float_literal] = 172,
        [sym_identifier] = 172,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 176,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 176,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__top_level_declaration] = 156,
        [sym__declaration] = 156,
        [sym_const_declaration] = 156,
        [sym_function_declaration] = 156,
        [sym_method_declaration] = 156,
        [sym_type_declaration] = 156,
        [sym_var_declaration] = 156,
        [aux_sym_source_file_repeat2] = 156,
        [ts_builtin_sym_end] = 156,
        [anon_sym_const] = 156,
        [sym_comment] = 8,
    },
    [57] = {
        [sym_import_declaration] = 188,
        [sym__top_level_declaration] = 188,
        [sym__declaration] = 188,
        [sym_const_declaration] = 188,
        [sym_function_declaration] = 188,
        [sym_method_declaration] = 188,
        [sym_type_declaration] = 188,
        [sym_var_declaration] = 188,
        [aux_sym_source_file_repeat1] = 188,
        [aux_sym_source_file_repeat2] = 188,
        [ts_builtin_sym_end] = 188,
        [anon_sym_import] = 188,
        [anon_sym_const] = 188,
        [sym_comment] = 8,
    },
    [58] = {
        [sym_import_declaration] = 190,
        [sym__top_level_declaration] = 190,
        [sym__declaration] = 190,
        [sym_const_declaration] = 190,
        [sym_function_declaration] = 190,
        [sym_method_declaration] = 190,
        [sym_type_declaration] = 190,
        [sym_var_declaration] = 190,
        [aux_sym_source_file_repeat1] = 190,
        [aux_sym_source_file_repeat2] = 190,
        [ts_builtin_sym_end] = 190,
        [anon_sym_import] = 190,
        [anon_sym_const] = 190,
        [sym_comment] = 8,
    },
    [59] = {
        [sym_import_spec] = 192,
        [sym__string_literal] = 194,
        [aux_sym_import_declaration_repeat1] = 196,
        [anon_sym_RPAREN] = 198,
        [anon_sym_DOT] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [sym_comment] = 8,
    },
    [60] = {
        [sym__string_literal] = 204,
        [sym_raw_string_literal] = 58,
        [sym_interpreted_string_literal] = 58,
        [sym_comment] = 8,
    },
    [61] = {
        [sym_import_declaration] = 140,
        [sym__top_level_declaration] = 140,
        [sym__declaration] = 140,
        [sym_const_declaration] = 140,
        [sym_function_declaration] = 140,
        [sym_method_declaration] = 140,
        [sym_type_declaration] = 140,
        [sym_var_declaration] = 140,
        [aux_sym_source_file_repeat1] = 140,
        [aux_sym_source_file_repeat2] = 140,
        [ts_builtin_sym_end] = 140,
        [anon_sym_import] = 140,
        [anon_sym_const] = 140,
        [sym_comment] = 8,
    },
    [62] = {
        [sym_import_declaration] = 206,
        [sym__top_level_declaration] = 206,
        [sym__declaration] = 206,
        [sym_const_declaration] = 206,
        [sym_function_declaration] = 206,
        [sym_method_declaration] = 206,
        [sym_type_declaration] = 206,
        [sym_var_declaration] = 206,
        [aux_sym_source_file_repeat1] = 206,
        [aux_sym_source_file_repeat2] = 206,
        [ts_builtin_sym_end] = 206,
        [anon_sym_import] = 206,
        [anon_sym_const] = 206,
        [sym_comment] = 8,
    },
    [63] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 208,
        [sym_comment] = 8,
    },
    [64] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 190,
        [sym_comment] = 8,
    },
    [65] = {
        [anon_sym_RPAREN] = 210,
        [sym_comment] = 8,
    },
    [66] = {
        [sym_import_declaration] = 212,
        [sym__top_level_declaration] = 212,
        [sym__declaration] = 212,
        [sym_const_declaration] = 212,
        [sym_function_declaration] = 212,
        [sym_method_declaration] = 212,
        [sym_type_declaration] = 212,
        [sym_var_declaration] = 212,
        [aux_sym_source_file_repeat1] = 212,
        [aux_sym_source_file_repeat2] = 212,
        [ts_builtin_sym_end] = 212,
        [anon_sym_import] = 212,
        [anon_sym_const] = 212,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__string_literal] = 214,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [sym_comment] = 8,
    },
    [68] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 140,
        [sym_comment] = 8,
    },
    [69] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 206,
        [sym_comment] = 8,
    },
    [70] = {
        [sym_import_declaration] = 216,
        [sym__top_level_declaration] = 216,
        [sym__declaration] = 216,
        [sym_const_declaration] = 216,
        [sym_function_declaration] = 216,
        [sym_method_declaration] = 216,
        [sym_type_declaration] = 216,
        [sym_var_declaration] = 216,
        [aux_sym_source_file_repeat1] = 216,
        [aux_sym_source_file_repeat2] = 216,
        [ts_builtin_sym_end] = 216,
        [anon_sym_import] = 216,
        [anon_sym_const] = 216,
        [sym_comment] = 8,
    },
    [71] = {
        [sym_import_spec] = 192,
        [sym__string_literal] = 194,
        [aux_sym_import_declaration_repeat1] = 218,
        [anon_sym_RPAREN] = 220,
        [anon_sym_DOT] = 200,
        [sym_identifier] = 200,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 222,
        [sym_comment] = 8,
    },
    [73] = {
        [ts_builtin_sym_end] = 224,
        [sym_comment] = 8,
    },
    [74] = {
        [ts_builtin_sym_end] = 226,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__top_level_declaration] = 228,
        [sym__declaration] = 228,
        [sym_const_declaration] = 228,
        [sym_function_declaration] = 228,
        [sym_method_declaration] = 228,
        [sym_type_declaration] = 228,
        [sym_var_declaration] = 228,
        [aux_sym_source_file_repeat2] = 228,
        [ts_builtin_sym_end] = 228,
        [anon_sym_const] = 228,
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
    [30] = {.count = 1}, SHIFT(4, 0),
    [32] = {.count = 1}, REDUCE(sym_package_clause, 2, 0),
    [34] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 1, 0),
    [36] = {.count = 1}, SHIFT(75, 0),
    [38] = {.count = 1}, SHIFT(74, 0),
    [40] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [42] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [44] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [46] = {.count = 1}, SHIFT(73, 0),
    [48] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [50] = {.count = 1}, SHIFT(57, 0),
    [52] = {.count = 1}, SHIFT(58, 0),
    [54] = {.count = 1}, SHIFT(59, 0),
    [56] = {.count = 1}, SHIFT(60, 0),
    [58] = {.count = 1}, SHIFT(61, 0),
    [60] = {.count = 1}, SHIFT(13, 0),
    [62] = {.count = 1}, SHIFT(14, 0),
    [64] = {.count = 1}, SHIFT(15, 0),
    [66] = {.count = 1}, SHIFT(16, 0),
    [68] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [70] = {.count = 1}, SHIFT(43, 0),
    [72] = {.count = 1}, SHIFT(44, 0),
    [74] = {.count = 1}, SHIFT(28, 0),
    [76] = {.count = 1}, SHIFT(21, 0),
    [78] = {.count = 1}, SHIFT(22, 0),
    [80] = {.count = 1}, SHIFT(23, 0),
    [82] = {.count = 1}, SHIFT(24, 0),
    [84] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [86] = {.count = 1}, SHIFT(17, 0),
    [88] = {.count = 1}, SHIFT(18, 0),
    [90] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [92] = {.count = 1}, SHIFT(19, 0),
    [94] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [96] = {.count = 1}, SHIFT(20, 0),
    [98] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [100] = {.count = 1}, SHIFT(41, 0),
    [102] = {.count = 1}, SHIFT(26, 0),
    [104] = {.count = 1}, SHIFT(27, 0),
    [106] = {.count = 1}, SHIFT(25, 0),
    [108] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [110] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [112] = {.count = 1}, SHIFT(39, 0),
    [114] = {.count = 1}, SHIFT(29, 0),
    [116] = {.count = 1}, SHIFT(30, 0),
    [118] = {.count = 1}, SHIFT(31, 0),
    [120] = {.count = 1}, SHIFT(32, 0),
    [122] = {.count = 1}, SHIFT(33, 0),
    [124] = {.count = 1}, SHIFT(34, 0),
    [126] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [128] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [130] = {.count = 1}, SHIFT(35, 0),
    [132] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [134] = {.count = 1}, SHIFT(36, 0),
    [136] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [138] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [140] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [142] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [144] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [146] = {.count = 1}, SHIFT(37, 0),
    [148] = {.count = 1}, SHIFT(38, 0),
    [150] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [152] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [154] = {.count = 1}, SHIFT(40, 0),
    [156] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [158] = {.count = 1}, SHIFT(42, 0),
    [160] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [162] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [164] = {.count = 1}, SHIFT(55, 0),
    [166] = {.count = 1}, SHIFT(45, 0),
    [168] = {.count = 1}, SHIFT(46, 0),
    [170] = {.count = 1}, SHIFT(47, 0),
    [172] = {.count = 1}, SHIFT(48, 0),
    [174] = {.count = 1}, SHIFT(49, 0),
    [176] = {.count = 1}, SHIFT(50, 0),
    [178] = {.count = 1}, SHIFT(51, 0),
    [180] = {.count = 1}, SHIFT(52, 0),
    [182] = {.count = 1}, SHIFT(53, 0),
    [184] = {.count = 1}, SHIFT(54, 0),
    [186] = {.count = 1}, SHIFT(56, 0),
    [188] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [190] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [192] = {.count = 1}, SHIFT(63, 0),
    [194] = {.count = 1}, SHIFT(64, 0),
    [196] = {.count = 1}, SHIFT(65, 0),
    [198] = {.count = 1}, SHIFT(66, 0),
    [200] = {.count = 1}, SHIFT(67, 0),
    [202] = {.count = 1}, SHIFT(68, 0),
    [204] = {.count = 1}, SHIFT(62, 0),
    [206] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [208] = {.count = 1}, SHIFT(71, 0),
    [210] = {.count = 1}, SHIFT(70, 0),
    [212] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [214] = {.count = 1}, SHIFT(69, 0),
    [216] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [218] = {.count = 1}, SHIFT(72, 0),
    [220] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [222] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [224] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [226] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [228] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
