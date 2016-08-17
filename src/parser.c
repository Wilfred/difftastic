#include "tree_sitter/parser.h"

#define STATE_COUNT 445
#define SYMBOL_COUNT 94

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
    sym_pointer_type,
    sym_array_type,
    sym_slice_type,
    sym_struct_type,
    sym_field_declaration,
    sym_interface_type,
    sym_method_spec,
    sym_map_type,
    sym_qualified_identifier,
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
    aux_sym_struct_type_repeat1,
    aux_sym_interface_type_repeat1,
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
    anon_sym_STAR,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_struct,
    anon_sym_interface,
    anon_sym_map,
    anon_sym_SLASH,
    anon_sym_PERCENT,
    anon_sym_LT_LT,
    anon_sym_GT_GT,
    anon_sym_AMP,
    anon_sym_AMP_CARET,
    anon_sym_PLUS,
    anon_sym_DASH,
    anon_sym_PIPE,
    anon_sym_CARET,
    anon_sym_EQ_EQ,
    anon_sym_BANG_EQ,
    anon_sym_LT,
    anon_sym_LT_EQ,
    anon_sym_GT,
    anon_sym_GT_EQ,
    anon_sym_AMP_AMP,
    anon_sym_PIPE_PIPE,
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
    [sym_pointer_type] = "pointer_type",
    [sym_array_type] = "array_type",
    [sym_slice_type] = "slice_type",
    [sym_struct_type] = "struct_type",
    [sym_field_declaration] = "field_declaration",
    [sym_interface_type] = "interface_type",
    [sym_method_spec] = "method_spec",
    [sym_map_type] = "map_type",
    [sym_qualified_identifier] = "qualified_identifier",
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
    [aux_sym_struct_type_repeat1] = "struct_type_repeat1",
    [aux_sym_interface_type_repeat1] = "interface_type_repeat1",
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
    [anon_sym_STAR] = "*",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_struct] = "struct",
    [anon_sym_interface] = "interface",
    [anon_sym_map] = "map",
    [anon_sym_SLASH] = "/",
    [anon_sym_PERCENT] = "%",
    [anon_sym_LT_LT] = "<<",
    [anon_sym_GT_GT] = ">>",
    [anon_sym_AMP] = "&",
    [anon_sym_AMP_CARET] = "&^",
    [anon_sym_PLUS] = "+",
    [anon_sym_DASH] = "-",
    [anon_sym_PIPE] = "|",
    [anon_sym_CARET] = "^",
    [anon_sym_EQ_EQ] = "==",
    [anon_sym_BANG_EQ] = "!=",
    [anon_sym_LT] = "<",
    [anon_sym_LT_EQ] = "<=",
    [anon_sym_GT] = ">",
    [anon_sym_GT_EQ] = ">=",
    [anon_sym_AMP_AMP] = "&&",
    [anon_sym_PIPE_PIPE] = "||",
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
    [sym_pointer_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_array_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_slice_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_struct_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_field_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_interface_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_method_spec] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_map_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_qualified_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_struct_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [aux_sym_interface_type_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
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
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SLASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PERCENT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_CARET] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_BANG_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_GT_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_AMP_AMP] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PIPE_PIPE] = {.visible = true, .named = false, .structural = true, .extra = false},
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
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(29);
            if (lookahead == '>')
                ADVANCE(31);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                (lookahead == 'n') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(49);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 'p')
                ADVANCE(66);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 't')
                ADVANCE(79);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(86);
            if (lookahead == '|')
                ADVANCE(87);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 3:
            if (lookahead == '=')
                ADVANCE(4);
            LEX_ERROR();
        case 4:
            ACCEPT_TOKEN(anon_sym_BANG_EQ);
        case 5:
            if (lookahead == '\"')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(sym_interpreted_string_literal);
        case 7:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 8:
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '^')
                ADVANCE(10);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 9:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 10:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 11:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 12:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 13:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 14:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 15:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 16:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 17:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 18:
            if (lookahead == '/')
                ADVANCE(19);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 19:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(19);
            ACCEPT_TOKEN(sym_comment);
        case 20:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(21);
            if (lookahead == 'X')
                ADVANCE(22);
            if (lookahead == 'x')
                ADVANCE(22);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 21:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(21);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 22:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(23);
            LEX_ERROR();
        case 23:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(23);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 24:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 25:
            ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH);
        case 26:
            if (lookahead == '<')
                ADVANCE(27);
            if (lookahead == '=')
                ADVANCE(28);
            ACCEPT_TOKEN(anon_sym_LT);
        case 27:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 28:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 29:
            if (lookahead == '=')
                ADVANCE(30);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 30:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 31:
            if (lookahead == '=')
                ADVANCE(32);
            if (lookahead == '>')
                ADVANCE(33);
            ACCEPT_TOKEN(anon_sym_GT);
        case 32:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 33:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 34:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 35:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 36:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 37:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 38:
            if (lookahead == '`')
                ADVANCE(39);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(38);
            LEX_ERROR();
        case 39:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(41);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(42);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 42:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 's')
                ADVANCE(43);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 43:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(44);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 44:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_const);
        case 45:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(46);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_func);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'm')
                ADVANCE(50);
            if (lookahead == 'n')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'o')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(54);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_import);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(58);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'f')
                ADVANCE(59);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_interface);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_map);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'k')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'g')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(72);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_package);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(75);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'u')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 't')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_struct);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'y')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'p')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_type);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'a')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'r')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_var);
        case 86:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 87:
            if (lookahead == '|')
                ADVANCE(88);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 88:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 89:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 90:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(90);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'p')
                ADVANCE(92);
            LEX_ERROR();
        case 91:
            if (lookahead == '/')
                ADVANCE(19);
            LEX_ERROR();
        case 92:
            if (lookahead == 'a')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 'c')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 'k')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'a')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'g')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'e')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            ACCEPT_TOKEN(anon_sym_package);
        case 99:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 100:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(100);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 'i')
                ADVANCE(110);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 101:
            if (lookahead == 'o')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'n')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 's')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 't')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            ACCEPT_TOKEN(anon_sym_const);
        case 106:
            if (lookahead == 'u')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'n')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'c')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            ACCEPT_TOKEN(anon_sym_func);
        case 110:
            if (lookahead == 'm')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'p')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 'o')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 'r')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            if (lookahead == 't')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(anon_sym_import);
        case 116:
            if (lookahead == 'y')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'p')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'e')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            ACCEPT_TOKEN(anon_sym_type);
        case 120:
            if (lookahead == 'a')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'r')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            ACCEPT_TOKEN(anon_sym_var);
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 124:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            LEX_ERROR();
        case 128:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(128);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 129:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(34);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'n')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 130:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(130);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '[')
                ADVANCE(35);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ']')
                ADVANCE(36);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 139:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(139);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 140:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(140);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 141:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(141);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 142:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '}')
                ADVANCE(89);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 148:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(148);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 149:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(149);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == ']')
                ADVANCE(36);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 150:
            if (lookahead == '=')
                ADVANCE(30);
            LEX_ERROR();
        case 151:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(151);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '0')
                ADVANCE(20);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(24);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '/')
                ADVANCE(91);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '(')
                ADVANCE(11);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'c')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(45);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 't')
                ADVANCE(79);
            if (lookahead == 'v')
                ADVANCE(83);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '{')
                ADVANCE(86);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 159:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '[')
                ADVANCE(35);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == 'i')
                ADVANCE(129);
            if (lookahead == 'm')
                ADVANCE(63);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == ';')
                ADVANCE(25);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(8);
            if (lookahead == '*')
                ADVANCE(13);
            if (lookahead == '+')
                ADVANCE(14);
            if (lookahead == ',')
                ADVANCE(15);
            if (lookahead == '-')
                ADVANCE(16);
            if (lookahead == '/')
                ADVANCE(18);
            if (lookahead == '<')
                ADVANCE(26);
            if (lookahead == '=')
                ADVANCE(150);
            if (lookahead == '>')
                ADVANCE(31);
            if (lookahead == '^')
                ADVANCE(37);
            if (lookahead == 'c')
                ADVANCE(101);
            if (lookahead == 'f')
                ADVANCE(106);
            if (lookahead == 't')
                ADVANCE(116);
            if (lookahead == 'v')
                ADVANCE(120);
            if (lookahead == '|')
                ADVANCE(87);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '=')
                ADVANCE(159);
            LEX_ERROR();
        case 169:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(169);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(91);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(34);
            if (lookahead == '_')
                ADVANCE(34);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(91);
            if (lookahead == '`')
                ADVANCE(38);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 90,
    [1] = 99,
    [2] = 100,
    [3] = 123,
    [4] = 100,
    [5] = 100,
    [6] = 124,
    [7] = 124,
    [8] = 124,
    [9] = 124,
    [10] = 99,
    [11] = 125,
    [12] = 126,
    [13] = 126,
    [14] = 126,
    [15] = 126,
    [16] = 124,
    [17] = 127,
    [18] = 128,
    [19] = 124,
    [20] = 124,
    [21] = 128,
    [22] = 130,
    [23] = 131,
    [24] = 131,
    [25] = 132,
    [26] = 133,
    [27] = 123,
    [28] = 124,
    [29] = 128,
    [30] = 134,
    [31] = 134,
    [32] = 128,
    [33] = 130,
    [34] = 131,
    [35] = 131,
    [36] = 132,
    [37] = 135,
    [38] = 123,
    [39] = 134,
    [40] = 128,
    [41] = 134,
    [42] = 128,
    [43] = 134,
    [44] = 136,
    [45] = 137,
    [46] = 138,
    [47] = 134,
    [48] = 139,
    [49] = 140,
    [50] = 127,
    [51] = 136,
    [52] = 138,
    [53] = 141,
    [54] = 141,
    [55] = 140,
    [56] = 142,
    [57] = 141,
    [58] = 141,
    [59] = 128,
    [60] = 130,
    [61] = 131,
    [62] = 131,
    [63] = 132,
    [64] = 143,
    [65] = 123,
    [66] = 141,
    [67] = 128,
    [68] = 134,
    [69] = 128,
    [70] = 141,
    [71] = 136,
    [72] = 138,
    [73] = 141,
    [74] = 141,
    [75] = 144,
    [76] = 128,
    [77] = 137,
    [78] = 138,
    [79] = 141,
    [80] = 123,
    [81] = 145,
    [82] = 137,
    [83] = 128,
    [84] = 123,
    [85] = 137,
    [86] = 146,
    [87] = 128,
    [88] = 147,
    [89] = 137,
    [90] = 141,
    [91] = 144,
    [92] = 138,
    [93] = 147,
    [94] = 128,
    [95] = 130,
    [96] = 131,
    [97] = 131,
    [98] = 132,
    [99] = 148,
    [100] = 123,
    [101] = 147,
    [102] = 128,
    [103] = 134,
    [104] = 128,
    [105] = 147,
    [106] = 136,
    [107] = 138,
    [108] = 147,
    [109] = 147,
    [110] = 144,
    [111] = 138,
    [112] = 147,
    [113] = 147,
    [114] = 149,
    [115] = 149,
    [116] = 149,
    [117] = 128,
    [118] = 149,
    [119] = 149,
    [120] = 147,
    [121] = 151,
    [122] = 128,
    [123] = 151,
    [124] = 151,
    [125] = 151,
    [126] = 151,
    [127] = 149,
    [128] = 149,
    [129] = 149,
    [130] = 149,
    [131] = 149,
    [132] = 147,
    [133] = 147,
    [134] = 149,
    [135] = 128,
    [136] = 141,
    [137] = 128,
    [138] = 141,
    [139] = 141,
    [140] = 140,
    [141] = 123,
    [142] = 141,
    [143] = 142,
    [144] = 137,
    [145] = 137,
    [146] = 127,
    [147] = 128,
    [148] = 130,
    [149] = 131,
    [150] = 131,
    [151] = 132,
    [152] = 152,
    [153] = 123,
    [154] = 137,
    [155] = 128,
    [156] = 134,
    [157] = 128,
    [158] = 137,
    [159] = 136,
    [160] = 138,
    [161] = 137,
    [162] = 137,
    [163] = 144,
    [164] = 138,
    [165] = 137,
    [166] = 137,
    [167] = 149,
    [168] = 128,
    [169] = 137,
    [170] = 128,
    [171] = 137,
    [172] = 137,
    [173] = 141,
    [174] = 137,
    [175] = 137,
    [176] = 134,
    [177] = 144,
    [178] = 138,
    [179] = 134,
    [180] = 134,
    [181] = 149,
    [182] = 128,
    [183] = 134,
    [184] = 128,
    [185] = 134,
    [186] = 134,
    [187] = 128,
    [188] = 124,
    [189] = 136,
    [190] = 138,
    [191] = 124,
    [192] = 124,
    [193] = 144,
    [194] = 138,
    [195] = 124,
    [196] = 124,
    [197] = 149,
    [198] = 128,
    [199] = 124,
    [200] = 128,
    [201] = 124,
    [202] = 124,
    [203] = 137,
    [204] = 153,
    [205] = 124,
    [206] = 128,
    [207] = 137,
    [208] = 124,
    [209] = 127,
    [210] = 153,
    [211] = 123,
    [212] = 127,
    [213] = 154,
    [214] = 155,
    [215] = 127,
    [216] = 141,
    [217] = 155,
    [218] = 155,
    [219] = 156,
    [220] = 124,
    [221] = 156,
    [222] = 127,
    [223] = 138,
    [224] = 128,
    [225] = 130,
    [226] = 131,
    [227] = 131,
    [228] = 132,
    [229] = 157,
    [230] = 123,
    [231] = 156,
    [232] = 128,
    [233] = 134,
    [234] = 128,
    [235] = 156,
    [236] = 136,
    [237] = 138,
    [238] = 156,
    [239] = 156,
    [240] = 144,
    [241] = 138,
    [242] = 156,
    [243] = 156,
    [244] = 149,
    [245] = 128,
    [246] = 156,
    [247] = 128,
    [248] = 156,
    [249] = 156,
    [250] = 124,
    [251] = 141,
    [252] = 156,
    [253] = 156,
    [254] = 124,
    [255] = 141,
    [256] = 123,
    [257] = 123,
    [258] = 154,
    [259] = 155,
    [260] = 156,
    [261] = 124,
    [262] = 124,
    [263] = 124,
    [264] = 158,
    [265] = 127,
    [266] = 160,
    [267] = 158,
    [268] = 123,
    [269] = 160,
    [270] = 158,
    [271] = 137,
    [272] = 158,
    [273] = 153,
    [274] = 124,
    [275] = 124,
    [276] = 161,
    [277] = 161,
    [278] = 151,
    [279] = 128,
    [280] = 130,
    [281] = 131,
    [282] = 131,
    [283] = 132,
    [284] = 162,
    [285] = 123,
    [286] = 161,
    [287] = 128,
    [288] = 134,
    [289] = 128,
    [290] = 161,
    [291] = 136,
    [292] = 138,
    [293] = 161,
    [294] = 161,
    [295] = 144,
    [296] = 138,
    [297] = 161,
    [298] = 161,
    [299] = 149,
    [300] = 128,
    [301] = 161,
    [302] = 128,
    [303] = 161,
    [304] = 161,
    [305] = 137,
    [306] = 163,
    [307] = 163,
    [308] = 163,
    [309] = 163,
    [310] = 163,
    [311] = 137,
    [312] = 151,
    [313] = 151,
    [314] = 151,
    [315] = 151,
    [316] = 151,
    [317] = 151,
    [318] = 163,
    [319] = 163,
    [320] = 163,
    [321] = 163,
    [322] = 163,
    [323] = 163,
    [324] = 137,
    [325] = 151,
    [326] = 137,
    [327] = 127,
    [328] = 153,
    [329] = 164,
    [330] = 164,
    [331] = 151,
    [332] = 128,
    [333] = 130,
    [334] = 131,
    [335] = 131,
    [336] = 132,
    [337] = 165,
    [338] = 123,
    [339] = 164,
    [340] = 128,
    [341] = 134,
    [342] = 128,
    [343] = 164,
    [344] = 136,
    [345] = 138,
    [346] = 164,
    [347] = 164,
    [348] = 144,
    [349] = 138,
    [350] = 164,
    [351] = 164,
    [352] = 149,
    [353] = 128,
    [354] = 164,
    [355] = 128,
    [356] = 164,
    [357] = 164,
    [358] = 124,
    [359] = 166,
    [360] = 166,
    [361] = 166,
    [362] = 166,
    [363] = 166,
    [364] = 124,
    [365] = 151,
    [366] = 151,
    [367] = 151,
    [368] = 151,
    [369] = 151,
    [370] = 151,
    [371] = 166,
    [372] = 166,
    [373] = 166,
    [374] = 166,
    [375] = 166,
    [376] = 166,
    [377] = 124,
    [378] = 151,
    [379] = 124,
    [380] = 124,
    [381] = 158,
    [382] = 127,
    [383] = 137,
    [384] = 158,
    [385] = 153,
    [386] = 124,
    [387] = 124,
    [388] = 167,
    [389] = 167,
    [390] = 151,
    [391] = 128,
    [392] = 130,
    [393] = 131,
    [394] = 131,
    [395] = 132,
    [396] = 168,
    [397] = 123,
    [398] = 167,
    [399] = 128,
    [400] = 134,
    [401] = 128,
    [402] = 167,
    [403] = 136,
    [404] = 138,
    [405] = 167,
    [406] = 167,
    [407] = 144,
    [408] = 138,
    [409] = 167,
    [410] = 167,
    [411] = 149,
    [412] = 128,
    [413] = 167,
    [414] = 128,
    [415] = 167,
    [416] = 167,
    [417] = 137,
    [418] = 151,
    [419] = 137,
    [420] = 127,
    [421] = 153,
    [422] = 167,
    [423] = 151,
    [424] = 124,
    [425] = 151,
    [426] = 124,
    [427] = 100,
    [428] = 100,
    [429] = 169,
    [430] = 170,
    [431] = 100,
    [432] = 100,
    [433] = 137,
    [434] = 137,
    [435] = 153,
    [436] = 100,
    [437] = 170,
    [438] = 137,
    [439] = 100,
    [440] = 169,
    [441] = 153,
    [442] = 99,
    [443] = 99,
    [444] = 124,
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
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [sym_identifier] = 116,
        [sym_comment] = 8,
    },
    [19] = {
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
        [anon_sym_func] = 118,
        [anon_sym_type] = 118,
        [sym_comment] = 8,
    },
    [20] = {
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
    [21] = {
        [sym__type] = 122,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [sym_identifier] = 116,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__expression] = 124,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 130,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [23] = {
        [anon_sym_LBRACE] = 136,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 138,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACK] = 140,
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
        [anon_sym_DOT] = 142,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [27] = {
        [sym_identifier] = 144,
        [sym_comment] = 8,
    },
    [28] = {
        [sym__top_level_declaration] = 146,
        [sym__declaration] = 146,
        [sym_const_declaration] = 146,
        [sym_var_declaration] = 146,
        [sym_function_declaration] = 146,
        [sym_method_declaration] = 146,
        [sym_type_declaration] = 146,
        [aux_sym_source_file_repeat2] = 146,
        [ts_builtin_sym_end] = 146,
        [anon_sym_const] = 146,
        [anon_sym_var] = 146,
        [anon_sym_func] = 146,
        [anon_sym_type] = 146,
        [sym_comment] = 8,
    },
    [29] = {
        [sym__type] = 148,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [30] = {
        [anon_sym_RBRACK] = 164,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_RBRACK] = 120,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 166,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [33] = {
        [sym__expression] = 168,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 170,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [35] = {
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [36] = {
        [anon_sym_LBRACK] = 176,
        [sym_comment] = 8,
    },
    [37] = {
        [anon_sym_DOT] = 178,
        [anon_sym_RBRACK] = 120,
        [sym_comment] = 8,
    },
    [38] = {
        [sym_identifier] = 180,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 146,
        [sym_comment] = 8,
    },
    [40] = {
        [sym__type] = 182,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [41] = {
        [anon_sym_RBRACK] = 184,
        [sym_comment] = 8,
    },
    [42] = {
        [sym__type] = 186,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_RBRACK] = 188,
        [sym_comment] = 8,
    },
    [44] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 192,
        [anon_sym_RBRACE] = 194,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [45] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 198,
        [sym_comment] = 8,
    },
    [46] = {
        [anon_sym_RBRACE] = 200,
        [sym_comment] = 8,
    },
    [47] = {
        [anon_sym_RBRACK] = 202,
        [sym_comment] = 8,
    },
    [48] = {
        [sym_parameters] = 204,
        [anon_sym_LPAREN] = 206,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 198,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_parameters] = 208,
        [sym__type] = 208,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_LPAREN] = 212,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 214,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [50] = {
        [sym__parameter_list] = 228,
        [sym_parameter_declaration] = 230,
        [anon_sym_RPAREN] = 232,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [51] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 236,
        [anon_sym_RBRACE] = 238,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RBRACE] = 240,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RPAREN] = 242,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [54] = {
        [anon_sym_RPAREN] = 246,
        [anon_sym_COMMA] = 246,
        [sym_comment] = 8,
    },
    [55] = {
        [sym_parameters] = 248,
        [sym__type] = 248,
        [sym_pointer_type] = 248,
        [sym_array_type] = 248,
        [sym_slice_type] = 248,
        [sym_struct_type] = 248,
        [sym_interface_type] = 248,
        [sym_map_type] = 248,
        [sym_qualified_identifier] = 248,
        [anon_sym_LPAREN] = 248,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 248,
        [anon_sym_STAR] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_struct] = 248,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 248,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 250,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_RPAREN] = 246,
        [anon_sym_COMMA] = 246,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RPAREN] = 266,
        [anon_sym_COMMA] = 266,
        [sym_comment] = 8,
    },
    [58] = {
        [anon_sym_RPAREN] = 120,
        [anon_sym_COMMA] = 120,
        [sym_comment] = 8,
    },
    [59] = {
        [sym__type] = 268,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [60] = {
        [sym__expression] = 270,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 272,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_LBRACE] = 274,
        [sym_comment] = 8,
    },
    [62] = {
        [anon_sym_LBRACE] = 276,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_LBRACK] = 278,
        [sym_comment] = 8,
    },
    [64] = {
        [anon_sym_RPAREN] = 120,
        [anon_sym_DOT] = 280,
        [anon_sym_COMMA] = 120,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [66] = {
        [anon_sym_RPAREN] = 146,
        [anon_sym_COMMA] = 146,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__type] = 284,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RBRACK] = 286,
        [sym_comment] = 8,
    },
    [69] = {
        [sym__type] = 288,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [70] = {
        [anon_sym_RPAREN] = 188,
        [anon_sym_COMMA] = 188,
        [sym_comment] = 8,
    },
    [71] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 290,
        [anon_sym_RBRACE] = 292,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RBRACE] = 294,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 202,
        [anon_sym_COMMA] = 202,
        [sym_comment] = 8,
    },
    [74] = {
        [anon_sym_RPAREN] = 296,
        [anon_sym_COMMA] = 296,
        [sym_comment] = 8,
    },
    [75] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 302,
        [anon_sym_RBRACE] = 304,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 310,
        [sym_pointer_type] = 312,
        [sym_array_type] = 312,
        [sym_slice_type] = 312,
        [sym_struct_type] = 312,
        [sym_interface_type] = 312,
        [sym_map_type] = 312,
        [sym_qualified_identifier] = 312,
        [anon_sym_STAR] = 314,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 318,
        [anon_sym_interface] = 320,
        [anon_sym_map] = 322,
        [sym_identifier] = 324,
        [sym_comment] = 8,
    },
    [77] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 326,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_RBRACE] = 328,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_RPAREN] = 330,
        [anon_sym_COMMA] = 330,
        [sym_comment] = 8,
    },
    [80] = {
        [sym_identifier] = 310,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__type] = 332,
        [sym_pointer_type] = 332,
        [sym_array_type] = 332,
        [sym_slice_type] = 332,
        [sym_struct_type] = 332,
        [sym_interface_type] = 332,
        [sym_map_type] = 332,
        [sym_qualified_identifier] = 332,
        [sym__string_literal] = 334,
        [aux_sym_identifier_list_repeat1] = 336,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 338,
        [anon_sym_COMMA] = 340,
        [anon_sym_STAR] = 332,
        [anon_sym_LBRACK] = 332,
        [anon_sym_struct] = 332,
        [anon_sym_interface] = 332,
        [anon_sym_map] = 332,
        [sym_identifier] = 332,
        [sym_raw_string_literal] = 342,
        [sym_interpreted_string_literal] = 342,
        [sym_comment] = 8,
    },
    [82] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 344,
        [sym_comment] = 8,
    },
    [83] = {
        [sym__type] = 346,
        [sym_pointer_type] = 346,
        [sym_array_type] = 346,
        [sym_slice_type] = 346,
        [sym_struct_type] = 346,
        [sym_interface_type] = 346,
        [sym_map_type] = 346,
        [sym_qualified_identifier] = 346,
        [anon_sym_STAR] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_struct] = 346,
        [anon_sym_interface] = 346,
        [anon_sym_map] = 346,
        [sym_identifier] = 346,
        [sym_comment] = 8,
    },
    [84] = {
        [sym_identifier] = 348,
        [sym_comment] = 8,
    },
    [85] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 350,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__type] = 352,
        [sym_pointer_type] = 352,
        [sym_array_type] = 352,
        [sym_slice_type] = 352,
        [sym_struct_type] = 352,
        [sym_interface_type] = 352,
        [sym_map_type] = 352,
        [sym_qualified_identifier] = 352,
        [aux_sym_identifier_list_repeat1] = 354,
        [anon_sym_COMMA] = 340,
        [anon_sym_STAR] = 352,
        [anon_sym_LBRACK] = 352,
        [anon_sym_struct] = 352,
        [anon_sym_interface] = 352,
        [anon_sym_map] = 352,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [87] = {
        [sym__type] = 356,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_STAR] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_struct] = 356,
        [anon_sym_interface] = 356,
        [anon_sym_map] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 8,
    },
    [88] = {
        [sym__string_literal] = 358,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 344,
        [sym_raw_string_literal] = 342,
        [sym_interpreted_string_literal] = 342,
        [sym_comment] = 8,
    },
    [89] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 360,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RPAREN] = 362,
        [anon_sym_COMMA] = 362,
        [sym_comment] = 8,
    },
    [91] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 364,
        [anon_sym_RBRACE] = 366,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RBRACE] = 368,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__string_literal] = 120,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [sym_raw_string_literal] = 120,
        [sym_interpreted_string_literal] = 120,
        [sym_comment] = 8,
    },
    [94] = {
        [sym__type] = 370,
        [sym_pointer_type] = 312,
        [sym_array_type] = 312,
        [sym_slice_type] = 312,
        [sym_struct_type] = 312,
        [sym_interface_type] = 312,
        [sym_map_type] = 312,
        [sym_qualified_identifier] = 312,
        [anon_sym_STAR] = 314,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 318,
        [anon_sym_interface] = 320,
        [anon_sym_map] = 322,
        [sym_identifier] = 324,
        [sym_comment] = 8,
    },
    [95] = {
        [sym__expression] = 372,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 374,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_LBRACE] = 376,
        [sym_comment] = 8,
    },
    [97] = {
        [anon_sym_LBRACE] = 378,
        [sym_comment] = 8,
    },
    [98] = {
        [anon_sym_LBRACK] = 380,
        [sym_comment] = 8,
    },
    [99] = {
        [sym__string_literal] = 120,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [anon_sym_DOT] = 382,
        [sym_raw_string_literal] = 120,
        [sym_interpreted_string_literal] = 120,
        [sym_comment] = 8,
    },
    [100] = {
        [sym_identifier] = 384,
        [sym_comment] = 8,
    },
    [101] = {
        [sym__string_literal] = 146,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 146,
        [sym_raw_string_literal] = 146,
        [sym_interpreted_string_literal] = 146,
        [sym_comment] = 8,
    },
    [102] = {
        [sym__type] = 386,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [103] = {
        [anon_sym_RBRACK] = 388,
        [sym_comment] = 8,
    },
    [104] = {
        [sym__type] = 390,
        [sym_pointer_type] = 312,
        [sym_array_type] = 312,
        [sym_slice_type] = 312,
        [sym_struct_type] = 312,
        [sym_interface_type] = 312,
        [sym_map_type] = 312,
        [sym_qualified_identifier] = 312,
        [anon_sym_STAR] = 314,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 318,
        [anon_sym_interface] = 320,
        [anon_sym_map] = 322,
        [sym_identifier] = 324,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__string_literal] = 188,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 188,
        [sym_raw_string_literal] = 188,
        [sym_interpreted_string_literal] = 188,
        [sym_comment] = 8,
    },
    [106] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 392,
        [anon_sym_RBRACE] = 394,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [107] = {
        [anon_sym_RBRACE] = 396,
        [sym_comment] = 8,
    },
    [108] = {
        [sym__string_literal] = 202,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [sym_raw_string_literal] = 202,
        [sym_interpreted_string_literal] = 202,
        [sym_comment] = 8,
    },
    [109] = {
        [sym__string_literal] = 296,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 296,
        [sym_raw_string_literal] = 296,
        [sym_interpreted_string_literal] = 296,
        [sym_comment] = 8,
    },
    [110] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 398,
        [anon_sym_RBRACE] = 400,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [111] = {
        [anon_sym_RBRACE] = 402,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__string_literal] = 330,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 330,
        [sym_raw_string_literal] = 330,
        [sym_interpreted_string_literal] = 330,
        [sym_comment] = 8,
    },
    [113] = {
        [sym__string_literal] = 362,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 362,
        [sym_raw_string_literal] = 362,
        [sym_interpreted_string_literal] = 362,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 406,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [115] = {
        [anon_sym_STAR] = 416,
        [anon_sym_RBRACK] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_STAR] = 418,
        [anon_sym_RBRACK] = 418,
        [anon_sym_SLASH] = 418,
        [anon_sym_PERCENT] = 418,
        [anon_sym_LT_LT] = 418,
        [anon_sym_GT_GT] = 418,
        [anon_sym_AMP] = 418,
        [anon_sym_AMP_CARET] = 418,
        [anon_sym_PLUS] = 418,
        [anon_sym_DASH] = 418,
        [anon_sym_PIPE] = 418,
        [anon_sym_CARET] = 418,
        [anon_sym_EQ_EQ] = 418,
        [anon_sym_BANG_EQ] = 418,
        [anon_sym_LT] = 418,
        [anon_sym_LT_EQ] = 418,
        [anon_sym_GT] = 418,
        [anon_sym_GT_EQ] = 418,
        [anon_sym_AMP_AMP] = 418,
        [anon_sym_PIPE_PIPE] = 418,
        [sym_comment] = 8,
    },
    [117] = {
        [sym__type] = 420,
        [sym_pointer_type] = 312,
        [sym_array_type] = 312,
        [sym_slice_type] = 312,
        [sym_struct_type] = 312,
        [sym_interface_type] = 312,
        [sym_map_type] = 312,
        [sym_qualified_identifier] = 312,
        [anon_sym_STAR] = 314,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 318,
        [anon_sym_interface] = 320,
        [anon_sym_map] = 322,
        [sym_identifier] = 324,
        [sym_comment] = 8,
    },
    [118] = {
        [anon_sym_STAR] = 350,
        [anon_sym_RBRACK] = 350,
        [anon_sym_SLASH] = 350,
        [anon_sym_PERCENT] = 350,
        [anon_sym_LT_LT] = 350,
        [anon_sym_GT_GT] = 350,
        [anon_sym_AMP] = 350,
        [anon_sym_AMP_CARET] = 350,
        [anon_sym_PLUS] = 350,
        [anon_sym_DASH] = 350,
        [anon_sym_PIPE] = 350,
        [anon_sym_CARET] = 350,
        [anon_sym_EQ_EQ] = 350,
        [anon_sym_BANG_EQ] = 350,
        [anon_sym_LT] = 350,
        [anon_sym_LT_EQ] = 350,
        [anon_sym_GT] = 350,
        [anon_sym_GT_EQ] = 350,
        [anon_sym_AMP_AMP] = 350,
        [anon_sym_PIPE_PIPE] = 350,
        [sym_comment] = 8,
    },
    [119] = {
        [anon_sym_STAR] = 422,
        [anon_sym_RBRACK] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [120] = {
        [sym__string_literal] = 424,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [sym_raw_string_literal] = 424,
        [sym_interpreted_string_literal] = 424,
        [sym_comment] = 8,
    },
    [121] = {
        [sym__expression] = 426,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [122] = {
        [sym__type] = 428,
        [sym_pointer_type] = 312,
        [sym_array_type] = 312,
        [sym_slice_type] = 312,
        [sym_struct_type] = 312,
        [sym_interface_type] = 312,
        [sym_map_type] = 312,
        [sym_qualified_identifier] = 312,
        [anon_sym_STAR] = 314,
        [anon_sym_LBRACK] = 316,
        [anon_sym_struct] = 318,
        [anon_sym_interface] = 320,
        [anon_sym_map] = 322,
        [sym_identifier] = 324,
        [sym_comment] = 8,
    },
    [123] = {
        [sym__expression] = 430,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__expression] = 432,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [125] = {
        [sym__expression] = 434,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__expression] = 436,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [127] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 438,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [128] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 438,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [129] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 438,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [130] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 438,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 438,
        [anon_sym_DASH] = 438,
        [anon_sym_PIPE] = 438,
        [anon_sym_CARET] = 438,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [131] = {
        [anon_sym_STAR] = 440,
        [anon_sym_RBRACK] = 440,
        [anon_sym_SLASH] = 440,
        [anon_sym_PERCENT] = 440,
        [anon_sym_LT_LT] = 440,
        [anon_sym_GT_GT] = 440,
        [anon_sym_AMP] = 440,
        [anon_sym_AMP_CARET] = 440,
        [anon_sym_PLUS] = 440,
        [anon_sym_DASH] = 440,
        [anon_sym_PIPE] = 440,
        [anon_sym_CARET] = 440,
        [anon_sym_EQ_EQ] = 440,
        [anon_sym_BANG_EQ] = 440,
        [anon_sym_LT] = 440,
        [anon_sym_LT_EQ] = 440,
        [anon_sym_GT] = 440,
        [anon_sym_GT_EQ] = 440,
        [anon_sym_AMP_AMP] = 440,
        [anon_sym_PIPE_PIPE] = 440,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__string_literal] = 442,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 442,
        [sym_raw_string_literal] = 442,
        [sym_interpreted_string_literal] = 442,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__string_literal] = 444,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 444,
        [sym_raw_string_literal] = 444,
        [sym_interpreted_string_literal] = 444,
        [sym_comment] = 8,
    },
    [134] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 446,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [135] = {
        [sym__type] = 448,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [136] = {
        [anon_sym_RPAREN] = 424,
        [anon_sym_COMMA] = 424,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__type] = 450,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [138] = {
        [anon_sym_RPAREN] = 442,
        [anon_sym_COMMA] = 442,
        [sym_comment] = 8,
    },
    [139] = {
        [anon_sym_RPAREN] = 444,
        [anon_sym_COMMA] = 444,
        [sym_comment] = 8,
    },
    [140] = {
        [sym_parameters] = 452,
        [sym__type] = 452,
        [sym_pointer_type] = 452,
        [sym_array_type] = 452,
        [sym_slice_type] = 452,
        [sym_struct_type] = 452,
        [sym_interface_type] = 452,
        [sym_map_type] = 452,
        [sym_qualified_identifier] = 452,
        [anon_sym_LPAREN] = 452,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 452,
        [anon_sym_STAR] = 452,
        [anon_sym_LBRACK] = 452,
        [anon_sym_struct] = 452,
        [anon_sym_interface] = 452,
        [anon_sym_map] = 452,
        [sym_identifier] = 452,
        [sym_comment] = 8,
    },
    [141] = {
        [sym_parameter_declaration] = 454,
        [sym_identifier] = 456,
        [sym_comment] = 8,
    },
    [142] = {
        [anon_sym_RPAREN] = 458,
        [anon_sym_COMMA] = 458,
        [sym_comment] = 8,
    },
    [143] = {
        [sym__type] = 250,
        [sym_pointer_type] = 252,
        [sym_array_type] = 252,
        [sym_slice_type] = 252,
        [sym_struct_type] = 252,
        [sym_interface_type] = 252,
        [sym_map_type] = 252,
        [sym_qualified_identifier] = 252,
        [anon_sym_RPAREN] = 458,
        [anon_sym_COMMA] = 458,
        [anon_sym_STAR] = 254,
        [anon_sym_LBRACK] = 256,
        [anon_sym_struct] = 258,
        [anon_sym_interface] = 260,
        [anon_sym_map] = 262,
        [sym_identifier] = 264,
        [sym_comment] = 8,
    },
    [144] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 460,
        [sym_comment] = 8,
    },
    [145] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [sym_comment] = 8,
    },
    [146] = {
        [sym__parameter_list] = 462,
        [sym_parameter_declaration] = 230,
        [anon_sym_RPAREN] = 464,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [147] = {
        [sym__type] = 466,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [148] = {
        [sym__expression] = 468,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 470,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_LBRACE] = 472,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_LBRACE] = 474,
        [sym_comment] = 8,
    },
    [151] = {
        [anon_sym_LBRACK] = 476,
        [sym_comment] = 8,
    },
    [152] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [anon_sym_DOT] = 478,
        [sym_comment] = 8,
    },
    [153] = {
        [sym_identifier] = 480,
        [sym_comment] = 8,
    },
    [154] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 146,
        [sym_comment] = 8,
    },
    [155] = {
        [sym__type] = 482,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [156] = {
        [anon_sym_RBRACK] = 484,
        [sym_comment] = 8,
    },
    [157] = {
        [sym__type] = 486,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [158] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 188,
        [sym_comment] = 8,
    },
    [159] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 488,
        [anon_sym_RBRACE] = 490,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_RBRACE] = 492,
        [sym_comment] = 8,
    },
    [161] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [sym_comment] = 8,
    },
    [162] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 296,
        [sym_comment] = 8,
    },
    [163] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 494,
        [anon_sym_RBRACE] = 496,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [164] = {
        [anon_sym_RBRACE] = 498,
        [sym_comment] = 8,
    },
    [165] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 330,
        [sym_comment] = 8,
    },
    [166] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 362,
        [sym_comment] = 8,
    },
    [167] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 500,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [168] = {
        [sym__type] = 502,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [169] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [sym_comment] = 8,
    },
    [170] = {
        [sym__type] = 504,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [171] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 442,
        [sym_comment] = 8,
    },
    [172] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 444,
        [sym_comment] = 8,
    },
    [173] = {
        [anon_sym_RPAREN] = 506,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [174] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 248,
        [sym_comment] = 8,
    },
    [175] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 452,
        [sym_comment] = 8,
    },
    [176] = {
        [anon_sym_RBRACK] = 296,
        [sym_comment] = 8,
    },
    [177] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 508,
        [anon_sym_RBRACE] = 510,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [178] = {
        [anon_sym_RBRACE] = 512,
        [sym_comment] = 8,
    },
    [179] = {
        [anon_sym_RBRACK] = 330,
        [sym_comment] = 8,
    },
    [180] = {
        [anon_sym_RBRACK] = 362,
        [sym_comment] = 8,
    },
    [181] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 514,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [182] = {
        [sym__type] = 516,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [183] = {
        [anon_sym_RBRACK] = 424,
        [sym_comment] = 8,
    },
    [184] = {
        [sym__type] = 518,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [185] = {
        [anon_sym_RBRACK] = 442,
        [sym_comment] = 8,
    },
    [186] = {
        [anon_sym_RBRACK] = 444,
        [sym_comment] = 8,
    },
    [187] = {
        [sym__type] = 520,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [sym_identifier] = 116,
        [sym_comment] = 8,
    },
    [188] = {
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
        [anon_sym_type] = 188,
        [sym_comment] = 8,
    },
    [189] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 522,
        [anon_sym_RBRACE] = 524,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [190] = {
        [anon_sym_RBRACE] = 526,
        [sym_comment] = 8,
    },
    [191] = {
        [sym__top_level_declaration] = 202,
        [sym__declaration] = 202,
        [sym_const_declaration] = 202,
        [sym_var_declaration] = 202,
        [sym_function_declaration] = 202,
        [sym_method_declaration] = 202,
        [sym_type_declaration] = 202,
        [aux_sym_source_file_repeat2] = 202,
        [ts_builtin_sym_end] = 202,
        [anon_sym_const] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [192] = {
        [sym__top_level_declaration] = 296,
        [sym__declaration] = 296,
        [sym_const_declaration] = 296,
        [sym_var_declaration] = 296,
        [sym_function_declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_type_declaration] = 296,
        [aux_sym_source_file_repeat2] = 296,
        [ts_builtin_sym_end] = 296,
        [anon_sym_const] = 296,
        [anon_sym_var] = 296,
        [anon_sym_func] = 296,
        [anon_sym_type] = 296,
        [sym_comment] = 8,
    },
    [193] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 528,
        [anon_sym_RBRACE] = 530,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [194] = {
        [anon_sym_RBRACE] = 532,
        [sym_comment] = 8,
    },
    [195] = {
        [sym__top_level_declaration] = 330,
        [sym__declaration] = 330,
        [sym_const_declaration] = 330,
        [sym_var_declaration] = 330,
        [sym_function_declaration] = 330,
        [sym_method_declaration] = 330,
        [sym_type_declaration] = 330,
        [aux_sym_source_file_repeat2] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_const] = 330,
        [anon_sym_var] = 330,
        [anon_sym_func] = 330,
        [anon_sym_type] = 330,
        [sym_comment] = 8,
    },
    [196] = {
        [sym__top_level_declaration] = 362,
        [sym__declaration] = 362,
        [sym_const_declaration] = 362,
        [sym_var_declaration] = 362,
        [sym_function_declaration] = 362,
        [sym_method_declaration] = 362,
        [sym_type_declaration] = 362,
        [aux_sym_source_file_repeat2] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_const] = 362,
        [anon_sym_var] = 362,
        [anon_sym_func] = 362,
        [anon_sym_type] = 362,
        [sym_comment] = 8,
    },
    [197] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 534,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [198] = {
        [sym__type] = 536,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [sym_identifier] = 116,
        [sym_comment] = 8,
    },
    [199] = {
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
    [200] = {
        [sym__type] = 538,
        [sym_pointer_type] = 104,
        [sym_array_type] = 104,
        [sym_slice_type] = 104,
        [sym_struct_type] = 104,
        [sym_interface_type] = 104,
        [sym_map_type] = 104,
        [sym_qualified_identifier] = 104,
        [anon_sym_STAR] = 106,
        [anon_sym_LBRACK] = 108,
        [anon_sym_struct] = 110,
        [anon_sym_interface] = 112,
        [anon_sym_map] = 114,
        [sym_identifier] = 116,
        [sym_comment] = 8,
    },
    [201] = {
        [sym__top_level_declaration] = 442,
        [sym__declaration] = 442,
        [sym_const_declaration] = 442,
        [sym_var_declaration] = 442,
        [sym_function_declaration] = 442,
        [sym_method_declaration] = 442,
        [sym_type_declaration] = 442,
        [aux_sym_source_file_repeat2] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_const] = 442,
        [anon_sym_var] = 442,
        [anon_sym_func] = 442,
        [anon_sym_type] = 442,
        [sym_comment] = 8,
    },
    [202] = {
        [sym__top_level_declaration] = 444,
        [sym__declaration] = 444,
        [sym_const_declaration] = 444,
        [sym_var_declaration] = 444,
        [sym_function_declaration] = 444,
        [sym_method_declaration] = 444,
        [sym_type_declaration] = 444,
        [aux_sym_source_file_repeat2] = 444,
        [ts_builtin_sym_end] = 444,
        [anon_sym_const] = 444,
        [anon_sym_var] = 444,
        [anon_sym_func] = 444,
        [anon_sym_type] = 444,
        [sym_comment] = 8,
    },
    [203] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 540,
        [sym_comment] = 8,
    },
    [204] = {
        [anon_sym_RPAREN] = 542,
        [sym_comment] = 8,
    },
    [205] = {
        [sym__top_level_declaration] = 544,
        [sym__declaration] = 544,
        [sym_const_declaration] = 544,
        [sym_var_declaration] = 544,
        [sym_function_declaration] = 544,
        [sym_method_declaration] = 544,
        [sym_type_declaration] = 544,
        [aux_sym_source_file_repeat2] = 544,
        [ts_builtin_sym_end] = 544,
        [anon_sym_const] = 544,
        [anon_sym_var] = 544,
        [anon_sym_func] = 544,
        [anon_sym_type] = 544,
        [sym_comment] = 8,
    },
    [206] = {
        [sym__type] = 546,
        [sym_pointer_type] = 210,
        [sym_array_type] = 210,
        [sym_slice_type] = 210,
        [sym_struct_type] = 210,
        [sym_interface_type] = 210,
        [sym_map_type] = 210,
        [sym_qualified_identifier] = 210,
        [anon_sym_STAR] = 216,
        [anon_sym_LBRACK] = 218,
        [anon_sym_struct] = 220,
        [anon_sym_interface] = 222,
        [anon_sym_map] = 224,
        [sym_identifier] = 226,
        [sym_comment] = 8,
    },
    [207] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 118,
        [sym_comment] = 8,
    },
    [208] = {
        [sym__top_level_declaration] = 548,
        [sym__declaration] = 548,
        [sym_const_declaration] = 548,
        [sym_var_declaration] = 548,
        [sym_function_declaration] = 548,
        [sym_method_declaration] = 548,
        [sym_type_declaration] = 548,
        [aux_sym_source_file_repeat2] = 548,
        [ts_builtin_sym_end] = 548,
        [anon_sym_const] = 548,
        [anon_sym_var] = 548,
        [anon_sym_func] = 548,
        [anon_sym_type] = 548,
        [sym_comment] = 8,
    },
    [209] = {
        [sym_type_spec] = 94,
        [aux_sym_type_declaration_repeat1] = 550,
        [anon_sym_RPAREN] = 552,
        [sym_identifier] = 100,
        [sym_comment] = 8,
    },
    [210] = {
        [anon_sym_RPAREN] = 554,
        [sym_comment] = 8,
    },
    [211] = {
        [sym_identifier] = 556,
        [sym_comment] = 8,
    },
    [212] = {
        [sym__parameter_list] = 558,
        [sym_parameter_declaration] = 230,
        [anon_sym_RPAREN] = 560,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [213] = {
        [sym_parameters] = 562,
        [anon_sym_LPAREN] = 564,
        [sym_comment] = 8,
    },
    [214] = {
        [sym__top_level_declaration] = 566,
        [sym__declaration] = 566,
        [sym_const_declaration] = 566,
        [sym_var_declaration] = 566,
        [sym_function_declaration] = 566,
        [sym_method_declaration] = 566,
        [sym_parameters] = 568,
        [sym_block] = 570,
        [sym_type_declaration] = 566,
        [sym__type] = 568,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [aux_sym_source_file_repeat2] = 566,
        [ts_builtin_sym_end] = 566,
        [anon_sym_LPAREN] = 574,
        [anon_sym_const] = 566,
        [anon_sym_var] = 566,
        [anon_sym_func] = 566,
        [anon_sym_LBRACE] = 576,
        [anon_sym_type] = 566,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [215] = {
        [sym__parameter_list] = 590,
        [sym_parameter_declaration] = 230,
        [anon_sym_RPAREN] = 592,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [216] = {
        [anon_sym_RPAREN] = 594,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [217] = {
        [sym__top_level_declaration] = 248,
        [sym__declaration] = 248,
        [sym_const_declaration] = 248,
        [sym_var_declaration] = 248,
        [sym_function_declaration] = 248,
        [sym_method_declaration] = 248,
        [sym_parameters] = 248,
        [sym_block] = 248,
        [sym_type_declaration] = 248,
        [sym__type] = 248,
        [sym_pointer_type] = 248,
        [sym_array_type] = 248,
        [sym_slice_type] = 248,
        [sym_struct_type] = 248,
        [sym_interface_type] = 248,
        [sym_map_type] = 248,
        [sym_qualified_identifier] = 248,
        [aux_sym_source_file_repeat2] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_LPAREN] = 248,
        [anon_sym_const] = 248,
        [anon_sym_var] = 248,
        [anon_sym_func] = 248,
        [anon_sym_LBRACE] = 248,
        [anon_sym_type] = 248,
        [anon_sym_STAR] = 248,
        [anon_sym_LBRACK] = 248,
        [anon_sym_struct] = 248,
        [anon_sym_interface] = 248,
        [anon_sym_map] = 248,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [218] = {
        [sym__top_level_declaration] = 452,
        [sym__declaration] = 452,
        [sym_const_declaration] = 452,
        [sym_var_declaration] = 452,
        [sym_function_declaration] = 452,
        [sym_method_declaration] = 452,
        [sym_parameters] = 452,
        [sym_block] = 452,
        [sym_type_declaration] = 452,
        [sym__type] = 452,
        [sym_pointer_type] = 452,
        [sym_array_type] = 452,
        [sym_slice_type] = 452,
        [sym_struct_type] = 452,
        [sym_interface_type] = 452,
        [sym_map_type] = 452,
        [sym_qualified_identifier] = 452,
        [aux_sym_source_file_repeat2] = 452,
        [ts_builtin_sym_end] = 452,
        [anon_sym_LPAREN] = 452,
        [anon_sym_const] = 452,
        [anon_sym_var] = 452,
        [anon_sym_func] = 452,
        [anon_sym_LBRACE] = 452,
        [anon_sym_type] = 452,
        [anon_sym_STAR] = 452,
        [anon_sym_LBRACK] = 452,
        [anon_sym_struct] = 452,
        [anon_sym_interface] = 452,
        [anon_sym_map] = 452,
        [sym_identifier] = 452,
        [sym_comment] = 8,
    },
    [219] = {
        [sym__top_level_declaration] = 596,
        [sym__declaration] = 596,
        [sym_const_declaration] = 596,
        [sym_var_declaration] = 596,
        [sym_function_declaration] = 596,
        [sym_method_declaration] = 596,
        [sym_block] = 598,
        [sym_type_declaration] = 596,
        [aux_sym_source_file_repeat2] = 596,
        [ts_builtin_sym_end] = 596,
        [anon_sym_const] = 596,
        [anon_sym_var] = 596,
        [anon_sym_func] = 596,
        [anon_sym_LBRACE] = 576,
        [anon_sym_type] = 596,
        [sym_comment] = 8,
    },
    [220] = {
        [sym__top_level_declaration] = 596,
        [sym__declaration] = 596,
        [sym_const_declaration] = 596,
        [sym_var_declaration] = 596,
        [sym_function_declaration] = 596,
        [sym_method_declaration] = 596,
        [sym_type_declaration] = 596,
        [aux_sym_source_file_repeat2] = 596,
        [ts_builtin_sym_end] = 596,
        [anon_sym_const] = 596,
        [anon_sym_var] = 596,
        [anon_sym_func] = 596,
        [anon_sym_type] = 596,
        [sym_comment] = 8,
    },
    [221] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_method_declaration] = 120,
        [sym_block] = 120,
        [sym_type_declaration] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_LBRACE] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [222] = {
        [sym__parameter_list] = 600,
        [sym_parameter_declaration] = 230,
        [anon_sym_RPAREN] = 602,
        [sym_identifier] = 234,
        [sym_comment] = 8,
    },
    [223] = {
        [anon_sym_RBRACE] = 604,
        [sym_comment] = 8,
    },
    [224] = {
        [sym__type] = 606,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [225] = {
        [sym__expression] = 608,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 610,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [226] = {
        [anon_sym_LBRACE] = 612,
        [sym_comment] = 8,
    },
    [227] = {
        [anon_sym_LBRACE] = 614,
        [sym_comment] = 8,
    },
    [228] = {
        [anon_sym_LBRACK] = 616,
        [sym_comment] = 8,
    },
    [229] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_method_declaration] = 120,
        [sym_block] = 120,
        [sym_type_declaration] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_DOT] = 618,
        [anon_sym_const] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_LBRACE] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [230] = {
        [sym_identifier] = 620,
        [sym_comment] = 8,
    },
    [231] = {
        [sym__top_level_declaration] = 146,
        [sym__declaration] = 146,
        [sym_const_declaration] = 146,
        [sym_var_declaration] = 146,
        [sym_function_declaration] = 146,
        [sym_method_declaration] = 146,
        [sym_block] = 146,
        [sym_type_declaration] = 146,
        [aux_sym_source_file_repeat2] = 146,
        [ts_builtin_sym_end] = 146,
        [anon_sym_const] = 146,
        [anon_sym_var] = 146,
        [anon_sym_func] = 146,
        [anon_sym_LBRACE] = 146,
        [anon_sym_type] = 146,
        [sym_comment] = 8,
    },
    [232] = {
        [sym__type] = 622,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [233] = {
        [anon_sym_RBRACK] = 624,
        [sym_comment] = 8,
    },
    [234] = {
        [sym__type] = 626,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [235] = {
        [sym__top_level_declaration] = 188,
        [sym__declaration] = 188,
        [sym_const_declaration] = 188,
        [sym_var_declaration] = 188,
        [sym_function_declaration] = 188,
        [sym_method_declaration] = 188,
        [sym_block] = 188,
        [sym_type_declaration] = 188,
        [aux_sym_source_file_repeat2] = 188,
        [ts_builtin_sym_end] = 188,
        [anon_sym_const] = 188,
        [anon_sym_var] = 188,
        [anon_sym_func] = 188,
        [anon_sym_LBRACE] = 188,
        [anon_sym_type] = 188,
        [sym_comment] = 8,
    },
    [236] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 628,
        [anon_sym_RBRACE] = 630,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [237] = {
        [anon_sym_RBRACE] = 632,
        [sym_comment] = 8,
    },
    [238] = {
        [sym__top_level_declaration] = 202,
        [sym__declaration] = 202,
        [sym_const_declaration] = 202,
        [sym_var_declaration] = 202,
        [sym_function_declaration] = 202,
        [sym_method_declaration] = 202,
        [sym_block] = 202,
        [sym_type_declaration] = 202,
        [aux_sym_source_file_repeat2] = 202,
        [ts_builtin_sym_end] = 202,
        [anon_sym_const] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_LBRACE] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [239] = {
        [sym__top_level_declaration] = 296,
        [sym__declaration] = 296,
        [sym_const_declaration] = 296,
        [sym_var_declaration] = 296,
        [sym_function_declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_block] = 296,
        [sym_type_declaration] = 296,
        [aux_sym_source_file_repeat2] = 296,
        [ts_builtin_sym_end] = 296,
        [anon_sym_const] = 296,
        [anon_sym_var] = 296,
        [anon_sym_func] = 296,
        [anon_sym_LBRACE] = 296,
        [anon_sym_type] = 296,
        [sym_comment] = 8,
    },
    [240] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 634,
        [anon_sym_RBRACE] = 636,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [241] = {
        [anon_sym_RBRACE] = 638,
        [sym_comment] = 8,
    },
    [242] = {
        [sym__top_level_declaration] = 330,
        [sym__declaration] = 330,
        [sym_const_declaration] = 330,
        [sym_var_declaration] = 330,
        [sym_function_declaration] = 330,
        [sym_method_declaration] = 330,
        [sym_block] = 330,
        [sym_type_declaration] = 330,
        [aux_sym_source_file_repeat2] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_const] = 330,
        [anon_sym_var] = 330,
        [anon_sym_func] = 330,
        [anon_sym_LBRACE] = 330,
        [anon_sym_type] = 330,
        [sym_comment] = 8,
    },
    [243] = {
        [sym__top_level_declaration] = 362,
        [sym__declaration] = 362,
        [sym_const_declaration] = 362,
        [sym_var_declaration] = 362,
        [sym_function_declaration] = 362,
        [sym_method_declaration] = 362,
        [sym_block] = 362,
        [sym_type_declaration] = 362,
        [aux_sym_source_file_repeat2] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_const] = 362,
        [anon_sym_var] = 362,
        [anon_sym_func] = 362,
        [anon_sym_LBRACE] = 362,
        [anon_sym_type] = 362,
        [sym_comment] = 8,
    },
    [244] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 640,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [245] = {
        [sym__type] = 642,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [246] = {
        [sym__top_level_declaration] = 424,
        [sym__declaration] = 424,
        [sym_const_declaration] = 424,
        [sym_var_declaration] = 424,
        [sym_function_declaration] = 424,
        [sym_method_declaration] = 424,
        [sym_block] = 424,
        [sym_type_declaration] = 424,
        [aux_sym_source_file_repeat2] = 424,
        [ts_builtin_sym_end] = 424,
        [anon_sym_const] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_LBRACE] = 424,
        [anon_sym_type] = 424,
        [sym_comment] = 8,
    },
    [247] = {
        [sym__type] = 644,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [248] = {
        [sym__top_level_declaration] = 442,
        [sym__declaration] = 442,
        [sym_const_declaration] = 442,
        [sym_var_declaration] = 442,
        [sym_function_declaration] = 442,
        [sym_method_declaration] = 442,
        [sym_block] = 442,
        [sym_type_declaration] = 442,
        [aux_sym_source_file_repeat2] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_const] = 442,
        [anon_sym_var] = 442,
        [anon_sym_func] = 442,
        [anon_sym_LBRACE] = 442,
        [anon_sym_type] = 442,
        [sym_comment] = 8,
    },
    [249] = {
        [sym__top_level_declaration] = 444,
        [sym__declaration] = 444,
        [sym_const_declaration] = 444,
        [sym_var_declaration] = 444,
        [sym_function_declaration] = 444,
        [sym_method_declaration] = 444,
        [sym_block] = 444,
        [sym_type_declaration] = 444,
        [aux_sym_source_file_repeat2] = 444,
        [ts_builtin_sym_end] = 444,
        [anon_sym_const] = 444,
        [anon_sym_var] = 444,
        [anon_sym_func] = 444,
        [anon_sym_LBRACE] = 444,
        [anon_sym_type] = 444,
        [sym_comment] = 8,
    },
    [250] = {
        [sym__top_level_declaration] = 646,
        [sym__declaration] = 646,
        [sym_const_declaration] = 646,
        [sym_var_declaration] = 646,
        [sym_function_declaration] = 646,
        [sym_method_declaration] = 646,
        [sym_type_declaration] = 646,
        [aux_sym_source_file_repeat2] = 646,
        [ts_builtin_sym_end] = 646,
        [anon_sym_const] = 646,
        [anon_sym_var] = 646,
        [anon_sym_func] = 646,
        [anon_sym_type] = 646,
        [sym_comment] = 8,
    },
    [251] = {
        [anon_sym_RPAREN] = 648,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [252] = {
        [sym__top_level_declaration] = 248,
        [sym__declaration] = 248,
        [sym_const_declaration] = 248,
        [sym_var_declaration] = 248,
        [sym_function_declaration] = 248,
        [sym_method_declaration] = 248,
        [sym_block] = 248,
        [sym_type_declaration] = 248,
        [aux_sym_source_file_repeat2] = 248,
        [ts_builtin_sym_end] = 248,
        [anon_sym_const] = 248,
        [anon_sym_var] = 248,
        [anon_sym_func] = 248,
        [anon_sym_LBRACE] = 248,
        [anon_sym_type] = 248,
        [sym_comment] = 8,
    },
    [253] = {
        [sym__top_level_declaration] = 452,
        [sym__declaration] = 452,
        [sym_const_declaration] = 452,
        [sym_var_declaration] = 452,
        [sym_function_declaration] = 452,
        [sym_method_declaration] = 452,
        [sym_block] = 452,
        [sym_type_declaration] = 452,
        [aux_sym_source_file_repeat2] = 452,
        [ts_builtin_sym_end] = 452,
        [anon_sym_const] = 452,
        [anon_sym_var] = 452,
        [anon_sym_func] = 452,
        [anon_sym_LBRACE] = 452,
        [anon_sym_type] = 452,
        [sym_comment] = 8,
    },
    [254] = {
        [sym__top_level_declaration] = 650,
        [sym__declaration] = 650,
        [sym_const_declaration] = 650,
        [sym_var_declaration] = 650,
        [sym_function_declaration] = 650,
        [sym_method_declaration] = 650,
        [sym_type_declaration] = 650,
        [aux_sym_source_file_repeat2] = 650,
        [ts_builtin_sym_end] = 650,
        [anon_sym_const] = 650,
        [anon_sym_var] = 650,
        [anon_sym_func] = 650,
        [anon_sym_type] = 650,
        [sym_comment] = 8,
    },
    [255] = {
        [anon_sym_RPAREN] = 652,
        [anon_sym_COMMA] = 244,
        [sym_comment] = 8,
    },
    [256] = {
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [257] = {
        [sym_identifier] = 452,
        [sym_comment] = 8,
    },
    [258] = {
        [sym_parameters] = 654,
        [anon_sym_LPAREN] = 564,
        [sym_comment] = 8,
    },
    [259] = {
        [sym__top_level_declaration] = 656,
        [sym__declaration] = 656,
        [sym_const_declaration] = 656,
        [sym_var_declaration] = 656,
        [sym_function_declaration] = 656,
        [sym_method_declaration] = 656,
        [sym_parameters] = 658,
        [sym_block] = 660,
        [sym_type_declaration] = 656,
        [sym__type] = 658,
        [sym_pointer_type] = 572,
        [sym_array_type] = 572,
        [sym_slice_type] = 572,
        [sym_struct_type] = 572,
        [sym_interface_type] = 572,
        [sym_map_type] = 572,
        [sym_qualified_identifier] = 572,
        [aux_sym_source_file_repeat2] = 656,
        [ts_builtin_sym_end] = 656,
        [anon_sym_LPAREN] = 574,
        [anon_sym_const] = 656,
        [anon_sym_var] = 656,
        [anon_sym_func] = 656,
        [anon_sym_LBRACE] = 576,
        [anon_sym_type] = 656,
        [anon_sym_STAR] = 578,
        [anon_sym_LBRACK] = 580,
        [anon_sym_struct] = 582,
        [anon_sym_interface] = 584,
        [anon_sym_map] = 586,
        [sym_identifier] = 588,
        [sym_comment] = 8,
    },
    [260] = {
        [sym__top_level_declaration] = 662,
        [sym__declaration] = 662,
        [sym_const_declaration] = 662,
        [sym_var_declaration] = 662,
        [sym_function_declaration] = 662,
        [sym_method_declaration] = 662,
        [sym_block] = 664,
        [sym_type_declaration] = 662,
        [aux_sym_source_file_repeat2] = 662,
        [ts_builtin_sym_end] = 662,
        [anon_sym_const] = 662,
        [anon_sym_var] = 662,
        [anon_sym_func] = 662,
        [anon_sym_LBRACE] = 576,
        [anon_sym_type] = 662,
        [sym_comment] = 8,
    },
    [261] = {
        [sym__top_level_declaration] = 662,
        [sym__declaration] = 662,
        [sym_const_declaration] = 662,
        [sym_var_declaration] = 662,
        [sym_function_declaration] = 662,
        [sym_method_declaration] = 662,
        [sym_type_declaration] = 662,
        [aux_sym_source_file_repeat2] = 662,
        [ts_builtin_sym_end] = 662,
        [anon_sym_const] = 662,
        [anon_sym_var] = 662,
        [anon_sym_func] = 662,
        [anon_sym_type] = 662,
        [sym_comment] = 8,
    },
    [262] = {
        [sym__top_level_declaration] = 666,
        [sym__declaration] = 666,
        [sym_const_declaration] = 666,
        [sym_var_declaration] = 666,
        [sym_function_declaration] = 666,
        [sym_method_declaration] = 666,
        [sym_type_declaration] = 666,
        [aux_sym_source_file_repeat2] = 666,
        [ts_builtin_sym_end] = 666,
        [anon_sym_const] = 666,
        [anon_sym_var] = 666,
        [anon_sym_func] = 666,
        [anon_sym_type] = 666,
        [sym_comment] = 8,
    },
    [263] = {
        [sym__top_level_declaration] = 668,
        [sym__declaration] = 668,
        [sym_const_declaration] = 668,
        [sym_var_declaration] = 668,
        [sym_function_declaration] = 668,
        [sym_method_declaration] = 668,
        [sym_type_declaration] = 668,
        [aux_sym_source_file_repeat2] = 668,
        [ts_builtin_sym_end] = 668,
        [anon_sym_const] = 668,
        [anon_sym_var] = 668,
        [anon_sym_func] = 668,
        [anon_sym_type] = 668,
        [sym_comment] = 8,
    },
    [264] = {
        [sym__type] = 670,
        [sym_pointer_type] = 672,
        [sym_array_type] = 672,
        [sym_slice_type] = 672,
        [sym_struct_type] = 672,
        [sym_interface_type] = 672,
        [sym_map_type] = 672,
        [sym_qualified_identifier] = 672,
        [anon_sym_EQ] = 674,
        [anon_sym_STAR] = 676,
        [anon_sym_LBRACK] = 678,
        [anon_sym_struct] = 680,
        [anon_sym_interface] = 682,
        [anon_sym_map] = 684,
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [265] = {
        [sym_var_spec] = 688,
        [sym_identifier_list] = 690,
        [aux_sym_var_declaration_repeat1] = 692,
        [anon_sym_RPAREN] = 694,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [266] = {
        [sym__type] = 332,
        [sym_pointer_type] = 332,
        [sym_array_type] = 332,
        [sym_slice_type] = 332,
        [sym_struct_type] = 332,
        [sym_interface_type] = 332,
        [sym_map_type] = 332,
        [sym_qualified_identifier] = 332,
        [aux_sym_identifier_list_repeat1] = 696,
        [anon_sym_EQ] = 332,
        [anon_sym_COMMA] = 698,
        [anon_sym_STAR] = 332,
        [anon_sym_LBRACK] = 332,
        [anon_sym_struct] = 332,
        [anon_sym_interface] = 332,
        [anon_sym_map] = 332,
        [sym_identifier] = 332,
        [sym_comment] = 8,
    },
    [267] = {
        [sym__type] = 346,
        [sym_pointer_type] = 346,
        [sym_array_type] = 346,
        [sym_slice_type] = 346,
        [sym_struct_type] = 346,
        [sym_interface_type] = 346,
        [sym_map_type] = 346,
        [sym_qualified_identifier] = 346,
        [anon_sym_EQ] = 346,
        [anon_sym_STAR] = 346,
        [anon_sym_LBRACK] = 346,
        [anon_sym_struct] = 346,
        [anon_sym_interface] = 346,
        [anon_sym_map] = 346,
        [sym_identifier] = 346,
        [sym_comment] = 8,
    },
    [268] = {
        [sym_identifier] = 700,
        [sym_comment] = 8,
    },
    [269] = {
        [sym__type] = 352,
        [sym_pointer_type] = 352,
        [sym_array_type] = 352,
        [sym_slice_type] = 352,
        [sym_struct_type] = 352,
        [sym_interface_type] = 352,
        [sym_map_type] = 352,
        [sym_qualified_identifier] = 352,
        [aux_sym_identifier_list_repeat1] = 702,
        [anon_sym_EQ] = 352,
        [anon_sym_COMMA] = 698,
        [anon_sym_STAR] = 352,
        [anon_sym_LBRACK] = 352,
        [anon_sym_struct] = 352,
        [anon_sym_interface] = 352,
        [anon_sym_map] = 352,
        [sym_identifier] = 352,
        [sym_comment] = 8,
    },
    [270] = {
        [sym__type] = 356,
        [sym_pointer_type] = 356,
        [sym_array_type] = 356,
        [sym_slice_type] = 356,
        [sym_struct_type] = 356,
        [sym_interface_type] = 356,
        [sym_map_type] = 356,
        [sym_qualified_identifier] = 356,
        [anon_sym_EQ] = 356,
        [anon_sym_STAR] = 356,
        [anon_sym_LBRACK] = 356,
        [anon_sym_struct] = 356,
        [anon_sym_interface] = 356,
        [anon_sym_map] = 356,
        [sym_identifier] = 356,
        [sym_comment] = 8,
    },
    [271] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 704,
        [sym_comment] = 8,
    },
    [272] = {
        [sym__type] = 706,
        [sym_pointer_type] = 708,
        [sym_array_type] = 708,
        [sym_slice_type] = 708,
        [sym_struct_type] = 708,
        [sym_interface_type] = 708,
        [sym_map_type] = 708,
        [sym_qualified_identifier] = 708,
        [anon_sym_EQ] = 710,
        [anon_sym_STAR] = 712,
        [anon_sym_LBRACK] = 714,
        [anon_sym_struct] = 716,
        [anon_sym_interface] = 718,
        [anon_sym_map] = 720,
        [sym_identifier] = 722,
        [sym_comment] = 8,
    },
    [273] = {
        [anon_sym_RPAREN] = 724,
        [sym_comment] = 8,
    },
    [274] = {
        [sym__top_level_declaration] = 726,
        [sym__declaration] = 726,
        [sym_const_declaration] = 726,
        [sym_var_declaration] = 726,
        [sym_function_declaration] = 726,
        [sym_method_declaration] = 726,
        [sym_type_declaration] = 726,
        [aux_sym_source_file_repeat2] = 726,
        [ts_builtin_sym_end] = 726,
        [anon_sym_const] = 726,
        [anon_sym_var] = 726,
        [anon_sym_func] = 726,
        [anon_sym_type] = 726,
        [sym_comment] = 8,
    },
    [275] = {
        [sym__top_level_declaration] = 728,
        [sym__declaration] = 728,
        [sym_const_declaration] = 728,
        [sym_var_declaration] = 728,
        [sym_function_declaration] = 728,
        [sym_method_declaration] = 728,
        [sym_type_declaration] = 728,
        [aux_sym_source_file_repeat2] = 728,
        [ts_builtin_sym_end] = 728,
        [anon_sym_const] = 728,
        [anon_sym_var] = 728,
        [anon_sym_func] = 728,
        [anon_sym_type] = 728,
        [sym_comment] = 8,
    },
    [276] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 730,
        [anon_sym_EQ] = 732,
        [sym_comment] = 8,
    },
    [277] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [anon_sym_EQ] = 120,
        [sym_comment] = 8,
    },
    [278] = {
        [sym_expression_list] = 734,
        [sym__expression] = 736,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [279] = {
        [sym__type] = 746,
        [sym_pointer_type] = 708,
        [sym_array_type] = 708,
        [sym_slice_type] = 708,
        [sym_struct_type] = 708,
        [sym_interface_type] = 708,
        [sym_map_type] = 708,
        [sym_qualified_identifier] = 708,
        [anon_sym_STAR] = 712,
        [anon_sym_LBRACK] = 714,
        [anon_sym_struct] = 716,
        [anon_sym_interface] = 718,
        [anon_sym_map] = 720,
        [sym_identifier] = 722,
        [sym_comment] = 8,
    },
    [280] = {
        [sym__expression] = 748,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 750,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [281] = {
        [anon_sym_LBRACE] = 752,
        [sym_comment] = 8,
    },
    [282] = {
        [anon_sym_LBRACE] = 754,
        [sym_comment] = 8,
    },
    [283] = {
        [anon_sym_LBRACK] = 756,
        [sym_comment] = 8,
    },
    [284] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 120,
        [anon_sym_DOT] = 758,
        [anon_sym_EQ] = 120,
        [sym_comment] = 8,
    },
    [285] = {
        [sym_identifier] = 760,
        [sym_comment] = 8,
    },
    [286] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 146,
        [anon_sym_EQ] = 146,
        [sym_comment] = 8,
    },
    [287] = {
        [sym__type] = 762,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [288] = {
        [anon_sym_RBRACK] = 764,
        [sym_comment] = 8,
    },
    [289] = {
        [sym__type] = 766,
        [sym_pointer_type] = 708,
        [sym_array_type] = 708,
        [sym_slice_type] = 708,
        [sym_struct_type] = 708,
        [sym_interface_type] = 708,
        [sym_map_type] = 708,
        [sym_qualified_identifier] = 708,
        [anon_sym_STAR] = 712,
        [anon_sym_LBRACK] = 714,
        [anon_sym_struct] = 716,
        [anon_sym_interface] = 718,
        [anon_sym_map] = 720,
        [sym_identifier] = 722,
        [sym_comment] = 8,
    },
    [290] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 188,
        [anon_sym_EQ] = 188,
        [sym_comment] = 8,
    },
    [291] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 768,
        [anon_sym_RBRACE] = 770,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [292] = {
        [anon_sym_RBRACE] = 772,
        [sym_comment] = 8,
    },
    [293] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 202,
        [anon_sym_EQ] = 202,
        [sym_comment] = 8,
    },
    [294] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 296,
        [anon_sym_EQ] = 296,
        [sym_comment] = 8,
    },
    [295] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 774,
        [anon_sym_RBRACE] = 776,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [296] = {
        [anon_sym_RBRACE] = 778,
        [sym_comment] = 8,
    },
    [297] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 330,
        [anon_sym_EQ] = 330,
        [sym_comment] = 8,
    },
    [298] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 362,
        [anon_sym_EQ] = 362,
        [sym_comment] = 8,
    },
    [299] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 780,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [300] = {
        [sym__type] = 782,
        [sym_pointer_type] = 708,
        [sym_array_type] = 708,
        [sym_slice_type] = 708,
        [sym_struct_type] = 708,
        [sym_interface_type] = 708,
        [sym_map_type] = 708,
        [sym_qualified_identifier] = 708,
        [anon_sym_STAR] = 712,
        [anon_sym_LBRACK] = 714,
        [anon_sym_struct] = 716,
        [anon_sym_interface] = 718,
        [anon_sym_map] = 720,
        [sym_identifier] = 722,
        [sym_comment] = 8,
    },
    [301] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 424,
        [anon_sym_EQ] = 424,
        [sym_comment] = 8,
    },
    [302] = {
        [sym__type] = 784,
        [sym_pointer_type] = 708,
        [sym_array_type] = 708,
        [sym_slice_type] = 708,
        [sym_struct_type] = 708,
        [sym_interface_type] = 708,
        [sym_map_type] = 708,
        [sym_qualified_identifier] = 708,
        [anon_sym_STAR] = 712,
        [anon_sym_LBRACK] = 714,
        [anon_sym_struct] = 716,
        [anon_sym_interface] = 718,
        [anon_sym_map] = 720,
        [sym_identifier] = 722,
        [sym_comment] = 8,
    },
    [303] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 442,
        [anon_sym_EQ] = 442,
        [sym_comment] = 8,
    },
    [304] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 444,
        [anon_sym_EQ] = 444,
        [sym_comment] = 8,
    },
    [305] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 786,
        [sym_comment] = 8,
    },
    [306] = {
        [aux_sym_expression_list_repeat1] = 788,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 790,
        [anon_sym_COMMA] = 792,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 796,
        [anon_sym_DASH] = 796,
        [anon_sym_PIPE] = 796,
        [anon_sym_CARET] = 796,
        [anon_sym_EQ_EQ] = 798,
        [anon_sym_BANG_EQ] = 798,
        [anon_sym_LT] = 798,
        [anon_sym_LT_EQ] = 798,
        [anon_sym_GT] = 798,
        [anon_sym_GT_EQ] = 798,
        [anon_sym_AMP_AMP] = 800,
        [anon_sym_PIPE_PIPE] = 802,
        [sym_comment] = 8,
    },
    [307] = {
        [aux_sym_expression_list_repeat1] = 416,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [308] = {
        [aux_sym_expression_list_repeat1] = 418,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 418,
        [anon_sym_COMMA] = 418,
        [anon_sym_STAR] = 418,
        [anon_sym_SLASH] = 418,
        [anon_sym_PERCENT] = 418,
        [anon_sym_LT_LT] = 418,
        [anon_sym_GT_GT] = 418,
        [anon_sym_AMP] = 418,
        [anon_sym_AMP_CARET] = 418,
        [anon_sym_PLUS] = 418,
        [anon_sym_DASH] = 418,
        [anon_sym_PIPE] = 418,
        [anon_sym_CARET] = 418,
        [anon_sym_EQ_EQ] = 418,
        [anon_sym_BANG_EQ] = 418,
        [anon_sym_LT] = 418,
        [anon_sym_LT_EQ] = 418,
        [anon_sym_GT] = 418,
        [anon_sym_GT_EQ] = 418,
        [anon_sym_AMP_AMP] = 418,
        [anon_sym_PIPE_PIPE] = 418,
        [sym_comment] = 8,
    },
    [309] = {
        [aux_sym_expression_list_repeat1] = 350,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 350,
        [anon_sym_COMMA] = 350,
        [anon_sym_STAR] = 350,
        [anon_sym_SLASH] = 350,
        [anon_sym_PERCENT] = 350,
        [anon_sym_LT_LT] = 350,
        [anon_sym_GT_GT] = 350,
        [anon_sym_AMP] = 350,
        [anon_sym_AMP_CARET] = 350,
        [anon_sym_PLUS] = 350,
        [anon_sym_DASH] = 350,
        [anon_sym_PIPE] = 350,
        [anon_sym_CARET] = 350,
        [anon_sym_EQ_EQ] = 350,
        [anon_sym_BANG_EQ] = 350,
        [anon_sym_LT] = 350,
        [anon_sym_LT_EQ] = 350,
        [anon_sym_GT] = 350,
        [anon_sym_GT_EQ] = 350,
        [anon_sym_AMP_AMP] = 350,
        [anon_sym_PIPE_PIPE] = 350,
        [sym_comment] = 8,
    },
    [310] = {
        [aux_sym_expression_list_repeat1] = 422,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 422,
        [anon_sym_COMMA] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [311] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 804,
        [sym_comment] = 8,
    },
    [312] = {
        [sym__expression] = 806,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [313] = {
        [sym__expression] = 808,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [314] = {
        [sym__expression] = 810,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [315] = {
        [sym__expression] = 812,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [316] = {
        [sym__expression] = 814,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [317] = {
        [sym__expression] = 816,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [318] = {
        [aux_sym_expression_list_repeat1] = 438,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 796,
        [anon_sym_DASH] = 796,
        [anon_sym_PIPE] = 796,
        [anon_sym_CARET] = 796,
        [anon_sym_EQ_EQ] = 798,
        [anon_sym_BANG_EQ] = 798,
        [anon_sym_LT] = 798,
        [anon_sym_LT_EQ] = 798,
        [anon_sym_GT] = 798,
        [anon_sym_GT_EQ] = 798,
        [anon_sym_AMP_AMP] = 800,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [319] = {
        [aux_sym_expression_list_repeat1] = 438,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 796,
        [anon_sym_DASH] = 796,
        [anon_sym_PIPE] = 796,
        [anon_sym_CARET] = 796,
        [anon_sym_EQ_EQ] = 798,
        [anon_sym_BANG_EQ] = 798,
        [anon_sym_LT] = 798,
        [anon_sym_LT_EQ] = 798,
        [anon_sym_GT] = 798,
        [anon_sym_GT_EQ] = 798,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [320] = {
        [aux_sym_expression_list_repeat1] = 438,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 796,
        [anon_sym_DASH] = 796,
        [anon_sym_PIPE] = 796,
        [anon_sym_CARET] = 796,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [321] = {
        [aux_sym_expression_list_repeat1] = 438,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 438,
        [anon_sym_DASH] = 438,
        [anon_sym_PIPE] = 438,
        [anon_sym_CARET] = 438,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [322] = {
        [aux_sym_expression_list_repeat1] = 440,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 440,
        [anon_sym_COMMA] = 440,
        [anon_sym_STAR] = 440,
        [anon_sym_SLASH] = 440,
        [anon_sym_PERCENT] = 440,
        [anon_sym_LT_LT] = 440,
        [anon_sym_GT_GT] = 440,
        [anon_sym_AMP] = 440,
        [anon_sym_AMP_CARET] = 440,
        [anon_sym_PLUS] = 440,
        [anon_sym_DASH] = 440,
        [anon_sym_PIPE] = 440,
        [anon_sym_CARET] = 440,
        [anon_sym_EQ_EQ] = 440,
        [anon_sym_BANG_EQ] = 440,
        [anon_sym_LT] = 440,
        [anon_sym_LT_EQ] = 440,
        [anon_sym_GT] = 440,
        [anon_sym_GT_EQ] = 440,
        [anon_sym_AMP_AMP] = 440,
        [anon_sym_PIPE_PIPE] = 440,
        [sym_comment] = 8,
    },
    [323] = {
        [aux_sym_expression_list_repeat1] = 818,
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 820,
        [anon_sym_COMMA] = 792,
        [anon_sym_STAR] = 794,
        [anon_sym_SLASH] = 794,
        [anon_sym_PERCENT] = 794,
        [anon_sym_LT_LT] = 794,
        [anon_sym_GT_GT] = 794,
        [anon_sym_AMP] = 794,
        [anon_sym_AMP_CARET] = 794,
        [anon_sym_PLUS] = 796,
        [anon_sym_DASH] = 796,
        [anon_sym_PIPE] = 796,
        [anon_sym_CARET] = 796,
        [anon_sym_EQ_EQ] = 798,
        [anon_sym_BANG_EQ] = 798,
        [anon_sym_LT] = 798,
        [anon_sym_LT_EQ] = 798,
        [anon_sym_GT] = 798,
        [anon_sym_GT_EQ] = 798,
        [anon_sym_AMP_AMP] = 800,
        [anon_sym_PIPE_PIPE] = 802,
        [sym_comment] = 8,
    },
    [324] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 822,
        [sym_comment] = 8,
    },
    [325] = {
        [sym_expression_list] = 824,
        [sym__expression] = 736,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [326] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 826,
        [sym_comment] = 8,
    },
    [327] = {
        [sym_var_spec] = 688,
        [sym_identifier_list] = 690,
        [aux_sym_var_declaration_repeat1] = 828,
        [anon_sym_RPAREN] = 830,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [328] = {
        [anon_sym_RPAREN] = 832,
        [sym_comment] = 8,
    },
    [329] = {
        [sym__top_level_declaration] = 730,
        [sym__declaration] = 730,
        [sym_const_declaration] = 730,
        [sym_var_declaration] = 730,
        [sym_function_declaration] = 730,
        [sym_method_declaration] = 730,
        [sym_type_declaration] = 730,
        [aux_sym_source_file_repeat2] = 730,
        [ts_builtin_sym_end] = 730,
        [anon_sym_const] = 730,
        [anon_sym_EQ] = 834,
        [anon_sym_var] = 730,
        [anon_sym_func] = 730,
        [anon_sym_type] = 730,
        [sym_comment] = 8,
    },
    [330] = {
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
        [anon_sym_EQ] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [331] = {
        [sym_expression_list] = 836,
        [sym__expression] = 838,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [332] = {
        [sym__type] = 848,
        [sym_pointer_type] = 672,
        [sym_array_type] = 672,
        [sym_slice_type] = 672,
        [sym_struct_type] = 672,
        [sym_interface_type] = 672,
        [sym_map_type] = 672,
        [sym_qualified_identifier] = 672,
        [anon_sym_STAR] = 676,
        [anon_sym_LBRACK] = 678,
        [anon_sym_struct] = 680,
        [anon_sym_interface] = 682,
        [anon_sym_map] = 684,
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [333] = {
        [sym__expression] = 850,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 852,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [334] = {
        [anon_sym_LBRACE] = 854,
        [sym_comment] = 8,
    },
    [335] = {
        [anon_sym_LBRACE] = 856,
        [sym_comment] = 8,
    },
    [336] = {
        [anon_sym_LBRACK] = 858,
        [sym_comment] = 8,
    },
    [337] = {
        [sym__top_level_declaration] = 120,
        [sym__declaration] = 120,
        [sym_const_declaration] = 120,
        [sym_var_declaration] = 120,
        [sym_function_declaration] = 120,
        [sym_method_declaration] = 120,
        [sym_type_declaration] = 120,
        [aux_sym_source_file_repeat2] = 120,
        [ts_builtin_sym_end] = 120,
        [anon_sym_DOT] = 860,
        [anon_sym_const] = 120,
        [anon_sym_EQ] = 120,
        [anon_sym_var] = 120,
        [anon_sym_func] = 120,
        [anon_sym_type] = 120,
        [sym_comment] = 8,
    },
    [338] = {
        [sym_identifier] = 862,
        [sym_comment] = 8,
    },
    [339] = {
        [sym__top_level_declaration] = 146,
        [sym__declaration] = 146,
        [sym_const_declaration] = 146,
        [sym_var_declaration] = 146,
        [sym_function_declaration] = 146,
        [sym_method_declaration] = 146,
        [sym_type_declaration] = 146,
        [aux_sym_source_file_repeat2] = 146,
        [ts_builtin_sym_end] = 146,
        [anon_sym_const] = 146,
        [anon_sym_EQ] = 146,
        [anon_sym_var] = 146,
        [anon_sym_func] = 146,
        [anon_sym_type] = 146,
        [sym_comment] = 8,
    },
    [340] = {
        [sym__type] = 864,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [341] = {
        [anon_sym_RBRACK] = 866,
        [sym_comment] = 8,
    },
    [342] = {
        [sym__type] = 868,
        [sym_pointer_type] = 672,
        [sym_array_type] = 672,
        [sym_slice_type] = 672,
        [sym_struct_type] = 672,
        [sym_interface_type] = 672,
        [sym_map_type] = 672,
        [sym_qualified_identifier] = 672,
        [anon_sym_STAR] = 676,
        [anon_sym_LBRACK] = 678,
        [anon_sym_struct] = 680,
        [anon_sym_interface] = 682,
        [anon_sym_map] = 684,
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [343] = {
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
        [anon_sym_EQ] = 188,
        [anon_sym_var] = 188,
        [anon_sym_func] = 188,
        [anon_sym_type] = 188,
        [sym_comment] = 8,
    },
    [344] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 870,
        [anon_sym_RBRACE] = 872,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [345] = {
        [anon_sym_RBRACE] = 874,
        [sym_comment] = 8,
    },
    [346] = {
        [sym__top_level_declaration] = 202,
        [sym__declaration] = 202,
        [sym_const_declaration] = 202,
        [sym_var_declaration] = 202,
        [sym_function_declaration] = 202,
        [sym_method_declaration] = 202,
        [sym_type_declaration] = 202,
        [aux_sym_source_file_repeat2] = 202,
        [ts_builtin_sym_end] = 202,
        [anon_sym_const] = 202,
        [anon_sym_EQ] = 202,
        [anon_sym_var] = 202,
        [anon_sym_func] = 202,
        [anon_sym_type] = 202,
        [sym_comment] = 8,
    },
    [347] = {
        [sym__top_level_declaration] = 296,
        [sym__declaration] = 296,
        [sym_const_declaration] = 296,
        [sym_var_declaration] = 296,
        [sym_function_declaration] = 296,
        [sym_method_declaration] = 296,
        [sym_type_declaration] = 296,
        [aux_sym_source_file_repeat2] = 296,
        [ts_builtin_sym_end] = 296,
        [anon_sym_const] = 296,
        [anon_sym_EQ] = 296,
        [anon_sym_var] = 296,
        [anon_sym_func] = 296,
        [anon_sym_type] = 296,
        [sym_comment] = 8,
    },
    [348] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 876,
        [anon_sym_RBRACE] = 878,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [349] = {
        [anon_sym_RBRACE] = 880,
        [sym_comment] = 8,
    },
    [350] = {
        [sym__top_level_declaration] = 330,
        [sym__declaration] = 330,
        [sym_const_declaration] = 330,
        [sym_var_declaration] = 330,
        [sym_function_declaration] = 330,
        [sym_method_declaration] = 330,
        [sym_type_declaration] = 330,
        [aux_sym_source_file_repeat2] = 330,
        [ts_builtin_sym_end] = 330,
        [anon_sym_const] = 330,
        [anon_sym_EQ] = 330,
        [anon_sym_var] = 330,
        [anon_sym_func] = 330,
        [anon_sym_type] = 330,
        [sym_comment] = 8,
    },
    [351] = {
        [sym__top_level_declaration] = 362,
        [sym__declaration] = 362,
        [sym_const_declaration] = 362,
        [sym_var_declaration] = 362,
        [sym_function_declaration] = 362,
        [sym_method_declaration] = 362,
        [sym_type_declaration] = 362,
        [aux_sym_source_file_repeat2] = 362,
        [ts_builtin_sym_end] = 362,
        [anon_sym_const] = 362,
        [anon_sym_EQ] = 362,
        [anon_sym_var] = 362,
        [anon_sym_func] = 362,
        [anon_sym_type] = 362,
        [sym_comment] = 8,
    },
    [352] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 882,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [353] = {
        [sym__type] = 884,
        [sym_pointer_type] = 672,
        [sym_array_type] = 672,
        [sym_slice_type] = 672,
        [sym_struct_type] = 672,
        [sym_interface_type] = 672,
        [sym_map_type] = 672,
        [sym_qualified_identifier] = 672,
        [anon_sym_STAR] = 676,
        [anon_sym_LBRACK] = 678,
        [anon_sym_struct] = 680,
        [anon_sym_interface] = 682,
        [anon_sym_map] = 684,
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [354] = {
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
        [anon_sym_EQ] = 424,
        [anon_sym_var] = 424,
        [anon_sym_func] = 424,
        [anon_sym_type] = 424,
        [sym_comment] = 8,
    },
    [355] = {
        [sym__type] = 886,
        [sym_pointer_type] = 672,
        [sym_array_type] = 672,
        [sym_slice_type] = 672,
        [sym_struct_type] = 672,
        [sym_interface_type] = 672,
        [sym_map_type] = 672,
        [sym_qualified_identifier] = 672,
        [anon_sym_STAR] = 676,
        [anon_sym_LBRACK] = 678,
        [anon_sym_struct] = 680,
        [anon_sym_interface] = 682,
        [anon_sym_map] = 684,
        [sym_identifier] = 686,
        [sym_comment] = 8,
    },
    [356] = {
        [sym__top_level_declaration] = 442,
        [sym__declaration] = 442,
        [sym_const_declaration] = 442,
        [sym_var_declaration] = 442,
        [sym_function_declaration] = 442,
        [sym_method_declaration] = 442,
        [sym_type_declaration] = 442,
        [aux_sym_source_file_repeat2] = 442,
        [ts_builtin_sym_end] = 442,
        [anon_sym_const] = 442,
        [anon_sym_EQ] = 442,
        [anon_sym_var] = 442,
        [anon_sym_func] = 442,
        [anon_sym_type] = 442,
        [sym_comment] = 8,
    },
    [357] = {
        [sym__top_level_declaration] = 444,
        [sym__declaration] = 444,
        [sym_const_declaration] = 444,
        [sym_var_declaration] = 444,
        [sym_function_declaration] = 444,
        [sym_method_declaration] = 444,
        [sym_type_declaration] = 444,
        [aux_sym_source_file_repeat2] = 444,
        [ts_builtin_sym_end] = 444,
        [anon_sym_const] = 444,
        [anon_sym_EQ] = 444,
        [anon_sym_var] = 444,
        [anon_sym_func] = 444,
        [anon_sym_type] = 444,
        [sym_comment] = 8,
    },
    [358] = {
        [sym__top_level_declaration] = 786,
        [sym__declaration] = 786,
        [sym_const_declaration] = 786,
        [sym_var_declaration] = 786,
        [sym_function_declaration] = 786,
        [sym_method_declaration] = 786,
        [sym_type_declaration] = 786,
        [aux_sym_source_file_repeat2] = 786,
        [ts_builtin_sym_end] = 786,
        [anon_sym_const] = 786,
        [anon_sym_var] = 786,
        [anon_sym_func] = 786,
        [anon_sym_type] = 786,
        [sym_comment] = 8,
    },
    [359] = {
        [sym__top_level_declaration] = 790,
        [sym__declaration] = 790,
        [sym_const_declaration] = 790,
        [sym_var_declaration] = 790,
        [sym_function_declaration] = 790,
        [sym_method_declaration] = 790,
        [sym_type_declaration] = 790,
        [aux_sym_source_file_repeat2] = 790,
        [aux_sym_expression_list_repeat1] = 888,
        [ts_builtin_sym_end] = 790,
        [anon_sym_const] = 790,
        [anon_sym_var] = 790,
        [anon_sym_func] = 790,
        [anon_sym_COMMA] = 890,
        [anon_sym_type] = 790,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 894,
        [anon_sym_DASH] = 894,
        [anon_sym_PIPE] = 894,
        [anon_sym_CARET] = 894,
        [anon_sym_EQ_EQ] = 896,
        [anon_sym_BANG_EQ] = 896,
        [anon_sym_LT] = 896,
        [anon_sym_LT_EQ] = 896,
        [anon_sym_GT] = 896,
        [anon_sym_GT_EQ] = 896,
        [anon_sym_AMP_AMP] = 898,
        [anon_sym_PIPE_PIPE] = 900,
        [sym_comment] = 8,
    },
    [360] = {
        [sym__top_level_declaration] = 416,
        [sym__declaration] = 416,
        [sym_const_declaration] = 416,
        [sym_var_declaration] = 416,
        [sym_function_declaration] = 416,
        [sym_method_declaration] = 416,
        [sym_type_declaration] = 416,
        [aux_sym_source_file_repeat2] = 416,
        [aux_sym_expression_list_repeat1] = 416,
        [ts_builtin_sym_end] = 416,
        [anon_sym_const] = 416,
        [anon_sym_var] = 416,
        [anon_sym_func] = 416,
        [anon_sym_COMMA] = 416,
        [anon_sym_type] = 416,
        [anon_sym_STAR] = 416,
        [anon_sym_SLASH] = 416,
        [anon_sym_PERCENT] = 416,
        [anon_sym_LT_LT] = 416,
        [anon_sym_GT_GT] = 416,
        [anon_sym_AMP] = 416,
        [anon_sym_AMP_CARET] = 416,
        [anon_sym_PLUS] = 416,
        [anon_sym_DASH] = 416,
        [anon_sym_PIPE] = 416,
        [anon_sym_CARET] = 416,
        [anon_sym_EQ_EQ] = 416,
        [anon_sym_BANG_EQ] = 416,
        [anon_sym_LT] = 416,
        [anon_sym_LT_EQ] = 416,
        [anon_sym_GT] = 416,
        [anon_sym_GT_EQ] = 416,
        [anon_sym_AMP_AMP] = 416,
        [anon_sym_PIPE_PIPE] = 416,
        [sym_comment] = 8,
    },
    [361] = {
        [sym__top_level_declaration] = 418,
        [sym__declaration] = 418,
        [sym_const_declaration] = 418,
        [sym_var_declaration] = 418,
        [sym_function_declaration] = 418,
        [sym_method_declaration] = 418,
        [sym_type_declaration] = 418,
        [aux_sym_source_file_repeat2] = 418,
        [aux_sym_expression_list_repeat1] = 418,
        [ts_builtin_sym_end] = 418,
        [anon_sym_const] = 418,
        [anon_sym_var] = 418,
        [anon_sym_func] = 418,
        [anon_sym_COMMA] = 418,
        [anon_sym_type] = 418,
        [anon_sym_STAR] = 418,
        [anon_sym_SLASH] = 418,
        [anon_sym_PERCENT] = 418,
        [anon_sym_LT_LT] = 418,
        [anon_sym_GT_GT] = 418,
        [anon_sym_AMP] = 418,
        [anon_sym_AMP_CARET] = 418,
        [anon_sym_PLUS] = 418,
        [anon_sym_DASH] = 418,
        [anon_sym_PIPE] = 418,
        [anon_sym_CARET] = 418,
        [anon_sym_EQ_EQ] = 418,
        [anon_sym_BANG_EQ] = 418,
        [anon_sym_LT] = 418,
        [anon_sym_LT_EQ] = 418,
        [anon_sym_GT] = 418,
        [anon_sym_GT_EQ] = 418,
        [anon_sym_AMP_AMP] = 418,
        [anon_sym_PIPE_PIPE] = 418,
        [sym_comment] = 8,
    },
    [362] = {
        [sym__top_level_declaration] = 350,
        [sym__declaration] = 350,
        [sym_const_declaration] = 350,
        [sym_var_declaration] = 350,
        [sym_function_declaration] = 350,
        [sym_method_declaration] = 350,
        [sym_type_declaration] = 350,
        [aux_sym_source_file_repeat2] = 350,
        [aux_sym_expression_list_repeat1] = 350,
        [ts_builtin_sym_end] = 350,
        [anon_sym_const] = 350,
        [anon_sym_var] = 350,
        [anon_sym_func] = 350,
        [anon_sym_COMMA] = 350,
        [anon_sym_type] = 350,
        [anon_sym_STAR] = 350,
        [anon_sym_SLASH] = 350,
        [anon_sym_PERCENT] = 350,
        [anon_sym_LT_LT] = 350,
        [anon_sym_GT_GT] = 350,
        [anon_sym_AMP] = 350,
        [anon_sym_AMP_CARET] = 350,
        [anon_sym_PLUS] = 350,
        [anon_sym_DASH] = 350,
        [anon_sym_PIPE] = 350,
        [anon_sym_CARET] = 350,
        [anon_sym_EQ_EQ] = 350,
        [anon_sym_BANG_EQ] = 350,
        [anon_sym_LT] = 350,
        [anon_sym_LT_EQ] = 350,
        [anon_sym_GT] = 350,
        [anon_sym_GT_EQ] = 350,
        [anon_sym_AMP_AMP] = 350,
        [anon_sym_PIPE_PIPE] = 350,
        [sym_comment] = 8,
    },
    [363] = {
        [sym__top_level_declaration] = 422,
        [sym__declaration] = 422,
        [sym_const_declaration] = 422,
        [sym_var_declaration] = 422,
        [sym_function_declaration] = 422,
        [sym_method_declaration] = 422,
        [sym_type_declaration] = 422,
        [aux_sym_source_file_repeat2] = 422,
        [aux_sym_expression_list_repeat1] = 422,
        [ts_builtin_sym_end] = 422,
        [anon_sym_const] = 422,
        [anon_sym_var] = 422,
        [anon_sym_func] = 422,
        [anon_sym_COMMA] = 422,
        [anon_sym_type] = 422,
        [anon_sym_STAR] = 422,
        [anon_sym_SLASH] = 422,
        [anon_sym_PERCENT] = 422,
        [anon_sym_LT_LT] = 422,
        [anon_sym_GT_GT] = 422,
        [anon_sym_AMP] = 422,
        [anon_sym_AMP_CARET] = 422,
        [anon_sym_PLUS] = 422,
        [anon_sym_DASH] = 422,
        [anon_sym_PIPE] = 422,
        [anon_sym_CARET] = 422,
        [anon_sym_EQ_EQ] = 422,
        [anon_sym_BANG_EQ] = 422,
        [anon_sym_LT] = 422,
        [anon_sym_LT_EQ] = 422,
        [anon_sym_GT] = 422,
        [anon_sym_GT_EQ] = 422,
        [anon_sym_AMP_AMP] = 422,
        [anon_sym_PIPE_PIPE] = 422,
        [sym_comment] = 8,
    },
    [364] = {
        [sym__top_level_declaration] = 804,
        [sym__declaration] = 804,
        [sym_const_declaration] = 804,
        [sym_var_declaration] = 804,
        [sym_function_declaration] = 804,
        [sym_method_declaration] = 804,
        [sym_type_declaration] = 804,
        [aux_sym_source_file_repeat2] = 804,
        [ts_builtin_sym_end] = 804,
        [anon_sym_const] = 804,
        [anon_sym_var] = 804,
        [anon_sym_func] = 804,
        [anon_sym_type] = 804,
        [sym_comment] = 8,
    },
    [365] = {
        [sym__expression] = 902,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [366] = {
        [sym__expression] = 904,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [367] = {
        [sym__expression] = 906,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [368] = {
        [sym__expression] = 908,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [369] = {
        [sym__expression] = 910,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [370] = {
        [sym__expression] = 912,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [371] = {
        [sym__top_level_declaration] = 438,
        [sym__declaration] = 438,
        [sym_const_declaration] = 438,
        [sym_var_declaration] = 438,
        [sym_function_declaration] = 438,
        [sym_method_declaration] = 438,
        [sym_type_declaration] = 438,
        [aux_sym_source_file_repeat2] = 438,
        [aux_sym_expression_list_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_const] = 438,
        [anon_sym_var] = 438,
        [anon_sym_func] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_type] = 438,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 894,
        [anon_sym_DASH] = 894,
        [anon_sym_PIPE] = 894,
        [anon_sym_CARET] = 894,
        [anon_sym_EQ_EQ] = 896,
        [anon_sym_BANG_EQ] = 896,
        [anon_sym_LT] = 896,
        [anon_sym_LT_EQ] = 896,
        [anon_sym_GT] = 896,
        [anon_sym_GT_EQ] = 896,
        [anon_sym_AMP_AMP] = 898,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [372] = {
        [sym__top_level_declaration] = 438,
        [sym__declaration] = 438,
        [sym_const_declaration] = 438,
        [sym_var_declaration] = 438,
        [sym_function_declaration] = 438,
        [sym_method_declaration] = 438,
        [sym_type_declaration] = 438,
        [aux_sym_source_file_repeat2] = 438,
        [aux_sym_expression_list_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_const] = 438,
        [anon_sym_var] = 438,
        [anon_sym_func] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_type] = 438,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 894,
        [anon_sym_DASH] = 894,
        [anon_sym_PIPE] = 894,
        [anon_sym_CARET] = 894,
        [anon_sym_EQ_EQ] = 896,
        [anon_sym_BANG_EQ] = 896,
        [anon_sym_LT] = 896,
        [anon_sym_LT_EQ] = 896,
        [anon_sym_GT] = 896,
        [anon_sym_GT_EQ] = 896,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [373] = {
        [sym__top_level_declaration] = 438,
        [sym__declaration] = 438,
        [sym_const_declaration] = 438,
        [sym_var_declaration] = 438,
        [sym_function_declaration] = 438,
        [sym_method_declaration] = 438,
        [sym_type_declaration] = 438,
        [aux_sym_source_file_repeat2] = 438,
        [aux_sym_expression_list_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_const] = 438,
        [anon_sym_var] = 438,
        [anon_sym_func] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_type] = 438,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 894,
        [anon_sym_DASH] = 894,
        [anon_sym_PIPE] = 894,
        [anon_sym_CARET] = 894,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [374] = {
        [sym__top_level_declaration] = 438,
        [sym__declaration] = 438,
        [sym_const_declaration] = 438,
        [sym_var_declaration] = 438,
        [sym_function_declaration] = 438,
        [sym_method_declaration] = 438,
        [sym_type_declaration] = 438,
        [aux_sym_source_file_repeat2] = 438,
        [aux_sym_expression_list_repeat1] = 438,
        [ts_builtin_sym_end] = 438,
        [anon_sym_const] = 438,
        [anon_sym_var] = 438,
        [anon_sym_func] = 438,
        [anon_sym_COMMA] = 438,
        [anon_sym_type] = 438,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 438,
        [anon_sym_DASH] = 438,
        [anon_sym_PIPE] = 438,
        [anon_sym_CARET] = 438,
        [anon_sym_EQ_EQ] = 438,
        [anon_sym_BANG_EQ] = 438,
        [anon_sym_LT] = 438,
        [anon_sym_LT_EQ] = 438,
        [anon_sym_GT] = 438,
        [anon_sym_GT_EQ] = 438,
        [anon_sym_AMP_AMP] = 438,
        [anon_sym_PIPE_PIPE] = 438,
        [sym_comment] = 8,
    },
    [375] = {
        [sym__top_level_declaration] = 440,
        [sym__declaration] = 440,
        [sym_const_declaration] = 440,
        [sym_var_declaration] = 440,
        [sym_function_declaration] = 440,
        [sym_method_declaration] = 440,
        [sym_type_declaration] = 440,
        [aux_sym_source_file_repeat2] = 440,
        [aux_sym_expression_list_repeat1] = 440,
        [ts_builtin_sym_end] = 440,
        [anon_sym_const] = 440,
        [anon_sym_var] = 440,
        [anon_sym_func] = 440,
        [anon_sym_COMMA] = 440,
        [anon_sym_type] = 440,
        [anon_sym_STAR] = 440,
        [anon_sym_SLASH] = 440,
        [anon_sym_PERCENT] = 440,
        [anon_sym_LT_LT] = 440,
        [anon_sym_GT_GT] = 440,
        [anon_sym_AMP] = 440,
        [anon_sym_AMP_CARET] = 440,
        [anon_sym_PLUS] = 440,
        [anon_sym_DASH] = 440,
        [anon_sym_PIPE] = 440,
        [anon_sym_CARET] = 440,
        [anon_sym_EQ_EQ] = 440,
        [anon_sym_BANG_EQ] = 440,
        [anon_sym_LT] = 440,
        [anon_sym_LT_EQ] = 440,
        [anon_sym_GT] = 440,
        [anon_sym_GT_EQ] = 440,
        [anon_sym_AMP_AMP] = 440,
        [anon_sym_PIPE_PIPE] = 440,
        [sym_comment] = 8,
    },
    [376] = {
        [sym__top_level_declaration] = 820,
        [sym__declaration] = 820,
        [sym_const_declaration] = 820,
        [sym_var_declaration] = 820,
        [sym_function_declaration] = 820,
        [sym_method_declaration] = 820,
        [sym_type_declaration] = 820,
        [aux_sym_source_file_repeat2] = 820,
        [aux_sym_expression_list_repeat1] = 914,
        [ts_builtin_sym_end] = 820,
        [anon_sym_const] = 820,
        [anon_sym_var] = 820,
        [anon_sym_func] = 820,
        [anon_sym_COMMA] = 890,
        [anon_sym_type] = 820,
        [anon_sym_STAR] = 892,
        [anon_sym_SLASH] = 892,
        [anon_sym_PERCENT] = 892,
        [anon_sym_LT_LT] = 892,
        [anon_sym_GT_GT] = 892,
        [anon_sym_AMP] = 892,
        [anon_sym_AMP_CARET] = 892,
        [anon_sym_PLUS] = 894,
        [anon_sym_DASH] = 894,
        [anon_sym_PIPE] = 894,
        [anon_sym_CARET] = 894,
        [anon_sym_EQ_EQ] = 896,
        [anon_sym_BANG_EQ] = 896,
        [anon_sym_LT] = 896,
        [anon_sym_LT_EQ] = 896,
        [anon_sym_GT] = 896,
        [anon_sym_GT_EQ] = 896,
        [anon_sym_AMP_AMP] = 898,
        [anon_sym_PIPE_PIPE] = 900,
        [sym_comment] = 8,
    },
    [377] = {
        [sym__top_level_declaration] = 822,
        [sym__declaration] = 822,
        [sym_const_declaration] = 822,
        [sym_var_declaration] = 822,
        [sym_function_declaration] = 822,
        [sym_method_declaration] = 822,
        [sym_type_declaration] = 822,
        [aux_sym_source_file_repeat2] = 822,
        [ts_builtin_sym_end] = 822,
        [anon_sym_const] = 822,
        [anon_sym_var] = 822,
        [anon_sym_func] = 822,
        [anon_sym_type] = 822,
        [sym_comment] = 8,
    },
    [378] = {
        [sym_expression_list] = 916,
        [sym__expression] = 838,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [379] = {
        [sym__top_level_declaration] = 826,
        [sym__declaration] = 826,
        [sym_const_declaration] = 826,
        [sym_var_declaration] = 826,
        [sym_function_declaration] = 826,
        [sym_method_declaration] = 826,
        [sym_type_declaration] = 826,
        [aux_sym_source_file_repeat2] = 826,
        [ts_builtin_sym_end] = 826,
        [anon_sym_const] = 826,
        [anon_sym_var] = 826,
        [anon_sym_func] = 826,
        [anon_sym_type] = 826,
        [sym_comment] = 8,
    },
    [380] = {
        [sym__top_level_declaration] = 918,
        [sym__declaration] = 918,
        [sym_const_declaration] = 918,
        [sym_var_declaration] = 918,
        [sym_function_declaration] = 918,
        [sym_method_declaration] = 918,
        [sym_type_declaration] = 918,
        [aux_sym_source_file_repeat2] = 918,
        [ts_builtin_sym_end] = 918,
        [anon_sym_const] = 918,
        [anon_sym_var] = 918,
        [anon_sym_func] = 918,
        [anon_sym_type] = 918,
        [sym_comment] = 8,
    },
    [381] = {
        [sym__type] = 920,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_EQ] = 924,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [382] = {
        [sym_const_spec] = 938,
        [sym_identifier_list] = 940,
        [aux_sym_const_declaration_repeat1] = 942,
        [anon_sym_RPAREN] = 944,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [383] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 946,
        [sym_comment] = 8,
    },
    [384] = {
        [sym__type] = 948,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_EQ] = 950,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [385] = {
        [anon_sym_RPAREN] = 952,
        [sym_comment] = 8,
    },
    [386] = {
        [sym__top_level_declaration] = 954,
        [sym__declaration] = 954,
        [sym_const_declaration] = 954,
        [sym_var_declaration] = 954,
        [sym_function_declaration] = 954,
        [sym_method_declaration] = 954,
        [sym_type_declaration] = 954,
        [aux_sym_source_file_repeat2] = 954,
        [ts_builtin_sym_end] = 954,
        [anon_sym_const] = 954,
        [anon_sym_var] = 954,
        [anon_sym_func] = 954,
        [anon_sym_type] = 954,
        [sym_comment] = 8,
    },
    [387] = {
        [sym__top_level_declaration] = 956,
        [sym__declaration] = 956,
        [sym_const_declaration] = 956,
        [sym_var_declaration] = 956,
        [sym_function_declaration] = 956,
        [sym_method_declaration] = 956,
        [sym_type_declaration] = 956,
        [aux_sym_source_file_repeat2] = 956,
        [ts_builtin_sym_end] = 956,
        [anon_sym_const] = 956,
        [anon_sym_var] = 956,
        [anon_sym_func] = 956,
        [anon_sym_type] = 956,
        [sym_comment] = 8,
    },
    [388] = {
        [anon_sym_EQ] = 958,
        [sym_comment] = 8,
    },
    [389] = {
        [anon_sym_EQ] = 120,
        [sym_comment] = 8,
    },
    [390] = {
        [sym_expression_list] = 960,
        [sym__expression] = 736,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [391] = {
        [sym__type] = 962,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [392] = {
        [sym__expression] = 964,
        [sym_unary_expression] = 126,
        [sym_binary_expression] = 126,
        [sym__primary_expression] = 126,
        [sym__string_literal] = 128,
        [sym_int_literal] = 128,
        [sym_float_literal] = 128,
        [anon_sym_RBRACK] = 966,
        [sym_identifier] = 128,
        [sym_raw_string_literal] = 132,
        [sym_interpreted_string_literal] = 132,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 134,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 134,
        [sym_comment] = 8,
    },
    [393] = {
        [anon_sym_LBRACE] = 968,
        [sym_comment] = 8,
    },
    [394] = {
        [anon_sym_LBRACE] = 970,
        [sym_comment] = 8,
    },
    [395] = {
        [anon_sym_LBRACK] = 972,
        [sym_comment] = 8,
    },
    [396] = {
        [anon_sym_DOT] = 974,
        [anon_sym_EQ] = 120,
        [sym_comment] = 8,
    },
    [397] = {
        [sym_identifier] = 976,
        [sym_comment] = 8,
    },
    [398] = {
        [anon_sym_EQ] = 146,
        [sym_comment] = 8,
    },
    [399] = {
        [sym__type] = 978,
        [sym_pointer_type] = 150,
        [sym_array_type] = 150,
        [sym_slice_type] = 150,
        [sym_struct_type] = 150,
        [sym_interface_type] = 150,
        [sym_map_type] = 150,
        [sym_qualified_identifier] = 150,
        [anon_sym_STAR] = 152,
        [anon_sym_LBRACK] = 154,
        [anon_sym_struct] = 156,
        [anon_sym_interface] = 158,
        [anon_sym_map] = 160,
        [sym_identifier] = 162,
        [sym_comment] = 8,
    },
    [400] = {
        [anon_sym_RBRACK] = 980,
        [sym_comment] = 8,
    },
    [401] = {
        [sym__type] = 982,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [402] = {
        [anon_sym_EQ] = 188,
        [sym_comment] = 8,
    },
    [403] = {
        [sym_method_spec] = 190,
        [aux_sym_interface_type_repeat1] = 984,
        [anon_sym_RBRACE] = 986,
        [sym_identifier] = 196,
        [sym_comment] = 8,
    },
    [404] = {
        [anon_sym_RBRACE] = 988,
        [sym_comment] = 8,
    },
    [405] = {
        [anon_sym_EQ] = 202,
        [sym_comment] = 8,
    },
    [406] = {
        [anon_sym_EQ] = 296,
        [sym_comment] = 8,
    },
    [407] = {
        [sym_identifier_list] = 298,
        [sym_field_declaration] = 300,
        [aux_sym_struct_type_repeat1] = 990,
        [anon_sym_RBRACE] = 992,
        [anon_sym_STAR] = 306,
        [sym_identifier] = 308,
        [sym_comment] = 8,
    },
    [408] = {
        [anon_sym_RBRACE] = 994,
        [sym_comment] = 8,
    },
    [409] = {
        [anon_sym_EQ] = 330,
        [sym_comment] = 8,
    },
    [410] = {
        [anon_sym_EQ] = 362,
        [sym_comment] = 8,
    },
    [411] = {
        [anon_sym_STAR] = 404,
        [anon_sym_RBRACK] = 996,
        [anon_sym_SLASH] = 404,
        [anon_sym_PERCENT] = 404,
        [anon_sym_LT_LT] = 404,
        [anon_sym_GT_GT] = 404,
        [anon_sym_AMP] = 404,
        [anon_sym_AMP_CARET] = 404,
        [anon_sym_PLUS] = 408,
        [anon_sym_DASH] = 408,
        [anon_sym_PIPE] = 408,
        [anon_sym_CARET] = 408,
        [anon_sym_EQ_EQ] = 410,
        [anon_sym_BANG_EQ] = 410,
        [anon_sym_LT] = 410,
        [anon_sym_LT_EQ] = 410,
        [anon_sym_GT] = 410,
        [anon_sym_GT_EQ] = 410,
        [anon_sym_AMP_AMP] = 412,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [412] = {
        [sym__type] = 998,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [413] = {
        [anon_sym_EQ] = 424,
        [sym_comment] = 8,
    },
    [414] = {
        [sym__type] = 1000,
        [sym_pointer_type] = 922,
        [sym_array_type] = 922,
        [sym_slice_type] = 922,
        [sym_struct_type] = 922,
        [sym_interface_type] = 922,
        [sym_map_type] = 922,
        [sym_qualified_identifier] = 922,
        [anon_sym_STAR] = 926,
        [anon_sym_LBRACK] = 928,
        [anon_sym_struct] = 930,
        [anon_sym_interface] = 932,
        [anon_sym_map] = 934,
        [sym_identifier] = 936,
        [sym_comment] = 8,
    },
    [415] = {
        [anon_sym_EQ] = 442,
        [sym_comment] = 8,
    },
    [416] = {
        [anon_sym_EQ] = 444,
        [sym_comment] = 8,
    },
    [417] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1002,
        [sym_comment] = 8,
    },
    [418] = {
        [sym_expression_list] = 1004,
        [sym__expression] = 736,
        [sym_unary_expression] = 738,
        [sym_binary_expression] = 738,
        [sym__primary_expression] = 738,
        [sym__string_literal] = 740,
        [sym_int_literal] = 740,
        [sym_float_literal] = 740,
        [sym_identifier] = 740,
        [sym_raw_string_literal] = 742,
        [sym_interpreted_string_literal] = 742,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 744,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 744,
        [sym_comment] = 8,
    },
    [419] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1006,
        [sym_comment] = 8,
    },
    [420] = {
        [sym_const_spec] = 938,
        [sym_identifier_list] = 940,
        [aux_sym_const_declaration_repeat1] = 1008,
        [anon_sym_RPAREN] = 1010,
        [sym_identifier] = 72,
        [sym_comment] = 8,
    },
    [421] = {
        [anon_sym_RPAREN] = 1012,
        [sym_comment] = 8,
    },
    [422] = {
        [anon_sym_EQ] = 1014,
        [sym_comment] = 8,
    },
    [423] = {
        [sym_expression_list] = 1016,
        [sym__expression] = 838,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [424] = {
        [sym__top_level_declaration] = 1002,
        [sym__declaration] = 1002,
        [sym_const_declaration] = 1002,
        [sym_var_declaration] = 1002,
        [sym_function_declaration] = 1002,
        [sym_method_declaration] = 1002,
        [sym_type_declaration] = 1002,
        [aux_sym_source_file_repeat2] = 1002,
        [ts_builtin_sym_end] = 1002,
        [anon_sym_const] = 1002,
        [anon_sym_var] = 1002,
        [anon_sym_func] = 1002,
        [anon_sym_type] = 1002,
        [sym_comment] = 8,
    },
    [425] = {
        [sym_expression_list] = 1018,
        [sym__expression] = 838,
        [sym_unary_expression] = 840,
        [sym_binary_expression] = 840,
        [sym__primary_expression] = 840,
        [sym__string_literal] = 842,
        [sym_int_literal] = 842,
        [sym_float_literal] = 842,
        [sym_identifier] = 842,
        [sym_raw_string_literal] = 844,
        [sym_interpreted_string_literal] = 844,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 846,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 846,
        [sym_comment] = 8,
    },
    [426] = {
        [sym__top_level_declaration] = 1006,
        [sym__declaration] = 1006,
        [sym_const_declaration] = 1006,
        [sym_var_declaration] = 1006,
        [sym_function_declaration] = 1006,
        [sym_method_declaration] = 1006,
        [sym_type_declaration] = 1006,
        [aux_sym_source_file_repeat2] = 1006,
        [ts_builtin_sym_end] = 1006,
        [anon_sym_const] = 1006,
        [anon_sym_var] = 1006,
        [anon_sym_func] = 1006,
        [anon_sym_type] = 1006,
        [sym_comment] = 8,
    },
    [427] = {
        [sym_import_declaration] = 1020,
        [sym__top_level_declaration] = 1020,
        [sym__declaration] = 1020,
        [sym_const_declaration] = 1020,
        [sym_var_declaration] = 1020,
        [sym_function_declaration] = 1020,
        [sym_method_declaration] = 1020,
        [sym_type_declaration] = 1020,
        [aux_sym_source_file_repeat1] = 1020,
        [aux_sym_source_file_repeat2] = 1020,
        [ts_builtin_sym_end] = 1020,
        [anon_sym_import] = 1020,
        [anon_sym_const] = 1020,
        [anon_sym_var] = 1020,
        [anon_sym_func] = 1020,
        [anon_sym_type] = 1020,
        [sym_comment] = 8,
    },
    [428] = {
        [sym_import_declaration] = 1022,
        [sym__top_level_declaration] = 1022,
        [sym__declaration] = 1022,
        [sym_const_declaration] = 1022,
        [sym_var_declaration] = 1022,
        [sym_function_declaration] = 1022,
        [sym_method_declaration] = 1022,
        [sym_type_declaration] = 1022,
        [aux_sym_source_file_repeat1] = 1022,
        [aux_sym_source_file_repeat2] = 1022,
        [ts_builtin_sym_end] = 1022,
        [anon_sym_import] = 1022,
        [anon_sym_const] = 1022,
        [anon_sym_var] = 1022,
        [anon_sym_func] = 1022,
        [anon_sym_type] = 1022,
        [sym_comment] = 8,
    },
    [429] = {
        [sym_import_spec] = 1024,
        [sym__string_literal] = 1026,
        [aux_sym_import_declaration_repeat1] = 1028,
        [anon_sym_RPAREN] = 1030,
        [anon_sym_DOT] = 1032,
        [sym_identifier] = 1032,
        [sym_raw_string_literal] = 342,
        [sym_interpreted_string_literal] = 342,
        [sym_comment] = 8,
    },
    [430] = {
        [sym__string_literal] = 1034,
        [sym_raw_string_literal] = 64,
        [sym_interpreted_string_literal] = 64,
        [sym_comment] = 8,
    },
    [431] = {
        [sym_import_declaration] = 350,
        [sym__top_level_declaration] = 350,
        [sym__declaration] = 350,
        [sym_const_declaration] = 350,
        [sym_var_declaration] = 350,
        [sym_function_declaration] = 350,
        [sym_method_declaration] = 350,
        [sym_type_declaration] = 350,
        [aux_sym_source_file_repeat1] = 350,
        [aux_sym_source_file_repeat2] = 350,
        [ts_builtin_sym_end] = 350,
        [anon_sym_import] = 350,
        [anon_sym_const] = 350,
        [anon_sym_var] = 350,
        [anon_sym_func] = 350,
        [anon_sym_type] = 350,
        [sym_comment] = 8,
    },
    [432] = {
        [sym_import_declaration] = 1036,
        [sym__top_level_declaration] = 1036,
        [sym__declaration] = 1036,
        [sym_const_declaration] = 1036,
        [sym_var_declaration] = 1036,
        [sym_function_declaration] = 1036,
        [sym_method_declaration] = 1036,
        [sym_type_declaration] = 1036,
        [aux_sym_source_file_repeat1] = 1036,
        [aux_sym_source_file_repeat2] = 1036,
        [ts_builtin_sym_end] = 1036,
        [anon_sym_import] = 1036,
        [anon_sym_const] = 1036,
        [anon_sym_var] = 1036,
        [anon_sym_func] = 1036,
        [anon_sym_type] = 1036,
        [sym_comment] = 8,
    },
    [433] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1038,
        [sym_comment] = 8,
    },
    [434] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1022,
        [sym_comment] = 8,
    },
    [435] = {
        [anon_sym_RPAREN] = 1040,
        [sym_comment] = 8,
    },
    [436] = {
        [sym_import_declaration] = 1042,
        [sym__top_level_declaration] = 1042,
        [sym__declaration] = 1042,
        [sym_const_declaration] = 1042,
        [sym_var_declaration] = 1042,
        [sym_function_declaration] = 1042,
        [sym_method_declaration] = 1042,
        [sym_type_declaration] = 1042,
        [aux_sym_source_file_repeat1] = 1042,
        [aux_sym_source_file_repeat2] = 1042,
        [ts_builtin_sym_end] = 1042,
        [anon_sym_import] = 1042,
        [anon_sym_const] = 1042,
        [anon_sym_var] = 1042,
        [anon_sym_func] = 1042,
        [anon_sym_type] = 1042,
        [sym_comment] = 8,
    },
    [437] = {
        [sym__string_literal] = 1044,
        [sym_raw_string_literal] = 342,
        [sym_interpreted_string_literal] = 342,
        [sym_comment] = 8,
    },
    [438] = {
        [aux_sym_SLASH_LPAREN_LF_PIPE_SEMI_RPAREN_SLASH] = 1036,
        [sym_comment] = 8,
    },
    [439] = {
        [sym_import_declaration] = 1046,
        [sym__top_level_declaration] = 1046,
        [sym__declaration] = 1046,
        [sym_const_declaration] = 1046,
        [sym_var_declaration] = 1046,
        [sym_function_declaration] = 1046,
        [sym_method_declaration] = 1046,
        [sym_type_declaration] = 1046,
        [aux_sym_source_file_repeat1] = 1046,
        [aux_sym_source_file_repeat2] = 1046,
        [ts_builtin_sym_end] = 1046,
        [anon_sym_import] = 1046,
        [anon_sym_const] = 1046,
        [anon_sym_var] = 1046,
        [anon_sym_func] = 1046,
        [anon_sym_type] = 1046,
        [sym_comment] = 8,
    },
    [440] = {
        [sym_import_spec] = 1024,
        [sym__string_literal] = 1026,
        [aux_sym_import_declaration_repeat1] = 1048,
        [anon_sym_RPAREN] = 1050,
        [anon_sym_DOT] = 1032,
        [sym_identifier] = 1032,
        [sym_raw_string_literal] = 342,
        [sym_interpreted_string_literal] = 342,
        [sym_comment] = 8,
    },
    [441] = {
        [anon_sym_RPAREN] = 1052,
        [sym_comment] = 8,
    },
    [442] = {
        [ts_builtin_sym_end] = 1054,
        [sym_comment] = 8,
    },
    [443] = {
        [ts_builtin_sym_end] = 1056,
        [sym_comment] = 8,
    },
    [444] = {
        [sym__top_level_declaration] = 1058,
        [sym__declaration] = 1058,
        [sym_const_declaration] = 1058,
        [sym_var_declaration] = 1058,
        [sym_function_declaration] = 1058,
        [sym_method_declaration] = 1058,
        [sym_type_declaration] = 1058,
        [aux_sym_source_file_repeat2] = 1058,
        [ts_builtin_sym_end] = 1058,
        [anon_sym_const] = 1058,
        [anon_sym_var] = 1058,
        [anon_sym_func] = 1058,
        [anon_sym_type] = 1058,
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
    [42] = {.count = 1}, SHIFT(444, 0),
    [44] = {.count = 1}, SHIFT(443, 0),
    [46] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [50] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [52] = {.count = 1}, SHIFT(442, 0),
    [54] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [56] = {.count = 1}, SHIFT(427, 0),
    [58] = {.count = 1}, SHIFT(428, 0),
    [60] = {.count = 1}, SHIFT(429, 0),
    [62] = {.count = 1}, SHIFT(430, 0),
    [64] = {.count = 1}, SHIFT(431, 0),
    [66] = {.count = 1}, SHIFT(380, 0),
    [68] = {.count = 1}, SHIFT(381, 0),
    [70] = {.count = 1}, SHIFT(382, 0),
    [72] = {.count = 1}, SHIFT(266, 0),
    [74] = {.count = 1}, SHIFT(263, 0),
    [76] = {.count = 1}, SHIFT(264, 0),
    [78] = {.count = 1}, SHIFT(265, 0),
    [80] = {.count = 1}, SHIFT(211, 0),
    [82] = {.count = 1}, SHIFT(212, 0),
    [84] = {.count = 1}, SHIFT(213, 0),
    [86] = {.count = 1}, SHIFT(16, 0),
    [88] = {.count = 1}, SHIFT(17, 0),
    [90] = {.count = 1}, SHIFT(18, 0),
    [92] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [94] = {.count = 1}, SHIFT(203, 0),
    [96] = {.count = 1}, SHIFT(204, 0),
    [98] = {.count = 1}, SHIFT(205, 0),
    [100] = {.count = 1}, SHIFT(206, 0),
    [102] = {.count = 1}, SHIFT(19, 0),
    [104] = {.count = 1}, SHIFT(20, 0),
    [106] = {.count = 1}, SHIFT(21, 0),
    [108] = {.count = 1}, SHIFT(22, 0),
    [110] = {.count = 1}, SHIFT(23, 0),
    [112] = {.count = 1}, SHIFT(24, 0),
    [114] = {.count = 1}, SHIFT(25, 0),
    [116] = {.count = 1}, SHIFT(26, 0),
    [118] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [120] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [122] = {.count = 1}, SHIFT(202, 0),
    [124] = {.count = 1}, SHIFT(197, 0),
    [126] = {.count = 1}, SHIFT(115, 0),
    [128] = {.count = 1}, SHIFT(116, 0),
    [130] = {.count = 1}, SHIFT(198, 0),
    [132] = {.count = 1}, SHIFT(118, 0),
    [134] = {.count = 1}, SHIFT(119, 0),
    [136] = {.count = 1}, SHIFT(193, 0),
    [138] = {.count = 1}, SHIFT(189, 0),
    [140] = {.count = 1}, SHIFT(29, 0),
    [142] = {.count = 1}, SHIFT(27, 0),
    [144] = {.count = 1}, SHIFT(28, 0),
    [146] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [148] = {.count = 1}, SHIFT(30, 0),
    [150] = {.count = 1}, SHIFT(31, 0),
    [152] = {.count = 1}, SHIFT(32, 0),
    [154] = {.count = 1}, SHIFT(33, 0),
    [156] = {.count = 1}, SHIFT(34, 0),
    [158] = {.count = 1}, SHIFT(35, 0),
    [160] = {.count = 1}, SHIFT(36, 0),
    [162] = {.count = 1}, SHIFT(37, 0),
    [164] = {.count = 1}, SHIFT(187, 0),
    [166] = {.count = 1}, SHIFT(186, 0),
    [168] = {.count = 1}, SHIFT(181, 0),
    [170] = {.count = 1}, SHIFT(182, 0),
    [172] = {.count = 1}, SHIFT(177, 0),
    [174] = {.count = 1}, SHIFT(44, 0),
    [176] = {.count = 1}, SHIFT(40, 0),
    [178] = {.count = 1}, SHIFT(38, 0),
    [180] = {.count = 1}, SHIFT(39, 0),
    [182] = {.count = 1}, SHIFT(41, 0),
    [184] = {.count = 1}, SHIFT(42, 0),
    [186] = {.count = 1}, SHIFT(43, 0),
    [188] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [190] = {.count = 1}, SHIFT(45, 0),
    [192] = {.count = 1}, SHIFT(46, 0),
    [194] = {.count = 1}, SHIFT(47, 0),
    [196] = {.count = 1}, SHIFT(48, 0),
    [198] = {.count = 1}, SHIFT(51, 0),
    [200] = {.count = 1}, SHIFT(176, 0),
    [202] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [204] = {.count = 1}, SHIFT(49, 0),
    [206] = {.count = 1}, SHIFT(50, 0),
    [208] = {.count = 1}, SHIFT(144, 0),
    [210] = {.count = 1}, SHIFT(145, 0),
    [212] = {.count = 1}, SHIFT(146, 0),
    [214] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [216] = {.count = 1}, SHIFT(147, 0),
    [218] = {.count = 1}, SHIFT(148, 0),
    [220] = {.count = 1}, SHIFT(149, 0),
    [222] = {.count = 1}, SHIFT(150, 0),
    [224] = {.count = 1}, SHIFT(151, 0),
    [226] = {.count = 1}, SHIFT(152, 0),
    [228] = {.count = 1}, SHIFT(53, 0),
    [230] = {.count = 1}, SHIFT(54, 0),
    [232] = {.count = 1}, SHIFT(55, 0),
    [234] = {.count = 1}, SHIFT(56, 0),
    [236] = {.count = 1}, SHIFT(52, 0),
    [238] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [240] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [242] = {.count = 1}, SHIFT(140, 0),
    [244] = {.count = 1}, SHIFT(141, 0),
    [246] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [248] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [250] = {.count = 1}, SHIFT(57, 0),
    [252] = {.count = 1}, SHIFT(58, 0),
    [254] = {.count = 1}, SHIFT(59, 0),
    [256] = {.count = 1}, SHIFT(60, 0),
    [258] = {.count = 1}, SHIFT(61, 0),
    [260] = {.count = 1}, SHIFT(62, 0),
    [262] = {.count = 1}, SHIFT(63, 0),
    [264] = {.count = 1}, SHIFT(64, 0),
    [266] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [268] = {.count = 1}, SHIFT(139, 0),
    [270] = {.count = 1}, SHIFT(134, 0),
    [272] = {.count = 1}, SHIFT(135, 0),
    [274] = {.count = 1}, SHIFT(75, 0),
    [276] = {.count = 1}, SHIFT(71, 0),
    [278] = {.count = 1}, SHIFT(67, 0),
    [280] = {.count = 1}, SHIFT(65, 0),
    [282] = {.count = 1}, SHIFT(66, 0),
    [284] = {.count = 1}, SHIFT(68, 0),
    [286] = {.count = 1}, SHIFT(69, 0),
    [288] = {.count = 1}, SHIFT(70, 0),
    [290] = {.count = 1}, SHIFT(72, 0),
    [292] = {.count = 1}, SHIFT(73, 0),
    [294] = {.count = 1}, SHIFT(74, 0),
    [296] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [298] = {.count = 1}, SHIFT(76, 0),
    [300] = {.count = 1}, SHIFT(77, 0),
    [302] = {.count = 1}, SHIFT(78, 0),
    [304] = {.count = 1}, SHIFT(79, 0),
    [306] = {.count = 1}, SHIFT(80, 0),
    [308] = {.count = 1}, SHIFT(81, 0),
    [310] = {.count = 1}, SHIFT(88, 0),
    [312] = {.count = 1}, SHIFT(93, 0),
    [314] = {.count = 1}, SHIFT(94, 0),
    [316] = {.count = 1}, SHIFT(95, 0),
    [318] = {.count = 1}, SHIFT(96, 0),
    [320] = {.count = 1}, SHIFT(97, 0),
    [322] = {.count = 1}, SHIFT(98, 0),
    [324] = {.count = 1}, SHIFT(99, 0),
    [326] = {.count = 1}, SHIFT(91, 0),
    [328] = {.count = 1}, SHIFT(90, 0),
    [330] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [332] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [334] = {.count = 1}, SHIFT(82, 0),
    [336] = {.count = 1}, SHIFT(83, 0),
    [338] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [340] = {.count = 1}, SHIFT(84, 0),
    [342] = {.count = 1}, SHIFT(85, 0),
    [344] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [346] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [348] = {.count = 1}, SHIFT(86, 0),
    [350] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [352] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [354] = {.count = 1}, SHIFT(87, 0),
    [356] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [358] = {.count = 1}, SHIFT(89, 0),
    [360] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [362] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [364] = {.count = 1}, SHIFT(92, 0),
    [366] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [368] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [370] = {.count = 1}, SHIFT(133, 0),
    [372] = {.count = 1}, SHIFT(114, 0),
    [374] = {.count = 1}, SHIFT(117, 0),
    [376] = {.count = 1}, SHIFT(110, 0),
    [378] = {.count = 1}, SHIFT(106, 0),
    [380] = {.count = 1}, SHIFT(102, 0),
    [382] = {.count = 1}, SHIFT(100, 0),
    [384] = {.count = 1}, SHIFT(101, 0),
    [386] = {.count = 1}, SHIFT(103, 0),
    [388] = {.count = 1}, SHIFT(104, 0),
    [390] = {.count = 1}, SHIFT(105, 0),
    [392] = {.count = 1}, SHIFT(107, 0),
    [394] = {.count = 1}, SHIFT(108, 0),
    [396] = {.count = 1}, SHIFT(109, 0),
    [398] = {.count = 1}, SHIFT(111, 0),
    [400] = {.count = 1}, SHIFT(112, 0),
    [402] = {.count = 1}, SHIFT(113, 0),
    [404] = {.count = 1}, SHIFT(121, 0),
    [406] = {.count = 1}, SHIFT(122, 0),
    [408] = {.count = 1}, SHIFT(123, 0),
    [410] = {.count = 1}, SHIFT(124, 0),
    [412] = {.count = 1}, SHIFT(125, 0),
    [414] = {.count = 1}, SHIFT(126, 0),
    [416] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [418] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [420] = {.count = 1}, SHIFT(120, 0),
    [422] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [424] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [426] = {.count = 1}, SHIFT(131, 0),
    [428] = {.count = 1}, SHIFT(132, 0),
    [430] = {.count = 1}, SHIFT(130, 0),
    [432] = {.count = 1}, SHIFT(129, 0),
    [434] = {.count = 1}, SHIFT(128, 0),
    [436] = {.count = 1}, SHIFT(127, 0),
    [438] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [440] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [442] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [444] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [446] = {.count = 1}, SHIFT(137, 0),
    [448] = {.count = 1}, SHIFT(136, 0),
    [450] = {.count = 1}, SHIFT(138, 0),
    [452] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [454] = {.count = 1}, SHIFT(142, 0),
    [456] = {.count = 1}, SHIFT(143, 0),
    [458] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [460] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [462] = {.count = 1}, SHIFT(173, 0),
    [464] = {.count = 1}, SHIFT(174, 0),
    [466] = {.count = 1}, SHIFT(172, 0),
    [468] = {.count = 1}, SHIFT(167, 0),
    [470] = {.count = 1}, SHIFT(168, 0),
    [472] = {.count = 1}, SHIFT(163, 0),
    [474] = {.count = 1}, SHIFT(159, 0),
    [476] = {.count = 1}, SHIFT(155, 0),
    [478] = {.count = 1}, SHIFT(153, 0),
    [480] = {.count = 1}, SHIFT(154, 0),
    [482] = {.count = 1}, SHIFT(156, 0),
    [484] = {.count = 1}, SHIFT(157, 0),
    [486] = {.count = 1}, SHIFT(158, 0),
    [488] = {.count = 1}, SHIFT(160, 0),
    [490] = {.count = 1}, SHIFT(161, 0),
    [492] = {.count = 1}, SHIFT(162, 0),
    [494] = {.count = 1}, SHIFT(164, 0),
    [496] = {.count = 1}, SHIFT(165, 0),
    [498] = {.count = 1}, SHIFT(166, 0),
    [500] = {.count = 1}, SHIFT(170, 0),
    [502] = {.count = 1}, SHIFT(169, 0),
    [504] = {.count = 1}, SHIFT(171, 0),
    [506] = {.count = 1}, SHIFT(175, 0),
    [508] = {.count = 1}, SHIFT(178, 0),
    [510] = {.count = 1}, SHIFT(179, 0),
    [512] = {.count = 1}, SHIFT(180, 0),
    [514] = {.count = 1}, SHIFT(184, 0),
    [516] = {.count = 1}, SHIFT(183, 0),
    [518] = {.count = 1}, SHIFT(185, 0),
    [520] = {.count = 1}, SHIFT(188, 0),
    [522] = {.count = 1}, SHIFT(190, 0),
    [524] = {.count = 1}, SHIFT(191, 0),
    [526] = {.count = 1}, SHIFT(192, 0),
    [528] = {.count = 1}, SHIFT(194, 0),
    [530] = {.count = 1}, SHIFT(195, 0),
    [532] = {.count = 1}, SHIFT(196, 0),
    [534] = {.count = 1}, SHIFT(200, 0),
    [536] = {.count = 1}, SHIFT(199, 0),
    [538] = {.count = 1}, SHIFT(201, 0),
    [540] = {.count = 1}, SHIFT(209, 0),
    [542] = {.count = 1}, SHIFT(208, 0),
    [544] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [546] = {.count = 1}, SHIFT(207, 0),
    [548] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [550] = {.count = 1}, SHIFT(210, 0),
    [552] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [554] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [556] = {.count = 1}, SHIFT(258, 0),
    [558] = {.count = 1}, SHIFT(255, 0),
    [560] = {.count = 1}, SHIFT(256, 0),
    [562] = {.count = 1}, SHIFT(214, 0),
    [564] = {.count = 1}, SHIFT(215, 0),
    [566] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [568] = {.count = 1}, SHIFT(219, 0),
    [570] = {.count = 1}, SHIFT(220, 0),
    [572] = {.count = 1}, SHIFT(221, 0),
    [574] = {.count = 1}, SHIFT(222, 0),
    [576] = {.count = 1}, SHIFT(223, 0),
    [578] = {.count = 1}, SHIFT(224, 0),
    [580] = {.count = 1}, SHIFT(225, 0),
    [582] = {.count = 1}, SHIFT(226, 0),
    [584] = {.count = 1}, SHIFT(227, 0),
    [586] = {.count = 1}, SHIFT(228, 0),
    [588] = {.count = 1}, SHIFT(229, 0),
    [590] = {.count = 1}, SHIFT(216, 0),
    [592] = {.count = 1}, SHIFT(217, 0),
    [594] = {.count = 1}, SHIFT(218, 0),
    [596] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [598] = {.count = 1}, SHIFT(254, 0),
    [600] = {.count = 1}, SHIFT(251, 0),
    [602] = {.count = 1}, SHIFT(252, 0),
    [604] = {.count = 1}, SHIFT(250, 0),
    [606] = {.count = 1}, SHIFT(249, 0),
    [608] = {.count = 1}, SHIFT(244, 0),
    [610] = {.count = 1}, SHIFT(245, 0),
    [612] = {.count = 1}, SHIFT(240, 0),
    [614] = {.count = 1}, SHIFT(236, 0),
    [616] = {.count = 1}, SHIFT(232, 0),
    [618] = {.count = 1}, SHIFT(230, 0),
    [620] = {.count = 1}, SHIFT(231, 0),
    [622] = {.count = 1}, SHIFT(233, 0),
    [624] = {.count = 1}, SHIFT(234, 0),
    [626] = {.count = 1}, SHIFT(235, 0),
    [628] = {.count = 1}, SHIFT(237, 0),
    [630] = {.count = 1}, SHIFT(238, 0),
    [632] = {.count = 1}, SHIFT(239, 0),
    [634] = {.count = 1}, SHIFT(241, 0),
    [636] = {.count = 1}, SHIFT(242, 0),
    [638] = {.count = 1}, SHIFT(243, 0),
    [640] = {.count = 1}, SHIFT(247, 0),
    [642] = {.count = 1}, SHIFT(246, 0),
    [644] = {.count = 1}, SHIFT(248, 0),
    [646] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [648] = {.count = 1}, SHIFT(253, 0),
    [650] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [652] = {.count = 1}, SHIFT(257, 0),
    [654] = {.count = 1}, SHIFT(259, 0),
    [656] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [658] = {.count = 1}, SHIFT(260, 0),
    [660] = {.count = 1}, SHIFT(261, 0),
    [662] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [664] = {.count = 1}, SHIFT(262, 0),
    [666] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [668] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [670] = {.count = 1}, SHIFT(329, 0),
    [672] = {.count = 1}, SHIFT(330, 0),
    [674] = {.count = 1}, SHIFT(331, 0),
    [676] = {.count = 1}, SHIFT(332, 0),
    [678] = {.count = 1}, SHIFT(333, 0),
    [680] = {.count = 1}, SHIFT(334, 0),
    [682] = {.count = 1}, SHIFT(335, 0),
    [684] = {.count = 1}, SHIFT(336, 0),
    [686] = {.count = 1}, SHIFT(337, 0),
    [688] = {.count = 1}, SHIFT(271, 0),
    [690] = {.count = 1}, SHIFT(272, 0),
    [692] = {.count = 1}, SHIFT(273, 0),
    [694] = {.count = 1}, SHIFT(274, 0),
    [696] = {.count = 1}, SHIFT(267, 0),
    [698] = {.count = 1}, SHIFT(268, 0),
    [700] = {.count = 1}, SHIFT(269, 0),
    [702] = {.count = 1}, SHIFT(270, 0),
    [704] = {.count = 1}, SHIFT(327, 0),
    [706] = {.count = 1}, SHIFT(276, 0),
    [708] = {.count = 1}, SHIFT(277, 0),
    [710] = {.count = 1}, SHIFT(278, 0),
    [712] = {.count = 1}, SHIFT(279, 0),
    [714] = {.count = 1}, SHIFT(280, 0),
    [716] = {.count = 1}, SHIFT(281, 0),
    [718] = {.count = 1}, SHIFT(282, 0),
    [720] = {.count = 1}, SHIFT(283, 0),
    [722] = {.count = 1}, SHIFT(284, 0),
    [724] = {.count = 1}, SHIFT(275, 0),
    [726] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [728] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [730] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [732] = {.count = 1}, SHIFT(325, 0),
    [734] = {.count = 1}, SHIFT(305, 0),
    [736] = {.count = 1}, SHIFT(306, 0),
    [738] = {.count = 1}, SHIFT(307, 0),
    [740] = {.count = 1}, SHIFT(308, 0),
    [742] = {.count = 1}, SHIFT(309, 0),
    [744] = {.count = 1}, SHIFT(310, 0),
    [746] = {.count = 1}, SHIFT(304, 0),
    [748] = {.count = 1}, SHIFT(299, 0),
    [750] = {.count = 1}, SHIFT(300, 0),
    [752] = {.count = 1}, SHIFT(295, 0),
    [754] = {.count = 1}, SHIFT(291, 0),
    [756] = {.count = 1}, SHIFT(287, 0),
    [758] = {.count = 1}, SHIFT(285, 0),
    [760] = {.count = 1}, SHIFT(286, 0),
    [762] = {.count = 1}, SHIFT(288, 0),
    [764] = {.count = 1}, SHIFT(289, 0),
    [766] = {.count = 1}, SHIFT(290, 0),
    [768] = {.count = 1}, SHIFT(292, 0),
    [770] = {.count = 1}, SHIFT(293, 0),
    [772] = {.count = 1}, SHIFT(294, 0),
    [774] = {.count = 1}, SHIFT(296, 0),
    [776] = {.count = 1}, SHIFT(297, 0),
    [778] = {.count = 1}, SHIFT(298, 0),
    [780] = {.count = 1}, SHIFT(302, 0),
    [782] = {.count = 1}, SHIFT(301, 0),
    [784] = {.count = 1}, SHIFT(303, 0),
    [786] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [788] = {.count = 1}, SHIFT(311, 0),
    [790] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [792] = {.count = 1}, SHIFT(312, 0),
    [794] = {.count = 1}, SHIFT(313, 0),
    [796] = {.count = 1}, SHIFT(314, 0),
    [798] = {.count = 1}, SHIFT(315, 0),
    [800] = {.count = 1}, SHIFT(316, 0),
    [802] = {.count = 1}, SHIFT(317, 0),
    [804] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [806] = {.count = 1}, SHIFT(323, 0),
    [808] = {.count = 1}, SHIFT(322, 0),
    [810] = {.count = 1}, SHIFT(321, 0),
    [812] = {.count = 1}, SHIFT(320, 0),
    [814] = {.count = 1}, SHIFT(319, 0),
    [816] = {.count = 1}, SHIFT(318, 0),
    [818] = {.count = 1}, SHIFT(324, 0),
    [820] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [822] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [824] = {.count = 1}, SHIFT(326, 0),
    [826] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [828] = {.count = 1}, SHIFT(328, 0),
    [830] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [832] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [834] = {.count = 1}, SHIFT(378, 0),
    [836] = {.count = 1}, SHIFT(358, 0),
    [838] = {.count = 1}, SHIFT(359, 0),
    [840] = {.count = 1}, SHIFT(360, 0),
    [842] = {.count = 1}, SHIFT(361, 0),
    [844] = {.count = 1}, SHIFT(362, 0),
    [846] = {.count = 1}, SHIFT(363, 0),
    [848] = {.count = 1}, SHIFT(357, 0),
    [850] = {.count = 1}, SHIFT(352, 0),
    [852] = {.count = 1}, SHIFT(353, 0),
    [854] = {.count = 1}, SHIFT(348, 0),
    [856] = {.count = 1}, SHIFT(344, 0),
    [858] = {.count = 1}, SHIFT(340, 0),
    [860] = {.count = 1}, SHIFT(338, 0),
    [862] = {.count = 1}, SHIFT(339, 0),
    [864] = {.count = 1}, SHIFT(341, 0),
    [866] = {.count = 1}, SHIFT(342, 0),
    [868] = {.count = 1}, SHIFT(343, 0),
    [870] = {.count = 1}, SHIFT(345, 0),
    [872] = {.count = 1}, SHIFT(346, 0),
    [874] = {.count = 1}, SHIFT(347, 0),
    [876] = {.count = 1}, SHIFT(349, 0),
    [878] = {.count = 1}, SHIFT(350, 0),
    [880] = {.count = 1}, SHIFT(351, 0),
    [882] = {.count = 1}, SHIFT(355, 0),
    [884] = {.count = 1}, SHIFT(354, 0),
    [886] = {.count = 1}, SHIFT(356, 0),
    [888] = {.count = 1}, SHIFT(364, 0),
    [890] = {.count = 1}, SHIFT(365, 0),
    [892] = {.count = 1}, SHIFT(366, 0),
    [894] = {.count = 1}, SHIFT(367, 0),
    [896] = {.count = 1}, SHIFT(368, 0),
    [898] = {.count = 1}, SHIFT(369, 0),
    [900] = {.count = 1}, SHIFT(370, 0),
    [902] = {.count = 1}, SHIFT(376, 0),
    [904] = {.count = 1}, SHIFT(375, 0),
    [906] = {.count = 1}, SHIFT(374, 0),
    [908] = {.count = 1}, SHIFT(373, 0),
    [910] = {.count = 1}, SHIFT(372, 0),
    [912] = {.count = 1}, SHIFT(371, 0),
    [914] = {.count = 1}, SHIFT(377, 0),
    [916] = {.count = 1}, SHIFT(379, 0),
    [918] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [920] = {.count = 1}, SHIFT(422, 0),
    [922] = {.count = 1}, SHIFT(389, 0),
    [924] = {.count = 1}, SHIFT(423, 0),
    [926] = {.count = 1}, SHIFT(391, 0),
    [928] = {.count = 1}, SHIFT(392, 0),
    [930] = {.count = 1}, SHIFT(393, 0),
    [932] = {.count = 1}, SHIFT(394, 0),
    [934] = {.count = 1}, SHIFT(395, 0),
    [936] = {.count = 1}, SHIFT(396, 0),
    [938] = {.count = 1}, SHIFT(383, 0),
    [940] = {.count = 1}, SHIFT(384, 0),
    [942] = {.count = 1}, SHIFT(385, 0),
    [944] = {.count = 1}, SHIFT(386, 0),
    [946] = {.count = 1}, SHIFT(420, 0),
    [948] = {.count = 1}, SHIFT(388, 0),
    [950] = {.count = 1}, SHIFT(390, 0),
    [952] = {.count = 1}, SHIFT(387, 0),
    [954] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [956] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [958] = {.count = 1}, SHIFT(418, 0),
    [960] = {.count = 1}, SHIFT(417, 0),
    [962] = {.count = 1}, SHIFT(416, 0),
    [964] = {.count = 1}, SHIFT(411, 0),
    [966] = {.count = 1}, SHIFT(412, 0),
    [968] = {.count = 1}, SHIFT(407, 0),
    [970] = {.count = 1}, SHIFT(403, 0),
    [972] = {.count = 1}, SHIFT(399, 0),
    [974] = {.count = 1}, SHIFT(397, 0),
    [976] = {.count = 1}, SHIFT(398, 0),
    [978] = {.count = 1}, SHIFT(400, 0),
    [980] = {.count = 1}, SHIFT(401, 0),
    [982] = {.count = 1}, SHIFT(402, 0),
    [984] = {.count = 1}, SHIFT(404, 0),
    [986] = {.count = 1}, SHIFT(405, 0),
    [988] = {.count = 1}, SHIFT(406, 0),
    [990] = {.count = 1}, SHIFT(408, 0),
    [992] = {.count = 1}, SHIFT(409, 0),
    [994] = {.count = 1}, SHIFT(410, 0),
    [996] = {.count = 1}, SHIFT(414, 0),
    [998] = {.count = 1}, SHIFT(413, 0),
    [1000] = {.count = 1}, SHIFT(415, 0),
    [1002] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1004] = {.count = 1}, SHIFT(419, 0),
    [1006] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1008] = {.count = 1}, SHIFT(421, 0),
    [1010] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1012] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1014] = {.count = 1}, SHIFT(425, 0),
    [1016] = {.count = 1}, SHIFT(424, 0),
    [1018] = {.count = 1}, SHIFT(426, 0),
    [1020] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1022] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1024] = {.count = 1}, SHIFT(433, 0),
    [1026] = {.count = 1}, SHIFT(434, 0),
    [1028] = {.count = 1}, SHIFT(435, 0),
    [1030] = {.count = 1}, SHIFT(436, 0),
    [1032] = {.count = 1}, SHIFT(437, 0),
    [1034] = {.count = 1}, SHIFT(432, 0),
    [1036] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1038] = {.count = 1}, SHIFT(440, 0),
    [1040] = {.count = 1}, SHIFT(439, 0),
    [1042] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1044] = {.count = 1}, SHIFT(438, 0),
    [1046] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1048] = {.count = 1}, SHIFT(441, 0),
    [1050] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1052] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1054] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1056] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1058] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
