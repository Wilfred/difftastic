#include "tree_sitter/parser.h"

#define STATE_COUNT 719
#define SYMBOL_COUNT 116

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
    sym_channel_type,
    sym_function_type,
    sym_block,
    sym__statement,
    sym_send_statement,
    sym_inc_statement,
    sym_dec_statement,
    sym_assignment_statement,
    sym_short_var_declaration,
    sym__expression,
    sym_call_expression,
    sym_composite_literal,
    sym_literal_value,
    sym__element_list,
    sym_element,
    sym_unary_expression,
    sym_binary_expression,
    sym__primary_expression,
    sym_qualified_identifier,
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
    aux_sym_block_repeat1,
    anon_sym_LF,
    anon_sym_SEMI,
    anon_sym_package,
    anon_sym_import,
    anon_sym_LPAREN,
    anon_sym_RPAREN,
    anon_sym_DOT,
    anon_sym_const,
    anon_sym_EQ,
    anon_sym_var,
    anon_sym_func,
    anon_sym_COMMA,
    anon_sym_type,
    anon_sym_STAR,
    anon_sym_LBRACK,
    anon_sym_RBRACK,
    anon_sym_struct,
    anon_sym_LBRACE,
    anon_sym_RBRACE,
    anon_sym_interface,
    anon_sym_map,
    anon_sym_chan,
    anon_sym_LT_DASH,
    anon_sym_PLUS_PLUS,
    anon_sym_DASH_DASH,
    aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH,
    anon_sym_COLON_EQ,
    anon_sym_COLON,
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
    [sym_channel_type] = "channel_type",
    [sym_function_type] = "function_type",
    [sym_block] = "block",
    [sym__statement] = "_statement",
    [sym_send_statement] = "send_statement",
    [sym_inc_statement] = "inc_statement",
    [sym_dec_statement] = "dec_statement",
    [sym_assignment_statement] = "assignment_statement",
    [sym_short_var_declaration] = "short_var_declaration",
    [sym__expression] = "_expression",
    [sym_call_expression] = "call_expression",
    [sym_composite_literal] = "composite_literal",
    [sym_literal_value] = "literal_value",
    [sym__element_list] = "_element_list",
    [sym_element] = "element",
    [sym_unary_expression] = "unary_expression",
    [sym_binary_expression] = "binary_expression",
    [sym__primary_expression] = "_primary_expression",
    [sym_qualified_identifier] = "qualified_identifier",
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
    [aux_sym_block_repeat1] = "block_repeat1",
    [ts_builtin_sym_error] = "ERROR",
    [ts_builtin_sym_end] = "END",
    [anon_sym_LF] = "\n",
    [anon_sym_SEMI] = ";",
    [anon_sym_package] = "package",
    [anon_sym_import] = "import",
    [anon_sym_LPAREN] = "(",
    [anon_sym_RPAREN] = ")",
    [anon_sym_DOT] = ".",
    [anon_sym_const] = "const",
    [anon_sym_EQ] = "=",
    [anon_sym_var] = "var",
    [anon_sym_func] = "func",
    [anon_sym_COMMA] = ",",
    [anon_sym_type] = "type",
    [anon_sym_STAR] = "*",
    [anon_sym_LBRACK] = "[",
    [anon_sym_RBRACK] = "]",
    [anon_sym_struct] = "struct",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_interface] = "interface",
    [anon_sym_map] = "map",
    [anon_sym_chan] = "chan",
    [anon_sym_LT_DASH] = "<-",
    [anon_sym_PLUS_PLUS] = "++",
    [anon_sym_DASH_DASH] = "--",
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = "/(*|/|%|<<|>>|&|&^|+|-|||^|)=/",
    [anon_sym_COLON_EQ] = ":=",
    [anon_sym_COLON] = ":",
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
    [sym_channel_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_function_type] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_block] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__statement] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_send_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_inc_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_dec_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_assignment_statement] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_short_var_declaration] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_call_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_composite_literal] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_literal_value] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__element_list] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_element] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_unary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym_binary_expression] = {.visible = true, .named = true, .structural = true, .extra = false},
    [sym__primary_expression] = {.visible = false, .named = false, .structural = true, .extra = false},
    [sym_qualified_identifier] = {.visible = true, .named = true, .structural = true, .extra = false},
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
    [aux_sym_block_repeat1] = {.visible = false, .named = false, .structural = true, .extra = false},
    [ts_builtin_sym_error] = {.visible = true, .named = true, .structural = true, .extra = false},
    [ts_builtin_sym_end] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_LF] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_SEMI] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_package] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_import] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RPAREN] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DOT] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_const] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_var] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_func] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COMMA] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_type] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_STAR] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACK] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_struct] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_RBRACE] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_interface] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_map] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_chan] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_LT_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_PLUS_PLUS] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_DASH_DASH] = {.visible = true, .named = false, .structural = true, .extra = false},
    [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = {.visible = false, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON_EQ] = {.visible = true, .named = false, .structural = true, .extra = false},
    [anon_sym_COLON] = {.visible = true, .named = false, .structural = true, .extra = false},
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
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (lookahead == ':')
                ADVANCE(28);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(35);
            if (lookahead == '>')
                ADVANCE(37);
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
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(58);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 'p')
                ADVANCE(75);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == 't')
                ADVANCE(88);
            if (lookahead == 'v')
                ADVANCE(92);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(96);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            START_TOKEN();
            ACCEPT_TOKEN(anon_sym_LF);
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
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 8:
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 9:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(11);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 10:
            ACCEPT_TOKEN(anon_sym_AMP_AMP);
        case 11:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 12:
            ACCEPT_TOKEN(anon_sym_LPAREN);
        case 13:
            ACCEPT_TOKEN(anon_sym_RPAREN);
        case 14:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_STAR);
        case 15:
            if (lookahead == '+')
                ADVANCE(16);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 16:
            ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
        case 17:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 18:
            if (lookahead == '-')
                ADVANCE(19);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 19:
            ACCEPT_TOKEN(anon_sym_DASH_DASH);
        case 20:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 21:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 22:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(22);
            ACCEPT_TOKEN(sym_comment);
        case 23:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            if (lookahead == 'X')
                ADVANCE(25);
            if (lookahead == 'x')
                ADVANCE(25);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 24:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(24);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 25:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            LEX_ERROR();
        case 26:
            if ('0' <= lookahead && lookahead <= '7')
                ADVANCE(26);
            ACCEPT_TOKEN(aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH);
        case 27:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            ACCEPT_TOKEN(aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH);
        case 28:
            if (lookahead == '=')
                ADVANCE(29);
            ACCEPT_TOKEN(anon_sym_COLON);
        case 29:
            ACCEPT_TOKEN(anon_sym_COLON_EQ);
        case 30:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 31:
            if (lookahead == '-')
                ADVANCE(32);
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 32:
            ACCEPT_TOKEN(anon_sym_LT_DASH);
        case 33:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 34:
            ACCEPT_TOKEN(anon_sym_LT_EQ);
        case 35:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_TOKEN(anon_sym_EQ);
        case 36:
            ACCEPT_TOKEN(anon_sym_EQ_EQ);
        case 37:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(39);
            ACCEPT_TOKEN(anon_sym_GT);
        case 38:
            ACCEPT_TOKEN(anon_sym_GT_EQ);
        case 39:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 40:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 41:
            ACCEPT_TOKEN(anon_sym_LBRACK);
        case 42:
            ACCEPT_TOKEN(anon_sym_RBRACK);
        case 43:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_CARET);
        case 44:
            if (lookahead == '`')
                ADVANCE(45);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '`')))
                ADVANCE(44);
            LEX_ERROR();
        case 45:
            ACCEPT_TOKEN(sym_raw_string_literal);
        case 46:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 47:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(48);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 48:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(49);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 49:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_chan);
        case 50:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(51);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 51:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(52);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 52:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(53);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 53:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_const);
        case 54:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(55);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 55:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(56);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 56:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(57);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 57:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_func);
        case 58:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(59);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 59:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(60);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 60:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 61:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 62:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 63:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_import);
        case 64:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 65:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 66:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(67);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 67:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(68);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 68:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(69);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 69:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(70);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 70:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(71);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 71:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_interface);
        case 72:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(73);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 73:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(74);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 74:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_map);
        case 75:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(76);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 76:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(77);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 77:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'j') ||
                ('l' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'k')
                ADVANCE(78);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 78:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(79);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 79:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(80);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 80:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(81);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 81:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_package);
        case 82:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(83);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 83:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(84);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 84:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(85);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 85:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(86);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 86:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(87);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 87:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_struct);
        case 88:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(89);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 89:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(90);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 90:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(91);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 91:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_type);
        case 92:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(93);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 93:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(94);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 94:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            ACCEPT_TOKEN(anon_sym_var);
        case 95:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 96:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '|')
                ADVANCE(97);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 97:
            ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
        case 98:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 99:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'p')
                ADVANCE(101);
            LEX_ERROR();
        case 100:
            if (lookahead == '/')
                ADVANCE(22);
            LEX_ERROR();
        case 101:
            if (lookahead == 'a')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 'c')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 'k')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'a')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'g')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'e')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            ACCEPT_TOKEN(anon_sym_package);
        case 108:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 109:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(115);
            if (lookahead == 'i')
                ADVANCE(119);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            LEX_ERROR();
        case 110:
            if (lookahead == 'o')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'n')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 's')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            if (lookahead == 't')
                ADVANCE(114);
            LEX_ERROR();
        case 114:
            ACCEPT_TOKEN(anon_sym_const);
        case 115:
            if (lookahead == 'u')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'n')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'c')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            ACCEPT_TOKEN(anon_sym_func);
        case 119:
            if (lookahead == 'm')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'p')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            if (lookahead == 'o')
                ADVANCE(122);
            LEX_ERROR();
        case 122:
            if (lookahead == 'r')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            if (lookahead == 't')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(anon_sym_import);
        case 125:
            if (lookahead == 'y')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'p')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'e')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(anon_sym_type);
        case 129:
            if (lookahead == 'a')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            if (lookahead == 'r')
                ADVANCE(131);
            LEX_ERROR();
        case 131:
            ACCEPT_TOKEN(anon_sym_var);
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 133:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(133);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 134:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(110);
            if (lookahead == 'f')
                ADVANCE(115);
            if (lookahead == 't')
                ADVANCE(125);
            if (lookahead == 'v')
                ADVANCE(129);
            LEX_ERROR();
        case 135:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 136:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(136);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 137:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(137);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            LEX_ERROR();
        case 138:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(138);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_STAR);
        case 140:
            if (lookahead == '-')
                ADVANCE(32);
            LEX_ERROR();
        case 141:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(47);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 142:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(64);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 143:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(143);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 144:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(144);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 145:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 146:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(146);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '[')
                ADVANCE(41);
            LEX_ERROR();
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == 'c')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'h')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'n')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_chan);
        case 152:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(152);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 153:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(153);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 154:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ']')
                ADVANCE(42);
            LEX_ERROR();
        case 155:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(155);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 156:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 157:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(157);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            LEX_ERROR();
        case 158:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(158);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 159:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(159);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 160:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(160);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 161:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(161);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 162:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(162);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            LEX_ERROR();
        case 163:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(163);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 164:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(164);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 165:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(165);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 167:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(167);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 169:
            ACCEPT_TOKEN(anon_sym_PERCENT);
        case 170:
            if (lookahead == '&')
                ADVANCE(10);
            if (lookahead == '^')
                ADVANCE(171);
            ACCEPT_TOKEN(anon_sym_AMP);
        case 171:
            ACCEPT_TOKEN(anon_sym_AMP_CARET);
        case 172:
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 173:
            ACCEPT_TOKEN(anon_sym_DASH);
        case 174:
            if (lookahead == '/')
                ADVANCE(22);
            ACCEPT_TOKEN(anon_sym_SLASH);
        case 175:
            if (lookahead == '<')
                ADVANCE(176);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 176:
            ACCEPT_TOKEN(anon_sym_LT_LT);
        case 177:
            if (lookahead == '=')
                ADVANCE(36);
            LEX_ERROR();
        case 178:
            if (lookahead == '=')
                ADVANCE(38);
            if (lookahead == '>')
                ADVANCE(179);
            ACCEPT_TOKEN(anon_sym_GT);
        case 179:
            ACCEPT_TOKEN(anon_sym_GT_GT);
        case 180:
            ACCEPT_TOKEN(anon_sym_CARET);
        case 181:
            if (lookahead == '|')
                ADVANCE(97);
            ACCEPT_TOKEN(anon_sym_PIPE);
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(184);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ':')
                ADVANCE(185);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 185:
            ACCEPT_TOKEN(anon_sym_COLON);
        case 186:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(186);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ':')
                ADVANCE(185);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 187:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(187);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 188:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(188);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ':')
                ADVANCE(185);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 189:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(189);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 190:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(190);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 191:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(191);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 192:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(192);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 193:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(193);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 194:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(194);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 195:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(195);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == ']')
                ADVANCE(42);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '0')
                ADVANCE(23);
            if ('1' <= lookahead && lookahead <= '9')
                ADVANCE(27);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                (lookahead == 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            if (lookahead == 'c')
                ADVANCE(203);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            if (lookahead == 't')
                ADVANCE(88);
            if (lookahead == 'v')
                ADVANCE(92);
            if (lookahead == '}')
                ADVANCE(98);
            LEX_ERROR();
        case 203:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(40);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(50);
            ACCEPT_FRAGILE_TOKEN(sym_identifier);
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '{')
                ADVANCE(95);
            LEX_ERROR();
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
            if (lookahead == '%')
                ADVANCE(206);
            if (lookahead == '&')
                ADVANCE(207);
            if (lookahead == '*')
                ADVANCE(206);
            if (lookahead == '+')
                ADVANCE(206);
            if (lookahead == '-')
                ADVANCE(206);
            if (lookahead == '/')
                ADVANCE(208);
            if (lookahead == ':')
                ADVANCE(209);
            if (lookahead == '<')
                ADVANCE(210);
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '>')
                ADVANCE(211);
            if (lookahead == '^')
                ADVANCE(206);
            if (lookahead == '|')
                ADVANCE(206);
            LEX_ERROR();
        case 206:
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 207:
            if (lookahead == '=')
                ADVANCE(8);
            if (lookahead == '^')
                ADVANCE(206);
            LEX_ERROR();
        case 208:
            if (lookahead == '/')
                ADVANCE(22);
            if (lookahead == '=')
                ADVANCE(8);
            LEX_ERROR();
        case 209:
            if (lookahead == '=')
                ADVANCE(29);
            LEX_ERROR();
        case 210:
            if (lookahead == '<')
                ADVANCE(206);
            LEX_ERROR();
        case 211:
            if (lookahead == '>')
                ADVANCE(206);
            LEX_ERROR();
        case 212:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(212);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(209);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(213);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 213:
            if (lookahead == '=')
                ADVANCE(36);
            ACCEPT_FRAGILE_TOKEN(aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH);
        case 214:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(214);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(15);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(18);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(209);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(31);
            if (lookahead == '=')
                ADVANCE(213);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 215:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(215);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 216:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(216);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 217:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(217);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(218);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(219);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(209);
            if (lookahead == '<')
                ADVANCE(220);
            if (lookahead == '=')
                ADVANCE(213);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 218:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_PLUS);
        case 219:
            if (lookahead == '=')
                ADVANCE(8);
            ACCEPT_TOKEN(anon_sym_DASH);
        case 220:
            if (lookahead == '<')
                ADVANCE(33);
            if (lookahead == '=')
                ADVANCE(34);
            ACCEPT_TOKEN(anon_sym_LT);
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(7);
            if (lookahead == '&')
                ADVANCE(9);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(14);
            if (lookahead == '+')
                ADVANCE(218);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(219);
            if (lookahead == '/')
                ADVANCE(21);
            if (lookahead == ':')
                ADVANCE(209);
            if (lookahead == '<')
                ADVANCE(220);
            if (lookahead == '=')
                ADVANCE(213);
            if (lookahead == '>')
                ADVANCE(37);
            if (lookahead == '^')
                ADVANCE(43);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(96);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '!')
                ADVANCE(3);
            if (lookahead == '%')
                ADVANCE(169);
            if (lookahead == '&')
                ADVANCE(170);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '+')
                ADVANCE(172);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '-')
                ADVANCE(173);
            if (lookahead == '/')
                ADVANCE(174);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(175);
            if (lookahead == '=')
                ADVANCE(177);
            if (lookahead == '>')
                ADVANCE(178);
            if (lookahead == '^')
                ADVANCE(180);
            if (lookahead == '{')
                ADVANCE(95);
            if (lookahead == '|')
                ADVANCE(181);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(225);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 225:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == ',')
                ADVANCE(17);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(225);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(225);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '=')
                ADVANCE(225);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '\n')
                ADVANCE(2);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == ';')
                ADVANCE(30);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(225);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '=')
                ADVANCE(225);
            LEX_ERROR();
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '=')
                ADVANCE(225);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
            if (lookahead == '(')
                ADVANCE(12);
            if (lookahead == '*')
                ADVANCE(139);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '<')
                ADVANCE(140);
            if (lookahead == '=')
                ADVANCE(225);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '[')
                ADVANCE(41);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(141);
            if (lookahead == 'f')
                ADVANCE(54);
            if (lookahead == 'i')
                ADVANCE(142);
            if (lookahead == 'm')
                ADVANCE(72);
            if (lookahead == 's')
                ADVANCE(82);
            LEX_ERROR();
        case 233:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(233);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == ')')
                ADVANCE(13);
            if (lookahead == '.')
                ADVANCE(20);
            if (lookahead == '/')
                ADVANCE(100);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '_')
                ADVANCE(40);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        case 234:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(234);
            if (lookahead == '\"')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(100);
            if (lookahead == '`')
                ADVANCE(44);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 99,
    [1] = 108,
    [2] = 109,
    [3] = 132,
    [4] = 109,
    [5] = 109,
    [6] = 133,
    [7] = 133,
    [8] = 133,
    [9] = 134,
    [10] = 108,
    [11] = 135,
    [12] = 136,
    [13] = 136,
    [14] = 136,
    [15] = 136,
    [16] = 133,
    [17] = 137,
    [18] = 138,
    [19] = 133,
    [20] = 133,
    [21] = 143,
    [22] = 138,
    [23] = 144,
    [24] = 145,
    [25] = 145,
    [26] = 146,
    [27] = 138,
    [28] = 147,
    [29] = 152,
    [30] = 132,
    [31] = 133,
    [32] = 138,
    [33] = 133,
    [34] = 133,
    [35] = 138,
    [36] = 133,
    [37] = 138,
    [38] = 153,
    [39] = 153,
    [40] = 143,
    [41] = 138,
    [42] = 144,
    [43] = 145,
    [44] = 145,
    [45] = 146,
    [46] = 138,
    [47] = 147,
    [48] = 154,
    [49] = 132,
    [50] = 153,
    [51] = 138,
    [52] = 153,
    [53] = 153,
    [54] = 138,
    [55] = 153,
    [56] = 138,
    [57] = 153,
    [58] = 138,
    [59] = 153,
    [60] = 155,
    [61] = 133,
    [62] = 156,
    [63] = 153,
    [64] = 157,
    [65] = 158,
    [66] = 155,
    [67] = 137,
    [68] = 159,
    [69] = 160,
    [70] = 158,
    [71] = 161,
    [72] = 160,
    [73] = 160,
    [74] = 143,
    [75] = 137,
    [76] = 138,
    [77] = 144,
    [78] = 145,
    [79] = 145,
    [80] = 146,
    [81] = 138,
    [82] = 147,
    [83] = 162,
    [84] = 132,
    [85] = 160,
    [86] = 138,
    [87] = 160,
    [88] = 160,
    [89] = 138,
    [90] = 160,
    [91] = 138,
    [92] = 153,
    [93] = 138,
    [94] = 160,
    [95] = 155,
    [96] = 156,
    [97] = 160,
    [98] = 160,
    [99] = 163,
    [100] = 138,
    [101] = 133,
    [102] = 156,
    [103] = 132,
    [104] = 160,
    [105] = 164,
    [106] = 133,
    [107] = 138,
    [108] = 132,
    [109] = 133,
    [110] = 165,
    [111] = 138,
    [112] = 166,
    [113] = 133,
    [114] = 160,
    [115] = 163,
    [116] = 156,
    [117] = 166,
    [118] = 143,
    [119] = 138,
    [120] = 144,
    [121] = 145,
    [122] = 145,
    [123] = 146,
    [124] = 138,
    [125] = 147,
    [126] = 167,
    [127] = 132,
    [128] = 166,
    [129] = 138,
    [130] = 166,
    [131] = 166,
    [132] = 138,
    [133] = 166,
    [134] = 138,
    [135] = 153,
    [136] = 138,
    [137] = 166,
    [138] = 155,
    [139] = 156,
    [140] = 166,
    [141] = 166,
    [142] = 163,
    [143] = 156,
    [144] = 166,
    [145] = 166,
    [146] = 145,
    [147] = 168,
    [148] = 168,
    [149] = 168,
    [150] = 153,
    [151] = 138,
    [152] = 145,
    [153] = 146,
    [154] = 182,
    [155] = 168,
    [156] = 168,
    [157] = 168,
    [158] = 183,
    [159] = 145,
    [160] = 184,
    [161] = 184,
    [162] = 186,
    [163] = 156,
    [164] = 187,
    [165] = 184,
    [166] = 183,
    [167] = 168,
    [168] = 188,
    [169] = 184,
    [170] = 184,
    [171] = 184,
    [172] = 183,
    [173] = 156,
    [174] = 184,
    [175] = 184,
    [176] = 156,
    [177] = 186,
    [178] = 186,
    [179] = 183,
    [180] = 156,
    [181] = 168,
    [182] = 189,
    [183] = 145,
    [184] = 190,
    [185] = 190,
    [186] = 187,
    [187] = 190,
    [188] = 183,
    [189] = 191,
    [190] = 190,
    [191] = 190,
    [192] = 190,
    [193] = 183,
    [194] = 156,
    [195] = 190,
    [196] = 190,
    [197] = 156,
    [198] = 187,
    [199] = 187,
    [200] = 192,
    [201] = 192,
    [202] = 192,
    [203] = 192,
    [204] = 192,
    [205] = 192,
    [206] = 190,
    [207] = 190,
    [208] = 190,
    [209] = 190,
    [210] = 190,
    [211] = 159,
    [212] = 145,
    [213] = 193,
    [214] = 193,
    [215] = 193,
    [216] = 194,
    [217] = 193,
    [218] = 193,
    [219] = 193,
    [220] = 183,
    [221] = 156,
    [222] = 193,
    [223] = 193,
    [224] = 159,
    [225] = 192,
    [226] = 192,
    [227] = 192,
    [228] = 192,
    [229] = 192,
    [230] = 192,
    [231] = 192,
    [232] = 193,
    [233] = 193,
    [234] = 193,
    [235] = 193,
    [236] = 193,
    [237] = 193,
    [238] = 159,
    [239] = 159,
    [240] = 193,
    [241] = 190,
    [242] = 192,
    [243] = 192,
    [244] = 192,
    [245] = 192,
    [246] = 192,
    [247] = 192,
    [248] = 184,
    [249] = 184,
    [250] = 184,
    [251] = 184,
    [252] = 184,
    [253] = 159,
    [254] = 184,
    [255] = 138,
    [256] = 153,
    [257] = 138,
    [258] = 145,
    [259] = 145,
    [260] = 143,
    [261] = 138,
    [262] = 144,
    [263] = 145,
    [264] = 138,
    [265] = 147,
    [266] = 195,
    [267] = 132,
    [268] = 145,
    [269] = 138,
    [270] = 145,
    [271] = 145,
    [272] = 138,
    [273] = 145,
    [274] = 155,
    [275] = 156,
    [276] = 145,
    [277] = 145,
    [278] = 168,
    [279] = 138,
    [280] = 145,
    [281] = 192,
    [282] = 192,
    [283] = 138,
    [284] = 192,
    [285] = 192,
    [286] = 192,
    [287] = 192,
    [288] = 168,
    [289] = 168,
    [290] = 168,
    [291] = 168,
    [292] = 168,
    [293] = 145,
    [294] = 159,
    [295] = 168,
    [296] = 145,
    [297] = 196,
    [298] = 137,
    [299] = 159,
    [300] = 196,
    [301] = 196,
    [302] = 145,
    [303] = 137,
    [304] = 159,
    [305] = 145,
    [306] = 145,
    [307] = 163,
    [308] = 156,
    [309] = 145,
    [310] = 145,
    [311] = 166,
    [312] = 138,
    [313] = 166,
    [314] = 166,
    [315] = 197,
    [316] = 137,
    [317] = 159,
    [318] = 197,
    [319] = 197,
    [320] = 166,
    [321] = 137,
    [322] = 159,
    [323] = 166,
    [324] = 166,
    [325] = 168,
    [326] = 138,
    [327] = 160,
    [328] = 138,
    [329] = 160,
    [330] = 160,
    [331] = 159,
    [332] = 198,
    [333] = 137,
    [334] = 159,
    [335] = 198,
    [336] = 198,
    [337] = 160,
    [338] = 137,
    [339] = 159,
    [340] = 160,
    [341] = 160,
    [342] = 158,
    [343] = 156,
    [344] = 133,
    [345] = 137,
    [346] = 159,
    [347] = 133,
    [348] = 133,
    [349] = 153,
    [350] = 163,
    [351] = 156,
    [352] = 153,
    [353] = 153,
    [354] = 168,
    [355] = 138,
    [356] = 153,
    [357] = 138,
    [358] = 153,
    [359] = 153,
    [360] = 199,
    [361] = 137,
    [362] = 159,
    [363] = 199,
    [364] = 199,
    [365] = 153,
    [366] = 137,
    [367] = 159,
    [368] = 153,
    [369] = 153,
    [370] = 138,
    [371] = 133,
    [372] = 155,
    [373] = 156,
    [374] = 133,
    [375] = 133,
    [376] = 163,
    [377] = 156,
    [378] = 133,
    [379] = 133,
    [380] = 168,
    [381] = 138,
    [382] = 133,
    [383] = 138,
    [384] = 133,
    [385] = 133,
    [386] = 158,
    [387] = 133,
    [388] = 133,
    [389] = 159,
    [390] = 133,
    [391] = 133,
    [392] = 137,
    [393] = 159,
    [394] = 132,
    [395] = 137,
    [396] = 143,
    [397] = 200,
    [398] = 137,
    [399] = 159,
    [400] = 200,
    [401] = 200,
    [402] = 201,
    [403] = 201,
    [404] = 133,
    [405] = 137,
    [406] = 143,
    [407] = 138,
    [408] = 144,
    [409] = 145,
    [410] = 202,
    [411] = 145,
    [412] = 146,
    [413] = 138,
    [414] = 147,
    [415] = 204,
    [416] = 132,
    [417] = 201,
    [418] = 138,
    [419] = 201,
    [420] = 201,
    [421] = 138,
    [422] = 201,
    [423] = 138,
    [424] = 153,
    [425] = 138,
    [426] = 201,
    [427] = 155,
    [428] = 156,
    [429] = 201,
    [430] = 201,
    [431] = 133,
    [432] = 205,
    [433] = 145,
    [434] = 133,
    [435] = 212,
    [436] = 212,
    [437] = 212,
    [438] = 156,
    [439] = 133,
    [440] = 214,
    [441] = 212,
    [442] = 212,
    [443] = 212,
    [444] = 183,
    [445] = 156,
    [446] = 212,
    [447] = 212,
    [448] = 133,
    [449] = 205,
    [450] = 192,
    [451] = 192,
    [452] = 192,
    [453] = 192,
    [454] = 133,
    [455] = 133,
    [456] = 192,
    [457] = 192,
    [458] = 192,
    [459] = 192,
    [460] = 212,
    [461] = 212,
    [462] = 212,
    [463] = 212,
    [464] = 212,
    [465] = 145,
    [466] = 215,
    [467] = 215,
    [468] = 215,
    [469] = 216,
    [470] = 215,
    [471] = 215,
    [472] = 215,
    [473] = 183,
    [474] = 156,
    [475] = 215,
    [476] = 215,
    [477] = 192,
    [478] = 192,
    [479] = 192,
    [480] = 192,
    [481] = 192,
    [482] = 192,
    [483] = 215,
    [484] = 215,
    [485] = 215,
    [486] = 215,
    [487] = 215,
    [488] = 159,
    [489] = 215,
    [490] = 145,
    [491] = 217,
    [492] = 217,
    [493] = 217,
    [494] = 221,
    [495] = 217,
    [496] = 217,
    [497] = 217,
    [498] = 183,
    [499] = 156,
    [500] = 217,
    [501] = 217,
    [502] = 205,
    [503] = 192,
    [504] = 192,
    [505] = 192,
    [506] = 192,
    [507] = 192,
    [508] = 192,
    [509] = 217,
    [510] = 217,
    [511] = 217,
    [512] = 217,
    [513] = 217,
    [514] = 159,
    [515] = 217,
    [516] = 159,
    [517] = 212,
    [518] = 202,
    [519] = 156,
    [520] = 192,
    [521] = 192,
    [522] = 133,
    [523] = 145,
    [524] = 222,
    [525] = 222,
    [526] = 222,
    [527] = 223,
    [528] = 222,
    [529] = 222,
    [530] = 222,
    [531] = 183,
    [532] = 156,
    [533] = 222,
    [534] = 222,
    [535] = 133,
    [536] = 192,
    [537] = 192,
    [538] = 192,
    [539] = 192,
    [540] = 192,
    [541] = 192,
    [542] = 192,
    [543] = 222,
    [544] = 222,
    [545] = 222,
    [546] = 222,
    [547] = 222,
    [548] = 222,
    [549] = 133,
    [550] = 159,
    [551] = 222,
    [552] = 133,
    [553] = 163,
    [554] = 156,
    [555] = 201,
    [556] = 201,
    [557] = 168,
    [558] = 138,
    [559] = 201,
    [560] = 138,
    [561] = 201,
    [562] = 201,
    [563] = 200,
    [564] = 201,
    [565] = 159,
    [566] = 201,
    [567] = 201,
    [568] = 133,
    [569] = 159,
    [570] = 132,
    [571] = 132,
    [572] = 143,
    [573] = 200,
    [574] = 201,
    [575] = 133,
    [576] = 133,
    [577] = 133,
    [578] = 224,
    [579] = 137,
    [580] = 226,
    [581] = 224,
    [582] = 132,
    [583] = 226,
    [584] = 224,
    [585] = 133,
    [586] = 159,
    [587] = 133,
    [588] = 133,
    [589] = 137,
    [590] = 159,
    [591] = 227,
    [592] = 227,
    [593] = 192,
    [594] = 143,
    [595] = 138,
    [596] = 144,
    [597] = 145,
    [598] = 145,
    [599] = 146,
    [600] = 138,
    [601] = 147,
    [602] = 228,
    [603] = 132,
    [604] = 227,
    [605] = 138,
    [606] = 227,
    [607] = 227,
    [608] = 138,
    [609] = 227,
    [610] = 138,
    [611] = 153,
    [612] = 138,
    [613] = 227,
    [614] = 155,
    [615] = 156,
    [616] = 227,
    [617] = 227,
    [618] = 163,
    [619] = 156,
    [620] = 227,
    [621] = 227,
    [622] = 168,
    [623] = 138,
    [624] = 227,
    [625] = 138,
    [626] = 227,
    [627] = 227,
    [628] = 229,
    [629] = 137,
    [630] = 159,
    [631] = 229,
    [632] = 229,
    [633] = 227,
    [634] = 137,
    [635] = 159,
    [636] = 227,
    [637] = 227,
    [638] = 133,
    [639] = 192,
    [640] = 133,
    [641] = 133,
    [642] = 224,
    [643] = 137,
    [644] = 133,
    [645] = 159,
    [646] = 133,
    [647] = 133,
    [648] = 137,
    [649] = 159,
    [650] = 230,
    [651] = 230,
    [652] = 192,
    [653] = 143,
    [654] = 138,
    [655] = 144,
    [656] = 145,
    [657] = 145,
    [658] = 146,
    [659] = 138,
    [660] = 147,
    [661] = 231,
    [662] = 132,
    [663] = 230,
    [664] = 138,
    [665] = 230,
    [666] = 230,
    [667] = 138,
    [668] = 230,
    [669] = 138,
    [670] = 153,
    [671] = 138,
    [672] = 230,
    [673] = 155,
    [674] = 156,
    [675] = 230,
    [676] = 230,
    [677] = 163,
    [678] = 156,
    [679] = 230,
    [680] = 230,
    [681] = 168,
    [682] = 138,
    [683] = 230,
    [684] = 138,
    [685] = 230,
    [686] = 230,
    [687] = 232,
    [688] = 137,
    [689] = 159,
    [690] = 232,
    [691] = 232,
    [692] = 230,
    [693] = 137,
    [694] = 159,
    [695] = 230,
    [696] = 230,
    [697] = 133,
    [698] = 192,
    [699] = 133,
    [700] = 109,
    [701] = 109,
    [702] = 233,
    [703] = 234,
    [704] = 109,
    [705] = 109,
    [706] = 133,
    [707] = 133,
    [708] = 159,
    [709] = 109,
    [710] = 234,
    [711] = 133,
    [712] = 109,
    [713] = 233,
    [714] = 159,
    [715] = 108,
    [716] = 134,
    [717] = 108,
    [718] = 134,
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
        [anon_sym_LF] = 44,
        [anon_sym_SEMI] = 44,
        [sym_comment] = 8,
    },
    [7] = {
        [anon_sym_LF] = 46,
        [anon_sym_SEMI] = 46,
        [sym_comment] = 8,
    },
    [8] = {
        [anon_sym_LF] = 48,
        [anon_sym_SEMI] = 48,
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
        [anon_sym_type] = 34,
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
        [sym_parameters] = 78,
        [anon_sym_LPAREN] = 80,
        [sym_identifier] = 82,
        [sym_comment] = 8,
    },
    [15] = {
        [sym_type_spec] = 84,
        [anon_sym_LPAREN] = 86,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [16] = {
        [anon_sym_LF] = 90,
        [anon_sym_SEMI] = 90,
        [sym_comment] = 8,
    },
    [17] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 94,
        [anon_sym_RPAREN] = 96,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [18] = {
        [sym__type] = 98,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [19] = {
        [anon_sym_LF] = 120,
        [anon_sym_SEMI] = 120,
        [sym_comment] = 8,
    },
    [20] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [sym_comment] = 8,
    },
    [21] = {
        [sym_parameters] = 124,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [22] = {
        [sym__type] = 128,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [23] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 132,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 140,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [24] = {
        [anon_sym_LBRACE] = 152,
        [sym_comment] = 8,
    },
    [25] = {
        [anon_sym_LBRACE] = 154,
        [sym_comment] = 8,
    },
    [26] = {
        [anon_sym_LBRACK] = 156,
        [sym_comment] = 8,
    },
    [27] = {
        [sym__type] = 158,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 160,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [28] = {
        [anon_sym_chan] = 162,
        [sym_comment] = 8,
    },
    [29] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 164,
        [sym_comment] = 8,
    },
    [30] = {
        [sym_identifier] = 166,
        [sym_comment] = 8,
    },
    [31] = {
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [sym_comment] = 8,
    },
    [32] = {
        [sym__type] = 170,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [33] = {
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [sym_comment] = 8,
    },
    [34] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_comment] = 8,
    },
    [35] = {
        [sym__type] = 176,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [36] = {
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [sym_comment] = 8,
    },
    [37] = {
        [sym__type] = 180,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [38] = {
        [anon_sym_RBRACK] = 202,
        [sym_comment] = 8,
    },
    [39] = {
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [40] = {
        [sym_parameters] = 204,
        [anon_sym_LPAREN] = 206,
        [sym_comment] = 8,
    },
    [41] = {
        [sym__type] = 208,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [42] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 210,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 212,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [43] = {
        [anon_sym_LBRACE] = 214,
        [sym_comment] = 8,
    },
    [44] = {
        [anon_sym_LBRACE] = 216,
        [sym_comment] = 8,
    },
    [45] = {
        [anon_sym_LBRACK] = 218,
        [sym_comment] = 8,
    },
    [46] = {
        [sym__type] = 220,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 222,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [47] = {
        [anon_sym_chan] = 224,
        [sym_comment] = 8,
    },
    [48] = {
        [anon_sym_DOT] = 226,
        [anon_sym_RBRACK] = 122,
        [sym_comment] = 8,
    },
    [49] = {
        [sym_identifier] = 228,
        [sym_comment] = 8,
    },
    [50] = {
        [anon_sym_RBRACK] = 168,
        [sym_comment] = 8,
    },
    [51] = {
        [sym__type] = 230,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [52] = {
        [anon_sym_RBRACK] = 172,
        [sym_comment] = 8,
    },
    [53] = {
        [anon_sym_RBRACK] = 174,
        [sym_comment] = 8,
    },
    [54] = {
        [sym__type] = 232,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [55] = {
        [anon_sym_RBRACK] = 178,
        [sym_comment] = 8,
    },
    [56] = {
        [sym__type] = 234,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [57] = {
        [anon_sym_RBRACK] = 236,
        [sym_comment] = 8,
    },
    [58] = {
        [sym__type] = 238,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [59] = {
        [anon_sym_RBRACK] = 240,
        [sym_comment] = 8,
    },
    [60] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 244,
        [anon_sym_RBRACE] = 246,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [61] = {
        [anon_sym_LF] = 250,
        [anon_sym_SEMI] = 250,
        [sym_comment] = 8,
    },
    [62] = {
        [anon_sym_RBRACE] = 252,
        [sym_comment] = 8,
    },
    [63] = {
        [anon_sym_RBRACK] = 254,
        [sym_comment] = 8,
    },
    [64] = {
        [sym_parameters] = 256,
        [anon_sym_LF] = 250,
        [anon_sym_SEMI] = 250,
        [anon_sym_LPAREN] = 126,
        [sym_comment] = 8,
    },
    [65] = {
        [sym_parameters] = 258,
        [sym__type] = 258,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 260,
        [anon_sym_SEMI] = 260,
        [anon_sym_LPAREN] = 262,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [66] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 264,
        [anon_sym_RBRACE] = 266,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [67] = {
        [sym__parameter_list] = 268,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 272,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [68] = {
        [anon_sym_RPAREN] = 276,
        [sym_comment] = 8,
    },
    [69] = {
        [anon_sym_RPAREN] = 278,
        [anon_sym_COMMA] = 280,
        [sym_comment] = 8,
    },
    [70] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [71] = {
        [sym__type] = 284,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_RPAREN] = 278,
        [anon_sym_func] = 288,
        [anon_sym_COMMA] = 280,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [72] = {
        [anon_sym_RPAREN] = 306,
        [anon_sym_COMMA] = 306,
        [sym_comment] = 8,
    },
    [73] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [74] = {
        [sym_parameters] = 308,
        [anon_sym_LPAREN] = 310,
        [sym_comment] = 8,
    },
    [75] = {
        [sym__parameter_list] = 312,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 314,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [76] = {
        [sym__type] = 316,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [77] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 318,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 320,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [78] = {
        [anon_sym_LBRACE] = 322,
        [sym_comment] = 8,
    },
    [79] = {
        [anon_sym_LBRACE] = 324,
        [sym_comment] = 8,
    },
    [80] = {
        [anon_sym_LBRACK] = 326,
        [sym_comment] = 8,
    },
    [81] = {
        [sym__type] = 328,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 330,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [82] = {
        [anon_sym_chan] = 332,
        [sym_comment] = 8,
    },
    [83] = {
        [anon_sym_RPAREN] = 122,
        [anon_sym_DOT] = 334,
        [anon_sym_COMMA] = 122,
        [sym_comment] = 8,
    },
    [84] = {
        [sym_identifier] = 336,
        [sym_comment] = 8,
    },
    [85] = {
        [anon_sym_RPAREN] = 168,
        [anon_sym_COMMA] = 168,
        [sym_comment] = 8,
    },
    [86] = {
        [sym__type] = 338,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [87] = {
        [anon_sym_RPAREN] = 172,
        [anon_sym_COMMA] = 172,
        [sym_comment] = 8,
    },
    [88] = {
        [anon_sym_RPAREN] = 174,
        [anon_sym_COMMA] = 174,
        [sym_comment] = 8,
    },
    [89] = {
        [sym__type] = 340,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [90] = {
        [anon_sym_RPAREN] = 178,
        [anon_sym_COMMA] = 178,
        [sym_comment] = 8,
    },
    [91] = {
        [sym__type] = 342,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [92] = {
        [anon_sym_RBRACK] = 344,
        [sym_comment] = 8,
    },
    [93] = {
        [sym__type] = 346,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [94] = {
        [anon_sym_RPAREN] = 240,
        [anon_sym_COMMA] = 240,
        [sym_comment] = 8,
    },
    [95] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 348,
        [anon_sym_RBRACE] = 350,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [96] = {
        [anon_sym_RBRACE] = 352,
        [sym_comment] = 8,
    },
    [97] = {
        [anon_sym_RPAREN] = 254,
        [anon_sym_COMMA] = 254,
        [sym_comment] = 8,
    },
    [98] = {
        [anon_sym_RPAREN] = 354,
        [anon_sym_COMMA] = 354,
        [sym_comment] = 8,
    },
    [99] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 360,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 364,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [100] = {
        [sym__type] = 368,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [101] = {
        [anon_sym_LF] = 390,
        [anon_sym_SEMI] = 390,
        [sym_comment] = 8,
    },
    [102] = {
        [anon_sym_RBRACE] = 392,
        [sym_comment] = 8,
    },
    [103] = {
        [sym_identifier] = 368,
        [sym_comment] = 8,
    },
    [104] = {
        [anon_sym_RPAREN] = 394,
        [anon_sym_COMMA] = 394,
        [sym_comment] = 8,
    },
    [105] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [sym__string_literal] = 398,
        [aux_sym_identifier_list_repeat1] = 400,
        [anon_sym_LF] = 402,
        [anon_sym_SEMI] = 402,
        [anon_sym_func] = 396,
        [anon_sym_COMMA] = 404,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [106] = {
        [anon_sym_LF] = 408,
        [anon_sym_SEMI] = 408,
        [sym_comment] = 8,
    },
    [107] = {
        [sym__type] = 410,
        [sym_pointer_type] = 410,
        [sym_array_type] = 410,
        [sym_slice_type] = 410,
        [sym_struct_type] = 410,
        [sym_interface_type] = 410,
        [sym_map_type] = 410,
        [sym_channel_type] = 410,
        [sym_function_type] = 410,
        [sym_qualified_identifier] = 410,
        [anon_sym_func] = 410,
        [anon_sym_STAR] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_struct] = 410,
        [anon_sym_interface] = 410,
        [anon_sym_map] = 410,
        [anon_sym_chan] = 410,
        [anon_sym_LT_DASH] = 410,
        [sym_identifier] = 410,
        [sym_comment] = 8,
    },
    [108] = {
        [sym_identifier] = 412,
        [sym_comment] = 8,
    },
    [109] = {
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [sym_comment] = 8,
    },
    [110] = {
        [sym__type] = 416,
        [sym_pointer_type] = 416,
        [sym_array_type] = 416,
        [sym_slice_type] = 416,
        [sym_struct_type] = 416,
        [sym_interface_type] = 416,
        [sym_map_type] = 416,
        [sym_channel_type] = 416,
        [sym_function_type] = 416,
        [sym_qualified_identifier] = 416,
        [aux_sym_identifier_list_repeat1] = 418,
        [anon_sym_func] = 416,
        [anon_sym_COMMA] = 404,
        [anon_sym_STAR] = 416,
        [anon_sym_LBRACK] = 416,
        [anon_sym_struct] = 416,
        [anon_sym_interface] = 416,
        [anon_sym_map] = 416,
        [anon_sym_chan] = 416,
        [anon_sym_LT_DASH] = 416,
        [sym_identifier] = 416,
        [sym_comment] = 8,
    },
    [111] = {
        [sym__type] = 420,
        [sym_pointer_type] = 420,
        [sym_array_type] = 420,
        [sym_slice_type] = 420,
        [sym_struct_type] = 420,
        [sym_interface_type] = 420,
        [sym_map_type] = 420,
        [sym_channel_type] = 420,
        [sym_function_type] = 420,
        [sym_qualified_identifier] = 420,
        [anon_sym_func] = 420,
        [anon_sym_STAR] = 420,
        [anon_sym_LBRACK] = 420,
        [anon_sym_struct] = 420,
        [anon_sym_interface] = 420,
        [anon_sym_map] = 420,
        [anon_sym_chan] = 420,
        [anon_sym_LT_DASH] = 420,
        [sym_identifier] = 420,
        [sym_comment] = 8,
    },
    [112] = {
        [sym__string_literal] = 422,
        [anon_sym_LF] = 408,
        [anon_sym_SEMI] = 408,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [113] = {
        [anon_sym_LF] = 424,
        [anon_sym_SEMI] = 424,
        [sym_comment] = 8,
    },
    [114] = {
        [anon_sym_RPAREN] = 426,
        [anon_sym_COMMA] = 426,
        [sym_comment] = 8,
    },
    [115] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 428,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 430,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [116] = {
        [anon_sym_RBRACE] = 432,
        [sym_comment] = 8,
    },
    [117] = {
        [sym__string_literal] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [118] = {
        [sym_parameters] = 434,
        [anon_sym_LPAREN] = 436,
        [sym_comment] = 8,
    },
    [119] = {
        [sym__type] = 438,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [120] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 440,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 442,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [121] = {
        [anon_sym_LBRACE] = 444,
        [sym_comment] = 8,
    },
    [122] = {
        [anon_sym_LBRACE] = 446,
        [sym_comment] = 8,
    },
    [123] = {
        [anon_sym_LBRACK] = 448,
        [sym_comment] = 8,
    },
    [124] = {
        [sym__type] = 450,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 452,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [125] = {
        [anon_sym_chan] = 454,
        [sym_comment] = 8,
    },
    [126] = {
        [sym__string_literal] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 456,
        [sym_raw_string_literal] = 122,
        [sym_interpreted_string_literal] = 122,
        [sym_comment] = 8,
    },
    [127] = {
        [sym_identifier] = 458,
        [sym_comment] = 8,
    },
    [128] = {
        [sym__string_literal] = 168,
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [sym_raw_string_literal] = 168,
        [sym_interpreted_string_literal] = 168,
        [sym_comment] = 8,
    },
    [129] = {
        [sym__type] = 460,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [130] = {
        [sym__string_literal] = 172,
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [sym_raw_string_literal] = 172,
        [sym_interpreted_string_literal] = 172,
        [sym_comment] = 8,
    },
    [131] = {
        [sym__string_literal] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [sym_raw_string_literal] = 174,
        [sym_interpreted_string_literal] = 174,
        [sym_comment] = 8,
    },
    [132] = {
        [sym__type] = 462,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [133] = {
        [sym__string_literal] = 178,
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [sym_raw_string_literal] = 178,
        [sym_interpreted_string_literal] = 178,
        [sym_comment] = 8,
    },
    [134] = {
        [sym__type] = 464,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [135] = {
        [anon_sym_RBRACK] = 466,
        [sym_comment] = 8,
    },
    [136] = {
        [sym__type] = 468,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [137] = {
        [sym__string_literal] = 240,
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [sym_raw_string_literal] = 240,
        [sym_interpreted_string_literal] = 240,
        [sym_comment] = 8,
    },
    [138] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 470,
        [anon_sym_RBRACE] = 472,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [139] = {
        [anon_sym_RBRACE] = 474,
        [sym_comment] = 8,
    },
    [140] = {
        [sym__string_literal] = 254,
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [sym_raw_string_literal] = 254,
        [sym_interpreted_string_literal] = 254,
        [sym_comment] = 8,
    },
    [141] = {
        [sym__string_literal] = 354,
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [sym_raw_string_literal] = 354,
        [sym_interpreted_string_literal] = 354,
        [sym_comment] = 8,
    },
    [142] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 476,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 478,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [143] = {
        [anon_sym_RBRACE] = 480,
        [sym_comment] = 8,
    },
    [144] = {
        [sym__string_literal] = 394,
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [sym_raw_string_literal] = 394,
        [sym_interpreted_string_literal] = 394,
        [sym_comment] = 8,
    },
    [145] = {
        [sym__string_literal] = 426,
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [sym_raw_string_literal] = 426,
        [sym_interpreted_string_literal] = 426,
        [sym_comment] = 8,
    },
    [146] = {
        [sym_literal_value] = 482,
        [anon_sym_LBRACE] = 484,
        [sym_comment] = 8,
    },
    [147] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 490,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [148] = {
        [anon_sym_LPAREN] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_RBRACK] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [149] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACK] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [150] = {
        [anon_sym_RBRACK] = 504,
        [sym_comment] = 8,
    },
    [151] = {
        [sym__type] = 506,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [152] = {
        [anon_sym_LBRACE] = 508,
        [sym_comment] = 8,
    },
    [153] = {
        [anon_sym_LBRACK] = 510,
        [sym_comment] = 8,
    },
    [154] = {
        [sym_literal_value] = 482,
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACK] = 502,
        [anon_sym_LBRACE] = 484,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [155] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACK] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [156] = {
        [anon_sym_LPAREN] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_RBRACK] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [157] = {
        [anon_sym_LPAREN] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_RBRACK] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [158] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 524,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 532,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [159] = {
        [sym_literal_value] = 540,
        [anon_sym_LBRACE] = 542,
        [sym_comment] = 8,
    },
    [160] = {
        [anon_sym_LPAREN] = 544,
        [anon_sym_COMMA] = 546,
        [anon_sym_STAR] = 548,
        [anon_sym_RBRACE] = 546,
        [anon_sym_COLON] = 550,
        [anon_sym_SLASH] = 548,
        [anon_sym_PERCENT] = 548,
        [anon_sym_LT_LT] = 548,
        [anon_sym_GT_GT] = 548,
        [anon_sym_AMP] = 548,
        [anon_sym_AMP_CARET] = 548,
        [anon_sym_PLUS] = 552,
        [anon_sym_DASH] = 552,
        [anon_sym_PIPE] = 552,
        [anon_sym_CARET] = 552,
        [anon_sym_EQ_EQ] = 554,
        [anon_sym_BANG_EQ] = 554,
        [anon_sym_LT] = 554,
        [anon_sym_LT_EQ] = 554,
        [anon_sym_GT] = 554,
        [anon_sym_GT_EQ] = 554,
        [anon_sym_AMP_AMP] = 556,
        [anon_sym_PIPE_PIPE] = 558,
        [sym_comment] = 8,
    },
    [161] = {
        [anon_sym_LPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_RBRACE] = 500,
        [anon_sym_COLON] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [162] = {
        [anon_sym_COMMA] = 546,
        [anon_sym_RBRACE] = 546,
        [anon_sym_COLON] = 550,
        [sym_comment] = 8,
    },
    [163] = {
        [anon_sym_RBRACE] = 560,
        [sym_comment] = 8,
    },
    [164] = {
        [anon_sym_COMMA] = 562,
        [anon_sym_RBRACE] = 564,
        [sym_comment] = 8,
    },
    [165] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACE] = 502,
        [anon_sym_COLON] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [166] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 566,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 568,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [167] = {
        [anon_sym_LPAREN] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_RBRACK] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [168] = {
        [sym_literal_value] = 540,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 542,
        [anon_sym_RBRACE] = 502,
        [anon_sym_COLON] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [169] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACE] = 414,
        [anon_sym_COLON] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [170] = {
        [anon_sym_LPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_RBRACE] = 512,
        [anon_sym_COLON] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [171] = {
        [anon_sym_LPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_RBRACE] = 514,
        [anon_sym_COLON] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [172] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 572,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 574,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [173] = {
        [anon_sym_RBRACE] = 576,
        [sym_comment] = 8,
    },
    [174] = {
        [anon_sym_LPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_RBRACE] = 570,
        [anon_sym_COLON] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [175] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_COLON] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [176] = {
        [anon_sym_RBRACE] = 580,
        [sym_comment] = 8,
    },
    [177] = {
        [anon_sym_COMMA] = 570,
        [anon_sym_RBRACE] = 570,
        [anon_sym_COLON] = 570,
        [sym_comment] = 8,
    },
    [178] = {
        [anon_sym_COMMA] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_COLON] = 578,
        [sym_comment] = 8,
    },
    [179] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 582,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 584,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [180] = {
        [anon_sym_RBRACE] = 586,
        [sym_comment] = 8,
    },
    [181] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACK] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [182] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 590,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_literal_value] = 594,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 598,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [183] = {
        [sym_literal_value] = 606,
        [anon_sym_LBRACE] = 608,
        [sym_comment] = 8,
    },
    [184] = {
        [anon_sym_LPAREN] = 610,
        [anon_sym_COMMA] = 612,
        [anon_sym_STAR] = 614,
        [anon_sym_RBRACE] = 612,
        [anon_sym_SLASH] = 614,
        [anon_sym_PERCENT] = 614,
        [anon_sym_LT_LT] = 614,
        [anon_sym_GT_GT] = 614,
        [anon_sym_AMP] = 614,
        [anon_sym_AMP_CARET] = 614,
        [anon_sym_PLUS] = 616,
        [anon_sym_DASH] = 616,
        [anon_sym_PIPE] = 616,
        [anon_sym_CARET] = 616,
        [anon_sym_EQ_EQ] = 618,
        [anon_sym_BANG_EQ] = 618,
        [anon_sym_LT] = 618,
        [anon_sym_LT_EQ] = 618,
        [anon_sym_GT] = 618,
        [anon_sym_GT_EQ] = 618,
        [anon_sym_AMP_AMP] = 620,
        [anon_sym_PIPE_PIPE] = 622,
        [sym_comment] = 8,
    },
    [185] = {
        [anon_sym_LPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_RBRACE] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [186] = {
        [anon_sym_COMMA] = 612,
        [anon_sym_RBRACE] = 612,
        [sym_comment] = 8,
    },
    [187] = {
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_RBRACE] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [188] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 624,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 626,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [189] = {
        [sym_literal_value] = 606,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 608,
        [anon_sym_RBRACE] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [190] = {
        [anon_sym_LPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_RBRACE] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [191] = {
        [anon_sym_LPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_RBRACE] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [192] = {
        [anon_sym_LPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_RBRACE] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [193] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 628,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 630,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [194] = {
        [anon_sym_RBRACE] = 632,
        [sym_comment] = 8,
    },
    [195] = {
        [anon_sym_LPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_RBRACE] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [196] = {
        [anon_sym_LPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_RBRACE] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [197] = {
        [anon_sym_RBRACE] = 634,
        [sym_comment] = 8,
    },
    [198] = {
        [anon_sym_COMMA] = 570,
        [anon_sym_RBRACE] = 570,
        [sym_comment] = 8,
    },
    [199] = {
        [anon_sym_COMMA] = 578,
        [anon_sym_RBRACE] = 578,
        [sym_comment] = 8,
    },
    [200] = {
        [sym_expression_list] = 636,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [201] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 652,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [202] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 654,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [203] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 656,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [204] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 658,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [205] = {
        [sym_slice_type] = 588,
        [sym_struct_type] = 588,
        [sym_map_type] = 588,
        [sym__expression] = 660,
        [sym_call_expression] = 592,
        [sym_composite_literal] = 592,
        [sym_unary_expression] = 592,
        [sym_binary_expression] = 592,
        [sym__primary_expression] = 592,
        [sym__string_literal] = 596,
        [sym_int_literal] = 596,
        [sym_float_literal] = 596,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 600,
        [sym_raw_string_literal] = 602,
        [sym_interpreted_string_literal] = 602,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 604,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 604,
        [sym_comment] = 8,
    },
    [206] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 614,
        [anon_sym_RBRACE] = 662,
        [anon_sym_SLASH] = 614,
        [anon_sym_PERCENT] = 614,
        [anon_sym_LT_LT] = 614,
        [anon_sym_GT_GT] = 614,
        [anon_sym_AMP] = 614,
        [anon_sym_AMP_CARET] = 614,
        [anon_sym_PLUS] = 616,
        [anon_sym_DASH] = 616,
        [anon_sym_PIPE] = 616,
        [anon_sym_CARET] = 616,
        [anon_sym_EQ_EQ] = 618,
        [anon_sym_BANG_EQ] = 618,
        [anon_sym_LT] = 618,
        [anon_sym_LT_EQ] = 618,
        [anon_sym_GT] = 618,
        [anon_sym_GT_EQ] = 618,
        [anon_sym_AMP_AMP] = 620,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [207] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 614,
        [anon_sym_RBRACE] = 662,
        [anon_sym_SLASH] = 614,
        [anon_sym_PERCENT] = 614,
        [anon_sym_LT_LT] = 614,
        [anon_sym_GT_GT] = 614,
        [anon_sym_AMP] = 614,
        [anon_sym_AMP_CARET] = 614,
        [anon_sym_PLUS] = 616,
        [anon_sym_DASH] = 616,
        [anon_sym_PIPE] = 616,
        [anon_sym_CARET] = 616,
        [anon_sym_EQ_EQ] = 618,
        [anon_sym_BANG_EQ] = 618,
        [anon_sym_LT] = 618,
        [anon_sym_LT_EQ] = 618,
        [anon_sym_GT] = 618,
        [anon_sym_GT_EQ] = 618,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [208] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 614,
        [anon_sym_RBRACE] = 662,
        [anon_sym_SLASH] = 614,
        [anon_sym_PERCENT] = 614,
        [anon_sym_LT_LT] = 614,
        [anon_sym_GT_GT] = 614,
        [anon_sym_AMP] = 614,
        [anon_sym_AMP_CARET] = 614,
        [anon_sym_PLUS] = 616,
        [anon_sym_DASH] = 616,
        [anon_sym_PIPE] = 616,
        [anon_sym_CARET] = 616,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [209] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 614,
        [anon_sym_RBRACE] = 662,
        [anon_sym_SLASH] = 614,
        [anon_sym_PERCENT] = 614,
        [anon_sym_LT_LT] = 614,
        [anon_sym_GT_GT] = 614,
        [anon_sym_AMP] = 614,
        [anon_sym_AMP_CARET] = 614,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [210] = {
        [anon_sym_LPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_RBRACE] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [211] = {
        [anon_sym_RPAREN] = 666,
        [sym_comment] = 8,
    },
    [212] = {
        [sym_literal_value] = 668,
        [anon_sym_LBRACE] = 670,
        [sym_comment] = 8,
    },
    [213] = {
        [aux_sym_expression_list_repeat1] = 672,
        [anon_sym_LPAREN] = 674,
        [anon_sym_RPAREN] = 676,
        [anon_sym_COMMA] = 678,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 682,
        [anon_sym_DASH] = 682,
        [anon_sym_PIPE] = 682,
        [anon_sym_CARET] = 682,
        [anon_sym_EQ_EQ] = 684,
        [anon_sym_BANG_EQ] = 684,
        [anon_sym_LT] = 684,
        [anon_sym_LT_EQ] = 684,
        [anon_sym_GT] = 684,
        [anon_sym_GT_EQ] = 684,
        [anon_sym_AMP_AMP] = 686,
        [anon_sym_PIPE_PIPE] = 688,
        [sym_comment] = 8,
    },
    [214] = {
        [aux_sym_expression_list_repeat1] = 500,
        [anon_sym_LPAREN] = 500,
        [anon_sym_RPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [215] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [216] = {
        [sym_literal_value] = 668,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_RPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 670,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [217] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_RPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [218] = {
        [aux_sym_expression_list_repeat1] = 512,
        [anon_sym_LPAREN] = 512,
        [anon_sym_RPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [219] = {
        [aux_sym_expression_list_repeat1] = 514,
        [anon_sym_LPAREN] = 514,
        [anon_sym_RPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [220] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 690,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 692,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [221] = {
        [anon_sym_RBRACE] = 694,
        [sym_comment] = 8,
    },
    [222] = {
        [aux_sym_expression_list_repeat1] = 570,
        [anon_sym_LPAREN] = 570,
        [anon_sym_RPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [223] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_RPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [224] = {
        [anon_sym_RPAREN] = 696,
        [sym_comment] = 8,
    },
    [225] = {
        [sym_expression_list] = 698,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [226] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 700,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [227] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 702,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [228] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 704,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [229] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 706,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [230] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 708,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [231] = {
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 710,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [232] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_RPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 682,
        [anon_sym_DASH] = 682,
        [anon_sym_PIPE] = 682,
        [anon_sym_CARET] = 682,
        [anon_sym_EQ_EQ] = 684,
        [anon_sym_BANG_EQ] = 684,
        [anon_sym_LT] = 684,
        [anon_sym_LT_EQ] = 684,
        [anon_sym_GT] = 684,
        [anon_sym_GT_EQ] = 684,
        [anon_sym_AMP_AMP] = 686,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [233] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_RPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 682,
        [anon_sym_DASH] = 682,
        [anon_sym_PIPE] = 682,
        [anon_sym_CARET] = 682,
        [anon_sym_EQ_EQ] = 684,
        [anon_sym_BANG_EQ] = 684,
        [anon_sym_LT] = 684,
        [anon_sym_LT_EQ] = 684,
        [anon_sym_GT] = 684,
        [anon_sym_GT_EQ] = 684,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [234] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_RPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 682,
        [anon_sym_DASH] = 682,
        [anon_sym_PIPE] = 682,
        [anon_sym_CARET] = 682,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [235] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_RPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [236] = {
        [aux_sym_expression_list_repeat1] = 664,
        [anon_sym_LPAREN] = 664,
        [anon_sym_RPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [237] = {
        [aux_sym_expression_list_repeat1] = 712,
        [anon_sym_LPAREN] = 674,
        [anon_sym_RPAREN] = 714,
        [anon_sym_COMMA] = 678,
        [anon_sym_STAR] = 680,
        [anon_sym_SLASH] = 680,
        [anon_sym_PERCENT] = 680,
        [anon_sym_LT_LT] = 680,
        [anon_sym_GT_GT] = 680,
        [anon_sym_AMP] = 680,
        [anon_sym_AMP_CARET] = 680,
        [anon_sym_PLUS] = 682,
        [anon_sym_DASH] = 682,
        [anon_sym_PIPE] = 682,
        [anon_sym_CARET] = 682,
        [anon_sym_EQ_EQ] = 684,
        [anon_sym_BANG_EQ] = 684,
        [anon_sym_LT] = 684,
        [anon_sym_LT_EQ] = 684,
        [anon_sym_GT] = 684,
        [anon_sym_GT_EQ] = 684,
        [anon_sym_AMP_AMP] = 686,
        [anon_sym_PIPE_PIPE] = 688,
        [sym_comment] = 8,
    },
    [238] = {
        [anon_sym_RPAREN] = 716,
        [sym_comment] = 8,
    },
    [239] = {
        [anon_sym_RPAREN] = 718,
        [sym_comment] = 8,
    },
    [240] = {
        [aux_sym_expression_list_repeat1] = 720,
        [anon_sym_LPAREN] = 720,
        [anon_sym_RPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [241] = {
        [anon_sym_LPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_RBRACE] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [242] = {
        [sym_expression_list] = 722,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [243] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 724,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [244] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 726,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [245] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 728,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [246] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 730,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [247] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 732,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [248] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 548,
        [anon_sym_RBRACE] = 662,
        [anon_sym_COLON] = 662,
        [anon_sym_SLASH] = 548,
        [anon_sym_PERCENT] = 548,
        [anon_sym_LT_LT] = 548,
        [anon_sym_GT_GT] = 548,
        [anon_sym_AMP] = 548,
        [anon_sym_AMP_CARET] = 548,
        [anon_sym_PLUS] = 552,
        [anon_sym_DASH] = 552,
        [anon_sym_PIPE] = 552,
        [anon_sym_CARET] = 552,
        [anon_sym_EQ_EQ] = 554,
        [anon_sym_BANG_EQ] = 554,
        [anon_sym_LT] = 554,
        [anon_sym_LT_EQ] = 554,
        [anon_sym_GT] = 554,
        [anon_sym_GT_EQ] = 554,
        [anon_sym_AMP_AMP] = 556,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [249] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 548,
        [anon_sym_RBRACE] = 662,
        [anon_sym_COLON] = 662,
        [anon_sym_SLASH] = 548,
        [anon_sym_PERCENT] = 548,
        [anon_sym_LT_LT] = 548,
        [anon_sym_GT_GT] = 548,
        [anon_sym_AMP] = 548,
        [anon_sym_AMP_CARET] = 548,
        [anon_sym_PLUS] = 552,
        [anon_sym_DASH] = 552,
        [anon_sym_PIPE] = 552,
        [anon_sym_CARET] = 552,
        [anon_sym_EQ_EQ] = 554,
        [anon_sym_BANG_EQ] = 554,
        [anon_sym_LT] = 554,
        [anon_sym_LT_EQ] = 554,
        [anon_sym_GT] = 554,
        [anon_sym_GT_EQ] = 554,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [250] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 548,
        [anon_sym_RBRACE] = 662,
        [anon_sym_COLON] = 662,
        [anon_sym_SLASH] = 548,
        [anon_sym_PERCENT] = 548,
        [anon_sym_LT_LT] = 548,
        [anon_sym_GT_GT] = 548,
        [anon_sym_AMP] = 548,
        [anon_sym_AMP_CARET] = 548,
        [anon_sym_PLUS] = 552,
        [anon_sym_DASH] = 552,
        [anon_sym_PIPE] = 552,
        [anon_sym_CARET] = 552,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [251] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 548,
        [anon_sym_RBRACE] = 662,
        [anon_sym_COLON] = 662,
        [anon_sym_SLASH] = 548,
        [anon_sym_PERCENT] = 548,
        [anon_sym_LT_LT] = 548,
        [anon_sym_GT_GT] = 548,
        [anon_sym_AMP] = 548,
        [anon_sym_AMP_CARET] = 548,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [252] = {
        [anon_sym_LPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_RBRACE] = 664,
        [anon_sym_COLON] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [253] = {
        [anon_sym_RPAREN] = 734,
        [sym_comment] = 8,
    },
    [254] = {
        [anon_sym_LPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_RBRACE] = 720,
        [anon_sym_COLON] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [255] = {
        [sym__type] = 736,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [256] = {
        [anon_sym_RBRACK] = 738,
        [sym_comment] = 8,
    },
    [257] = {
        [sym__type] = 740,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [258] = {
        [sym_literal_value] = 240,
        [anon_sym_LBRACE] = 240,
        [sym_comment] = 8,
    },
    [259] = {
        [sym_literal_value] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [260] = {
        [sym_parameters] = 758,
        [anon_sym_LPAREN] = 760,
        [sym_comment] = 8,
    },
    [261] = {
        [sym__type] = 762,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [262] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 764,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 504,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [263] = {
        [anon_sym_LBRACE] = 766,
        [sym_comment] = 8,
    },
    [264] = {
        [sym__type] = 768,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 770,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [265] = {
        [anon_sym_chan] = 772,
        [sym_comment] = 8,
    },
    [266] = {
        [sym_literal_value] = 122,
        [anon_sym_DOT] = 774,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [267] = {
        [sym_identifier] = 776,
        [sym_comment] = 8,
    },
    [268] = {
        [sym_literal_value] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [269] = {
        [sym__type] = 778,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [270] = {
        [sym_literal_value] = 172,
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [271] = {
        [sym_literal_value] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [272] = {
        [sym__type] = 780,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [273] = {
        [sym_literal_value] = 178,
        [anon_sym_LBRACE] = 178,
        [sym_comment] = 8,
    },
    [274] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 782,
        [anon_sym_RBRACE] = 784,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [275] = {
        [anon_sym_RBRACE] = 786,
        [sym_comment] = 8,
    },
    [276] = {
        [sym_literal_value] = 254,
        [anon_sym_LBRACE] = 254,
        [sym_comment] = 8,
    },
    [277] = {
        [sym_literal_value] = 354,
        [anon_sym_LBRACE] = 354,
        [sym_comment] = 8,
    },
    [278] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 788,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [279] = {
        [sym__type] = 790,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [280] = {
        [sym_literal_value] = 792,
        [anon_sym_LBRACE] = 792,
        [sym_comment] = 8,
    },
    [281] = {
        [sym_expression_list] = 794,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [282] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 796,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [283] = {
        [sym__type] = 798,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_qualified_identifier] = 742,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [284] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 800,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [285] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 802,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [286] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 804,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [287] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 806,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [288] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 662,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [289] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 662,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [290] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 662,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [291] = {
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 662,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [292] = {
        [anon_sym_LPAREN] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_RBRACK] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [293] = {
        [sym_literal_value] = 808,
        [anon_sym_LBRACE] = 808,
        [sym_comment] = 8,
    },
    [294] = {
        [anon_sym_RPAREN] = 810,
        [sym_comment] = 8,
    },
    [295] = {
        [anon_sym_LPAREN] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_RBRACK] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [296] = {
        [sym_literal_value] = 812,
        [anon_sym_LBRACE] = 812,
        [sym_comment] = 8,
    },
    [297] = {
        [sym_parameters] = 814,
        [sym__type] = 814,
        [sym_pointer_type] = 742,
        [sym_array_type] = 742,
        [sym_slice_type] = 742,
        [sym_struct_type] = 742,
        [sym_interface_type] = 742,
        [sym_map_type] = 742,
        [sym_channel_type] = 742,
        [sym_function_type] = 742,
        [sym_literal_value] = 816,
        [sym_qualified_identifier] = 742,
        [anon_sym_LPAREN] = 818,
        [anon_sym_func] = 744,
        [anon_sym_STAR] = 746,
        [anon_sym_LBRACK] = 748,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 816,
        [anon_sym_interface] = 750,
        [anon_sym_map] = 144,
        [anon_sym_chan] = 752,
        [anon_sym_LT_DASH] = 754,
        [sym_identifier] = 756,
        [sym_comment] = 8,
    },
    [298] = {
        [sym__parameter_list] = 820,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 822,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [299] = {
        [anon_sym_RPAREN] = 824,
        [sym_comment] = 8,
    },
    [300] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_literal_value] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [301] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_literal_value] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_LBRACE] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [302] = {
        [sym_literal_value] = 828,
        [anon_sym_LBRACE] = 828,
        [sym_comment] = 8,
    },
    [303] = {
        [sym__parameter_list] = 830,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 832,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [304] = {
        [anon_sym_RPAREN] = 834,
        [sym_comment] = 8,
    },
    [305] = {
        [sym_literal_value] = 282,
        [anon_sym_LBRACE] = 282,
        [sym_comment] = 8,
    },
    [306] = {
        [sym_literal_value] = 826,
        [anon_sym_LBRACE] = 826,
        [sym_comment] = 8,
    },
    [307] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 836,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 838,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [308] = {
        [anon_sym_RBRACE] = 840,
        [sym_comment] = 8,
    },
    [309] = {
        [sym_literal_value] = 394,
        [anon_sym_LBRACE] = 394,
        [sym_comment] = 8,
    },
    [310] = {
        [sym_literal_value] = 426,
        [anon_sym_LBRACE] = 426,
        [sym_comment] = 8,
    },
    [311] = {
        [sym__string_literal] = 792,
        [anon_sym_LF] = 792,
        [anon_sym_SEMI] = 792,
        [sym_raw_string_literal] = 792,
        [sym_interpreted_string_literal] = 792,
        [sym_comment] = 8,
    },
    [312] = {
        [sym__type] = 842,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_comment] = 8,
    },
    [313] = {
        [sym__string_literal] = 808,
        [anon_sym_LF] = 808,
        [anon_sym_SEMI] = 808,
        [sym_raw_string_literal] = 808,
        [sym_interpreted_string_literal] = 808,
        [sym_comment] = 8,
    },
    [314] = {
        [sym__string_literal] = 812,
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [sym_raw_string_literal] = 812,
        [sym_interpreted_string_literal] = 812,
        [sym_comment] = 8,
    },
    [315] = {
        [sym_parameters] = 844,
        [sym__type] = 844,
        [sym_pointer_type] = 370,
        [sym_array_type] = 370,
        [sym_slice_type] = 370,
        [sym_struct_type] = 370,
        [sym_interface_type] = 370,
        [sym_map_type] = 370,
        [sym_channel_type] = 370,
        [sym_function_type] = 370,
        [sym_qualified_identifier] = 370,
        [sym__string_literal] = 816,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 846,
        [anon_sym_func] = 372,
        [anon_sym_STAR] = 374,
        [anon_sym_LBRACK] = 376,
        [anon_sym_struct] = 378,
        [anon_sym_interface] = 380,
        [anon_sym_map] = 382,
        [anon_sym_chan] = 384,
        [anon_sym_LT_DASH] = 386,
        [sym_identifier] = 388,
        [sym_raw_string_literal] = 816,
        [sym_interpreted_string_literal] = 816,
        [sym_comment] = 8,
    },
    [316] = {
        [sym__parameter_list] = 848,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 850,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [317] = {
        [anon_sym_RPAREN] = 852,
        [sym_comment] = 8,
    },
    [318] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [sym__string_literal] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_raw_string_literal] = 282,
        [sym_interpreted_string_literal] = 282,
        [sym_comment] = 8,
    },
    [319] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [sym__string_literal] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_raw_string_literal] = 826,
        [sym_interpreted_string_literal] = 826,
        [sym_comment] = 8,
    },
    [320] = {
        [sym__string_literal] = 828,
        [anon_sym_LF] = 828,
        [anon_sym_SEMI] = 828,
        [sym_raw_string_literal] = 828,
        [sym_interpreted_string_literal] = 828,
        [sym_comment] = 8,
    },
    [321] = {
        [sym__parameter_list] = 854,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 856,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [322] = {
        [anon_sym_RPAREN] = 858,
        [sym_comment] = 8,
    },
    [323] = {
        [sym__string_literal] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [sym_raw_string_literal] = 282,
        [sym_interpreted_string_literal] = 282,
        [sym_comment] = 8,
    },
    [324] = {
        [sym__string_literal] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [sym_raw_string_literal] = 826,
        [sym_interpreted_string_literal] = 826,
        [sym_comment] = 8,
    },
    [325] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 860,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [326] = {
        [sym__type] = 862,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [327] = {
        [anon_sym_RPAREN] = 792,
        [anon_sym_COMMA] = 792,
        [sym_comment] = 8,
    },
    [328] = {
        [sym__type] = 864,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_func] = 288,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [329] = {
        [anon_sym_RPAREN] = 808,
        [anon_sym_COMMA] = 808,
        [sym_comment] = 8,
    },
    [330] = {
        [anon_sym_RPAREN] = 812,
        [anon_sym_COMMA] = 812,
        [sym_comment] = 8,
    },
    [331] = {
        [anon_sym_RPAREN] = 866,
        [sym_comment] = 8,
    },
    [332] = {
        [sym_parameters] = 868,
        [sym__type] = 868,
        [sym_pointer_type] = 286,
        [sym_array_type] = 286,
        [sym_slice_type] = 286,
        [sym_struct_type] = 286,
        [sym_interface_type] = 286,
        [sym_map_type] = 286,
        [sym_channel_type] = 286,
        [sym_function_type] = 286,
        [sym_qualified_identifier] = 286,
        [anon_sym_LPAREN] = 870,
        [anon_sym_RPAREN] = 816,
        [anon_sym_func] = 288,
        [anon_sym_COMMA] = 816,
        [anon_sym_STAR] = 290,
        [anon_sym_LBRACK] = 292,
        [anon_sym_struct] = 294,
        [anon_sym_interface] = 296,
        [anon_sym_map] = 298,
        [anon_sym_chan] = 300,
        [anon_sym_LT_DASH] = 302,
        [sym_identifier] = 304,
        [sym_comment] = 8,
    },
    [333] = {
        [sym__parameter_list] = 872,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 874,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [334] = {
        [anon_sym_RPAREN] = 876,
        [sym_comment] = 8,
    },
    [335] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_RPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_COMMA] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [336] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_RPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_COMMA] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [337] = {
        [anon_sym_RPAREN] = 828,
        [anon_sym_COMMA] = 828,
        [sym_comment] = 8,
    },
    [338] = {
        [sym__parameter_list] = 878,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 880,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [339] = {
        [anon_sym_RPAREN] = 882,
        [sym_comment] = 8,
    },
    [340] = {
        [anon_sym_RPAREN] = 282,
        [anon_sym_COMMA] = 282,
        [sym_comment] = 8,
    },
    [341] = {
        [anon_sym_RPAREN] = 826,
        [anon_sym_COMMA] = 826,
        [sym_comment] = 8,
    },
    [342] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [343] = {
        [anon_sym_RBRACE] = 884,
        [sym_comment] = 8,
    },
    [344] = {
        [anon_sym_LF] = 886,
        [anon_sym_SEMI] = 886,
        [sym_comment] = 8,
    },
    [345] = {
        [sym__parameter_list] = 888,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 890,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [346] = {
        [anon_sym_RPAREN] = 892,
        [sym_comment] = 8,
    },
    [347] = {
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [sym_comment] = 8,
    },
    [348] = {
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [sym_comment] = 8,
    },
    [349] = {
        [anon_sym_RBRACK] = 354,
        [sym_comment] = 8,
    },
    [350] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 894,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 896,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [351] = {
        [anon_sym_RBRACE] = 898,
        [sym_comment] = 8,
    },
    [352] = {
        [anon_sym_RBRACK] = 394,
        [sym_comment] = 8,
    },
    [353] = {
        [anon_sym_RBRACK] = 426,
        [sym_comment] = 8,
    },
    [354] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 900,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [355] = {
        [sym__type] = 902,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [356] = {
        [anon_sym_RBRACK] = 792,
        [sym_comment] = 8,
    },
    [357] = {
        [sym__type] = 904,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [358] = {
        [anon_sym_RBRACK] = 808,
        [sym_comment] = 8,
    },
    [359] = {
        [anon_sym_RBRACK] = 812,
        [sym_comment] = 8,
    },
    [360] = {
        [sym_parameters] = 906,
        [sym__type] = 906,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_LPAREN] = 908,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_RBRACK] = 816,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [361] = {
        [sym__parameter_list] = 910,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 912,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [362] = {
        [anon_sym_RPAREN] = 914,
        [sym_comment] = 8,
    },
    [363] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_RBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [364] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_RBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [365] = {
        [anon_sym_RBRACK] = 828,
        [sym_comment] = 8,
    },
    [366] = {
        [sym__parameter_list] = 916,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 918,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [367] = {
        [anon_sym_RPAREN] = 920,
        [sym_comment] = 8,
    },
    [368] = {
        [anon_sym_RBRACK] = 282,
        [sym_comment] = 8,
    },
    [369] = {
        [anon_sym_RBRACK] = 826,
        [sym_comment] = 8,
    },
    [370] = {
        [sym__type] = 922,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [371] = {
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [sym_comment] = 8,
    },
    [372] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 924,
        [anon_sym_RBRACE] = 926,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [373] = {
        [anon_sym_RBRACE] = 928,
        [sym_comment] = 8,
    },
    [374] = {
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [sym_comment] = 8,
    },
    [375] = {
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [sym_comment] = 8,
    },
    [376] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 930,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 932,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [377] = {
        [anon_sym_RBRACE] = 934,
        [sym_comment] = 8,
    },
    [378] = {
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [sym_comment] = 8,
    },
    [379] = {
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [sym_comment] = 8,
    },
    [380] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 936,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [381] = {
        [sym__type] = 938,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [382] = {
        [anon_sym_LF] = 792,
        [anon_sym_SEMI] = 792,
        [sym_comment] = 8,
    },
    [383] = {
        [sym__type] = 940,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [384] = {
        [anon_sym_LF] = 808,
        [anon_sym_SEMI] = 808,
        [sym_comment] = 8,
    },
    [385] = {
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [sym_comment] = 8,
    },
    [386] = {
        [sym_parameters] = 942,
        [sym__type] = 942,
        [sym_pointer_type] = 100,
        [sym_array_type] = 100,
        [sym_slice_type] = 100,
        [sym_struct_type] = 100,
        [sym_interface_type] = 100,
        [sym_map_type] = 100,
        [sym_channel_type] = 100,
        [sym_function_type] = 100,
        [sym_qualified_identifier] = 100,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 262,
        [anon_sym_func] = 102,
        [anon_sym_STAR] = 104,
        [anon_sym_LBRACK] = 106,
        [anon_sym_struct] = 108,
        [anon_sym_interface] = 110,
        [anon_sym_map] = 112,
        [anon_sym_chan] = 114,
        [anon_sym_LT_DASH] = 116,
        [sym_identifier] = 118,
        [sym_comment] = 8,
    },
    [387] = {
        [anon_sym_LF] = 828,
        [anon_sym_SEMI] = 828,
        [sym_comment] = 8,
    },
    [388] = {
        [anon_sym_LF] = 944,
        [anon_sym_SEMI] = 944,
        [sym_comment] = 8,
    },
    [389] = {
        [anon_sym_RPAREN] = 946,
        [sym_comment] = 8,
    },
    [390] = {
        [anon_sym_LF] = 948,
        [anon_sym_SEMI] = 948,
        [sym_comment] = 8,
    },
    [391] = {
        [anon_sym_LF] = 950,
        [anon_sym_SEMI] = 950,
        [sym_comment] = 8,
    },
    [392] = {
        [sym_type_spec] = 92,
        [aux_sym_type_declaration_repeat1] = 952,
        [anon_sym_RPAREN] = 954,
        [sym_identifier] = 88,
        [sym_comment] = 8,
    },
    [393] = {
        [anon_sym_RPAREN] = 956,
        [sym_comment] = 8,
    },
    [394] = {
        [sym_identifier] = 958,
        [sym_comment] = 8,
    },
    [395] = {
        [sym__parameter_list] = 960,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 962,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [396] = {
        [sym_parameters] = 964,
        [anon_sym_LPAREN] = 966,
        [sym_comment] = 8,
    },
    [397] = {
        [sym_parameters] = 968,
        [sym__type] = 968,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_block] = 972,
        [sym_qualified_identifier] = 970,
        [anon_sym_LF] = 974,
        [anon_sym_SEMI] = 974,
        [anon_sym_LPAREN] = 976,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_LBRACE] = 986,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [398] = {
        [sym__parameter_list] = 998,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1000,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [399] = {
        [anon_sym_RPAREN] = 1002,
        [sym_comment] = 8,
    },
    [400] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_block] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_LBRACE] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [401] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_block] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_LBRACE] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [402] = {
        [sym_block] = 1004,
        [anon_sym_LF] = 1006,
        [anon_sym_SEMI] = 1006,
        [anon_sym_LBRACE] = 986,
        [sym_comment] = 8,
    },
    [403] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [404] = {
        [anon_sym_LF] = 1006,
        [anon_sym_SEMI] = 1006,
        [sym_comment] = 8,
    },
    [405] = {
        [sym__parameter_list] = 1008,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1010,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [406] = {
        [sym_parameters] = 1012,
        [anon_sym_LPAREN] = 966,
        [sym_comment] = 8,
    },
    [407] = {
        [sym__type] = 1014,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [408] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1016,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1018,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [409] = {
        [anon_sym_LBRACE] = 1020,
        [sym_comment] = 8,
    },
    [410] = {
        [sym__declaration] = 1022,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 1024,
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__statement] = 1028,
        [sym_send_statement] = 1022,
        [sym_inc_statement] = 1022,
        [sym_dec_statement] = 1022,
        [sym_assignment_statement] = 1022,
        [sym_short_var_declaration] = 1022,
        [sym__expression] = 1030,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [aux_sym_block_repeat1] = 1036,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1038,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [411] = {
        [anon_sym_LBRACE] = 1046,
        [sym_comment] = 8,
    },
    [412] = {
        [anon_sym_LBRACK] = 1048,
        [sym_comment] = 8,
    },
    [413] = {
        [sym__type] = 1050,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 1052,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [414] = {
        [anon_sym_chan] = 1054,
        [sym_comment] = 8,
    },
    [415] = {
        [sym_block] = 122,
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1056,
        [anon_sym_LBRACE] = 122,
        [sym_comment] = 8,
    },
    [416] = {
        [sym_identifier] = 1058,
        [sym_comment] = 8,
    },
    [417] = {
        [sym_block] = 168,
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [anon_sym_LBRACE] = 168,
        [sym_comment] = 8,
    },
    [418] = {
        [sym__type] = 1060,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [419] = {
        [sym_block] = 172,
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [anon_sym_LBRACE] = 172,
        [sym_comment] = 8,
    },
    [420] = {
        [sym_block] = 174,
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_LBRACE] = 174,
        [sym_comment] = 8,
    },
    [421] = {
        [sym__type] = 1062,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [422] = {
        [sym_block] = 178,
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [anon_sym_LBRACE] = 178,
        [sym_comment] = 8,
    },
    [423] = {
        [sym__type] = 1064,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [424] = {
        [anon_sym_RBRACK] = 1066,
        [sym_comment] = 8,
    },
    [425] = {
        [sym__type] = 1068,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [426] = {
        [sym_block] = 240,
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [anon_sym_LBRACE] = 240,
        [sym_comment] = 8,
    },
    [427] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1070,
        [anon_sym_RBRACE] = 1072,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [428] = {
        [anon_sym_RBRACE] = 1074,
        [sym_comment] = 8,
    },
    [429] = {
        [sym_block] = 254,
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [anon_sym_LBRACE] = 254,
        [sym_comment] = 8,
    },
    [430] = {
        [sym_block] = 354,
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [anon_sym_LBRACE] = 354,
        [sym_comment] = 8,
    },
    [431] = {
        [anon_sym_LF] = 1076,
        [anon_sym_SEMI] = 1076,
        [sym_comment] = 8,
    },
    [432] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 1078,
        [anon_sym_COLON_EQ] = 1080,
        [sym_comment] = 8,
    },
    [433] = {
        [sym_literal_value] = 1082,
        [anon_sym_LBRACE] = 1084,
        [sym_comment] = 8,
    },
    [434] = {
        [anon_sym_LF] = 1086,
        [anon_sym_SEMI] = 1086,
        [sym_comment] = 8,
    },
    [435] = {
        [aux_sym_expression_list_repeat1] = 1088,
        [anon_sym_LF] = 1076,
        [anon_sym_SEMI] = 1076,
        [anon_sym_LPAREN] = 1090,
        [anon_sym_COMMA] = 1092,
        [anon_sym_STAR] = 1094,
        [anon_sym_LT_DASH] = 1096,
        [anon_sym_PLUS_PLUS] = 1098,
        [anon_sym_DASH_DASH] = 1100,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 676,
        [anon_sym_COLON_EQ] = 676,
        [anon_sym_SLASH] = 1094,
        [anon_sym_PERCENT] = 1094,
        [anon_sym_LT_LT] = 1094,
        [anon_sym_GT_GT] = 1094,
        [anon_sym_AMP] = 1094,
        [anon_sym_AMP_CARET] = 1094,
        [anon_sym_PLUS] = 1102,
        [anon_sym_DASH] = 1102,
        [anon_sym_PIPE] = 1102,
        [anon_sym_CARET] = 1102,
        [anon_sym_EQ_EQ] = 1104,
        [anon_sym_BANG_EQ] = 1104,
        [anon_sym_LT] = 1104,
        [anon_sym_LT_EQ] = 1104,
        [anon_sym_GT] = 1104,
        [anon_sym_GT_EQ] = 1104,
        [anon_sym_AMP_AMP] = 1106,
        [anon_sym_PIPE_PIPE] = 1108,
        [sym_comment] = 8,
    },
    [436] = {
        [aux_sym_expression_list_repeat1] = 500,
        [anon_sym_LF] = 500,
        [anon_sym_SEMI] = 500,
        [anon_sym_LPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_LT_DASH] = 500,
        [anon_sym_PLUS_PLUS] = 500,
        [anon_sym_DASH_DASH] = 500,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 500,
        [anon_sym_COLON_EQ] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [437] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LT_DASH] = 502,
        [anon_sym_PLUS_PLUS] = 502,
        [anon_sym_DASH_DASH] = 502,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [438] = {
        [anon_sym_RBRACE] = 1110,
        [sym_comment] = 8,
    },
    [439] = {
        [anon_sym_LF] = 1112,
        [anon_sym_SEMI] = 1112,
        [sym_comment] = 8,
    },
    [440] = {
        [sym_literal_value] = 1082,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1084,
        [anon_sym_LT_DASH] = 502,
        [anon_sym_PLUS_PLUS] = 502,
        [anon_sym_DASH_DASH] = 502,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [441] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_LT_DASH] = 414,
        [anon_sym_PLUS_PLUS] = 414,
        [anon_sym_DASH_DASH] = 414,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 414,
        [anon_sym_COLON_EQ] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [442] = {
        [aux_sym_expression_list_repeat1] = 512,
        [anon_sym_LF] = 512,
        [anon_sym_SEMI] = 512,
        [anon_sym_LPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_LT_DASH] = 512,
        [anon_sym_PLUS_PLUS] = 512,
        [anon_sym_DASH_DASH] = 512,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 512,
        [anon_sym_COLON_EQ] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [443] = {
        [aux_sym_expression_list_repeat1] = 514,
        [anon_sym_LF] = 514,
        [anon_sym_SEMI] = 514,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_LT_DASH] = 514,
        [anon_sym_PLUS_PLUS] = 514,
        [anon_sym_DASH_DASH] = 514,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 514,
        [anon_sym_COLON_EQ] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [444] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 1114,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 1116,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [445] = {
        [anon_sym_RBRACE] = 1118,
        [sym_comment] = 8,
    },
    [446] = {
        [aux_sym_expression_list_repeat1] = 570,
        [anon_sym_LF] = 570,
        [anon_sym_SEMI] = 570,
        [anon_sym_LPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_LT_DASH] = 570,
        [anon_sym_PLUS_PLUS] = 570,
        [anon_sym_DASH_DASH] = 570,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 570,
        [anon_sym_COLON_EQ] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [447] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_LT_DASH] = 578,
        [anon_sym_PLUS_PLUS] = 578,
        [anon_sym_DASH_DASH] = 578,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 578,
        [anon_sym_COLON_EQ] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [448] = {
        [anon_sym_LF] = 1120,
        [anon_sym_SEMI] = 1120,
        [sym_comment] = 8,
    },
    [449] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 696,
        [anon_sym_COLON_EQ] = 696,
        [sym_comment] = 8,
    },
    [450] = {
        [sym_expression_list] = 1122,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [451] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1126,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [452] = {
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__expression] = 1138,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [453] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1142,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [454] = {
        [anon_sym_LF] = 1154,
        [anon_sym_SEMI] = 1154,
        [sym_comment] = 8,
    },
    [455] = {
        [anon_sym_LF] = 1156,
        [anon_sym_SEMI] = 1156,
        [sym_comment] = 8,
    },
    [456] = {
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__expression] = 1158,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [457] = {
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__expression] = 1160,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [458] = {
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__expression] = 1162,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [459] = {
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__expression] = 1164,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [460] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1094,
        [anon_sym_LT_DASH] = 662,
        [anon_sym_PLUS_PLUS] = 662,
        [anon_sym_DASH_DASH] = 662,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1094,
        [anon_sym_PERCENT] = 1094,
        [anon_sym_LT_LT] = 1094,
        [anon_sym_GT_GT] = 1094,
        [anon_sym_AMP] = 1094,
        [anon_sym_AMP_CARET] = 1094,
        [anon_sym_PLUS] = 1102,
        [anon_sym_DASH] = 1102,
        [anon_sym_PIPE] = 1102,
        [anon_sym_CARET] = 1102,
        [anon_sym_EQ_EQ] = 1104,
        [anon_sym_BANG_EQ] = 1104,
        [anon_sym_LT] = 1104,
        [anon_sym_LT_EQ] = 1104,
        [anon_sym_GT] = 1104,
        [anon_sym_GT_EQ] = 1104,
        [anon_sym_AMP_AMP] = 1106,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [461] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1094,
        [anon_sym_LT_DASH] = 662,
        [anon_sym_PLUS_PLUS] = 662,
        [anon_sym_DASH_DASH] = 662,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1094,
        [anon_sym_PERCENT] = 1094,
        [anon_sym_LT_LT] = 1094,
        [anon_sym_GT_GT] = 1094,
        [anon_sym_AMP] = 1094,
        [anon_sym_AMP_CARET] = 1094,
        [anon_sym_PLUS] = 1102,
        [anon_sym_DASH] = 1102,
        [anon_sym_PIPE] = 1102,
        [anon_sym_CARET] = 1102,
        [anon_sym_EQ_EQ] = 1104,
        [anon_sym_BANG_EQ] = 1104,
        [anon_sym_LT] = 1104,
        [anon_sym_LT_EQ] = 1104,
        [anon_sym_GT] = 1104,
        [anon_sym_GT_EQ] = 1104,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [462] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1094,
        [anon_sym_LT_DASH] = 662,
        [anon_sym_PLUS_PLUS] = 662,
        [anon_sym_DASH_DASH] = 662,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1094,
        [anon_sym_PERCENT] = 1094,
        [anon_sym_LT_LT] = 1094,
        [anon_sym_GT_GT] = 1094,
        [anon_sym_AMP] = 1094,
        [anon_sym_AMP_CARET] = 1094,
        [anon_sym_PLUS] = 1102,
        [anon_sym_DASH] = 1102,
        [anon_sym_PIPE] = 1102,
        [anon_sym_CARET] = 1102,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [463] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1094,
        [anon_sym_LT_DASH] = 662,
        [anon_sym_PLUS_PLUS] = 662,
        [anon_sym_DASH_DASH] = 662,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1094,
        [anon_sym_PERCENT] = 1094,
        [anon_sym_LT_LT] = 1094,
        [anon_sym_GT_GT] = 1094,
        [anon_sym_AMP] = 1094,
        [anon_sym_AMP_CARET] = 1094,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [464] = {
        [aux_sym_expression_list_repeat1] = 664,
        [anon_sym_LF] = 664,
        [anon_sym_SEMI] = 664,
        [anon_sym_LPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_LT_DASH] = 664,
        [anon_sym_PLUS_PLUS] = 664,
        [anon_sym_DASH_DASH] = 664,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 664,
        [anon_sym_COLON_EQ] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [465] = {
        [sym_literal_value] = 1166,
        [anon_sym_LBRACE] = 1168,
        [sym_comment] = 8,
    },
    [466] = {
        [anon_sym_LF] = 1170,
        [anon_sym_SEMI] = 1170,
        [anon_sym_LPAREN] = 1172,
        [anon_sym_STAR] = 1174,
        [anon_sym_SLASH] = 1174,
        [anon_sym_PERCENT] = 1174,
        [anon_sym_LT_LT] = 1174,
        [anon_sym_GT_GT] = 1174,
        [anon_sym_AMP] = 1174,
        [anon_sym_AMP_CARET] = 1174,
        [anon_sym_PLUS] = 1176,
        [anon_sym_DASH] = 1176,
        [anon_sym_PIPE] = 1176,
        [anon_sym_CARET] = 1176,
        [anon_sym_EQ_EQ] = 1178,
        [anon_sym_BANG_EQ] = 1178,
        [anon_sym_LT] = 1178,
        [anon_sym_LT_EQ] = 1178,
        [anon_sym_GT] = 1178,
        [anon_sym_GT_EQ] = 1178,
        [anon_sym_AMP_AMP] = 1180,
        [anon_sym_PIPE_PIPE] = 1182,
        [sym_comment] = 8,
    },
    [467] = {
        [anon_sym_LF] = 500,
        [anon_sym_SEMI] = 500,
        [anon_sym_LPAREN] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [468] = {
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [469] = {
        [sym_literal_value] = 1166,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1168,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [470] = {
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [471] = {
        [anon_sym_LF] = 512,
        [anon_sym_SEMI] = 512,
        [anon_sym_LPAREN] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [472] = {
        [anon_sym_LF] = 514,
        [anon_sym_SEMI] = 514,
        [anon_sym_LPAREN] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [473] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 1184,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 1186,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [474] = {
        [anon_sym_RBRACE] = 1188,
        [sym_comment] = 8,
    },
    [475] = {
        [anon_sym_LF] = 570,
        [anon_sym_SEMI] = 570,
        [anon_sym_LPAREN] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [476] = {
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [477] = {
        [sym_expression_list] = 1190,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [478] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1192,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [479] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1194,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [480] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1196,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [481] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1198,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [482] = {
        [sym_slice_type] = 1140,
        [sym_struct_type] = 1140,
        [sym_map_type] = 1140,
        [sym__expression] = 1200,
        [sym_call_expression] = 1144,
        [sym_composite_literal] = 1144,
        [sym_unary_expression] = 1144,
        [sym_binary_expression] = 1144,
        [sym__primary_expression] = 1144,
        [sym__string_literal] = 1146,
        [sym_int_literal] = 1146,
        [sym_float_literal] = 1146,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1148,
        [sym_raw_string_literal] = 1150,
        [sym_interpreted_string_literal] = 1150,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1152,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1152,
        [sym_comment] = 8,
    },
    [483] = {
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 1174,
        [anon_sym_SLASH] = 1174,
        [anon_sym_PERCENT] = 1174,
        [anon_sym_LT_LT] = 1174,
        [anon_sym_GT_GT] = 1174,
        [anon_sym_AMP] = 1174,
        [anon_sym_AMP_CARET] = 1174,
        [anon_sym_PLUS] = 1176,
        [anon_sym_DASH] = 1176,
        [anon_sym_PIPE] = 1176,
        [anon_sym_CARET] = 1176,
        [anon_sym_EQ_EQ] = 1178,
        [anon_sym_BANG_EQ] = 1178,
        [anon_sym_LT] = 1178,
        [anon_sym_LT_EQ] = 1178,
        [anon_sym_GT] = 1178,
        [anon_sym_GT_EQ] = 1178,
        [anon_sym_AMP_AMP] = 1180,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [484] = {
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 1174,
        [anon_sym_SLASH] = 1174,
        [anon_sym_PERCENT] = 1174,
        [anon_sym_LT_LT] = 1174,
        [anon_sym_GT_GT] = 1174,
        [anon_sym_AMP] = 1174,
        [anon_sym_AMP_CARET] = 1174,
        [anon_sym_PLUS] = 1176,
        [anon_sym_DASH] = 1176,
        [anon_sym_PIPE] = 1176,
        [anon_sym_CARET] = 1176,
        [anon_sym_EQ_EQ] = 1178,
        [anon_sym_BANG_EQ] = 1178,
        [anon_sym_LT] = 1178,
        [anon_sym_LT_EQ] = 1178,
        [anon_sym_GT] = 1178,
        [anon_sym_GT_EQ] = 1178,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [485] = {
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 1174,
        [anon_sym_SLASH] = 1174,
        [anon_sym_PERCENT] = 1174,
        [anon_sym_LT_LT] = 1174,
        [anon_sym_GT_GT] = 1174,
        [anon_sym_AMP] = 1174,
        [anon_sym_AMP_CARET] = 1174,
        [anon_sym_PLUS] = 1176,
        [anon_sym_DASH] = 1176,
        [anon_sym_PIPE] = 1176,
        [anon_sym_CARET] = 1176,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [486] = {
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_STAR] = 1174,
        [anon_sym_SLASH] = 1174,
        [anon_sym_PERCENT] = 1174,
        [anon_sym_LT_LT] = 1174,
        [anon_sym_GT_GT] = 1174,
        [anon_sym_AMP] = 1174,
        [anon_sym_AMP_CARET] = 1174,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [487] = {
        [anon_sym_LF] = 664,
        [anon_sym_SEMI] = 664,
        [anon_sym_LPAREN] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [488] = {
        [anon_sym_RPAREN] = 1202,
        [sym_comment] = 8,
    },
    [489] = {
        [anon_sym_LF] = 720,
        [anon_sym_SEMI] = 720,
        [anon_sym_LPAREN] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [490] = {
        [sym_literal_value] = 1204,
        [anon_sym_LBRACE] = 1206,
        [sym_comment] = 8,
    },
    [491] = {
        [aux_sym_expression_list_repeat1] = 1208,
        [anon_sym_LPAREN] = 1210,
        [anon_sym_COMMA] = 1092,
        [anon_sym_STAR] = 1212,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 714,
        [anon_sym_COLON_EQ] = 714,
        [anon_sym_SLASH] = 1212,
        [anon_sym_PERCENT] = 1212,
        [anon_sym_LT_LT] = 1212,
        [anon_sym_GT_GT] = 1212,
        [anon_sym_AMP] = 1212,
        [anon_sym_AMP_CARET] = 1212,
        [anon_sym_PLUS] = 1214,
        [anon_sym_DASH] = 1214,
        [anon_sym_PIPE] = 1214,
        [anon_sym_CARET] = 1214,
        [anon_sym_EQ_EQ] = 1216,
        [anon_sym_BANG_EQ] = 1216,
        [anon_sym_LT] = 1216,
        [anon_sym_LT_EQ] = 1216,
        [anon_sym_GT] = 1216,
        [anon_sym_GT_EQ] = 1216,
        [anon_sym_AMP_AMP] = 1218,
        [anon_sym_PIPE_PIPE] = 1220,
        [sym_comment] = 8,
    },
    [492] = {
        [aux_sym_expression_list_repeat1] = 500,
        [anon_sym_LPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 500,
        [anon_sym_COLON_EQ] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [493] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [494] = {
        [sym_literal_value] = 1204,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1206,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 502,
        [anon_sym_COLON_EQ] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [495] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 414,
        [anon_sym_COLON_EQ] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [496] = {
        [aux_sym_expression_list_repeat1] = 512,
        [anon_sym_LPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 512,
        [anon_sym_COLON_EQ] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [497] = {
        [aux_sym_expression_list_repeat1] = 514,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 514,
        [anon_sym_COLON_EQ] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [498] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 1222,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 1224,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [499] = {
        [anon_sym_RBRACE] = 1226,
        [sym_comment] = 8,
    },
    [500] = {
        [aux_sym_expression_list_repeat1] = 570,
        [anon_sym_LPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 570,
        [anon_sym_COLON_EQ] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [501] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 578,
        [anon_sym_COLON_EQ] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [502] = {
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 716,
        [anon_sym_COLON_EQ] = 716,
        [sym_comment] = 8,
    },
    [503] = {
        [sym_expression_list] = 1228,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [504] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1230,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [505] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1232,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [506] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1234,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [507] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1236,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [508] = {
        [sym_slice_type] = 1124,
        [sym_struct_type] = 1124,
        [sym_map_type] = 1124,
        [sym__expression] = 1238,
        [sym_call_expression] = 1128,
        [sym_composite_literal] = 1128,
        [sym_unary_expression] = 1128,
        [sym_binary_expression] = 1128,
        [sym__primary_expression] = 1128,
        [sym__string_literal] = 1130,
        [sym_int_literal] = 1130,
        [sym_float_literal] = 1130,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1132,
        [sym_raw_string_literal] = 1134,
        [sym_interpreted_string_literal] = 1134,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1136,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1136,
        [sym_comment] = 8,
    },
    [509] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1212,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1212,
        [anon_sym_PERCENT] = 1212,
        [anon_sym_LT_LT] = 1212,
        [anon_sym_GT_GT] = 1212,
        [anon_sym_AMP] = 1212,
        [anon_sym_AMP_CARET] = 1212,
        [anon_sym_PLUS] = 1214,
        [anon_sym_DASH] = 1214,
        [anon_sym_PIPE] = 1214,
        [anon_sym_CARET] = 1214,
        [anon_sym_EQ_EQ] = 1216,
        [anon_sym_BANG_EQ] = 1216,
        [anon_sym_LT] = 1216,
        [anon_sym_LT_EQ] = 1216,
        [anon_sym_GT] = 1216,
        [anon_sym_GT_EQ] = 1216,
        [anon_sym_AMP_AMP] = 1218,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [510] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1212,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1212,
        [anon_sym_PERCENT] = 1212,
        [anon_sym_LT_LT] = 1212,
        [anon_sym_GT_GT] = 1212,
        [anon_sym_AMP] = 1212,
        [anon_sym_AMP_CARET] = 1212,
        [anon_sym_PLUS] = 1214,
        [anon_sym_DASH] = 1214,
        [anon_sym_PIPE] = 1214,
        [anon_sym_CARET] = 1214,
        [anon_sym_EQ_EQ] = 1216,
        [anon_sym_BANG_EQ] = 1216,
        [anon_sym_LT] = 1216,
        [anon_sym_LT_EQ] = 1216,
        [anon_sym_GT] = 1216,
        [anon_sym_GT_EQ] = 1216,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [511] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1212,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1212,
        [anon_sym_PERCENT] = 1212,
        [anon_sym_LT_LT] = 1212,
        [anon_sym_GT_GT] = 1212,
        [anon_sym_AMP] = 1212,
        [anon_sym_AMP_CARET] = 1212,
        [anon_sym_PLUS] = 1214,
        [anon_sym_DASH] = 1214,
        [anon_sym_PIPE] = 1214,
        [anon_sym_CARET] = 1214,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [512] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1212,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 662,
        [anon_sym_COLON_EQ] = 662,
        [anon_sym_SLASH] = 1212,
        [anon_sym_PERCENT] = 1212,
        [anon_sym_LT_LT] = 1212,
        [anon_sym_GT_GT] = 1212,
        [anon_sym_AMP] = 1212,
        [anon_sym_AMP_CARET] = 1212,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [513] = {
        [aux_sym_expression_list_repeat1] = 664,
        [anon_sym_LPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 664,
        [anon_sym_COLON_EQ] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [514] = {
        [anon_sym_RPAREN] = 1240,
        [sym_comment] = 8,
    },
    [515] = {
        [aux_sym_expression_list_repeat1] = 720,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 720,
        [anon_sym_COLON_EQ] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [516] = {
        [anon_sym_RPAREN] = 1242,
        [sym_comment] = 8,
    },
    [517] = {
        [aux_sym_expression_list_repeat1] = 720,
        [anon_sym_LF] = 720,
        [anon_sym_SEMI] = 720,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_LT_DASH] = 720,
        [anon_sym_PLUS_PLUS] = 720,
        [anon_sym_DASH_DASH] = 720,
        [aux_sym_SLASH_LPAREN_STAR_PIPE_SLASH_PIPE_PERCENT_PIPE_LT_LT_PIPE_GT_GT_PIPE_AMP_PIPE_AMP_CARET_PIPE_PLUS_PIPE_DASH_PIPE_PIPE_PIPE_CARET_PIPE_RPAREN_EQ_SLASH] = 720,
        [anon_sym_COLON_EQ] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [518] = {
        [sym__declaration] = 1022,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_type_declaration] = 18,
        [sym_expression_list] = 1024,
        [sym_slice_type] = 1026,
        [sym_struct_type] = 1026,
        [sym_map_type] = 1026,
        [sym__statement] = 1028,
        [sym_send_statement] = 1022,
        [sym_inc_statement] = 1022,
        [sym_dec_statement] = 1022,
        [sym_assignment_statement] = 1022,
        [sym_short_var_declaration] = 1022,
        [sym__expression] = 1030,
        [sym_call_expression] = 1032,
        [sym_composite_literal] = 1032,
        [sym_unary_expression] = 1032,
        [sym_binary_expression] = 1032,
        [sym__primary_expression] = 1032,
        [sym__string_literal] = 1034,
        [sym_int_literal] = 1034,
        [sym_float_literal] = 1034,
        [aux_sym_block_repeat1] = 1244,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_type] = 34,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_RBRACE] = 1246,
        [anon_sym_map] = 144,
        [sym_identifier] = 1040,
        [sym_raw_string_literal] = 1042,
        [sym_interpreted_string_literal] = 1042,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1044,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1044,
        [sym_comment] = 8,
    },
    [519] = {
        [anon_sym_RBRACE] = 1248,
        [sym_comment] = 8,
    },
    [520] = {
        [sym_expression_list] = 1250,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [521] = {
        [sym_expression_list] = 1266,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [522] = {
        [anon_sym_LF] = 1268,
        [anon_sym_SEMI] = 1268,
        [sym_comment] = 8,
    },
    [523] = {
        [sym_literal_value] = 1270,
        [anon_sym_LBRACE] = 1272,
        [sym_comment] = 8,
    },
    [524] = {
        [aux_sym_expression_list_repeat1] = 1274,
        [anon_sym_LF] = 676,
        [anon_sym_SEMI] = 676,
        [anon_sym_LPAREN] = 1276,
        [anon_sym_COMMA] = 1278,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 1282,
        [anon_sym_DASH] = 1282,
        [anon_sym_PIPE] = 1282,
        [anon_sym_CARET] = 1282,
        [anon_sym_EQ_EQ] = 1284,
        [anon_sym_BANG_EQ] = 1284,
        [anon_sym_LT] = 1284,
        [anon_sym_LT_EQ] = 1284,
        [anon_sym_GT] = 1284,
        [anon_sym_GT_EQ] = 1284,
        [anon_sym_AMP_AMP] = 1286,
        [anon_sym_PIPE_PIPE] = 1288,
        [sym_comment] = 8,
    },
    [525] = {
        [aux_sym_expression_list_repeat1] = 500,
        [anon_sym_LF] = 500,
        [anon_sym_SEMI] = 500,
        [anon_sym_LPAREN] = 500,
        [anon_sym_COMMA] = 500,
        [anon_sym_STAR] = 500,
        [anon_sym_SLASH] = 500,
        [anon_sym_PERCENT] = 500,
        [anon_sym_LT_LT] = 500,
        [anon_sym_GT_GT] = 500,
        [anon_sym_AMP] = 500,
        [anon_sym_AMP_CARET] = 500,
        [anon_sym_PLUS] = 500,
        [anon_sym_DASH] = 500,
        [anon_sym_PIPE] = 500,
        [anon_sym_CARET] = 500,
        [anon_sym_EQ_EQ] = 500,
        [anon_sym_BANG_EQ] = 500,
        [anon_sym_LT] = 500,
        [anon_sym_LT_EQ] = 500,
        [anon_sym_GT] = 500,
        [anon_sym_GT_EQ] = 500,
        [anon_sym_AMP_AMP] = 500,
        [anon_sym_PIPE_PIPE] = 500,
        [sym_comment] = 8,
    },
    [526] = {
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [527] = {
        [sym_literal_value] = 1270,
        [aux_sym_expression_list_repeat1] = 502,
        [anon_sym_LF] = 502,
        [anon_sym_SEMI] = 502,
        [anon_sym_LPAREN] = 502,
        [anon_sym_COMMA] = 502,
        [anon_sym_STAR] = 502,
        [anon_sym_LBRACE] = 1272,
        [anon_sym_SLASH] = 502,
        [anon_sym_PERCENT] = 502,
        [anon_sym_LT_LT] = 502,
        [anon_sym_GT_GT] = 502,
        [anon_sym_AMP] = 502,
        [anon_sym_AMP_CARET] = 502,
        [anon_sym_PLUS] = 502,
        [anon_sym_DASH] = 502,
        [anon_sym_PIPE] = 502,
        [anon_sym_CARET] = 502,
        [anon_sym_EQ_EQ] = 502,
        [anon_sym_BANG_EQ] = 502,
        [anon_sym_LT] = 502,
        [anon_sym_LT_EQ] = 502,
        [anon_sym_GT] = 502,
        [anon_sym_GT_EQ] = 502,
        [anon_sym_AMP_AMP] = 502,
        [anon_sym_PIPE_PIPE] = 502,
        [sym_comment] = 8,
    },
    [528] = {
        [aux_sym_expression_list_repeat1] = 414,
        [anon_sym_LF] = 414,
        [anon_sym_SEMI] = 414,
        [anon_sym_LPAREN] = 414,
        [anon_sym_COMMA] = 414,
        [anon_sym_STAR] = 414,
        [anon_sym_SLASH] = 414,
        [anon_sym_PERCENT] = 414,
        [anon_sym_LT_LT] = 414,
        [anon_sym_GT_GT] = 414,
        [anon_sym_AMP] = 414,
        [anon_sym_AMP_CARET] = 414,
        [anon_sym_PLUS] = 414,
        [anon_sym_DASH] = 414,
        [anon_sym_PIPE] = 414,
        [anon_sym_CARET] = 414,
        [anon_sym_EQ_EQ] = 414,
        [anon_sym_BANG_EQ] = 414,
        [anon_sym_LT] = 414,
        [anon_sym_LT_EQ] = 414,
        [anon_sym_GT] = 414,
        [anon_sym_GT_EQ] = 414,
        [anon_sym_AMP_AMP] = 414,
        [anon_sym_PIPE_PIPE] = 414,
        [sym_comment] = 8,
    },
    [529] = {
        [aux_sym_expression_list_repeat1] = 512,
        [anon_sym_LF] = 512,
        [anon_sym_SEMI] = 512,
        [anon_sym_LPAREN] = 512,
        [anon_sym_COMMA] = 512,
        [anon_sym_STAR] = 512,
        [anon_sym_SLASH] = 512,
        [anon_sym_PERCENT] = 512,
        [anon_sym_LT_LT] = 512,
        [anon_sym_GT_GT] = 512,
        [anon_sym_AMP] = 512,
        [anon_sym_AMP_CARET] = 512,
        [anon_sym_PLUS] = 512,
        [anon_sym_DASH] = 512,
        [anon_sym_PIPE] = 512,
        [anon_sym_CARET] = 512,
        [anon_sym_EQ_EQ] = 512,
        [anon_sym_BANG_EQ] = 512,
        [anon_sym_LT] = 512,
        [anon_sym_LT_EQ] = 512,
        [anon_sym_GT] = 512,
        [anon_sym_GT_EQ] = 512,
        [anon_sym_AMP_AMP] = 512,
        [anon_sym_PIPE_PIPE] = 512,
        [sym_comment] = 8,
    },
    [530] = {
        [aux_sym_expression_list_repeat1] = 514,
        [anon_sym_LF] = 514,
        [anon_sym_SEMI] = 514,
        [anon_sym_LPAREN] = 514,
        [anon_sym_COMMA] = 514,
        [anon_sym_STAR] = 514,
        [anon_sym_SLASH] = 514,
        [anon_sym_PERCENT] = 514,
        [anon_sym_LT_LT] = 514,
        [anon_sym_GT_GT] = 514,
        [anon_sym_AMP] = 514,
        [anon_sym_AMP_CARET] = 514,
        [anon_sym_PLUS] = 514,
        [anon_sym_DASH] = 514,
        [anon_sym_PIPE] = 514,
        [anon_sym_CARET] = 514,
        [anon_sym_EQ_EQ] = 514,
        [anon_sym_BANG_EQ] = 514,
        [anon_sym_LT] = 514,
        [anon_sym_LT_EQ] = 514,
        [anon_sym_GT] = 514,
        [anon_sym_GT_EQ] = 514,
        [anon_sym_AMP_AMP] = 514,
        [anon_sym_PIPE_PIPE] = 514,
        [sym_comment] = 8,
    },
    [531] = {
        [sym_slice_type] = 516,
        [sym_struct_type] = 516,
        [sym_map_type] = 516,
        [sym__expression] = 518,
        [sym_call_expression] = 520,
        [sym_composite_literal] = 520,
        [sym_literal_value] = 522,
        [sym__element_list] = 1290,
        [sym_element] = 526,
        [sym_unary_expression] = 520,
        [sym_binary_expression] = 520,
        [sym__primary_expression] = 520,
        [sym__string_literal] = 528,
        [sym_int_literal] = 528,
        [sym_float_literal] = 528,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_LBRACE] = 530,
        [anon_sym_RBRACE] = 1292,
        [anon_sym_map] = 144,
        [sym_identifier] = 534,
        [sym_raw_string_literal] = 536,
        [sym_interpreted_string_literal] = 536,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 538,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 538,
        [sym_comment] = 8,
    },
    [532] = {
        [anon_sym_RBRACE] = 1294,
        [sym_comment] = 8,
    },
    [533] = {
        [aux_sym_expression_list_repeat1] = 570,
        [anon_sym_LF] = 570,
        [anon_sym_SEMI] = 570,
        [anon_sym_LPAREN] = 570,
        [anon_sym_COMMA] = 570,
        [anon_sym_STAR] = 570,
        [anon_sym_SLASH] = 570,
        [anon_sym_PERCENT] = 570,
        [anon_sym_LT_LT] = 570,
        [anon_sym_GT_GT] = 570,
        [anon_sym_AMP] = 570,
        [anon_sym_AMP_CARET] = 570,
        [anon_sym_PLUS] = 570,
        [anon_sym_DASH] = 570,
        [anon_sym_PIPE] = 570,
        [anon_sym_CARET] = 570,
        [anon_sym_EQ_EQ] = 570,
        [anon_sym_BANG_EQ] = 570,
        [anon_sym_LT] = 570,
        [anon_sym_LT_EQ] = 570,
        [anon_sym_GT] = 570,
        [anon_sym_GT_EQ] = 570,
        [anon_sym_AMP_AMP] = 570,
        [anon_sym_PIPE_PIPE] = 570,
        [sym_comment] = 8,
    },
    [534] = {
        [aux_sym_expression_list_repeat1] = 578,
        [anon_sym_LF] = 578,
        [anon_sym_SEMI] = 578,
        [anon_sym_LPAREN] = 578,
        [anon_sym_COMMA] = 578,
        [anon_sym_STAR] = 578,
        [anon_sym_SLASH] = 578,
        [anon_sym_PERCENT] = 578,
        [anon_sym_LT_LT] = 578,
        [anon_sym_GT_GT] = 578,
        [anon_sym_AMP] = 578,
        [anon_sym_AMP_CARET] = 578,
        [anon_sym_PLUS] = 578,
        [anon_sym_DASH] = 578,
        [anon_sym_PIPE] = 578,
        [anon_sym_CARET] = 578,
        [anon_sym_EQ_EQ] = 578,
        [anon_sym_BANG_EQ] = 578,
        [anon_sym_LT] = 578,
        [anon_sym_LT_EQ] = 578,
        [anon_sym_GT] = 578,
        [anon_sym_GT_EQ] = 578,
        [anon_sym_AMP_AMP] = 578,
        [anon_sym_PIPE_PIPE] = 578,
        [sym_comment] = 8,
    },
    [535] = {
        [anon_sym_LF] = 696,
        [anon_sym_SEMI] = 696,
        [sym_comment] = 8,
    },
    [536] = {
        [sym_expression_list] = 1296,
        [sym_slice_type] = 638,
        [sym_struct_type] = 638,
        [sym_map_type] = 638,
        [sym__expression] = 640,
        [sym_call_expression] = 642,
        [sym_composite_literal] = 642,
        [sym_unary_expression] = 642,
        [sym_binary_expression] = 642,
        [sym__primary_expression] = 642,
        [sym__string_literal] = 644,
        [sym_int_literal] = 644,
        [sym_float_literal] = 644,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 646,
        [sym_raw_string_literal] = 648,
        [sym_interpreted_string_literal] = 648,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 650,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 650,
        [sym_comment] = 8,
    },
    [537] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1298,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [538] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1300,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [539] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1302,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [540] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1304,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [541] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1306,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [542] = {
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1308,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [543] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 1282,
        [anon_sym_DASH] = 1282,
        [anon_sym_PIPE] = 1282,
        [anon_sym_CARET] = 1282,
        [anon_sym_EQ_EQ] = 1284,
        [anon_sym_BANG_EQ] = 1284,
        [anon_sym_LT] = 1284,
        [anon_sym_LT_EQ] = 1284,
        [anon_sym_GT] = 1284,
        [anon_sym_GT_EQ] = 1284,
        [anon_sym_AMP_AMP] = 1286,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [544] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 1282,
        [anon_sym_DASH] = 1282,
        [anon_sym_PIPE] = 1282,
        [anon_sym_CARET] = 1282,
        [anon_sym_EQ_EQ] = 1284,
        [anon_sym_BANG_EQ] = 1284,
        [anon_sym_LT] = 1284,
        [anon_sym_LT_EQ] = 1284,
        [anon_sym_GT] = 1284,
        [anon_sym_GT_EQ] = 1284,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [545] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 1282,
        [anon_sym_DASH] = 1282,
        [anon_sym_PIPE] = 1282,
        [anon_sym_CARET] = 1282,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [546] = {
        [aux_sym_expression_list_repeat1] = 662,
        [anon_sym_LF] = 662,
        [anon_sym_SEMI] = 662,
        [anon_sym_LPAREN] = 662,
        [anon_sym_COMMA] = 662,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 662,
        [anon_sym_DASH] = 662,
        [anon_sym_PIPE] = 662,
        [anon_sym_CARET] = 662,
        [anon_sym_EQ_EQ] = 662,
        [anon_sym_BANG_EQ] = 662,
        [anon_sym_LT] = 662,
        [anon_sym_LT_EQ] = 662,
        [anon_sym_GT] = 662,
        [anon_sym_GT_EQ] = 662,
        [anon_sym_AMP_AMP] = 662,
        [anon_sym_PIPE_PIPE] = 662,
        [sym_comment] = 8,
    },
    [547] = {
        [aux_sym_expression_list_repeat1] = 664,
        [anon_sym_LF] = 664,
        [anon_sym_SEMI] = 664,
        [anon_sym_LPAREN] = 664,
        [anon_sym_COMMA] = 664,
        [anon_sym_STAR] = 664,
        [anon_sym_SLASH] = 664,
        [anon_sym_PERCENT] = 664,
        [anon_sym_LT_LT] = 664,
        [anon_sym_GT_GT] = 664,
        [anon_sym_AMP] = 664,
        [anon_sym_AMP_CARET] = 664,
        [anon_sym_PLUS] = 664,
        [anon_sym_DASH] = 664,
        [anon_sym_PIPE] = 664,
        [anon_sym_CARET] = 664,
        [anon_sym_EQ_EQ] = 664,
        [anon_sym_BANG_EQ] = 664,
        [anon_sym_LT] = 664,
        [anon_sym_LT_EQ] = 664,
        [anon_sym_GT] = 664,
        [anon_sym_GT_EQ] = 664,
        [anon_sym_AMP_AMP] = 664,
        [anon_sym_PIPE_PIPE] = 664,
        [sym_comment] = 8,
    },
    [548] = {
        [aux_sym_expression_list_repeat1] = 1310,
        [anon_sym_LF] = 714,
        [anon_sym_SEMI] = 714,
        [anon_sym_LPAREN] = 1276,
        [anon_sym_COMMA] = 1278,
        [anon_sym_STAR] = 1280,
        [anon_sym_SLASH] = 1280,
        [anon_sym_PERCENT] = 1280,
        [anon_sym_LT_LT] = 1280,
        [anon_sym_GT_GT] = 1280,
        [anon_sym_AMP] = 1280,
        [anon_sym_AMP_CARET] = 1280,
        [anon_sym_PLUS] = 1282,
        [anon_sym_DASH] = 1282,
        [anon_sym_PIPE] = 1282,
        [anon_sym_CARET] = 1282,
        [anon_sym_EQ_EQ] = 1284,
        [anon_sym_BANG_EQ] = 1284,
        [anon_sym_LT] = 1284,
        [anon_sym_LT_EQ] = 1284,
        [anon_sym_GT] = 1284,
        [anon_sym_GT_EQ] = 1284,
        [anon_sym_AMP_AMP] = 1286,
        [anon_sym_PIPE_PIPE] = 1288,
        [sym_comment] = 8,
    },
    [549] = {
        [anon_sym_LF] = 716,
        [anon_sym_SEMI] = 716,
        [sym_comment] = 8,
    },
    [550] = {
        [anon_sym_RPAREN] = 1312,
        [sym_comment] = 8,
    },
    [551] = {
        [aux_sym_expression_list_repeat1] = 720,
        [anon_sym_LF] = 720,
        [anon_sym_SEMI] = 720,
        [anon_sym_LPAREN] = 720,
        [anon_sym_COMMA] = 720,
        [anon_sym_STAR] = 720,
        [anon_sym_SLASH] = 720,
        [anon_sym_PERCENT] = 720,
        [anon_sym_LT_LT] = 720,
        [anon_sym_GT_GT] = 720,
        [anon_sym_AMP] = 720,
        [anon_sym_AMP_CARET] = 720,
        [anon_sym_PLUS] = 720,
        [anon_sym_DASH] = 720,
        [anon_sym_PIPE] = 720,
        [anon_sym_CARET] = 720,
        [anon_sym_EQ_EQ] = 720,
        [anon_sym_BANG_EQ] = 720,
        [anon_sym_LT] = 720,
        [anon_sym_LT_EQ] = 720,
        [anon_sym_GT] = 720,
        [anon_sym_GT_EQ] = 720,
        [anon_sym_AMP_AMP] = 720,
        [anon_sym_PIPE_PIPE] = 720,
        [sym_comment] = 8,
    },
    [552] = {
        [anon_sym_LF] = 1314,
        [anon_sym_SEMI] = 1314,
        [sym_comment] = 8,
    },
    [553] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1316,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1318,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [554] = {
        [anon_sym_RBRACE] = 1320,
        [sym_comment] = 8,
    },
    [555] = {
        [sym_block] = 394,
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [anon_sym_LBRACE] = 394,
        [sym_comment] = 8,
    },
    [556] = {
        [sym_block] = 426,
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [anon_sym_LBRACE] = 426,
        [sym_comment] = 8,
    },
    [557] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 1322,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [558] = {
        [sym__type] = 1324,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [559] = {
        [sym_block] = 792,
        [anon_sym_LF] = 792,
        [anon_sym_SEMI] = 792,
        [anon_sym_LBRACE] = 792,
        [sym_comment] = 8,
    },
    [560] = {
        [sym__type] = 1326,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_qualified_identifier] = 970,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [561] = {
        [sym_block] = 808,
        [anon_sym_LF] = 808,
        [anon_sym_SEMI] = 808,
        [anon_sym_LBRACE] = 808,
        [sym_comment] = 8,
    },
    [562] = {
        [sym_block] = 812,
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [anon_sym_LBRACE] = 812,
        [sym_comment] = 8,
    },
    [563] = {
        [sym_parameters] = 1328,
        [sym__type] = 1328,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_block] = 816,
        [sym_qualified_identifier] = 970,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 976,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_LBRACE] = 816,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [564] = {
        [sym_block] = 828,
        [anon_sym_LF] = 828,
        [anon_sym_SEMI] = 828,
        [anon_sym_LBRACE] = 828,
        [sym_comment] = 8,
    },
    [565] = {
        [anon_sym_RPAREN] = 1330,
        [sym_comment] = 8,
    },
    [566] = {
        [sym_block] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LBRACE] = 282,
        [sym_comment] = 8,
    },
    [567] = {
        [sym_block] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_LBRACE] = 826,
        [sym_comment] = 8,
    },
    [568] = {
        [anon_sym_LF] = 1332,
        [anon_sym_SEMI] = 1332,
        [sym_comment] = 8,
    },
    [569] = {
        [anon_sym_RPAREN] = 1334,
        [sym_comment] = 8,
    },
    [570] = {
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [571] = {
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [572] = {
        [sym_parameters] = 1336,
        [anon_sym_LPAREN] = 966,
        [sym_comment] = 8,
    },
    [573] = {
        [sym_parameters] = 1338,
        [sym__type] = 1338,
        [sym_pointer_type] = 970,
        [sym_array_type] = 970,
        [sym_slice_type] = 970,
        [sym_struct_type] = 970,
        [sym_interface_type] = 970,
        [sym_map_type] = 970,
        [sym_channel_type] = 970,
        [sym_function_type] = 970,
        [sym_block] = 1340,
        [sym_qualified_identifier] = 970,
        [anon_sym_LF] = 1342,
        [anon_sym_SEMI] = 1342,
        [anon_sym_LPAREN] = 976,
        [anon_sym_func] = 978,
        [anon_sym_STAR] = 980,
        [anon_sym_LBRACK] = 982,
        [anon_sym_struct] = 984,
        [anon_sym_LBRACE] = 986,
        [anon_sym_interface] = 988,
        [anon_sym_map] = 990,
        [anon_sym_chan] = 992,
        [anon_sym_LT_DASH] = 994,
        [sym_identifier] = 996,
        [sym_comment] = 8,
    },
    [574] = {
        [sym_block] = 1344,
        [anon_sym_LF] = 1346,
        [anon_sym_SEMI] = 1346,
        [anon_sym_LBRACE] = 986,
        [sym_comment] = 8,
    },
    [575] = {
        [anon_sym_LF] = 1346,
        [anon_sym_SEMI] = 1346,
        [sym_comment] = 8,
    },
    [576] = {
        [anon_sym_LF] = 1348,
        [anon_sym_SEMI] = 1348,
        [sym_comment] = 8,
    },
    [577] = {
        [anon_sym_LF] = 1350,
        [anon_sym_SEMI] = 1350,
        [sym_comment] = 8,
    },
    [578] = {
        [sym__type] = 1352,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_EQ] = 1356,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [579] = {
        [sym_var_spec] = 1376,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1378,
        [anon_sym_RPAREN] = 1380,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [580] = {
        [sym__type] = 396,
        [sym_pointer_type] = 396,
        [sym_array_type] = 396,
        [sym_slice_type] = 396,
        [sym_struct_type] = 396,
        [sym_interface_type] = 396,
        [sym_map_type] = 396,
        [sym_channel_type] = 396,
        [sym_function_type] = 396,
        [sym_qualified_identifier] = 396,
        [aux_sym_identifier_list_repeat1] = 1382,
        [anon_sym_EQ] = 396,
        [anon_sym_func] = 396,
        [anon_sym_COMMA] = 1384,
        [anon_sym_STAR] = 396,
        [anon_sym_LBRACK] = 396,
        [anon_sym_struct] = 396,
        [anon_sym_interface] = 396,
        [anon_sym_map] = 396,
        [anon_sym_chan] = 396,
        [anon_sym_LT_DASH] = 396,
        [sym_identifier] = 396,
        [sym_comment] = 8,
    },
    [581] = {
        [sym__type] = 410,
        [sym_pointer_type] = 410,
        [sym_array_type] = 410,
        [sym_slice_type] = 410,
        [sym_struct_type] = 410,
        [sym_interface_type] = 410,
        [sym_map_type] = 410,
        [sym_channel_type] = 410,
        [sym_function_type] = 410,
        [sym_qualified_identifier] = 410,
        [anon_sym_EQ] = 410,
        [anon_sym_func] = 410,
        [anon_sym_STAR] = 410,
        [anon_sym_LBRACK] = 410,
        [anon_sym_struct] = 410,
        [anon_sym_interface] = 410,
        [anon_sym_map] = 410,
        [anon_sym_chan] = 410,
        [anon_sym_LT_DASH] = 410,
        [sym_identifier] = 410,
        [sym_comment] = 8,
    },
    [582] = {
        [sym_identifier] = 1386,
        [sym_comment] = 8,
    },
    [583] = {
        [sym__type] = 416,
        [sym_pointer_type] = 416,
        [sym_array_type] = 416,
        [sym_slice_type] = 416,
        [sym_struct_type] = 416,
        [sym_interface_type] = 416,
        [sym_map_type] = 416,
        [sym_channel_type] = 416,
        [sym_function_type] = 416,
        [sym_qualified_identifier] = 416,
        [aux_sym_identifier_list_repeat1] = 1388,
        [anon_sym_EQ] = 416,
        [anon_sym_func] = 416,
        [anon_sym_COMMA] = 1384,
        [anon_sym_STAR] = 416,
        [anon_sym_LBRACK] = 416,
        [anon_sym_struct] = 416,
        [anon_sym_interface] = 416,
        [anon_sym_map] = 416,
        [anon_sym_chan] = 416,
        [anon_sym_LT_DASH] = 416,
        [sym_identifier] = 416,
        [sym_comment] = 8,
    },
    [584] = {
        [sym__type] = 420,
        [sym_pointer_type] = 420,
        [sym_array_type] = 420,
        [sym_slice_type] = 420,
        [sym_struct_type] = 420,
        [sym_interface_type] = 420,
        [sym_map_type] = 420,
        [sym_channel_type] = 420,
        [sym_function_type] = 420,
        [sym_qualified_identifier] = 420,
        [anon_sym_EQ] = 420,
        [anon_sym_func] = 420,
        [anon_sym_STAR] = 420,
        [anon_sym_LBRACK] = 420,
        [anon_sym_struct] = 420,
        [anon_sym_interface] = 420,
        [anon_sym_map] = 420,
        [anon_sym_chan] = 420,
        [anon_sym_LT_DASH] = 420,
        [sym_identifier] = 420,
        [sym_comment] = 8,
    },
    [585] = {
        [anon_sym_LF] = 1390,
        [anon_sym_SEMI] = 1390,
        [sym_comment] = 8,
    },
    [586] = {
        [anon_sym_RPAREN] = 1392,
        [sym_comment] = 8,
    },
    [587] = {
        [anon_sym_LF] = 1394,
        [anon_sym_SEMI] = 1394,
        [sym_comment] = 8,
    },
    [588] = {
        [anon_sym_LF] = 1396,
        [anon_sym_SEMI] = 1396,
        [sym_comment] = 8,
    },
    [589] = {
        [sym_var_spec] = 1376,
        [sym_identifier_list] = 74,
        [aux_sym_var_declaration_repeat1] = 1398,
        [anon_sym_RPAREN] = 1400,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [590] = {
        [anon_sym_RPAREN] = 1402,
        [sym_comment] = 8,
    },
    [591] = {
        [anon_sym_LF] = 1404,
        [anon_sym_SEMI] = 1404,
        [anon_sym_EQ] = 1406,
        [sym_comment] = 8,
    },
    [592] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [593] = {
        [sym_expression_list] = 1408,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [594] = {
        [sym_parameters] = 1410,
        [anon_sym_LPAREN] = 1412,
        [sym_comment] = 8,
    },
    [595] = {
        [sym__type] = 1414,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [596] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1416,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1418,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [597] = {
        [anon_sym_LBRACE] = 1420,
        [sym_comment] = 8,
    },
    [598] = {
        [anon_sym_LBRACE] = 1422,
        [sym_comment] = 8,
    },
    [599] = {
        [anon_sym_LBRACK] = 1424,
        [sym_comment] = 8,
    },
    [600] = {
        [sym__type] = 1426,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1428,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [601] = {
        [anon_sym_chan] = 1430,
        [sym_comment] = 8,
    },
    [602] = {
        [anon_sym_LF] = 122,
        [anon_sym_SEMI] = 122,
        [anon_sym_DOT] = 1432,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [603] = {
        [sym_identifier] = 1434,
        [sym_comment] = 8,
    },
    [604] = {
        [anon_sym_LF] = 168,
        [anon_sym_SEMI] = 168,
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [605] = {
        [sym__type] = 1436,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [606] = {
        [anon_sym_LF] = 172,
        [anon_sym_SEMI] = 172,
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [607] = {
        [anon_sym_LF] = 174,
        [anon_sym_SEMI] = 174,
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [608] = {
        [sym__type] = 1438,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [609] = {
        [anon_sym_LF] = 178,
        [anon_sym_SEMI] = 178,
        [anon_sym_EQ] = 178,
        [sym_comment] = 8,
    },
    [610] = {
        [sym__type] = 1440,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [611] = {
        [anon_sym_RBRACK] = 1442,
        [sym_comment] = 8,
    },
    [612] = {
        [sym__type] = 1444,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [613] = {
        [anon_sym_LF] = 240,
        [anon_sym_SEMI] = 240,
        [anon_sym_EQ] = 240,
        [sym_comment] = 8,
    },
    [614] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1446,
        [anon_sym_RBRACE] = 1448,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [615] = {
        [anon_sym_RBRACE] = 1450,
        [sym_comment] = 8,
    },
    [616] = {
        [anon_sym_LF] = 254,
        [anon_sym_SEMI] = 254,
        [anon_sym_EQ] = 254,
        [sym_comment] = 8,
    },
    [617] = {
        [anon_sym_LF] = 354,
        [anon_sym_SEMI] = 354,
        [anon_sym_EQ] = 354,
        [sym_comment] = 8,
    },
    [618] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1452,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1454,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [619] = {
        [anon_sym_RBRACE] = 1456,
        [sym_comment] = 8,
    },
    [620] = {
        [anon_sym_LF] = 394,
        [anon_sym_SEMI] = 394,
        [anon_sym_EQ] = 394,
        [sym_comment] = 8,
    },
    [621] = {
        [anon_sym_LF] = 426,
        [anon_sym_SEMI] = 426,
        [anon_sym_EQ] = 426,
        [sym_comment] = 8,
    },
    [622] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 1458,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [623] = {
        [sym__type] = 1460,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [624] = {
        [anon_sym_LF] = 792,
        [anon_sym_SEMI] = 792,
        [anon_sym_EQ] = 792,
        [sym_comment] = 8,
    },
    [625] = {
        [sym__type] = 1462,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [626] = {
        [anon_sym_LF] = 808,
        [anon_sym_SEMI] = 808,
        [anon_sym_EQ] = 808,
        [sym_comment] = 8,
    },
    [627] = {
        [anon_sym_LF] = 812,
        [anon_sym_SEMI] = 812,
        [anon_sym_EQ] = 812,
        [sym_comment] = 8,
    },
    [628] = {
        [sym_parameters] = 1464,
        [sym__type] = 1464,
        [sym_pointer_type] = 1354,
        [sym_array_type] = 1354,
        [sym_slice_type] = 1354,
        [sym_struct_type] = 1354,
        [sym_interface_type] = 1354,
        [sym_map_type] = 1354,
        [sym_channel_type] = 1354,
        [sym_function_type] = 1354,
        [sym_qualified_identifier] = 1354,
        [anon_sym_LF] = 816,
        [anon_sym_SEMI] = 816,
        [anon_sym_LPAREN] = 1466,
        [anon_sym_EQ] = 816,
        [anon_sym_func] = 1358,
        [anon_sym_STAR] = 1360,
        [anon_sym_LBRACK] = 1362,
        [anon_sym_struct] = 1364,
        [anon_sym_interface] = 1366,
        [anon_sym_map] = 1368,
        [anon_sym_chan] = 1370,
        [anon_sym_LT_DASH] = 1372,
        [sym_identifier] = 1374,
        [sym_comment] = 8,
    },
    [629] = {
        [sym__parameter_list] = 1468,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1470,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [630] = {
        [anon_sym_RPAREN] = 1472,
        [sym_comment] = 8,
    },
    [631] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_EQ] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [632] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_EQ] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [633] = {
        [anon_sym_LF] = 828,
        [anon_sym_SEMI] = 828,
        [anon_sym_EQ] = 828,
        [sym_comment] = 8,
    },
    [634] = {
        [sym__parameter_list] = 1474,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1476,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [635] = {
        [anon_sym_RPAREN] = 1478,
        [sym_comment] = 8,
    },
    [636] = {
        [anon_sym_LF] = 282,
        [anon_sym_SEMI] = 282,
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [637] = {
        [anon_sym_LF] = 826,
        [anon_sym_SEMI] = 826,
        [anon_sym_EQ] = 826,
        [sym_comment] = 8,
    },
    [638] = {
        [anon_sym_LF] = 1480,
        [anon_sym_SEMI] = 1480,
        [sym_comment] = 8,
    },
    [639] = {
        [sym_expression_list] = 1482,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [640] = {
        [anon_sym_LF] = 1484,
        [anon_sym_SEMI] = 1484,
        [sym_comment] = 8,
    },
    [641] = {
        [anon_sym_LF] = 1486,
        [anon_sym_SEMI] = 1486,
        [sym_comment] = 8,
    },
    [642] = {
        [sym__type] = 1488,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_EQ] = 1492,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [643] = {
        [sym_const_spec] = 1512,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1514,
        [anon_sym_RPAREN] = 1516,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [644] = {
        [anon_sym_LF] = 1518,
        [anon_sym_SEMI] = 1518,
        [sym_comment] = 8,
    },
    [645] = {
        [anon_sym_RPAREN] = 1520,
        [sym_comment] = 8,
    },
    [646] = {
        [anon_sym_LF] = 1522,
        [anon_sym_SEMI] = 1522,
        [sym_comment] = 8,
    },
    [647] = {
        [anon_sym_LF] = 1524,
        [anon_sym_SEMI] = 1524,
        [sym_comment] = 8,
    },
    [648] = {
        [sym_const_spec] = 1512,
        [sym_identifier_list] = 66,
        [aux_sym_const_declaration_repeat1] = 1526,
        [anon_sym_RPAREN] = 1528,
        [sym_identifier] = 70,
        [sym_comment] = 8,
    },
    [649] = {
        [anon_sym_RPAREN] = 1530,
        [sym_comment] = 8,
    },
    [650] = {
        [anon_sym_EQ] = 1532,
        [sym_comment] = 8,
    },
    [651] = {
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [652] = {
        [sym_expression_list] = 1534,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [653] = {
        [sym_parameters] = 1536,
        [anon_sym_LPAREN] = 1538,
        [sym_comment] = 8,
    },
    [654] = {
        [sym__type] = 1540,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [655] = {
        [sym_slice_type] = 130,
        [sym_struct_type] = 130,
        [sym_map_type] = 130,
        [sym__expression] = 1542,
        [sym_call_expression] = 134,
        [sym_composite_literal] = 134,
        [sym_unary_expression] = 134,
        [sym_binary_expression] = 134,
        [sym__primary_expression] = 134,
        [sym__string_literal] = 136,
        [sym_int_literal] = 136,
        [sym_float_literal] = 136,
        [anon_sym_LBRACK] = 138,
        [anon_sym_RBRACK] = 1544,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 146,
        [sym_raw_string_literal] = 148,
        [sym_interpreted_string_literal] = 148,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 150,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 150,
        [sym_comment] = 8,
    },
    [656] = {
        [anon_sym_LBRACE] = 1546,
        [sym_comment] = 8,
    },
    [657] = {
        [anon_sym_LBRACE] = 1548,
        [sym_comment] = 8,
    },
    [658] = {
        [anon_sym_LBRACK] = 1550,
        [sym_comment] = 8,
    },
    [659] = {
        [sym__type] = 1552,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1554,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [660] = {
        [anon_sym_chan] = 1556,
        [sym_comment] = 8,
    },
    [661] = {
        [anon_sym_DOT] = 1558,
        [anon_sym_EQ] = 122,
        [sym_comment] = 8,
    },
    [662] = {
        [sym_identifier] = 1560,
        [sym_comment] = 8,
    },
    [663] = {
        [anon_sym_EQ] = 168,
        [sym_comment] = 8,
    },
    [664] = {
        [sym__type] = 1562,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [665] = {
        [anon_sym_EQ] = 172,
        [sym_comment] = 8,
    },
    [666] = {
        [anon_sym_EQ] = 174,
        [sym_comment] = 8,
    },
    [667] = {
        [sym__type] = 1564,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [668] = {
        [anon_sym_EQ] = 178,
        [sym_comment] = 8,
    },
    [669] = {
        [sym__type] = 1566,
        [sym_pointer_type] = 182,
        [sym_array_type] = 182,
        [sym_slice_type] = 182,
        [sym_struct_type] = 182,
        [sym_interface_type] = 182,
        [sym_map_type] = 182,
        [sym_channel_type] = 182,
        [sym_function_type] = 182,
        [sym_qualified_identifier] = 182,
        [anon_sym_func] = 184,
        [anon_sym_STAR] = 186,
        [anon_sym_LBRACK] = 188,
        [anon_sym_struct] = 190,
        [anon_sym_interface] = 192,
        [anon_sym_map] = 194,
        [anon_sym_chan] = 196,
        [anon_sym_LT_DASH] = 198,
        [sym_identifier] = 200,
        [sym_comment] = 8,
    },
    [670] = {
        [anon_sym_RBRACK] = 1568,
        [sym_comment] = 8,
    },
    [671] = {
        [sym__type] = 1570,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [672] = {
        [anon_sym_EQ] = 240,
        [sym_comment] = 8,
    },
    [673] = {
        [sym_method_spec] = 242,
        [aux_sym_interface_type_repeat1] = 1572,
        [anon_sym_RBRACE] = 1574,
        [sym_identifier] = 248,
        [sym_comment] = 8,
    },
    [674] = {
        [anon_sym_RBRACE] = 1576,
        [sym_comment] = 8,
    },
    [675] = {
        [anon_sym_EQ] = 254,
        [sym_comment] = 8,
    },
    [676] = {
        [anon_sym_EQ] = 354,
        [sym_comment] = 8,
    },
    [677] = {
        [sym_identifier_list] = 356,
        [sym_field_declaration] = 358,
        [aux_sym_struct_type_repeat1] = 1578,
        [anon_sym_STAR] = 362,
        [anon_sym_RBRACE] = 1580,
        [sym_identifier] = 366,
        [sym_comment] = 8,
    },
    [678] = {
        [anon_sym_RBRACE] = 1582,
        [sym_comment] = 8,
    },
    [679] = {
        [anon_sym_EQ] = 394,
        [sym_comment] = 8,
    },
    [680] = {
        [anon_sym_EQ] = 426,
        [sym_comment] = 8,
    },
    [681] = {
        [anon_sym_LPAREN] = 486,
        [anon_sym_STAR] = 488,
        [anon_sym_RBRACK] = 1584,
        [anon_sym_SLASH] = 488,
        [anon_sym_PERCENT] = 488,
        [anon_sym_LT_LT] = 488,
        [anon_sym_GT_GT] = 488,
        [anon_sym_AMP] = 488,
        [anon_sym_AMP_CARET] = 488,
        [anon_sym_PLUS] = 492,
        [anon_sym_DASH] = 492,
        [anon_sym_PIPE] = 492,
        [anon_sym_CARET] = 492,
        [anon_sym_EQ_EQ] = 494,
        [anon_sym_BANG_EQ] = 494,
        [anon_sym_LT] = 494,
        [anon_sym_LT_EQ] = 494,
        [anon_sym_GT] = 494,
        [anon_sym_GT_EQ] = 494,
        [anon_sym_AMP_AMP] = 496,
        [anon_sym_PIPE_PIPE] = 498,
        [sym_comment] = 8,
    },
    [682] = {
        [sym__type] = 1586,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [683] = {
        [anon_sym_EQ] = 792,
        [sym_comment] = 8,
    },
    [684] = {
        [sym__type] = 1588,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [685] = {
        [anon_sym_EQ] = 808,
        [sym_comment] = 8,
    },
    [686] = {
        [anon_sym_EQ] = 812,
        [sym_comment] = 8,
    },
    [687] = {
        [sym_parameters] = 1590,
        [sym__type] = 1590,
        [sym_pointer_type] = 1490,
        [sym_array_type] = 1490,
        [sym_slice_type] = 1490,
        [sym_struct_type] = 1490,
        [sym_interface_type] = 1490,
        [sym_map_type] = 1490,
        [sym_channel_type] = 1490,
        [sym_function_type] = 1490,
        [sym_qualified_identifier] = 1490,
        [anon_sym_LPAREN] = 1592,
        [anon_sym_EQ] = 816,
        [anon_sym_func] = 1494,
        [anon_sym_STAR] = 1496,
        [anon_sym_LBRACK] = 1498,
        [anon_sym_struct] = 1500,
        [anon_sym_interface] = 1502,
        [anon_sym_map] = 1504,
        [anon_sym_chan] = 1506,
        [anon_sym_LT_DASH] = 1508,
        [sym_identifier] = 1510,
        [sym_comment] = 8,
    },
    [688] = {
        [sym__parameter_list] = 1594,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1596,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [689] = {
        [anon_sym_RPAREN] = 1598,
        [sym_comment] = 8,
    },
    [690] = {
        [sym_parameters] = 282,
        [sym__type] = 282,
        [sym_pointer_type] = 282,
        [sym_array_type] = 282,
        [sym_slice_type] = 282,
        [sym_struct_type] = 282,
        [sym_interface_type] = 282,
        [sym_map_type] = 282,
        [sym_channel_type] = 282,
        [sym_function_type] = 282,
        [sym_qualified_identifier] = 282,
        [anon_sym_LPAREN] = 282,
        [anon_sym_EQ] = 282,
        [anon_sym_func] = 282,
        [anon_sym_STAR] = 282,
        [anon_sym_LBRACK] = 282,
        [anon_sym_struct] = 282,
        [anon_sym_interface] = 282,
        [anon_sym_map] = 282,
        [anon_sym_chan] = 282,
        [anon_sym_LT_DASH] = 282,
        [sym_identifier] = 282,
        [sym_comment] = 8,
    },
    [691] = {
        [sym_parameters] = 826,
        [sym__type] = 826,
        [sym_pointer_type] = 826,
        [sym_array_type] = 826,
        [sym_slice_type] = 826,
        [sym_struct_type] = 826,
        [sym_interface_type] = 826,
        [sym_map_type] = 826,
        [sym_channel_type] = 826,
        [sym_function_type] = 826,
        [sym_qualified_identifier] = 826,
        [anon_sym_LPAREN] = 826,
        [anon_sym_EQ] = 826,
        [anon_sym_func] = 826,
        [anon_sym_STAR] = 826,
        [anon_sym_LBRACK] = 826,
        [anon_sym_struct] = 826,
        [anon_sym_interface] = 826,
        [anon_sym_map] = 826,
        [anon_sym_chan] = 826,
        [anon_sym_LT_DASH] = 826,
        [sym_identifier] = 826,
        [sym_comment] = 8,
    },
    [692] = {
        [anon_sym_EQ] = 828,
        [sym_comment] = 8,
    },
    [693] = {
        [sym__parameter_list] = 1600,
        [sym_parameter_declaration] = 270,
        [anon_sym_RPAREN] = 1602,
        [sym_identifier] = 274,
        [sym_comment] = 8,
    },
    [694] = {
        [anon_sym_RPAREN] = 1604,
        [sym_comment] = 8,
    },
    [695] = {
        [anon_sym_EQ] = 282,
        [sym_comment] = 8,
    },
    [696] = {
        [anon_sym_EQ] = 826,
        [sym_comment] = 8,
    },
    [697] = {
        [anon_sym_LF] = 1606,
        [anon_sym_SEMI] = 1606,
        [sym_comment] = 8,
    },
    [698] = {
        [sym_expression_list] = 1608,
        [sym_slice_type] = 1252,
        [sym_struct_type] = 1252,
        [sym_map_type] = 1252,
        [sym__expression] = 1254,
        [sym_call_expression] = 1256,
        [sym_composite_literal] = 1256,
        [sym_unary_expression] = 1256,
        [sym_binary_expression] = 1256,
        [sym__primary_expression] = 1256,
        [sym__string_literal] = 1258,
        [sym_int_literal] = 1258,
        [sym_float_literal] = 1258,
        [anon_sym_LBRACK] = 138,
        [anon_sym_struct] = 142,
        [anon_sym_map] = 144,
        [sym_identifier] = 1260,
        [sym_raw_string_literal] = 1262,
        [sym_interpreted_string_literal] = 1262,
        [aux_sym_SLASH_LBRACK1_DASH9_RBRACK_LPAREN_LBRACK0_DASH9_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPAREN_LBRACK0_DASH7_RBRACK_STAR_PIPE_RPAREN_SLASH] = 1264,
        [aux_sym_SLASH0_LPARENx_PIPEX_RPAREN_LBRACK0_DASH7_RBRACK_STAR_SLASH] = 1264,
        [sym_comment] = 8,
    },
    [699] = {
        [anon_sym_LF] = 1610,
        [anon_sym_SEMI] = 1610,
        [sym_comment] = 8,
    },
    [700] = {
        [sym_import_declaration] = 1612,
        [sym__top_level_declaration] = 1612,
        [sym__declaration] = 1612,
        [sym_const_declaration] = 1612,
        [sym_var_declaration] = 1612,
        [sym_function_declaration] = 1612,
        [sym_method_declaration] = 1612,
        [sym_type_declaration] = 1612,
        [aux_sym_source_file_repeat1] = 1612,
        [aux_sym_source_file_repeat2] = 1612,
        [ts_builtin_sym_end] = 1612,
        [anon_sym_import] = 1612,
        [anon_sym_const] = 1612,
        [anon_sym_var] = 1612,
        [anon_sym_func] = 1612,
        [anon_sym_type] = 1612,
        [sym_comment] = 8,
    },
    [701] = {
        [sym_import_declaration] = 1614,
        [sym__top_level_declaration] = 1614,
        [sym__declaration] = 1614,
        [sym_const_declaration] = 1614,
        [sym_var_declaration] = 1614,
        [sym_function_declaration] = 1614,
        [sym_method_declaration] = 1614,
        [sym_type_declaration] = 1614,
        [aux_sym_source_file_repeat1] = 1614,
        [aux_sym_source_file_repeat2] = 1614,
        [ts_builtin_sym_end] = 1614,
        [anon_sym_import] = 1614,
        [anon_sym_const] = 1614,
        [anon_sym_var] = 1614,
        [anon_sym_func] = 1614,
        [anon_sym_type] = 1614,
        [sym_comment] = 8,
    },
    [702] = {
        [sym_import_spec] = 1616,
        [sym__string_literal] = 1618,
        [aux_sym_import_declaration_repeat1] = 1620,
        [anon_sym_RPAREN] = 1622,
        [anon_sym_DOT] = 1624,
        [sym_identifier] = 1624,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [703] = {
        [sym__string_literal] = 1626,
        [sym_raw_string_literal] = 62,
        [sym_interpreted_string_literal] = 62,
        [sym_comment] = 8,
    },
    [704] = {
        [sym_import_declaration] = 414,
        [sym__top_level_declaration] = 414,
        [sym__declaration] = 414,
        [sym_const_declaration] = 414,
        [sym_var_declaration] = 414,
        [sym_function_declaration] = 414,
        [sym_method_declaration] = 414,
        [sym_type_declaration] = 414,
        [aux_sym_source_file_repeat1] = 414,
        [aux_sym_source_file_repeat2] = 414,
        [ts_builtin_sym_end] = 414,
        [anon_sym_import] = 414,
        [anon_sym_const] = 414,
        [anon_sym_var] = 414,
        [anon_sym_func] = 414,
        [anon_sym_type] = 414,
        [sym_comment] = 8,
    },
    [705] = {
        [sym_import_declaration] = 1628,
        [sym__top_level_declaration] = 1628,
        [sym__declaration] = 1628,
        [sym_const_declaration] = 1628,
        [sym_var_declaration] = 1628,
        [sym_function_declaration] = 1628,
        [sym_method_declaration] = 1628,
        [sym_type_declaration] = 1628,
        [aux_sym_source_file_repeat1] = 1628,
        [aux_sym_source_file_repeat2] = 1628,
        [ts_builtin_sym_end] = 1628,
        [anon_sym_import] = 1628,
        [anon_sym_const] = 1628,
        [anon_sym_var] = 1628,
        [anon_sym_func] = 1628,
        [anon_sym_type] = 1628,
        [sym_comment] = 8,
    },
    [706] = {
        [anon_sym_LF] = 1630,
        [anon_sym_SEMI] = 1630,
        [sym_comment] = 8,
    },
    [707] = {
        [anon_sym_LF] = 1614,
        [anon_sym_SEMI] = 1614,
        [sym_comment] = 8,
    },
    [708] = {
        [anon_sym_RPAREN] = 1632,
        [sym_comment] = 8,
    },
    [709] = {
        [sym_import_declaration] = 1634,
        [sym__top_level_declaration] = 1634,
        [sym__declaration] = 1634,
        [sym_const_declaration] = 1634,
        [sym_var_declaration] = 1634,
        [sym_function_declaration] = 1634,
        [sym_method_declaration] = 1634,
        [sym_type_declaration] = 1634,
        [aux_sym_source_file_repeat1] = 1634,
        [aux_sym_source_file_repeat2] = 1634,
        [ts_builtin_sym_end] = 1634,
        [anon_sym_import] = 1634,
        [anon_sym_const] = 1634,
        [anon_sym_var] = 1634,
        [anon_sym_func] = 1634,
        [anon_sym_type] = 1634,
        [sym_comment] = 8,
    },
    [710] = {
        [sym__string_literal] = 1636,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [711] = {
        [anon_sym_LF] = 1628,
        [anon_sym_SEMI] = 1628,
        [sym_comment] = 8,
    },
    [712] = {
        [sym_import_declaration] = 1638,
        [sym__top_level_declaration] = 1638,
        [sym__declaration] = 1638,
        [sym_const_declaration] = 1638,
        [sym_var_declaration] = 1638,
        [sym_function_declaration] = 1638,
        [sym_method_declaration] = 1638,
        [sym_type_declaration] = 1638,
        [aux_sym_source_file_repeat1] = 1638,
        [aux_sym_source_file_repeat2] = 1638,
        [ts_builtin_sym_end] = 1638,
        [anon_sym_import] = 1638,
        [anon_sym_const] = 1638,
        [anon_sym_var] = 1638,
        [anon_sym_func] = 1638,
        [anon_sym_type] = 1638,
        [sym_comment] = 8,
    },
    [713] = {
        [sym_import_spec] = 1616,
        [sym__string_literal] = 1618,
        [aux_sym_import_declaration_repeat1] = 1640,
        [anon_sym_RPAREN] = 1642,
        [anon_sym_DOT] = 1624,
        [sym_identifier] = 1624,
        [sym_raw_string_literal] = 406,
        [sym_interpreted_string_literal] = 406,
        [sym_comment] = 8,
    },
    [714] = {
        [anon_sym_RPAREN] = 1644,
        [sym_comment] = 8,
    },
    [715] = {
        [ts_builtin_sym_end] = 1646,
        [sym_comment] = 8,
    },
    [716] = {
        [sym__top_level_declaration] = 14,
        [sym__declaration] = 16,
        [sym_const_declaration] = 18,
        [sym_var_declaration] = 18,
        [sym_function_declaration] = 16,
        [sym_method_declaration] = 16,
        [sym_type_declaration] = 18,
        [aux_sym_source_file_repeat2] = 1648,
        [ts_builtin_sym_end] = 1650,
        [anon_sym_const] = 28,
        [anon_sym_var] = 30,
        [anon_sym_func] = 32,
        [anon_sym_type] = 34,
        [sym_comment] = 8,
    },
    [717] = {
        [ts_builtin_sym_end] = 1652,
        [sym_comment] = 8,
    },
    [718] = {
        [sym__top_level_declaration] = 1654,
        [sym__declaration] = 1654,
        [sym_const_declaration] = 1654,
        [sym_var_declaration] = 1654,
        [sym_function_declaration] = 1654,
        [sym_method_declaration] = 1654,
        [sym_type_declaration] = 1654,
        [aux_sym_source_file_repeat2] = 1654,
        [ts_builtin_sym_end] = 1654,
        [anon_sym_const] = 1654,
        [anon_sym_var] = 1654,
        [anon_sym_func] = 1654,
        [anon_sym_type] = 1654,
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
    [42] = {.count = 1}, SHIFT(718, 0),
    [44] = {.count = 1}, SHIFT(716, 0),
    [46] = {.count = 1}, REDUCE(sym__top_level_declaration, 1, 0),
    [48] = {.count = 1}, REDUCE(sym__declaration, 1, 0),
    [50] = {.count = 1}, SHIFT(715, 0),
    [52] = {.count = 1}, REDUCE(sym_source_file, 2, 0),
    [54] = {.count = 1}, SHIFT(700, 0),
    [56] = {.count = 1}, SHIFT(701, 0),
    [58] = {.count = 1}, SHIFT(702, 0),
    [60] = {.count = 1}, SHIFT(703, 0),
    [62] = {.count = 1}, SHIFT(704, 0),
    [64] = {.count = 1}, SHIFT(641, 0),
    [66] = {.count = 1}, SHIFT(642, 0),
    [68] = {.count = 1}, SHIFT(643, 0),
    [70] = {.count = 1}, SHIFT(580, 0),
    [72] = {.count = 1}, SHIFT(577, 0),
    [74] = {.count = 1}, SHIFT(578, 0),
    [76] = {.count = 1}, SHIFT(579, 0),
    [78] = {.count = 1}, SHIFT(394, 0),
    [80] = {.count = 1}, SHIFT(395, 0),
    [82] = {.count = 1}, SHIFT(396, 0),
    [84] = {.count = 1}, SHIFT(16, 0),
    [86] = {.count = 1}, SHIFT(17, 0),
    [88] = {.count = 1}, SHIFT(18, 0),
    [90] = {.count = 1}, REDUCE(sym_type_declaration, 2, 0),
    [92] = {.count = 1}, SHIFT(388, 0),
    [94] = {.count = 1}, SHIFT(389, 0),
    [96] = {.count = 1}, SHIFT(390, 0),
    [98] = {.count = 1}, SHIFT(19, 0),
    [100] = {.count = 1}, SHIFT(20, 0),
    [102] = {.count = 1}, SHIFT(21, 0),
    [104] = {.count = 1}, SHIFT(22, 0),
    [106] = {.count = 1}, SHIFT(23, 0),
    [108] = {.count = 1}, SHIFT(24, 0),
    [110] = {.count = 1}, SHIFT(25, 0),
    [112] = {.count = 1}, SHIFT(26, 0),
    [114] = {.count = 1}, SHIFT(27, 0),
    [116] = {.count = 1}, SHIFT(28, 0),
    [118] = {.count = 1}, SHIFT(29, 0),
    [120] = {.count = 1}, REDUCE(sym_type_spec, 2, 0),
    [122] = {.count = 1}, REDUCE(sym__type, 1, 0),
    [124] = {.count = 1}, SHIFT(386, 0),
    [126] = {.count = 1}, SHIFT(67, 0),
    [128] = {.count = 1}, SHIFT(385, 0),
    [130] = {.count = 1}, SHIFT(146, 0),
    [132] = {.count = 1}, SHIFT(380, 0),
    [134] = {.count = 1}, SHIFT(148, 0),
    [136] = {.count = 1}, SHIFT(149, 0),
    [138] = {.count = 1}, SHIFT(150, 0),
    [140] = {.count = 1}, SHIFT(381, 0),
    [142] = {.count = 1}, SHIFT(152, 0),
    [144] = {.count = 1}, SHIFT(153, 0),
    [146] = {.count = 1}, SHIFT(154, 0),
    [148] = {.count = 1}, SHIFT(155, 0),
    [150] = {.count = 1}, SHIFT(156, 0),
    [152] = {.count = 1}, SHIFT(376, 0),
    [154] = {.count = 1}, SHIFT(372, 0),
    [156] = {.count = 1}, SHIFT(37, 0),
    [158] = {.count = 1}, SHIFT(34, 0),
    [160] = {.count = 1}, SHIFT(35, 0),
    [162] = {.count = 1}, SHIFT(32, 0),
    [164] = {.count = 1}, SHIFT(30, 0),
    [166] = {.count = 1}, SHIFT(31, 0),
    [168] = {.count = 1}, REDUCE(sym_qualified_identifier, 3, 0),
    [170] = {.count = 1}, SHIFT(33, 0),
    [172] = {.count = 1}, REDUCE(sym_channel_type, 3, FRAGILE),
    [174] = {.count = 1}, REDUCE(sym_channel_type, 2, 0),
    [176] = {.count = 1}, SHIFT(36, 0),
    [178] = {.count = 1}, REDUCE(sym_channel_type, 3, 0),
    [180] = {.count = 1}, SHIFT(38, 0),
    [182] = {.count = 1}, SHIFT(39, 0),
    [184] = {.count = 1}, SHIFT(40, 0),
    [186] = {.count = 1}, SHIFT(41, 0),
    [188] = {.count = 1}, SHIFT(42, 0),
    [190] = {.count = 1}, SHIFT(43, 0),
    [192] = {.count = 1}, SHIFT(44, 0),
    [194] = {.count = 1}, SHIFT(45, 0),
    [196] = {.count = 1}, SHIFT(46, 0),
    [198] = {.count = 1}, SHIFT(47, 0),
    [200] = {.count = 1}, SHIFT(48, 0),
    [202] = {.count = 1}, SHIFT(370, 0),
    [204] = {.count = 1}, SHIFT(360, 0),
    [206] = {.count = 1}, SHIFT(361, 0),
    [208] = {.count = 1}, SHIFT(359, 0),
    [210] = {.count = 1}, SHIFT(354, 0),
    [212] = {.count = 1}, SHIFT(355, 0),
    [214] = {.count = 1}, SHIFT(350, 0),
    [216] = {.count = 1}, SHIFT(60, 0),
    [218] = {.count = 1}, SHIFT(56, 0),
    [220] = {.count = 1}, SHIFT(53, 0),
    [222] = {.count = 1}, SHIFT(54, 0),
    [224] = {.count = 1}, SHIFT(51, 0),
    [226] = {.count = 1}, SHIFT(49, 0),
    [228] = {.count = 1}, SHIFT(50, 0),
    [230] = {.count = 1}, SHIFT(52, 0),
    [232] = {.count = 1}, SHIFT(55, 0),
    [234] = {.count = 1}, SHIFT(57, 0),
    [236] = {.count = 1}, SHIFT(58, 0),
    [238] = {.count = 1}, SHIFT(59, 0),
    [240] = {.count = 1}, REDUCE(sym_map_type, 5, 0),
    [242] = {.count = 1}, SHIFT(61, 0),
    [244] = {.count = 1}, SHIFT(62, 0),
    [246] = {.count = 1}, SHIFT(63, 0),
    [248] = {.count = 1}, SHIFT(64, 0),
    [250] = {.count = 1}, SHIFT(66, 0),
    [252] = {.count = 1}, SHIFT(349, 0),
    [254] = {.count = 1}, REDUCE(sym_interface_type, 3, 0),
    [256] = {.count = 1}, SHIFT(65, 0),
    [258] = {.count = 1}, SHIFT(344, 0),
    [260] = {.count = 1}, REDUCE(sym_method_spec, 2, 0),
    [262] = {.count = 1}, SHIFT(345, 0),
    [264] = {.count = 1}, SHIFT(343, 0),
    [266] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 2, 0),
    [268] = {.count = 1}, SHIFT(68, 0),
    [270] = {.count = 1}, SHIFT(69, 0),
    [272] = {.count = 1}, SHIFT(70, 0),
    [274] = {.count = 1}, SHIFT(71, 0),
    [276] = {.count = 1}, SHIFT(342, 0),
    [278] = {.count = 1}, REDUCE(sym__parameter_list, 1, 0),
    [280] = {.count = 1}, SHIFT(75, 0),
    [282] = {.count = 1}, REDUCE(sym_parameters, 2, 0),
    [284] = {.count = 1}, SHIFT(72, 0),
    [286] = {.count = 1}, SHIFT(73, 0),
    [288] = {.count = 1}, SHIFT(74, 0),
    [290] = {.count = 1}, SHIFT(76, 0),
    [292] = {.count = 1}, SHIFT(77, 0),
    [294] = {.count = 1}, SHIFT(78, 0),
    [296] = {.count = 1}, SHIFT(79, 0),
    [298] = {.count = 1}, SHIFT(80, 0),
    [300] = {.count = 1}, SHIFT(81, 0),
    [302] = {.count = 1}, SHIFT(82, 0),
    [304] = {.count = 1}, SHIFT(83, 0),
    [306] = {.count = 1}, REDUCE(sym_parameter_declaration, 2, 0),
    [308] = {.count = 1}, SHIFT(332, 0),
    [310] = {.count = 1}, SHIFT(333, 0),
    [312] = {.count = 1}, SHIFT(331, 0),
    [314] = {.count = 1}, REDUCE(sym__parameter_list, 2, 0),
    [316] = {.count = 1}, SHIFT(330, 0),
    [318] = {.count = 1}, SHIFT(325, 0),
    [320] = {.count = 1}, SHIFT(326, 0),
    [322] = {.count = 1}, SHIFT(99, 0),
    [324] = {.count = 1}, SHIFT(95, 0),
    [326] = {.count = 1}, SHIFT(91, 0),
    [328] = {.count = 1}, SHIFT(88, 0),
    [330] = {.count = 1}, SHIFT(89, 0),
    [332] = {.count = 1}, SHIFT(86, 0),
    [334] = {.count = 1}, SHIFT(84, 0),
    [336] = {.count = 1}, SHIFT(85, 0),
    [338] = {.count = 1}, SHIFT(87, 0),
    [340] = {.count = 1}, SHIFT(90, 0),
    [342] = {.count = 1}, SHIFT(92, 0),
    [344] = {.count = 1}, SHIFT(93, 0),
    [346] = {.count = 1}, SHIFT(94, 0),
    [348] = {.count = 1}, SHIFT(96, 0),
    [350] = {.count = 1}, SHIFT(97, 0),
    [352] = {.count = 1}, SHIFT(98, 0),
    [354] = {.count = 1}, REDUCE(sym_interface_type, 4, 0),
    [356] = {.count = 1}, SHIFT(100, 0),
    [358] = {.count = 1}, SHIFT(101, 0),
    [360] = {.count = 1}, SHIFT(102, 0),
    [362] = {.count = 1}, SHIFT(103, 0),
    [364] = {.count = 1}, SHIFT(104, 0),
    [366] = {.count = 1}, SHIFT(105, 0),
    [368] = {.count = 1}, SHIFT(112, 0),
    [370] = {.count = 1}, SHIFT(117, 0),
    [372] = {.count = 1}, SHIFT(118, 0),
    [374] = {.count = 1}, SHIFT(119, 0),
    [376] = {.count = 1}, SHIFT(120, 0),
    [378] = {.count = 1}, SHIFT(121, 0),
    [380] = {.count = 1}, SHIFT(122, 0),
    [382] = {.count = 1}, SHIFT(123, 0),
    [384] = {.count = 1}, SHIFT(124, 0),
    [386] = {.count = 1}, SHIFT(125, 0),
    [388] = {.count = 1}, SHIFT(126, 0),
    [390] = {.count = 1}, SHIFT(115, 0),
    [392] = {.count = 1}, SHIFT(114, 0),
    [394] = {.count = 1}, REDUCE(sym_struct_type, 3, 0),
    [396] = {.count = 1}, REDUCE(sym_identifier_list, 1, 0),
    [398] = {.count = 1}, SHIFT(106, 0),
    [400] = {.count = 1}, SHIFT(107, 0),
    [402] = {.count = 1}, REDUCE(sym_field_declaration, 1, 0),
    [404] = {.count = 1}, SHIFT(108, 0),
    [406] = {.count = 1}, SHIFT(109, 0),
    [408] = {.count = 1}, REDUCE(sym_field_declaration, 2, 0),
    [410] = {.count = 1}, REDUCE(sym_identifier_list, 2, 0),
    [412] = {.count = 1}, SHIFT(110, 0),
    [414] = {.count = 1}, REDUCE(sym__string_literal, 1, 0),
    [416] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 2, 0),
    [418] = {.count = 1}, SHIFT(111, 0),
    [420] = {.count = 1}, REDUCE(aux_sym_identifier_list_repeat1, 3, 0),
    [422] = {.count = 1}, SHIFT(113, 0),
    [424] = {.count = 1}, REDUCE(sym_field_declaration, 3, 0),
    [426] = {.count = 1}, REDUCE(sym_struct_type, 4, 0),
    [428] = {.count = 1}, SHIFT(116, 0),
    [430] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 2, 0),
    [432] = {.count = 1}, REDUCE(aux_sym_struct_type_repeat1, 3, 0),
    [434] = {.count = 1}, SHIFT(315, 0),
    [436] = {.count = 1}, SHIFT(316, 0),
    [438] = {.count = 1}, SHIFT(314, 0),
    [440] = {.count = 1}, SHIFT(147, 0),
    [442] = {.count = 1}, SHIFT(151, 0),
    [444] = {.count = 1}, SHIFT(142, 0),
    [446] = {.count = 1}, SHIFT(138, 0),
    [448] = {.count = 1}, SHIFT(134, 0),
    [450] = {.count = 1}, SHIFT(131, 0),
    [452] = {.count = 1}, SHIFT(132, 0),
    [454] = {.count = 1}, SHIFT(129, 0),
    [456] = {.count = 1}, SHIFT(127, 0),
    [458] = {.count = 1}, SHIFT(128, 0),
    [460] = {.count = 1}, SHIFT(130, 0),
    [462] = {.count = 1}, SHIFT(133, 0),
    [464] = {.count = 1}, SHIFT(135, 0),
    [466] = {.count = 1}, SHIFT(136, 0),
    [468] = {.count = 1}, SHIFT(137, 0),
    [470] = {.count = 1}, SHIFT(139, 0),
    [472] = {.count = 1}, SHIFT(140, 0),
    [474] = {.count = 1}, SHIFT(141, 0),
    [476] = {.count = 1}, SHIFT(143, 0),
    [478] = {.count = 1}, SHIFT(144, 0),
    [480] = {.count = 1}, SHIFT(145, 0),
    [482] = {.count = 1}, SHIFT(157, 0),
    [484] = {.count = 1}, SHIFT(158, 0),
    [486] = {.count = 1}, SHIFT(281, 0),
    [488] = {.count = 1}, SHIFT(282, 0),
    [490] = {.count = 1}, SHIFT(312, 0),
    [492] = {.count = 1}, SHIFT(284, 0),
    [494] = {.count = 1}, SHIFT(285, 0),
    [496] = {.count = 1}, SHIFT(286, 0),
    [498] = {.count = 1}, SHIFT(287, 0),
    [500] = {.count = 1}, REDUCE(sym__expression, 1, 0),
    [502] = {.count = 1}, REDUCE(sym__primary_expression, 1, 0),
    [504] = {.count = 1}, SHIFT(279, 0),
    [506] = {.count = 1}, SHIFT(311, 0),
    [508] = {.count = 1}, SHIFT(307, 0),
    [510] = {.count = 1}, SHIFT(255, 0),
    [512] = {.count = 1}, REDUCE(sym_int_literal, 1, 0),
    [514] = {.count = 1}, REDUCE(sym_composite_literal, 2, 0),
    [516] = {.count = 1}, SHIFT(159, 0),
    [518] = {.count = 1}, SHIFT(160, 0),
    [520] = {.count = 1}, SHIFT(161, 0),
    [522] = {.count = 1}, SHIFT(162, 0),
    [524] = {.count = 1}, SHIFT(163, 0),
    [526] = {.count = 1}, SHIFT(164, 0),
    [528] = {.count = 1}, SHIFT(165, 0),
    [530] = {.count = 1}, SHIFT(166, 0),
    [532] = {.count = 1}, SHIFT(167, 0),
    [534] = {.count = 1}, SHIFT(168, 0),
    [536] = {.count = 1}, SHIFT(169, 0),
    [538] = {.count = 1}, SHIFT(170, 0),
    [540] = {.count = 1}, SHIFT(171, 0),
    [542] = {.count = 1}, SHIFT(172, 0),
    [544] = {.count = 1}, SHIFT(242, 0),
    [546] = {.count = 1}, REDUCE(sym_element, 1, 0),
    [548] = {.count = 1}, SHIFT(243, 0),
    [550] = {.count = 1}, SHIFT(182, 0),
    [552] = {.count = 1}, SHIFT(244, 0),
    [554] = {.count = 1}, SHIFT(245, 0),
    [556] = {.count = 1}, SHIFT(246, 0),
    [558] = {.count = 1}, SHIFT(247, 0),
    [560] = {.count = 1}, SHIFT(181, 0),
    [562] = {.count = 1}, SHIFT(179, 0),
    [564] = {.count = 1}, REDUCE(sym__element_list, 1, 0),
    [566] = {.count = 1}, SHIFT(176, 0),
    [568] = {.count = 1}, SHIFT(177, 0),
    [570] = {.count = 1}, REDUCE(sym_literal_value, 2, 0),
    [572] = {.count = 1}, SHIFT(173, 0),
    [574] = {.count = 1}, SHIFT(174, 0),
    [576] = {.count = 1}, SHIFT(175, 0),
    [578] = {.count = 1}, REDUCE(sym_literal_value, 3, 0),
    [580] = {.count = 1}, SHIFT(178, 0),
    [582] = {.count = 1}, SHIFT(180, 0),
    [584] = {.count = 1}, REDUCE(sym__element_list, 2, 0),
    [586] = {.count = 1}, REDUCE(sym__element_list, 3, 0),
    [588] = {.count = 1}, SHIFT(183, 0),
    [590] = {.count = 1}, SHIFT(184, 0),
    [592] = {.count = 1}, SHIFT(185, 0),
    [594] = {.count = 1}, SHIFT(186, 0),
    [596] = {.count = 1}, SHIFT(187, 0),
    [598] = {.count = 1}, SHIFT(188, 0),
    [600] = {.count = 1}, SHIFT(189, 0),
    [602] = {.count = 1}, SHIFT(190, 0),
    [604] = {.count = 1}, SHIFT(191, 0),
    [606] = {.count = 1}, SHIFT(192, 0),
    [608] = {.count = 1}, SHIFT(193, 0),
    [610] = {.count = 1}, SHIFT(200, 0),
    [612] = {.count = 1}, REDUCE(sym_element, 3, 0),
    [614] = {.count = 1}, SHIFT(201, 0),
    [616] = {.count = 1}, SHIFT(202, 0),
    [618] = {.count = 1}, SHIFT(203, 0),
    [620] = {.count = 1}, SHIFT(204, 0),
    [622] = {.count = 1}, SHIFT(205, 0),
    [624] = {.count = 1}, SHIFT(197, 0),
    [626] = {.count = 1}, SHIFT(198, 0),
    [628] = {.count = 1}, SHIFT(194, 0),
    [630] = {.count = 1}, SHIFT(195, 0),
    [632] = {.count = 1}, SHIFT(196, 0),
    [634] = {.count = 1}, SHIFT(199, 0),
    [636] = {.count = 1}, SHIFT(211, 0),
    [638] = {.count = 1}, SHIFT(212, 0),
    [640] = {.count = 1}, SHIFT(213, 0),
    [642] = {.count = 1}, SHIFT(214, 0),
    [644] = {.count = 1}, SHIFT(215, 0),
    [646] = {.count = 1}, SHIFT(216, 0),
    [648] = {.count = 1}, SHIFT(217, 0),
    [650] = {.count = 1}, SHIFT(218, 0),
    [652] = {.count = 1}, SHIFT(210, 0),
    [654] = {.count = 1}, SHIFT(209, 0),
    [656] = {.count = 1}, SHIFT(208, 0),
    [658] = {.count = 1}, SHIFT(207, 0),
    [660] = {.count = 1}, SHIFT(206, 0),
    [662] = {.count = 1}, REDUCE(sym_binary_expression, 3, FRAGILE),
    [664] = {.count = 1}, REDUCE(sym_binary_expression, 3, 0),
    [666] = {.count = 1}, SHIFT(241, 0),
    [668] = {.count = 1}, SHIFT(219, 0),
    [670] = {.count = 1}, SHIFT(220, 0),
    [672] = {.count = 1}, SHIFT(224, 0),
    [674] = {.count = 1}, SHIFT(225, 0),
    [676] = {.count = 1}, REDUCE(sym_expression_list, 1, 0),
    [678] = {.count = 1}, SHIFT(226, 0),
    [680] = {.count = 1}, SHIFT(227, 0),
    [682] = {.count = 1}, SHIFT(228, 0),
    [684] = {.count = 1}, SHIFT(229, 0),
    [686] = {.count = 1}, SHIFT(230, 0),
    [688] = {.count = 1}, SHIFT(231, 0),
    [690] = {.count = 1}, SHIFT(221, 0),
    [692] = {.count = 1}, SHIFT(222, 0),
    [694] = {.count = 1}, SHIFT(223, 0),
    [696] = {.count = 1}, REDUCE(sym_expression_list, 2, 0),
    [698] = {.count = 1}, SHIFT(239, 0),
    [700] = {.count = 1}, SHIFT(237, 0),
    [702] = {.count = 1}, SHIFT(236, 0),
    [704] = {.count = 1}, SHIFT(235, 0),
    [706] = {.count = 1}, SHIFT(234, 0),
    [708] = {.count = 1}, SHIFT(233, 0),
    [710] = {.count = 1}, SHIFT(232, 0),
    [712] = {.count = 1}, SHIFT(238, 0),
    [714] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 2, 0),
    [716] = {.count = 1}, REDUCE(aux_sym_expression_list_repeat1, 3, 0),
    [718] = {.count = 1}, SHIFT(240, 0),
    [720] = {.count = 1}, REDUCE(sym_call_expression, 4, 0),
    [722] = {.count = 1}, SHIFT(253, 0),
    [724] = {.count = 1}, SHIFT(252, 0),
    [726] = {.count = 1}, SHIFT(251, 0),
    [728] = {.count = 1}, SHIFT(250, 0),
    [730] = {.count = 1}, SHIFT(249, 0),
    [732] = {.count = 1}, SHIFT(248, 0),
    [734] = {.count = 1}, SHIFT(254, 0),
    [736] = {.count = 1}, SHIFT(256, 0),
    [738] = {.count = 1}, SHIFT(257, 0),
    [740] = {.count = 1}, SHIFT(258, 0),
    [742] = {.count = 1}, SHIFT(259, 0),
    [744] = {.count = 1}, SHIFT(260, 0),
    [746] = {.count = 1}, SHIFT(261, 0),
    [748] = {.count = 1}, SHIFT(262, 0),
    [750] = {.count = 1}, SHIFT(263, 0),
    [752] = {.count = 1}, SHIFT(264, 0),
    [754] = {.count = 1}, SHIFT(265, 0),
    [756] = {.count = 1}, SHIFT(266, 0),
    [758] = {.count = 1}, SHIFT(297, 0),
    [760] = {.count = 1}, SHIFT(298, 0),
    [762] = {.count = 1}, SHIFT(296, 0),
    [764] = {.count = 1}, SHIFT(278, 0),
    [766] = {.count = 1}, SHIFT(274, 0),
    [768] = {.count = 1}, SHIFT(271, 0),
    [770] = {.count = 1}, SHIFT(272, 0),
    [772] = {.count = 1}, SHIFT(269, 0),
    [774] = {.count = 1}, SHIFT(267, 0),
    [776] = {.count = 1}, SHIFT(268, 0),
    [778] = {.count = 1}, SHIFT(270, 0),
    [780] = {.count = 1}, SHIFT(273, 0),
    [782] = {.count = 1}, SHIFT(275, 0),
    [784] = {.count = 1}, SHIFT(276, 0),
    [786] = {.count = 1}, SHIFT(277, 0),
    [788] = {.count = 1}, SHIFT(283, 0),
    [790] = {.count = 1}, SHIFT(280, 0),
    [792] = {.count = 1}, REDUCE(sym_slice_type, 3, 0),
    [794] = {.count = 1}, SHIFT(294, 0),
    [796] = {.count = 1}, SHIFT(292, 0),
    [798] = {.count = 1}, SHIFT(293, 0),
    [800] = {.count = 1}, SHIFT(291, 0),
    [802] = {.count = 1}, SHIFT(290, 0),
    [804] = {.count = 1}, SHIFT(289, 0),
    [806] = {.count = 1}, SHIFT(288, 0),
    [808] = {.count = 1}, REDUCE(sym_array_type, 4, 0),
    [810] = {.count = 1}, SHIFT(295, 0),
    [812] = {.count = 1}, REDUCE(sym_pointer_type, 2, 0),
    [814] = {.count = 1}, SHIFT(302, 0),
    [816] = {.count = 1}, REDUCE(sym_function_type, 2, 0),
    [818] = {.count = 1}, SHIFT(303, 0),
    [820] = {.count = 1}, SHIFT(299, 0),
    [822] = {.count = 1}, SHIFT(300, 0),
    [824] = {.count = 1}, SHIFT(301, 0),
    [826] = {.count = 1}, REDUCE(sym_parameters, 3, 0),
    [828] = {.count = 1}, REDUCE(sym_function_type, 3, 0),
    [830] = {.count = 1}, SHIFT(304, 0),
    [832] = {.count = 1}, SHIFT(305, 0),
    [834] = {.count = 1}, SHIFT(306, 0),
    [836] = {.count = 1}, SHIFT(308, 0),
    [838] = {.count = 1}, SHIFT(309, 0),
    [840] = {.count = 1}, SHIFT(310, 0),
    [842] = {.count = 1}, SHIFT(313, 0),
    [844] = {.count = 1}, SHIFT(320, 0),
    [846] = {.count = 1}, SHIFT(321, 0),
    [848] = {.count = 1}, SHIFT(317, 0),
    [850] = {.count = 1}, SHIFT(318, 0),
    [852] = {.count = 1}, SHIFT(319, 0),
    [854] = {.count = 1}, SHIFT(322, 0),
    [856] = {.count = 1}, SHIFT(323, 0),
    [858] = {.count = 1}, SHIFT(324, 0),
    [860] = {.count = 1}, SHIFT(328, 0),
    [862] = {.count = 1}, SHIFT(327, 0),
    [864] = {.count = 1}, SHIFT(329, 0),
    [866] = {.count = 1}, REDUCE(sym__parameter_list, 3, 0),
    [868] = {.count = 1}, SHIFT(337, 0),
    [870] = {.count = 1}, SHIFT(338, 0),
    [872] = {.count = 1}, SHIFT(334, 0),
    [874] = {.count = 1}, SHIFT(335, 0),
    [876] = {.count = 1}, SHIFT(336, 0),
    [878] = {.count = 1}, SHIFT(339, 0),
    [880] = {.count = 1}, SHIFT(340, 0),
    [882] = {.count = 1}, SHIFT(341, 0),
    [884] = {.count = 1}, REDUCE(aux_sym_interface_type_repeat1, 3, 0),
    [886] = {.count = 1}, REDUCE(sym_method_spec, 3, 0),
    [888] = {.count = 1}, SHIFT(346, 0),
    [890] = {.count = 1}, SHIFT(347, 0),
    [892] = {.count = 1}, SHIFT(348, 0),
    [894] = {.count = 1}, SHIFT(351, 0),
    [896] = {.count = 1}, SHIFT(352, 0),
    [898] = {.count = 1}, SHIFT(353, 0),
    [900] = {.count = 1}, SHIFT(357, 0),
    [902] = {.count = 1}, SHIFT(356, 0),
    [904] = {.count = 1}, SHIFT(358, 0),
    [906] = {.count = 1}, SHIFT(365, 0),
    [908] = {.count = 1}, SHIFT(366, 0),
    [910] = {.count = 1}, SHIFT(362, 0),
    [912] = {.count = 1}, SHIFT(363, 0),
    [914] = {.count = 1}, SHIFT(364, 0),
    [916] = {.count = 1}, SHIFT(367, 0),
    [918] = {.count = 1}, SHIFT(368, 0),
    [920] = {.count = 1}, SHIFT(369, 0),
    [922] = {.count = 1}, SHIFT(371, 0),
    [924] = {.count = 1}, SHIFT(373, 0),
    [926] = {.count = 1}, SHIFT(374, 0),
    [928] = {.count = 1}, SHIFT(375, 0),
    [930] = {.count = 1}, SHIFT(377, 0),
    [932] = {.count = 1}, SHIFT(378, 0),
    [934] = {.count = 1}, SHIFT(379, 0),
    [936] = {.count = 1}, SHIFT(383, 0),
    [938] = {.count = 1}, SHIFT(382, 0),
    [940] = {.count = 1}, SHIFT(384, 0),
    [942] = {.count = 1}, SHIFT(387, 0),
    [944] = {.count = 1}, SHIFT(392, 0),
    [946] = {.count = 1}, SHIFT(391, 0),
    [948] = {.count = 1}, REDUCE(sym_type_declaration, 3, 0),
    [950] = {.count = 1}, REDUCE(sym_type_declaration, 4, 0),
    [952] = {.count = 1}, SHIFT(393, 0),
    [954] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 2, 0),
    [956] = {.count = 1}, REDUCE(aux_sym_type_declaration_repeat1, 3, 0),
    [958] = {.count = 1}, SHIFT(572, 0),
    [960] = {.count = 1}, SHIFT(569, 0),
    [962] = {.count = 1}, SHIFT(570, 0),
    [964] = {.count = 1}, SHIFT(397, 0),
    [966] = {.count = 1}, SHIFT(398, 0),
    [968] = {.count = 1}, SHIFT(402, 0),
    [970] = {.count = 1}, SHIFT(403, 0),
    [972] = {.count = 1}, SHIFT(404, 0),
    [974] = {.count = 1}, REDUCE(sym_function_declaration, 3, 0),
    [976] = {.count = 1}, SHIFT(405, 0),
    [978] = {.count = 1}, SHIFT(406, 0),
    [980] = {.count = 1}, SHIFT(407, 0),
    [982] = {.count = 1}, SHIFT(408, 0),
    [984] = {.count = 1}, SHIFT(409, 0),
    [986] = {.count = 1}, SHIFT(410, 0),
    [988] = {.count = 1}, SHIFT(411, 0),
    [990] = {.count = 1}, SHIFT(412, 0),
    [992] = {.count = 1}, SHIFT(413, 0),
    [994] = {.count = 1}, SHIFT(414, 0),
    [996] = {.count = 1}, SHIFT(415, 0),
    [998] = {.count = 1}, SHIFT(399, 0),
    [1000] = {.count = 1}, SHIFT(400, 0),
    [1002] = {.count = 1}, SHIFT(401, 0),
    [1004] = {.count = 1}, SHIFT(568, 0),
    [1006] = {.count = 1}, REDUCE(sym_function_declaration, 4, 0),
    [1008] = {.count = 1}, SHIFT(565, 0),
    [1010] = {.count = 1}, SHIFT(566, 0),
    [1012] = {.count = 1}, SHIFT(563, 0),
    [1014] = {.count = 1}, SHIFT(562, 0),
    [1016] = {.count = 1}, SHIFT(557, 0),
    [1018] = {.count = 1}, SHIFT(558, 0),
    [1020] = {.count = 1}, SHIFT(553, 0),
    [1022] = {.count = 1}, SHIFT(431, 0),
    [1024] = {.count = 1}, SHIFT(432, 0),
    [1026] = {.count = 1}, SHIFT(433, 0),
    [1028] = {.count = 1}, SHIFT(434, 0),
    [1030] = {.count = 1}, SHIFT(435, 0),
    [1032] = {.count = 1}, SHIFT(436, 0),
    [1034] = {.count = 1}, SHIFT(437, 0),
    [1036] = {.count = 1}, SHIFT(438, 0),
    [1038] = {.count = 1}, SHIFT(439, 0),
    [1040] = {.count = 1}, SHIFT(440, 0),
    [1042] = {.count = 1}, SHIFT(441, 0),
    [1044] = {.count = 1}, SHIFT(442, 0),
    [1046] = {.count = 1}, SHIFT(427, 0),
    [1048] = {.count = 1}, SHIFT(423, 0),
    [1050] = {.count = 1}, SHIFT(420, 0),
    [1052] = {.count = 1}, SHIFT(421, 0),
    [1054] = {.count = 1}, SHIFT(418, 0),
    [1056] = {.count = 1}, SHIFT(416, 0),
    [1058] = {.count = 1}, SHIFT(417, 0),
    [1060] = {.count = 1}, SHIFT(419, 0),
    [1062] = {.count = 1}, SHIFT(422, 0),
    [1064] = {.count = 1}, SHIFT(424, 0),
    [1066] = {.count = 1}, SHIFT(425, 0),
    [1068] = {.count = 1}, SHIFT(426, 0),
    [1070] = {.count = 1}, SHIFT(428, 0),
    [1072] = {.count = 1}, SHIFT(429, 0),
    [1074] = {.count = 1}, SHIFT(430, 0),
    [1076] = {.count = 1}, REDUCE(sym__statement, 1, 0),
    [1078] = {.count = 1}, SHIFT(520, 0),
    [1080] = {.count = 1}, SHIFT(521, 0),
    [1082] = {.count = 1}, SHIFT(443, 0),
    [1084] = {.count = 1}, SHIFT(444, 0),
    [1086] = {.count = 1}, SHIFT(518, 0),
    [1088] = {.count = 1}, SHIFT(449, 0),
    [1090] = {.count = 1}, SHIFT(450, 0),
    [1092] = {.count = 1}, SHIFT(451, 0),
    [1094] = {.count = 1}, SHIFT(452, 0),
    [1096] = {.count = 1}, SHIFT(453, 0),
    [1098] = {.count = 1}, SHIFT(454, 0),
    [1100] = {.count = 1}, SHIFT(455, 0),
    [1102] = {.count = 1}, SHIFT(456, 0),
    [1104] = {.count = 1}, SHIFT(457, 0),
    [1106] = {.count = 1}, SHIFT(458, 0),
    [1108] = {.count = 1}, SHIFT(459, 0),
    [1110] = {.count = 1}, SHIFT(448, 0),
    [1112] = {.count = 1}, REDUCE(sym_block, 2, 0),
    [1114] = {.count = 1}, SHIFT(445, 0),
    [1116] = {.count = 1}, SHIFT(446, 0),
    [1118] = {.count = 1}, SHIFT(447, 0),
    [1120] = {.count = 1}, REDUCE(sym_block, 3, 0),
    [1122] = {.count = 1}, SHIFT(516, 0),
    [1124] = {.count = 1}, SHIFT(490, 0),
    [1126] = {.count = 1}, SHIFT(491, 0),
    [1128] = {.count = 1}, SHIFT(492, 0),
    [1130] = {.count = 1}, SHIFT(493, 0),
    [1132] = {.count = 1}, SHIFT(494, 0),
    [1134] = {.count = 1}, SHIFT(495, 0),
    [1136] = {.count = 1}, SHIFT(496, 0),
    [1138] = {.count = 1}, SHIFT(464, 0),
    [1140] = {.count = 1}, SHIFT(465, 0),
    [1142] = {.count = 1}, SHIFT(466, 0),
    [1144] = {.count = 1}, SHIFT(467, 0),
    [1146] = {.count = 1}, SHIFT(468, 0),
    [1148] = {.count = 1}, SHIFT(469, 0),
    [1150] = {.count = 1}, SHIFT(470, 0),
    [1152] = {.count = 1}, SHIFT(471, 0),
    [1154] = {.count = 1}, REDUCE(sym_inc_statement, 2, 0),
    [1156] = {.count = 1}, REDUCE(sym_dec_statement, 2, 0),
    [1158] = {.count = 1}, SHIFT(463, 0),
    [1160] = {.count = 1}, SHIFT(462, 0),
    [1162] = {.count = 1}, SHIFT(461, 0),
    [1164] = {.count = 1}, SHIFT(460, 0),
    [1166] = {.count = 1}, SHIFT(472, 0),
    [1168] = {.count = 1}, SHIFT(473, 0),
    [1170] = {.count = 1}, REDUCE(sym_send_statement, 3, 0),
    [1172] = {.count = 1}, SHIFT(477, 0),
    [1174] = {.count = 1}, SHIFT(478, 0),
    [1176] = {.count = 1}, SHIFT(479, 0),
    [1178] = {.count = 1}, SHIFT(480, 0),
    [1180] = {.count = 1}, SHIFT(481, 0),
    [1182] = {.count = 1}, SHIFT(482, 0),
    [1184] = {.count = 1}, SHIFT(474, 0),
    [1186] = {.count = 1}, SHIFT(475, 0),
    [1188] = {.count = 1}, SHIFT(476, 0),
    [1190] = {.count = 1}, SHIFT(488, 0),
    [1192] = {.count = 1}, SHIFT(487, 0),
    [1194] = {.count = 1}, SHIFT(486, 0),
    [1196] = {.count = 1}, SHIFT(485, 0),
    [1198] = {.count = 1}, SHIFT(484, 0),
    [1200] = {.count = 1}, SHIFT(483, 0),
    [1202] = {.count = 1}, SHIFT(489, 0),
    [1204] = {.count = 1}, SHIFT(497, 0),
    [1206] = {.count = 1}, SHIFT(498, 0),
    [1208] = {.count = 1}, SHIFT(502, 0),
    [1210] = {.count = 1}, SHIFT(503, 0),
    [1212] = {.count = 1}, SHIFT(504, 0),
    [1214] = {.count = 1}, SHIFT(505, 0),
    [1216] = {.count = 1}, SHIFT(506, 0),
    [1218] = {.count = 1}, SHIFT(507, 0),
    [1220] = {.count = 1}, SHIFT(508, 0),
    [1222] = {.count = 1}, SHIFT(499, 0),
    [1224] = {.count = 1}, SHIFT(500, 0),
    [1226] = {.count = 1}, SHIFT(501, 0),
    [1228] = {.count = 1}, SHIFT(514, 0),
    [1230] = {.count = 1}, SHIFT(513, 0),
    [1232] = {.count = 1}, SHIFT(512, 0),
    [1234] = {.count = 1}, SHIFT(511, 0),
    [1236] = {.count = 1}, SHIFT(510, 0),
    [1238] = {.count = 1}, SHIFT(509, 0),
    [1240] = {.count = 1}, SHIFT(515, 0),
    [1242] = {.count = 1}, SHIFT(517, 0),
    [1244] = {.count = 1}, SHIFT(519, 0),
    [1246] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 2, 0),
    [1248] = {.count = 1}, REDUCE(aux_sym_block_repeat1, 3, 0),
    [1250] = {.count = 1}, SHIFT(552, 0),
    [1252] = {.count = 1}, SHIFT(523, 0),
    [1254] = {.count = 1}, SHIFT(524, 0),
    [1256] = {.count = 1}, SHIFT(525, 0),
    [1258] = {.count = 1}, SHIFT(526, 0),
    [1260] = {.count = 1}, SHIFT(527, 0),
    [1262] = {.count = 1}, SHIFT(528, 0),
    [1264] = {.count = 1}, SHIFT(529, 0),
    [1266] = {.count = 1}, SHIFT(522, 0),
    [1268] = {.count = 1}, REDUCE(sym_short_var_declaration, 3, 0),
    [1270] = {.count = 1}, SHIFT(530, 0),
    [1272] = {.count = 1}, SHIFT(531, 0),
    [1274] = {.count = 1}, SHIFT(535, 0),
    [1276] = {.count = 1}, SHIFT(536, 0),
    [1278] = {.count = 1}, SHIFT(537, 0),
    [1280] = {.count = 1}, SHIFT(538, 0),
    [1282] = {.count = 1}, SHIFT(539, 0),
    [1284] = {.count = 1}, SHIFT(540, 0),
    [1286] = {.count = 1}, SHIFT(541, 0),
    [1288] = {.count = 1}, SHIFT(542, 0),
    [1290] = {.count = 1}, SHIFT(532, 0),
    [1292] = {.count = 1}, SHIFT(533, 0),
    [1294] = {.count = 1}, SHIFT(534, 0),
    [1296] = {.count = 1}, SHIFT(550, 0),
    [1298] = {.count = 1}, SHIFT(548, 0),
    [1300] = {.count = 1}, SHIFT(547, 0),
    [1302] = {.count = 1}, SHIFT(546, 0),
    [1304] = {.count = 1}, SHIFT(545, 0),
    [1306] = {.count = 1}, SHIFT(544, 0),
    [1308] = {.count = 1}, SHIFT(543, 0),
    [1310] = {.count = 1}, SHIFT(549, 0),
    [1312] = {.count = 1}, SHIFT(551, 0),
    [1314] = {.count = 1}, REDUCE(sym_assignment_statement, 3, 0),
    [1316] = {.count = 1}, SHIFT(554, 0),
    [1318] = {.count = 1}, SHIFT(555, 0),
    [1320] = {.count = 1}, SHIFT(556, 0),
    [1322] = {.count = 1}, SHIFT(560, 0),
    [1324] = {.count = 1}, SHIFT(559, 0),
    [1326] = {.count = 1}, SHIFT(561, 0),
    [1328] = {.count = 1}, SHIFT(564, 0),
    [1330] = {.count = 1}, SHIFT(567, 0),
    [1332] = {.count = 1}, REDUCE(sym_function_declaration, 5, 0),
    [1334] = {.count = 1}, SHIFT(571, 0),
    [1336] = {.count = 1}, SHIFT(573, 0),
    [1338] = {.count = 1}, SHIFT(574, 0),
    [1340] = {.count = 1}, SHIFT(575, 0),
    [1342] = {.count = 1}, REDUCE(sym_method_declaration, 4, 0),
    [1344] = {.count = 1}, SHIFT(576, 0),
    [1346] = {.count = 1}, REDUCE(sym_method_declaration, 5, 0),
    [1348] = {.count = 1}, REDUCE(sym_method_declaration, 6, 0),
    [1350] = {.count = 1}, REDUCE(sym_var_declaration, 2, 0),
    [1352] = {.count = 1}, SHIFT(591, 0),
    [1354] = {.count = 1}, SHIFT(592, 0),
    [1356] = {.count = 1}, SHIFT(593, 0),
    [1358] = {.count = 1}, SHIFT(594, 0),
    [1360] = {.count = 1}, SHIFT(595, 0),
    [1362] = {.count = 1}, SHIFT(596, 0),
    [1364] = {.count = 1}, SHIFT(597, 0),
    [1366] = {.count = 1}, SHIFT(598, 0),
    [1368] = {.count = 1}, SHIFT(599, 0),
    [1370] = {.count = 1}, SHIFT(600, 0),
    [1372] = {.count = 1}, SHIFT(601, 0),
    [1374] = {.count = 1}, SHIFT(602, 0),
    [1376] = {.count = 1}, SHIFT(585, 0),
    [1378] = {.count = 1}, SHIFT(586, 0),
    [1380] = {.count = 1}, SHIFT(587, 0),
    [1382] = {.count = 1}, SHIFT(581, 0),
    [1384] = {.count = 1}, SHIFT(582, 0),
    [1386] = {.count = 1}, SHIFT(583, 0),
    [1388] = {.count = 1}, SHIFT(584, 0),
    [1390] = {.count = 1}, SHIFT(589, 0),
    [1392] = {.count = 1}, SHIFT(588, 0),
    [1394] = {.count = 1}, REDUCE(sym_var_declaration, 3, 0),
    [1396] = {.count = 1}, REDUCE(sym_var_declaration, 4, 0),
    [1398] = {.count = 1}, SHIFT(590, 0),
    [1400] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 2, 0),
    [1402] = {.count = 1}, REDUCE(aux_sym_var_declaration_repeat1, 3, 0),
    [1404] = {.count = 1}, REDUCE(sym_var_spec, 2, 0),
    [1406] = {.count = 1}, SHIFT(639, 0),
    [1408] = {.count = 1}, SHIFT(638, 0),
    [1410] = {.count = 1}, SHIFT(628, 0),
    [1412] = {.count = 1}, SHIFT(629, 0),
    [1414] = {.count = 1}, SHIFT(627, 0),
    [1416] = {.count = 1}, SHIFT(622, 0),
    [1418] = {.count = 1}, SHIFT(623, 0),
    [1420] = {.count = 1}, SHIFT(618, 0),
    [1422] = {.count = 1}, SHIFT(614, 0),
    [1424] = {.count = 1}, SHIFT(610, 0),
    [1426] = {.count = 1}, SHIFT(607, 0),
    [1428] = {.count = 1}, SHIFT(608, 0),
    [1430] = {.count = 1}, SHIFT(605, 0),
    [1432] = {.count = 1}, SHIFT(603, 0),
    [1434] = {.count = 1}, SHIFT(604, 0),
    [1436] = {.count = 1}, SHIFT(606, 0),
    [1438] = {.count = 1}, SHIFT(609, 0),
    [1440] = {.count = 1}, SHIFT(611, 0),
    [1442] = {.count = 1}, SHIFT(612, 0),
    [1444] = {.count = 1}, SHIFT(613, 0),
    [1446] = {.count = 1}, SHIFT(615, 0),
    [1448] = {.count = 1}, SHIFT(616, 0),
    [1450] = {.count = 1}, SHIFT(617, 0),
    [1452] = {.count = 1}, SHIFT(619, 0),
    [1454] = {.count = 1}, SHIFT(620, 0),
    [1456] = {.count = 1}, SHIFT(621, 0),
    [1458] = {.count = 1}, SHIFT(625, 0),
    [1460] = {.count = 1}, SHIFT(624, 0),
    [1462] = {.count = 1}, SHIFT(626, 0),
    [1464] = {.count = 1}, SHIFT(633, 0),
    [1466] = {.count = 1}, SHIFT(634, 0),
    [1468] = {.count = 1}, SHIFT(630, 0),
    [1470] = {.count = 1}, SHIFT(631, 0),
    [1472] = {.count = 1}, SHIFT(632, 0),
    [1474] = {.count = 1}, SHIFT(635, 0),
    [1476] = {.count = 1}, SHIFT(636, 0),
    [1478] = {.count = 1}, SHIFT(637, 0),
    [1480] = {.count = 1}, REDUCE(sym_var_spec, 3, 0),
    [1482] = {.count = 1}, SHIFT(640, 0),
    [1484] = {.count = 1}, REDUCE(sym_var_spec, 4, 0),
    [1486] = {.count = 1}, REDUCE(sym_const_declaration, 2, 0),
    [1488] = {.count = 1}, SHIFT(650, 0),
    [1490] = {.count = 1}, SHIFT(651, 0),
    [1492] = {.count = 1}, SHIFT(652, 0),
    [1494] = {.count = 1}, SHIFT(653, 0),
    [1496] = {.count = 1}, SHIFT(654, 0),
    [1498] = {.count = 1}, SHIFT(655, 0),
    [1500] = {.count = 1}, SHIFT(656, 0),
    [1502] = {.count = 1}, SHIFT(657, 0),
    [1504] = {.count = 1}, SHIFT(658, 0),
    [1506] = {.count = 1}, SHIFT(659, 0),
    [1508] = {.count = 1}, SHIFT(660, 0),
    [1510] = {.count = 1}, SHIFT(661, 0),
    [1512] = {.count = 1}, SHIFT(644, 0),
    [1514] = {.count = 1}, SHIFT(645, 0),
    [1516] = {.count = 1}, SHIFT(646, 0),
    [1518] = {.count = 1}, SHIFT(648, 0),
    [1520] = {.count = 1}, SHIFT(647, 0),
    [1522] = {.count = 1}, REDUCE(sym_const_declaration, 3, 0),
    [1524] = {.count = 1}, REDUCE(sym_const_declaration, 4, 0),
    [1526] = {.count = 1}, SHIFT(649, 0),
    [1528] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 2, 0),
    [1530] = {.count = 1}, REDUCE(aux_sym_const_declaration_repeat1, 3, 0),
    [1532] = {.count = 1}, SHIFT(698, 0),
    [1534] = {.count = 1}, SHIFT(697, 0),
    [1536] = {.count = 1}, SHIFT(687, 0),
    [1538] = {.count = 1}, SHIFT(688, 0),
    [1540] = {.count = 1}, SHIFT(686, 0),
    [1542] = {.count = 1}, SHIFT(681, 0),
    [1544] = {.count = 1}, SHIFT(682, 0),
    [1546] = {.count = 1}, SHIFT(677, 0),
    [1548] = {.count = 1}, SHIFT(673, 0),
    [1550] = {.count = 1}, SHIFT(669, 0),
    [1552] = {.count = 1}, SHIFT(666, 0),
    [1554] = {.count = 1}, SHIFT(667, 0),
    [1556] = {.count = 1}, SHIFT(664, 0),
    [1558] = {.count = 1}, SHIFT(662, 0),
    [1560] = {.count = 1}, SHIFT(663, 0),
    [1562] = {.count = 1}, SHIFT(665, 0),
    [1564] = {.count = 1}, SHIFT(668, 0),
    [1566] = {.count = 1}, SHIFT(670, 0),
    [1568] = {.count = 1}, SHIFT(671, 0),
    [1570] = {.count = 1}, SHIFT(672, 0),
    [1572] = {.count = 1}, SHIFT(674, 0),
    [1574] = {.count = 1}, SHIFT(675, 0),
    [1576] = {.count = 1}, SHIFT(676, 0),
    [1578] = {.count = 1}, SHIFT(678, 0),
    [1580] = {.count = 1}, SHIFT(679, 0),
    [1582] = {.count = 1}, SHIFT(680, 0),
    [1584] = {.count = 1}, SHIFT(684, 0),
    [1586] = {.count = 1}, SHIFT(683, 0),
    [1588] = {.count = 1}, SHIFT(685, 0),
    [1590] = {.count = 1}, SHIFT(692, 0),
    [1592] = {.count = 1}, SHIFT(693, 0),
    [1594] = {.count = 1}, SHIFT(689, 0),
    [1596] = {.count = 1}, SHIFT(690, 0),
    [1598] = {.count = 1}, SHIFT(691, 0),
    [1600] = {.count = 1}, SHIFT(694, 0),
    [1602] = {.count = 1}, SHIFT(695, 0),
    [1604] = {.count = 1}, SHIFT(696, 0),
    [1606] = {.count = 1}, REDUCE(sym_const_spec, 3, 0),
    [1608] = {.count = 1}, SHIFT(699, 0),
    [1610] = {.count = 1}, REDUCE(sym_const_spec, 4, 0),
    [1612] = {.count = 1}, REDUCE(sym_import_declaration, 2, 0),
    [1614] = {.count = 1}, REDUCE(sym_import_spec, 1, 0),
    [1616] = {.count = 1}, SHIFT(706, 0),
    [1618] = {.count = 1}, SHIFT(707, 0),
    [1620] = {.count = 1}, SHIFT(708, 0),
    [1622] = {.count = 1}, SHIFT(709, 0),
    [1624] = {.count = 1}, SHIFT(710, 0),
    [1626] = {.count = 1}, SHIFT(705, 0),
    [1628] = {.count = 1}, REDUCE(sym_import_spec, 2, 0),
    [1630] = {.count = 1}, SHIFT(713, 0),
    [1632] = {.count = 1}, SHIFT(712, 0),
    [1634] = {.count = 1}, REDUCE(sym_import_declaration, 3, 0),
    [1636] = {.count = 1}, SHIFT(711, 0),
    [1638] = {.count = 1}, REDUCE(sym_import_declaration, 4, 0),
    [1640] = {.count = 1}, SHIFT(714, 0),
    [1642] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 2, 0),
    [1644] = {.count = 1}, REDUCE(aux_sym_import_declaration_repeat1, 3, 0),
    [1646] = {.count = 1}, REDUCE(sym_source_file, 3, 0),
    [1648] = {.count = 1}, SHIFT(717, 0),
    [1650] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 2, 0),
    [1652] = {.count = 1}, REDUCE(aux_sym_source_file_repeat2, 3, 0),
    [1654] = {.count = 1}, REDUCE(aux_sym_source_file_repeat1, 2, 0),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_go);
