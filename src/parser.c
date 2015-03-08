#include "tree_sitter/parser.h"

#define STATE_COUNT 820
#define SYMBOL_COUNT 110

enum {
    sym_program = ts_builtin_sym_start,
    sym_preproc_include,
    sym_preproc_define,
    sym_preproc_call,
    sym_preproc_ifdef,
    sym_preproc_ifndef,
    sym_typedef,
    sym_var_declaration,
    sym_function_declaration,
    sym_statement_block,
    sym_statement,
    sym_return_statement,
    sym_expression_statement,
    sym_if_statement,
    sym_for_statement,
    sym_while_statement,
    sym_type,
    sym_primitive_type,
    sym_formal_parameters,
    sym_type_expression,
    sym_pointer_type,
    sym_struct_declaration,
    sym_struct_type,
    sym_union_declaration,
    sym_union_type,
    sym_enum_declaration,
    sym_enum_type,
    sym_enum_value,
    sym_field,
    sym_var_assignment,
    sym_expression,
    sym_deref,
    sym_address_of,
    sym_field_access,
    sym_deref_field_access,
    sym_function_call,
    sym_math_op,
    sym_bool_op,
    sym_rel_op,
    sym_assignment,
    sym_compound_literal,
    sym_struct_literal_field,
    sym_preproc_else,
    sym_preproc_endif,
    sym_preproc_directive,
    sym_number,
    sym_char,
    sym_string,
    sym_system_lib_string,
    sym_identifier,
    sym_comment,
    aux_sym_program_repeat0,
    aux_sym_var_declaration_repeat0,
    aux_sym_var_declaration_repeat1,
    aux_sym_statement_block_repeat0,
    aux_sym_primitive_type_repeat0,
    aux_sym_formal_parameters_repeat0,
    aux_sym_struct_type_repeat0,
    aux_sym_union_type_repeat0,
    aux_sym_enum_type_repeat0,
    aux_sym_function_call_repeat0,
    aux_sym_compound_literal_repeat0,
    aux_sym_STR_POUNDinclude,
    aux_sym_STR_POUNDdefine,
    aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN,
    aux_sym_PAT_DOT_STAR,
    aux_sym_STR_POUNDifdef,
    aux_sym_STR_POUNDifndef,
    aux_sym_STR_typedef,
    aux_sym_STR_SEMI,
    aux_sym_STR_static,
    aux_sym_STR_extern,
    aux_sym_STR_COMMA,
    aux_sym_STR_LPAREN,
    aux_sym_STR_RPAREN,
    aux_sym_STR_LBRACE,
    aux_sym_STR_RBRACE,
    aux_sym_STR_return,
    aux_sym_STR_if,
    aux_sym_STR_else,
    aux_sym_STR_for,
    aux_sym_STR_while,
    aux_sym_STR_const,
    aux_sym_STR_unsigned,
    aux_sym_STR_short,
    aux_sym_STR_long,
    aux_sym_STR_STAR,
    aux_sym_STR_struct,
    aux_sym_STR_union,
    aux_sym_STR_enum,
    aux_sym_STR_EQ,
    aux_sym_STR_AMP,
    aux_sym_STR_DOT,
    aux_sym_STR_DASH_GT,
    aux_sym_STR_PLUS_PLUS,
    aux_sym_STR_DASH,
    aux_sym_STR_SLASH,
    aux_sym_STR_PLUS,
    aux_sym_STR_BANG,
    aux_sym_STR_AMP_AMP,
    aux_sym_STR_PIPE_PIPE,
    aux_sym_STR_LT,
    aux_sym_STR_LT_EQ,
    aux_sym_STR_EQ_EQ,
    aux_sym_STR_BANG_EQ,
    aux_sym_STR_GT_EQ,
    aux_sym_STR_GT,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_document] = "DOCUMENT",
    [sym_program] = "program",
    [sym_preproc_include] = "preproc_include",
    [sym_preproc_define] = "preproc_define",
    [sym_preproc_call] = "preproc_call",
    [sym_preproc_ifdef] = "preproc_ifdef",
    [sym_preproc_ifndef] = "preproc_ifndef",
    [sym_typedef] = "typedef",
    [sym_var_declaration] = "var_declaration",
    [sym_function_declaration] = "function_declaration",
    [sym_statement_block] = "statement_block",
    [sym_statement] = "statement",
    [sym_return_statement] = "return_statement",
    [sym_expression_statement] = "expression_statement",
    [sym_if_statement] = "if_statement",
    [sym_for_statement] = "for_statement",
    [sym_while_statement] = "while_statement",
    [sym_type] = "type",
    [sym_primitive_type] = "primitive_type",
    [sym_formal_parameters] = "formal_parameters",
    [sym_type_expression] = "type_expression",
    [sym_pointer_type] = "pointer_type",
    [sym_struct_declaration] = "struct_declaration",
    [sym_struct_type] = "struct_type",
    [sym_union_declaration] = "union_declaration",
    [sym_union_type] = "union_type",
    [sym_enum_declaration] = "enum_declaration",
    [sym_enum_type] = "enum_type",
    [sym_enum_value] = "enum_value",
    [sym_field] = "field",
    [sym_var_assignment] = "var_assignment",
    [sym_expression] = "expression",
    [sym_deref] = "deref",
    [sym_address_of] = "address_of",
    [sym_field_access] = "field_access",
    [sym_deref_field_access] = "deref_field_access",
    [sym_function_call] = "function_call",
    [sym_math_op] = "math_op",
    [sym_bool_op] = "bool_op",
    [sym_rel_op] = "rel_op",
    [sym_assignment] = "assignment",
    [sym_compound_literal] = "compound_literal",
    [sym_struct_literal_field] = "struct_literal_field",
    [ts_builtin_sym_error] = "error",
    [ts_builtin_sym_end] = "end",
    [sym_preproc_else] = "preproc_else",
    [sym_preproc_endif] = "preproc_endif",
    [sym_preproc_directive] = "preproc_directive",
    [sym_number] = "number",
    [sym_char] = "char",
    [sym_string] = "string",
    [sym_system_lib_string] = "system_lib_string",
    [sym_identifier] = "identifier",
    [sym_comment] = "comment",
    [aux_sym_program_repeat0] = "program_repeat0",
    [aux_sym_var_declaration_repeat0] = "var_declaration_repeat0",
    [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [aux_sym_statement_block_repeat0] = "statement_block_repeat0",
    [aux_sym_primitive_type_repeat0] = "primitive_type_repeat0",
    [aux_sym_formal_parameters_repeat0] = "formal_parameters_repeat0",
    [aux_sym_struct_type_repeat0] = "struct_type_repeat0",
    [aux_sym_union_type_repeat0] = "union_type_repeat0",
    [aux_sym_enum_type_repeat0] = "enum_type_repeat0",
    [aux_sym_function_call_repeat0] = "function_call_repeat0",
    [aux_sym_compound_literal_repeat0] = "compound_literal_repeat0",
    [aux_sym_STR_POUNDinclude] = "STR_#include",
    [aux_sym_STR_POUNDdefine] = "STR_#define",
    [aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN] = "(seq PAT_.+ )",
    [aux_sym_PAT_DOT_STAR] = "PAT_.*",
    [aux_sym_STR_POUNDifdef] = "STR_#ifdef",
    [aux_sym_STR_POUNDifndef] = "STR_#ifndef",
    [aux_sym_STR_typedef] = "STR_typedef",
    [aux_sym_STR_SEMI] = "STR_;",
    [aux_sym_STR_static] = "STR_static",
    [aux_sym_STR_extern] = "STR_extern",
    [aux_sym_STR_COMMA] = "STR_,",
    [aux_sym_STR_LPAREN] = "STR_(",
    [aux_sym_STR_RPAREN] = "STR_)",
    [aux_sym_STR_LBRACE] = "STR_{",
    [aux_sym_STR_RBRACE] = "STR_}",
    [aux_sym_STR_return] = "STR_return",
    [aux_sym_STR_if] = "STR_if",
    [aux_sym_STR_else] = "STR_else",
    [aux_sym_STR_for] = "STR_for",
    [aux_sym_STR_while] = "STR_while",
    [aux_sym_STR_const] = "STR_const",
    [aux_sym_STR_unsigned] = "STR_unsigned",
    [aux_sym_STR_short] = "STR_short",
    [aux_sym_STR_long] = "STR_long",
    [aux_sym_STR_STAR] = "STR_*",
    [aux_sym_STR_struct] = "STR_struct",
    [aux_sym_STR_union] = "STR_union",
    [aux_sym_STR_enum] = "STR_enum",
    [aux_sym_STR_EQ] = "STR_=",
    [aux_sym_STR_AMP] = "STR_&",
    [aux_sym_STR_DOT] = "STR_.",
    [aux_sym_STR_DASH_GT] = "STR_->",
    [aux_sym_STR_PLUS_PLUS] = "STR_++",
    [aux_sym_STR_DASH] = "STR_-",
    [aux_sym_STR_SLASH] = "STR_/",
    [aux_sym_STR_PLUS] = "STR_+",
    [aux_sym_STR_BANG] = "STR_!",
    [aux_sym_STR_AMP_AMP] = "STR_&&",
    [aux_sym_STR_PIPE_PIPE] = "STR_||",
    [aux_sym_STR_LT] = "STR_<",
    [aux_sym_STR_LT_EQ] = "STR_<=",
    [aux_sym_STR_EQ_EQ] = "STR_==",
    [aux_sym_STR_BANG_EQ] = "STR_!=",
    [aux_sym_STR_GT_EQ] = "STR_>=",
    [aux_sym_STR_GT] = "STR_>",
};

static const int ts_hidden_symbol_flags[SYMBOL_COUNT] = {
    [aux_sym_program_repeat0] = 1,
    [aux_sym_var_declaration_repeat0] = 1,
    [aux_sym_var_declaration_repeat1] = 1,
    [aux_sym_statement_block_repeat0] = 1,
    [aux_sym_primitive_type_repeat0] = 1,
    [aux_sym_formal_parameters_repeat0] = 1,
    [aux_sym_struct_type_repeat0] = 1,
    [aux_sym_union_type_repeat0] = 1,
    [aux_sym_enum_type_repeat0] = 1,
    [aux_sym_function_call_repeat0] = 1,
    [aux_sym_compound_literal_repeat0] = 1,
    [aux_sym_STR_POUNDinclude] = 1,
    [aux_sym_STR_POUNDdefine] = 1,
    [aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN] = 1,
    [aux_sym_PAT_DOT_STAR] = 1,
    [aux_sym_STR_POUNDifdef] = 1,
    [aux_sym_STR_POUNDifndef] = 1,
    [aux_sym_STR_typedef] = 1,
    [aux_sym_STR_SEMI] = 1,
    [aux_sym_STR_static] = 1,
    [aux_sym_STR_extern] = 1,
    [aux_sym_STR_COMMA] = 1,
    [aux_sym_STR_LPAREN] = 1,
    [aux_sym_STR_RPAREN] = 1,
    [aux_sym_STR_LBRACE] = 1,
    [aux_sym_STR_RBRACE] = 1,
    [aux_sym_STR_return] = 1,
    [aux_sym_STR_if] = 1,
    [aux_sym_STR_else] = 1,
    [aux_sym_STR_for] = 1,
    [aux_sym_STR_while] = 1,
    [aux_sym_STR_const] = 1,
    [aux_sym_STR_unsigned] = 1,
    [aux_sym_STR_short] = 1,
    [aux_sym_STR_long] = 1,
    [aux_sym_STR_STAR] = 1,
    [aux_sym_STR_struct] = 1,
    [aux_sym_STR_union] = 1,
    [aux_sym_STR_enum] = 1,
    [aux_sym_STR_EQ] = 1,
    [aux_sym_STR_AMP] = 1,
    [aux_sym_STR_DOT] = 1,
    [aux_sym_STR_DASH_GT] = 1,
    [aux_sym_STR_PLUS_PLUS] = 1,
    [aux_sym_STR_DASH] = 1,
    [aux_sym_STR_SLASH] = 1,
    [aux_sym_STR_PLUS] = 1,
    [aux_sym_STR_BANG] = 1,
    [aux_sym_STR_AMP_AMP] = 1,
    [aux_sym_STR_PIPE_PIPE] = 1,
    [aux_sym_STR_LT] = 1,
    [aux_sym_STR_LT_EQ] = 1,
    [aux_sym_STR_EQ_EQ] = 1,
    [aux_sym_STR_BANG_EQ] = 1,
    [aux_sym_STR_GT_EQ] = 1,
    [aux_sym_STR_GT] = 1,
};

static TSTree *ts_lex(TSLexer *lexer, TSStateId lex_state) {
    START_LEXER();
    switch (lex_state) {
        case 1:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(1);
            if (lookahead == '#')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 't')
                ADVANCE(73);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 2:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 3:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(4);
            if (lookahead == 'd')
                ADVANCE(6);
            if (lookahead == 'e')
                ADVANCE(12);
            if (lookahead == 'i')
                ADVANCE(20);
            LEX_ERROR();
        case 4:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
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
            ACCEPT_TOKEN(sym_preproc_directive);
        case 6:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(7);
            LEX_ERROR();
        case 7:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(8);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 8:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(9);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(10);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(11);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(aux_sym_STR_POUNDdefine);
        case 12:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(13);
            if (lookahead == 'n')
                ADVANCE(16);
            LEX_ERROR();
        case 13:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 's')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(sym_preproc_else);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(sym_preproc_endif);
        case 20:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(21);
            if (lookahead == 'n')
                ADVANCE(29);
            LEX_ERROR();
        case 21:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(22);
            if (lookahead == 'n')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifdef);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifndef);
        case 29:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'c')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(aux_sym_STR_POUNDinclude);
        case 35:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            LEX_ERROR();
        case 36:
            if (lookahead == '*')
                ADVANCE(37);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(36);
            LEX_ERROR();
        case 37:
            if (lookahead == '/')
                ADVANCE(38);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(36);
            LEX_ERROR();
        case 38:
            ACCEPT_TOKEN(sym_comment);
        case 39:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(39);
            ACCEPT_TOKEN(sym_comment);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_const);
        case 46:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_enum);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_extern);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(56);
            ACCEPT_TOKEN(sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_long);
        case 59:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_short);
        case 64:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'a')
                ADVANCE(65);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier);
        case 67:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_static);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier);
        case 70:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_struct);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(74);
            ACCEPT_TOKEN(sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_typedef);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier);
        case 81:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(82);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_union);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_unsigned);
        case 91:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(91);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 92:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(92);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 93:
            ACCEPT_TOKEN(aux_sym_STR_STAR);
        case 94:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(94);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 95:
            ACCEPT_TOKEN(aux_sym_STR_SEMI);
        case 96:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '\n')
                ADVANCE(96);
            if (lookahead == '/')
                ADVANCE(98);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 97:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(97);
            if (lookahead == '\n')
                ADVANCE(96);
            if (lookahead == '/')
                ADVANCE(98);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 98:
            if (lookahead == '*')
                ADVANCE(99);
            if (lookahead == '/')
                ADVANCE(103);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(102);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 99:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(100);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(99);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 100:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(101);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/')))
                ADVANCE(99);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 101:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 102:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 103:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(103);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 104:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(104);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 105:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 106:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            if (lookahead == 't')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 108:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(108);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 109:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(109);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '<')
                ADVANCE(114);
            LEX_ERROR();
        case 110:
            if (lookahead == '\"')
                ADVANCE(111);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            LEX_ERROR();
        case 111:
            ACCEPT_TOKEN(sym_string);
        case 112:
            if (lookahead == '\"')
                ADVANCE(113);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            LEX_ERROR();
        case 113:
            if (lookahead == '\"')
                ADVANCE(111);
            if (lookahead == '\\')
                ADVANCE(112);
            if (!((lookahead == 0) ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(110);
            ACCEPT_TOKEN(sym_string);
        case 114:
            if (lookahead == '>')
                ADVANCE(115);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            LEX_ERROR();
        case 115:
            ACCEPT_TOKEN(sym_system_lib_string);
        case 116:
            if (lookahead == '>')
                ADVANCE(117);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            LEX_ERROR();
        case 117:
            if (lookahead == '>')
                ADVANCE(115);
            if (lookahead == '\\')
                ADVANCE(116);
            if (!((lookahead == 0) ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(114);
            ACCEPT_TOKEN(sym_system_lib_string);
        case 118:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(118);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 119:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(119);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 120:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(120);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(121);
            if (lookahead == 'u')
                ADVANCE(122);
            LEX_ERROR();
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(123);
            ACCEPT_TOKEN(sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 124:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(124);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            ACCEPT_TOKEN(aux_sym_STR_LBRACE);
        case 126:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(126);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 127:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(127);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            ACCEPT_TOKEN(aux_sym_STR_RBRACE);
        case 129:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(129);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(aux_sym_STR_COMMA);
        case 131:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(131);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 132:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(132);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(133);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 133:
            ACCEPT_TOKEN(aux_sym_STR_EQ);
        case 134:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(134);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 135:
            ACCEPT_TOKEN(aux_sym_STR_BANG);
        case 136:
            ACCEPT_TOKEN(aux_sym_STR_AMP);
        case 137:
            if (lookahead == '\\')
                ADVANCE(138);
            if (!((lookahead == 0) ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(141);
            LEX_ERROR();
        case 138:
            if (lookahead == '\'')
                ADVANCE(139);
            if (!((lookahead == 0) ||
                (lookahead == '\'')))
                ADVANCE(141);
            LEX_ERROR();
        case 139:
            if (lookahead == '\'')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_char);
        case 140:
            ACCEPT_TOKEN(sym_char);
        case 141:
            if (lookahead == '\'')
                ADVANCE(140);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(aux_sym_STR_LPAREN);
        case 143:
            ACCEPT_TOKEN(aux_sym_STR_DASH);
        case 144:
            if (lookahead == '.')
                ADVANCE(145);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            ACCEPT_TOKEN(sym_number);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_number);
        case 147:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(147);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(160);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 148:
            if (lookahead == '=')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            ACCEPT_TOKEN(aux_sym_STR_BANG_EQ);
        case 150:
            if (lookahead == '&')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(aux_sym_STR_AMP_AMP);
        case 152:
            if (lookahead == '+')
                ADVANCE(153);
            ACCEPT_TOKEN(aux_sym_STR_PLUS);
        case 153:
            ACCEPT_TOKEN(aux_sym_STR_PLUS_PLUS);
        case 154:
            if (lookahead == '>')
                ADVANCE(155);
            ACCEPT_TOKEN(aux_sym_STR_DASH);
        case 155:
            ACCEPT_TOKEN(aux_sym_STR_DASH_GT);
        case 156:
            ACCEPT_TOKEN(aux_sym_STR_DOT);
        case 157:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            ACCEPT_TOKEN(aux_sym_STR_SLASH);
        case 158:
            if (lookahead == '=')
                ADVANCE(159);
            ACCEPT_TOKEN(aux_sym_STR_LT);
        case 159:
            ACCEPT_TOKEN(aux_sym_STR_LT_EQ);
        case 160:
            if (lookahead == '=')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(aux_sym_STR_EQ_EQ);
        case 162:
            if (lookahead == '=')
                ADVANCE(163);
            ACCEPT_TOKEN(aux_sym_STR_GT);
        case 163:
            ACCEPT_TOKEN(aux_sym_STR_GT_EQ);
        case 164:
            if (lookahead == '|')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            ACCEPT_TOKEN(aux_sym_STR_PIPE_PIPE);
        case 166:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(166);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 167:
            if (lookahead == '=')
                ADVANCE(161);
            ACCEPT_TOKEN(aux_sym_STR_EQ);
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 169:
            ACCEPT_TOKEN(aux_sym_STR_RPAREN);
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 171:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(171);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 174:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(174);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 176:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(176);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 177:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(177);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(160);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '/')
                ADVANCE(184);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(190);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
            if (lookahead == '\n')
                ADVANCE(182);
            if (lookahead == '/')
                ADVANCE(184);
            if (lookahead == '\\')
                ADVANCE(195);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 184:
            if (lookahead == '*')
                ADVANCE(185);
            if (lookahead == '/')
                ADVANCE(193);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 185:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(186);
            if (lookahead == '\\')
                ADVANCE(191);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(185);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 186:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(187);
            if (lookahead == '\\')
                ADVANCE(191);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(185);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 187:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 188:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 189:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 191:
            if (lookahead == '\n')
                ADVANCE(192);
            if (lookahead == '*')
                ADVANCE(186);
            if (lookahead == '\\')
                ADVANCE(191);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(185);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 192:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(186);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(185);
            LEX_ERROR();
        case 193:
            if (lookahead == '\\')
                ADVANCE(194);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(193);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 194:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(194);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(193);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 195:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 196:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(196);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 197:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(197);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(160);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 201:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(201);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(105);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(106);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(208);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(216);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 205:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(206);
            ACCEPT_TOKEN(sym_identifier);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(207);
            ACCEPT_TOKEN(sym_identifier);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_for);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_if);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(212);
            ACCEPT_TOKEN(sym_identifier);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_return);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(218);
            ACCEPT_TOKEN(sym_identifier);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_while);
        case 221:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(221);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(160);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 222:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(222);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(160);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '!')
                ADVANCE(148);
            if (lookahead == '&')
                ADVANCE(150);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(169);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(152);
            if (lookahead == '-')
                ADVANCE(154);
            if (lookahead == '.')
                ADVANCE(156);
            if (lookahead == '/')
                ADVANCE(157);
            if (lookahead == '<')
                ADVANCE(158);
            if (lookahead == '=')
                ADVANCE(167);
            if (lookahead == '>')
                ADVANCE(162);
            if (lookahead == '|')
                ADVANCE(164);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'f')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(208);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(216);
            if (lookahead == '{')
                ADVANCE(125);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(46);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 229:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(229);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 230:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(230);
            if (lookahead == '!')
                ADVANCE(135);
            if (lookahead == '\"')
                ADVANCE(110);
            if (lookahead == '&')
                ADVANCE(136);
            if (lookahead == '\'')
                ADVANCE(137);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '-')
                ADVANCE(143);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 't') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'c')
                ADVANCE(41);
            if (lookahead == 'e')
                ADVANCE(231);
            if (lookahead == 'f')
                ADVANCE(205);
            if (lookahead == 'i')
                ADVANCE(208);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(210);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(216);
            if (lookahead == '{')
                ADVANCE(125);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 231:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(232);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(233);
            ACCEPT_TOKEN(sym_identifier);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(234);
            ACCEPT_TOKEN(sym_identifier);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_else);
        case 235:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == '\n')
                ADVANCE(236);
            if (lookahead == '!')
                ADVANCE(237);
            if (lookahead == '\"')
                ADVANCE(241);
            if (lookahead == '#')
                ADVANCE(251);
            if (lookahead == '&')
                ADVANCE(283);
            if (lookahead == '\'')
                ADVANCE(285);
            if (lookahead == '(')
                ADVANCE(293);
            if (lookahead == ')')
                ADVANCE(294);
            if (lookahead == '*')
                ADVANCE(295);
            if (lookahead == '+')
                ADVANCE(296);
            if (lookahead == ',')
                ADVANCE(298);
            if (lookahead == '-')
                ADVANCE(299);
            if (lookahead == '.')
                ADVANCE(301);
            if (lookahead == '/')
                ADVANCE(302);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(309);
            if (lookahead == ';')
                ADVANCE(312);
            if (lookahead == '<')
                ADVANCE(313);
            if (lookahead == '=')
                ADVANCE(325);
            if (lookahead == '>')
                ADVANCE(327);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(403);
            if (lookahead == 'c')
                ADVANCE(330);
            if (lookahead == 'e')
                ADVANCE(335);
            if (lookahead == 'f')
                ADVANCE(347);
            if (lookahead == 'i')
                ADVANCE(350);
            if (lookahead == 'l')
                ADVANCE(352);
            if (lookahead == 'r')
                ADVANCE(356);
            if (lookahead == 's')
                ADVANCE(362);
            if (lookahead == 't')
                ADVANCE(376);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == 'w')
                ADVANCE(394);
            if (lookahead == '{')
                ADVANCE(399);
            if (lookahead == '|')
                ADVANCE(400);
            if (lookahead == '}')
                ADVANCE(402);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 236:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == '\n')
                ADVANCE(236);
            if (lookahead == '!')
                ADVANCE(237);
            if (lookahead == '\"')
                ADVANCE(241);
            if (lookahead == '#')
                ADVANCE(251);
            if (lookahead == '&')
                ADVANCE(283);
            if (lookahead == '\'')
                ADVANCE(285);
            if (lookahead == '(')
                ADVANCE(293);
            if (lookahead == ')')
                ADVANCE(294);
            if (lookahead == '*')
                ADVANCE(295);
            if (lookahead == '+')
                ADVANCE(296);
            if (lookahead == ',')
                ADVANCE(298);
            if (lookahead == '-')
                ADVANCE(299);
            if (lookahead == '.')
                ADVANCE(301);
            if (lookahead == '/')
                ADVANCE(302);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(309);
            if (lookahead == ';')
                ADVANCE(312);
            if (lookahead == '<')
                ADVANCE(313);
            if (lookahead == '=')
                ADVANCE(325);
            if (lookahead == '>')
                ADVANCE(327);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == 'c')
                ADVANCE(330);
            if (lookahead == 'e')
                ADVANCE(335);
            if (lookahead == 'f')
                ADVANCE(347);
            if (lookahead == 'i')
                ADVANCE(350);
            if (lookahead == 'l')
                ADVANCE(352);
            if (lookahead == 'r')
                ADVANCE(356);
            if (lookahead == 's')
                ADVANCE(362);
            if (lookahead == 't')
                ADVANCE(376);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == 'w')
                ADVANCE(394);
            if (lookahead == '{')
                ADVANCE(399);
            if (lookahead == '|')
                ADVANCE(400);
            if (lookahead == '}')
                ADVANCE(402);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 237:
            if (lookahead == '=')
                ADVANCE(238);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 238:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 239:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 240:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 241:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(242);
            if (lookahead == '\\')
                ADVANCE(243);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(241);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 242:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 243:
            if (lookahead == '\n')
                ADVANCE(244);
            if (lookahead == '\"')
                ADVANCE(250);
            if (lookahead == '\\')
                ADVANCE(243);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(241);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 244:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(245);
            if (lookahead == '\\')
                ADVANCE(246);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(249);
            LEX_ERROR();
        case 245:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 246:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(247);
            if (lookahead == '\\')
                ADVANCE(248);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(249);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 247:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(245);
            if (lookahead == '\\')
                ADVANCE(248);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(249);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 248:
            if (lookahead == '\n')
                ADVANCE(244);
            if (lookahead == '\"')
                ADVANCE(247);
            if (lookahead == '\\')
                ADVANCE(248);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(249);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 249:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(245);
            if (lookahead == '\\')
                ADVANCE(248);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(249);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 250:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(242);
            if (lookahead == '\\')
                ADVANCE(243);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(241);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 251:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(254);
            if (lookahead == 'e')
                ADVANCE(260);
            if (lookahead == 'i')
                ADVANCE(268);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 252:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 253:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(255);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(256);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(257);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(258);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(259);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_POUNDdefine);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'l')
                ADVANCE(261);
            if (lookahead == 'n')
                ADVANCE(264);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(262);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(263);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_else);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(265);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(266);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(267);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_endif);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(269);
            if (lookahead == 'n')
                ADVANCE(277);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(270);
            if (lookahead == 'n')
                ADVANCE(273);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(271);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(272);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifdef);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(274);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(275);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(276);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifndef);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'c')
                ADVANCE(278);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'l')
                ADVANCE(279);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'u')
                ADVANCE(280);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(281);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(282);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 282:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(253);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_POUNDinclude);
        case 283:
            if (lookahead == '&')
                ADVANCE(284);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '&') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 284:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 285:
            if (lookahead == '\n')
                ADVANCE(141);
            if (lookahead == '\'')
                ADVANCE(240);
            if (lookahead == '\\')
                ADVANCE(286);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(292);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 286:
            if (lookahead == '\n')
                ADVANCE(287);
            if (lookahead == '\'')
                ADVANCE(289);
            if (lookahead == '\\')
                ADVANCE(291);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(292);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 287:
            if (lookahead == '\'')
                ADVANCE(288);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'')))
                ADVANCE(190);
            LEX_ERROR();
        case 288:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 289:
            if (lookahead == '\'')
                ADVANCE(290);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 290:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 291:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\'')
                ADVANCE(290);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 292:
            if (lookahead == '\'')
                ADVANCE(290);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 293:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 294:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 295:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 296:
            if (lookahead == '+')
                ADVANCE(297);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '+') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 297:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 298:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 299:
            if (lookahead == '>')
                ADVANCE(300);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 300:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 301:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 302:
            if (lookahead == '*')
                ADVANCE(303);
            if (lookahead == '/')
                ADVANCE(307);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 303:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(304);
            if (lookahead == '\\')
                ADVANCE(306);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(303);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 304:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(305);
            if (lookahead == '\\')
                ADVANCE(306);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(303);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 305:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 306:
            if (lookahead == '\n')
                ADVANCE(192);
            if (lookahead == '*')
                ADVANCE(304);
            if (lookahead == '\\')
                ADVANCE(306);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(303);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 307:
            if (lookahead == '\\')
                ADVANCE(308);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(307);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 308:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(308);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(307);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 309:
            if (lookahead == '.')
                ADVANCE(310);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(309);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 310:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(311);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 311:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(311);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 312:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 313:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '=')
                ADVANCE(314);
            if (lookahead == '>')
                ADVANCE(315);
            if (lookahead == '\\')
                ADVANCE(316);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(324);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 314:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(315);
            if (lookahead == '\\')
                ADVANCE(316);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(324);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 315:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 316:
            if (lookahead == '\n')
                ADVANCE(317);
            if (lookahead == '>')
                ADVANCE(323);
            if (lookahead == '\\')
                ADVANCE(316);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(324);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 317:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(318);
            if (lookahead == '\\')
                ADVANCE(319);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(322);
            LEX_ERROR();
        case 318:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 319:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(320);
            if (lookahead == '\\')
                ADVANCE(321);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(322);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 320:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(318);
            if (lookahead == '\\')
                ADVANCE(321);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(322);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 321:
            if (lookahead == '\n')
                ADVANCE(317);
            if (lookahead == '>')
                ADVANCE(320);
            if (lookahead == '\\')
                ADVANCE(321);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(322);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 322:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(318);
            if (lookahead == '\\')
                ADVANCE(321);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(322);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 323:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(315);
            if (lookahead == '\\')
                ADVANCE(316);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(324);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 324:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(315);
            if (lookahead == '\\')
                ADVANCE(316);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(324);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 325:
            if (lookahead == '=')
                ADVANCE(326);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 326:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 327:
            if (lookahead == '=')
                ADVANCE(328);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 328:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 329:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 330:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'o')
                ADVANCE(331);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 331:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(332);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(333);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(334);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_const);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'l')
                ADVANCE(336);
            if (lookahead == 'n')
                ADVANCE(339);
            if (lookahead == 'x')
                ADVANCE(342);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 's')
                ADVANCE(337);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(338);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_else);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'u')
                ADVANCE(340);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'm')
                ADVANCE(341);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_enum);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(343);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(344);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'r')
                ADVANCE(345);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(346);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 346:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_extern);
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'o')
                ADVANCE(348);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'r')
                ADVANCE(349);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 349:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_for);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(351);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_if);
        case 352:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'o')
                ADVANCE(353);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(354);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'g')
                ADVANCE(355);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_long);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(357);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 357:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(358);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 358:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'u')
                ADVANCE(359);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 359:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'r')
                ADVANCE(360);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(361);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_return);
        case 362:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'h')
                ADVANCE(363);
            if (lookahead == 't')
                ADVANCE(367);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'o')
                ADVANCE(364);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 364:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'r')
                ADVANCE(365);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 365:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(366);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 366:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_short);
        case 367:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'a')
                ADVANCE(368);
            if (lookahead == 'r')
                ADVANCE(372);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(369);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 369:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(370);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 370:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'c')
                ADVANCE(371);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 371:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_static);
        case 372:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'u')
                ADVANCE(373);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 373:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'c')
                ADVANCE(374);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 't')
                ADVANCE(375);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_struct);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'y')
                ADVANCE(377);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'p')
                ADVANCE(378);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(379);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(380);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(381);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'f')
                ADVANCE(382);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_typedef);
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(384);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 384:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(385);
            if (lookahead == 's')
                ADVANCE(388);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 385:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'o')
                ADVANCE(386);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(387);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_union);
        case 388:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(389);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'g')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 390:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'n')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(392);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 392:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'd')
                ADVANCE(393);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 393:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_unsigned);
        case 394:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'h')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 395:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'i')
                ADVANCE(396);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'l')
                ADVANCE(397);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 397:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == 'e')
                ADVANCE(398);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 398:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_STR_while);
        case 399:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 400:
            if (lookahead == '\\')
                ADVANCE(239);
            if (lookahead == '|')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\') ||
                (lookahead == '|')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 401:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 402:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 403:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(235);
            if (lookahead == '\n')
                ADVANCE(236);
            if (lookahead == '!')
                ADVANCE(237);
            if (lookahead == '\"')
                ADVANCE(241);
            if (lookahead == '#')
                ADVANCE(251);
            if (lookahead == '&')
                ADVANCE(283);
            if (lookahead == '\'')
                ADVANCE(285);
            if (lookahead == '(')
                ADVANCE(293);
            if (lookahead == ')')
                ADVANCE(294);
            if (lookahead == '*')
                ADVANCE(295);
            if (lookahead == '+')
                ADVANCE(296);
            if (lookahead == ',')
                ADVANCE(298);
            if (lookahead == '-')
                ADVANCE(299);
            if (lookahead == '.')
                ADVANCE(301);
            if (lookahead == '/')
                ADVANCE(302);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(309);
            if (lookahead == ';')
                ADVANCE(312);
            if (lookahead == '<')
                ADVANCE(313);
            if (lookahead == '=')
                ADVANCE(325);
            if (lookahead == '>')
                ADVANCE(327);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                (lookahead == 'd') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'q') ||
                (lookahead == 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(329);
            if (lookahead == 'c')
                ADVANCE(330);
            if (lookahead == 'e')
                ADVANCE(335);
            if (lookahead == 'f')
                ADVANCE(347);
            if (lookahead == 'i')
                ADVANCE(350);
            if (lookahead == 'l')
                ADVANCE(352);
            if (lookahead == 'r')
                ADVANCE(356);
            if (lookahead == 's')
                ADVANCE(362);
            if (lookahead == 't')
                ADVANCE(376);
            if (lookahead == 'u')
                ADVANCE(383);
            if (lookahead == 'w')
                ADVANCE(394);
            if (lookahead == '{')
                ADVANCE(399);
            if (lookahead == '|')
                ADVANCE(400);
            if (lookahead == '}')
                ADVANCE(402);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(240);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 1,
    [1] = 91,
    [2] = 1,
    [3] = 92,
    [4] = 92,
    [5] = 94,
    [6] = 94,
    [7] = 94,
    [8] = 96,
    [9] = 92,
    [10] = 91,
    [11] = 104,
    [12] = 108,
    [13] = 109,
    [14] = 108,
    [15] = 108,
    [16] = 108,
    [17] = 104,
    [18] = 118,
    [19] = 119,
    [20] = 120,
    [21] = 124,
    [22] = 124,
    [23] = 124,
    [24] = 126,
    [25] = 127,
    [26] = 129,
    [27] = 131,
    [28] = 132,
    [29] = 94,
    [30] = 134,
    [31] = 147,
    [32] = 166,
    [33] = 147,
    [34] = 104,
    [35] = 134,
    [36] = 134,
    [37] = 134,
    [38] = 134,
    [39] = 147,
    [40] = 134,
    [41] = 147,
    [42] = 147,
    [43] = 147,
    [44] = 147,
    [45] = 166,
    [46] = 166,
    [47] = 166,
    [48] = 104,
    [49] = 134,
    [50] = 134,
    [51] = 134,
    [52] = 166,
    [53] = 134,
    [54] = 166,
    [55] = 166,
    [56] = 166,
    [57] = 166,
    [58] = 168,
    [59] = 168,
    [60] = 168,
    [61] = 108,
    [62] = 119,
    [63] = 124,
    [64] = 124,
    [65] = 124,
    [66] = 170,
    [67] = 127,
    [68] = 129,
    [69] = 131,
    [70] = 168,
    [71] = 168,
    [72] = 131,
    [73] = 108,
    [74] = 129,
    [75] = 131,
    [76] = 168,
    [77] = 127,
    [78] = 129,
    [79] = 131,
    [80] = 168,
    [81] = 170,
    [82] = 171,
    [83] = 92,
    [84] = 92,
    [85] = 172,
    [86] = 131,
    [87] = 92,
    [88] = 108,
    [89] = 168,
    [90] = 119,
    [91] = 124,
    [92] = 124,
    [93] = 124,
    [94] = 173,
    [95] = 127,
    [96] = 129,
    [97] = 131,
    [98] = 92,
    [99] = 92,
    [100] = 131,
    [101] = 92,
    [102] = 127,
    [103] = 129,
    [104] = 131,
    [105] = 92,
    [106] = 173,
    [107] = 171,
    [108] = 131,
    [109] = 92,
    [110] = 92,
    [111] = 171,
    [112] = 131,
    [113] = 92,
    [114] = 173,
    [115] = 171,
    [116] = 172,
    [117] = 131,
    [118] = 92,
    [119] = 92,
    [120] = 171,
    [121] = 131,
    [122] = 171,
    [123] = 131,
    [124] = 92,
    [125] = 92,
    [126] = 92,
    [127] = 168,
    [128] = 171,
    [129] = 131,
    [130] = 172,
    [131] = 172,
    [132] = 92,
    [133] = 172,
    [134] = 171,
    [135] = 131,
    [136] = 168,
    [137] = 170,
    [138] = 171,
    [139] = 131,
    [140] = 168,
    [141] = 168,
    [142] = 171,
    [143] = 131,
    [144] = 168,
    [145] = 168,
    [146] = 168,
    [147] = 174,
    [148] = 175,
    [149] = 147,
    [150] = 166,
    [151] = 147,
    [152] = 129,
    [153] = 131,
    [154] = 104,
    [155] = 166,
    [156] = 134,
    [157] = 134,
    [158] = 108,
    [159] = 134,
    [160] = 134,
    [161] = 147,
    [162] = 134,
    [163] = 147,
    [164] = 147,
    [165] = 147,
    [166] = 176,
    [167] = 134,
    [168] = 147,
    [169] = 177,
    [170] = 108,
    [171] = 108,
    [172] = 134,
    [173] = 134,
    [174] = 134,
    [175] = 134,
    [176] = 134,
    [177] = 147,
    [178] = 147,
    [179] = 147,
    [180] = 147,
    [181] = 147,
    [182] = 166,
    [183] = 166,
    [184] = 178,
    [185] = 179,
    [186] = 178,
    [187] = 168,
    [188] = 104,
    [189] = 147,
    [190] = 134,
    [191] = 134,
    [192] = 134,
    [193] = 134,
    [194] = 178,
    [195] = 134,
    [196] = 178,
    [197] = 178,
    [198] = 178,
    [199] = 178,
    [200] = 179,
    [201] = 179,
    [202] = 179,
    [203] = 104,
    [204] = 134,
    [205] = 134,
    [206] = 134,
    [207] = 179,
    [208] = 134,
    [209] = 179,
    [210] = 179,
    [211] = 179,
    [212] = 179,
    [213] = 168,
    [214] = 174,
    [215] = 175,
    [216] = 147,
    [217] = 129,
    [218] = 131,
    [219] = 179,
    [220] = 179,
    [221] = 129,
    [222] = 180,
    [223] = 147,
    [224] = 129,
    [225] = 179,
    [226] = 129,
    [227] = 181,
    [228] = 131,
    [229] = 179,
    [230] = 168,
    [231] = 174,
    [232] = 175,
    [233] = 147,
    [234] = 129,
    [235] = 131,
    [236] = 178,
    [237] = 178,
    [238] = 129,
    [239] = 180,
    [240] = 178,
    [241] = 131,
    [242] = 178,
    [243] = 147,
    [244] = 134,
    [245] = 178,
    [246] = 177,
    [247] = 108,
    [248] = 108,
    [249] = 134,
    [250] = 134,
    [251] = 134,
    [252] = 134,
    [253] = 134,
    [254] = 178,
    [255] = 178,
    [256] = 178,
    [257] = 178,
    [258] = 178,
    [259] = 179,
    [260] = 179,
    [261] = 178,
    [262] = 168,
    [263] = 178,
    [264] = 178,
    [265] = 168,
    [266] = 134,
    [267] = 178,
    [268] = 168,
    [269] = 178,
    [270] = 168,
    [271] = 147,
    [272] = 147,
    [273] = 166,
    [274] = 166,
    [275] = 166,
    [276] = 104,
    [277] = 134,
    [278] = 134,
    [279] = 134,
    [280] = 166,
    [281] = 134,
    [282] = 166,
    [283] = 166,
    [284] = 166,
    [285] = 166,
    [286] = 168,
    [287] = 174,
    [288] = 175,
    [289] = 147,
    [290] = 129,
    [291] = 131,
    [292] = 166,
    [293] = 166,
    [294] = 129,
    [295] = 180,
    [296] = 166,
    [297] = 131,
    [298] = 166,
    [299] = 168,
    [300] = 174,
    [301] = 175,
    [302] = 147,
    [303] = 129,
    [304] = 131,
    [305] = 147,
    [306] = 147,
    [307] = 129,
    [308] = 180,
    [309] = 147,
    [310] = 131,
    [311] = 147,
    [312] = 166,
    [313] = 129,
    [314] = 180,
    [315] = 166,
    [316] = 131,
    [317] = 166,
    [318] = 134,
    [319] = 147,
    [320] = 168,
    [321] = 174,
    [322] = 175,
    [323] = 147,
    [324] = 129,
    [325] = 131,
    [326] = 147,
    [327] = 147,
    [328] = 129,
    [329] = 180,
    [330] = 147,
    [331] = 131,
    [332] = 147,
    [333] = 134,
    [334] = 147,
    [335] = 177,
    [336] = 108,
    [337] = 108,
    [338] = 134,
    [339] = 134,
    [340] = 134,
    [341] = 134,
    [342] = 134,
    [343] = 147,
    [344] = 147,
    [345] = 147,
    [346] = 147,
    [347] = 147,
    [348] = 166,
    [349] = 166,
    [350] = 178,
    [351] = 168,
    [352] = 147,
    [353] = 147,
    [354] = 168,
    [355] = 147,
    [356] = 94,
    [357] = 131,
    [358] = 94,
    [359] = 127,
    [360] = 129,
    [361] = 131,
    [362] = 94,
    [363] = 126,
    [364] = 171,
    [365] = 131,
    [366] = 94,
    [367] = 94,
    [368] = 171,
    [369] = 131,
    [370] = 94,
    [371] = 126,
    [372] = 171,
    [373] = 131,
    [374] = 94,
    [375] = 94,
    [376] = 171,
    [377] = 131,
    [378] = 94,
    [379] = 108,
    [380] = 92,
    [381] = 124,
    [382] = 124,
    [383] = 124,
    [384] = 173,
    [385] = 127,
    [386] = 129,
    [387] = 131,
    [388] = 92,
    [389] = 92,
    [390] = 131,
    [391] = 92,
    [392] = 127,
    [393] = 129,
    [394] = 131,
    [395] = 92,
    [396] = 173,
    [397] = 171,
    [398] = 131,
    [399] = 92,
    [400] = 92,
    [401] = 171,
    [402] = 131,
    [403] = 92,
    [404] = 173,
    [405] = 171,
    [406] = 131,
    [407] = 92,
    [408] = 92,
    [409] = 171,
    [410] = 131,
    [411] = 92,
    [412] = 104,
    [413] = 92,
    [414] = 172,
    [415] = 1,
    [416] = 1,
    [417] = 1,
    [418] = 182,
    [419] = 1,
    [420] = 1,
    [421] = 92,
    [422] = 92,
    [423] = 196,
    [424] = 196,
    [425] = 197,
    [426] = 92,
    [427] = 196,
    [428] = 172,
    [429] = 1,
    [430] = 92,
    [431] = 196,
    [432] = 197,
    [433] = 172,
    [434] = 134,
    [435] = 198,
    [436] = 199,
    [437] = 198,
    [438] = 104,
    [439] = 134,
    [440] = 134,
    [441] = 134,
    [442] = 134,
    [443] = 198,
    [444] = 134,
    [445] = 198,
    [446] = 198,
    [447] = 198,
    [448] = 198,
    [449] = 199,
    [450] = 199,
    [451] = 199,
    [452] = 104,
    [453] = 134,
    [454] = 134,
    [455] = 134,
    [456] = 199,
    [457] = 134,
    [458] = 199,
    [459] = 199,
    [460] = 199,
    [461] = 199,
    [462] = 168,
    [463] = 174,
    [464] = 175,
    [465] = 147,
    [466] = 129,
    [467] = 131,
    [468] = 199,
    [469] = 199,
    [470] = 129,
    [471] = 180,
    [472] = 199,
    [473] = 131,
    [474] = 199,
    [475] = 168,
    [476] = 174,
    [477] = 175,
    [478] = 147,
    [479] = 129,
    [480] = 131,
    [481] = 198,
    [482] = 198,
    [483] = 129,
    [484] = 180,
    [485] = 198,
    [486] = 131,
    [487] = 198,
    [488] = 134,
    [489] = 198,
    [490] = 177,
    [491] = 108,
    [492] = 108,
    [493] = 134,
    [494] = 134,
    [495] = 134,
    [496] = 134,
    [497] = 134,
    [498] = 198,
    [499] = 198,
    [500] = 198,
    [501] = 198,
    [502] = 198,
    [503] = 199,
    [504] = 199,
    [505] = 178,
    [506] = 168,
    [507] = 198,
    [508] = 198,
    [509] = 168,
    [510] = 198,
    [511] = 1,
    [512] = 1,
    [513] = 1,
    [514] = 1,
    [515] = 1,
    [516] = 200,
    [517] = 200,
    [518] = 197,
    [519] = 92,
    [520] = 200,
    [521] = 172,
    [522] = 1,
    [523] = 201,
    [524] = 92,
    [525] = 168,
    [526] = 202,
    [527] = 168,
    [528] = 168,
    [529] = 104,
    [530] = 202,
    [531] = 168,
    [532] = 203,
    [533] = 1,
    [534] = 204,
    [535] = 204,
    [536] = 204,
    [537] = 92,
    [538] = 221,
    [539] = 222,
    [540] = 221,
    [541] = 131,
    [542] = 223,
    [543] = 104,
    [544] = 104,
    [545] = 204,
    [546] = 1,
    [547] = 134,
    [548] = 224,
    [549] = 224,
    [550] = 224,
    [551] = 134,
    [552] = 134,
    [553] = 134,
    [554] = 134,
    [555] = 221,
    [556] = 134,
    [557] = 221,
    [558] = 221,
    [559] = 221,
    [560] = 221,
    [561] = 222,
    [562] = 222,
    [563] = 222,
    [564] = 104,
    [565] = 134,
    [566] = 134,
    [567] = 134,
    [568] = 222,
    [569] = 134,
    [570] = 222,
    [571] = 222,
    [572] = 222,
    [573] = 222,
    [574] = 168,
    [575] = 174,
    [576] = 175,
    [577] = 147,
    [578] = 129,
    [579] = 131,
    [580] = 222,
    [581] = 222,
    [582] = 129,
    [583] = 180,
    [584] = 222,
    [585] = 131,
    [586] = 222,
    [587] = 134,
    [588] = 225,
    [589] = 226,
    [590] = 225,
    [591] = 104,
    [592] = 134,
    [593] = 134,
    [594] = 134,
    [595] = 134,
    [596] = 225,
    [597] = 134,
    [598] = 225,
    [599] = 225,
    [600] = 225,
    [601] = 225,
    [602] = 226,
    [603] = 226,
    [604] = 226,
    [605] = 104,
    [606] = 134,
    [607] = 134,
    [608] = 134,
    [609] = 226,
    [610] = 134,
    [611] = 226,
    [612] = 226,
    [613] = 226,
    [614] = 226,
    [615] = 168,
    [616] = 174,
    [617] = 175,
    [618] = 147,
    [619] = 129,
    [620] = 131,
    [621] = 226,
    [622] = 226,
    [623] = 129,
    [624] = 180,
    [625] = 226,
    [626] = 131,
    [627] = 226,
    [628] = 168,
    [629] = 174,
    [630] = 175,
    [631] = 147,
    [632] = 129,
    [633] = 131,
    [634] = 225,
    [635] = 225,
    [636] = 129,
    [637] = 180,
    [638] = 225,
    [639] = 131,
    [640] = 225,
    [641] = 134,
    [642] = 225,
    [643] = 177,
    [644] = 108,
    [645] = 108,
    [646] = 134,
    [647] = 134,
    [648] = 134,
    [649] = 134,
    [650] = 134,
    [651] = 225,
    [652] = 225,
    [653] = 225,
    [654] = 225,
    [655] = 225,
    [656] = 226,
    [657] = 226,
    [658] = 178,
    [659] = 168,
    [660] = 225,
    [661] = 225,
    [662] = 168,
    [663] = 225,
    [664] = 227,
    [665] = 204,
    [666] = 228,
    [667] = 229,
    [668] = 92,
    [669] = 221,
    [670] = 104,
    [671] = 92,
    [672] = 196,
    [673] = 197,
    [674] = 172,
    [675] = 229,
    [676] = 229,
    [677] = 229,
    [678] = 177,
    [679] = 108,
    [680] = 108,
    [681] = 134,
    [682] = 134,
    [683] = 134,
    [684] = 134,
    [685] = 134,
    [686] = 221,
    [687] = 221,
    [688] = 221,
    [689] = 221,
    [690] = 221,
    [691] = 222,
    [692] = 222,
    [693] = 178,
    [694] = 168,
    [695] = 221,
    [696] = 221,
    [697] = 168,
    [698] = 221,
    [699] = 221,
    [700] = 177,
    [701] = 225,
    [702] = 227,
    [703] = 204,
    [704] = 227,
    [705] = 204,
    [706] = 177,
    [707] = 225,
    [708] = 227,
    [709] = 204,
    [710] = 196,
    [711] = 197,
    [712] = 172,
    [713] = 229,
    [714] = 221,
    [715] = 177,
    [716] = 225,
    [717] = 227,
    [718] = 204,
    [719] = 134,
    [720] = 225,
    [721] = 168,
    [722] = 227,
    [723] = 230,
    [724] = 230,
    [725] = 92,
    [726] = 221,
    [727] = 104,
    [728] = 204,
    [729] = 134,
    [730] = 224,
    [731] = 224,
    [732] = 224,
    [733] = 134,
    [734] = 225,
    [735] = 227,
    [736] = 230,
    [737] = 228,
    [738] = 229,
    [739] = 221,
    [740] = 229,
    [741] = 221,
    [742] = 177,
    [743] = 225,
    [744] = 227,
    [745] = 230,
    [746] = 227,
    [747] = 230,
    [748] = 177,
    [749] = 225,
    [750] = 227,
    [751] = 230,
    [752] = 221,
    [753] = 177,
    [754] = 225,
    [755] = 227,
    [756] = 230,
    [757] = 134,
    [758] = 225,
    [759] = 168,
    [760] = 227,
    [761] = 230,
    [762] = 227,
    [763] = 230,
    [764] = 221,
    [765] = 230,
    [766] = 131,
    [767] = 230,
    [768] = 230,
    [769] = 92,
    [770] = 196,
    [771] = 197,
    [772] = 172,
    [773] = 230,
    [774] = 230,
    [775] = 230,
    [776] = 196,
    [777] = 197,
    [778] = 172,
    [779] = 230,
    [780] = 227,
    [781] = 204,
    [782] = 221,
    [783] = 204,
    [784] = 131,
    [785] = 204,
    [786] = 204,
    [787] = 168,
    [788] = 174,
    [789] = 175,
    [790] = 147,
    [791] = 129,
    [792] = 131,
    [793] = 221,
    [794] = 221,
    [795] = 129,
    [796] = 180,
    [797] = 221,
    [798] = 131,
    [799] = 221,
    [800] = 92,
    [801] = 196,
    [802] = 197,
    [803] = 172,
    [804] = 204,
    [805] = 204,
    [806] = 134,
    [807] = 221,
    [808] = 1,
    [809] = 204,
    [810] = 196,
    [811] = 197,
    [812] = 172,
    [813] = 204,
    [814] = 131,
    [815] = 202,
    [816] = 202,
    [817] = 92,
    [818] = 202,
    [819] = 91,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static const TSParseAction ts_parse_actions[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_program] = SHIFT(1),
        [sym_preproc_include] = SHIFT(2),
        [sym_preproc_define] = SHIFT(2),
        [sym_preproc_call] = SHIFT(2),
        [sym_preproc_ifdef] = SHIFT(2),
        [sym_preproc_ifndef] = SHIFT(2),
        [sym_typedef] = SHIFT(2),
        [sym_var_declaration] = SHIFT(2),
        [sym_function_declaration] = SHIFT(2),
        [sym_type] = SHIFT(3),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_declaration] = SHIFT(2),
        [sym_struct_type] = SHIFT(5),
        [sym_union_declaration] = SHIFT(2),
        [sym_union_type] = SHIFT(6),
        [sym_enum_declaration] = SHIFT(2),
        [sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(sym_program, 0),
        [sym_preproc_else] = SHIFT(2),
        [sym_preproc_endif] = SHIFT(2),
        [sym_preproc_directive] = SHIFT(8),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = SHIFT(10),
        [aux_sym_var_declaration_repeat0] = SHIFT(11),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_POUNDinclude] = SHIFT(13),
        [aux_sym_STR_POUNDdefine] = SHIFT(14),
        [aux_sym_STR_POUNDifdef] = SHIFT(15),
        [aux_sym_STR_POUNDifndef] = SHIFT(16),
        [aux_sym_STR_typedef] = SHIFT(17),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(21),
        [aux_sym_STR_union] = SHIFT(22),
        [aux_sym_STR_enum] = SHIFT(23),
    },
    [1] = {
        [ts_builtin_sym_end] = ACCEPT_INPUT(),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [2] = {
        [sym_preproc_include] = SHIFT(2),
        [sym_preproc_define] = SHIFT(2),
        [sym_preproc_call] = SHIFT(2),
        [sym_preproc_ifdef] = SHIFT(2),
        [sym_preproc_ifndef] = SHIFT(2),
        [sym_typedef] = SHIFT(2),
        [sym_var_declaration] = SHIFT(2),
        [sym_function_declaration] = SHIFT(2),
        [sym_type] = SHIFT(3),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_declaration] = SHIFT(2),
        [sym_struct_type] = SHIFT(5),
        [sym_union_declaration] = SHIFT(2),
        [sym_union_type] = SHIFT(6),
        [sym_enum_declaration] = SHIFT(2),
        [sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(aux_sym_program_repeat0, 1),
        [sym_preproc_else] = SHIFT(2),
        [sym_preproc_endif] = SHIFT(2),
        [sym_preproc_directive] = SHIFT(8),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = SHIFT(819),
        [aux_sym_var_declaration_repeat0] = SHIFT(11),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_POUNDinclude] = SHIFT(13),
        [aux_sym_STR_POUNDdefine] = SHIFT(14),
        [aux_sym_STR_POUNDifdef] = SHIFT(15),
        [aux_sym_STR_POUNDifndef] = SHIFT(16),
        [aux_sym_STR_typedef] = SHIFT(17),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(21),
        [aux_sym_STR_union] = SHIFT(22),
        [aux_sym_STR_enum] = SHIFT(23),
    },
    [3] = {
        [sym_type_expression] = SHIFT(516),
        [sym_pointer_type] = SHIFT(517),
        [sym_var_assignment] = SHIFT(518),
        [sym_identifier] = SHIFT(517),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(519),
    },
    [4] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [5] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(515),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [6] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(514),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [7] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(513),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [8] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_PAT_DOT_STAR] = SHIFT(512),
    },
    [9] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_var_assignment] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [10] = {
        [ts_builtin_sym_end] = REDUCE(sym_program, 1),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [11] = {
        [sym_type] = SHIFT(422),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
    },
    [12] = {
        [sym_identifier] = SHIFT(421),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [13] = {
        [sym_string] = SHIFT(420),
        [sym_system_lib_string] = SHIFT(420),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [14] = {
        [sym_identifier] = SHIFT(418),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [15] = {
        [sym_identifier] = SHIFT(417),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [16] = {
        [sym_identifier] = SHIFT(416),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [17] = {
        [sym_type] = SHIFT(413),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [18] = {
        [sym_type] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_primitive_type] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_struct_type] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_union_type] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_enum_type] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_identifier] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(412),
        [aux_sym_primitive_type_repeat0] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_const] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_unsigned] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_short] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_long] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_struct] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_union] = REDUCE(aux_sym_var_declaration_repeat0, 1),
        [aux_sym_STR_enum] = REDUCE(aux_sym_var_declaration_repeat0, 1),
    },
    [19] = {
        [sym_primitive_type] = SHIFT(380),
        [sym_struct_type] = SHIFT(380),
        [sym_union_type] = SHIFT(380),
        [sym_enum_type] = SHIFT(380),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
    },
    [20] = {
        [sym_identifier] = REDUCE(aux_sym_primitive_type_repeat0, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(379),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
    },
    [21] = {
        [sym_identifier] = SHIFT(371),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(372),
    },
    [22] = {
        [sym_identifier] = SHIFT(363),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(364),
    },
    [23] = {
        [sym_identifier] = SHIFT(24),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(25),
    },
    [24] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_var_assignment] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(359),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [25] = {
        [sym_enum_value] = SHIFT(26),
        [ts_builtin_sym_error] = SHIFT(27),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(29),
    },
    [26] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(357),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(356),
    },
    [27] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(356),
    },
    [28] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_EQ] = SHIFT(30),
    },
    [29] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_var_assignment] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [30] = {
        [sym_expression] = SHIFT(31),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [31] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_LPAREN] = SHIFT(335),
        [aux_sym_STR_RBRACE] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = SHIFT(336),
        [aux_sym_STR_DASH_GT] = SHIFT(337),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = SHIFT(338),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = SHIFT(338),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(341),
        [aux_sym_STR_LT] = SHIFT(342),
        [aux_sym_STR_LT_EQ] = SHIFT(342),
        [aux_sym_STR_EQ_EQ] = SHIFT(342),
        [aux_sym_STR_BANG_EQ] = SHIFT(342),
        [aux_sym_STR_GT_EQ] = SHIFT(342),
        [aux_sym_STR_GT] = SHIFT(342),
    },
    [32] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(333),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [33] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [34] = {
        [sym_type] = SHIFT(320),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [35] = {
        [sym_expression] = SHIFT(45),
        [sym_deref] = SHIFT(46),
        [sym_address_of] = SHIFT(47),
        [sym_field_access] = SHIFT(46),
        [sym_deref_field_access] = SHIFT(46),
        [sym_function_call] = SHIFT(47),
        [sym_math_op] = SHIFT(47),
        [sym_bool_op] = SHIFT(47),
        [sym_rel_op] = SHIFT(47),
        [sym_assignment] = SHIFT(47),
        [sym_compound_literal] = SHIFT(47),
        [sym_number] = SHIFT(47),
        [sym_char] = SHIFT(47),
        [sym_string] = SHIFT(47),
        [sym_identifier] = SHIFT(46),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(48),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(49),
        [aux_sym_STR_DASH] = SHIFT(50),
        [aux_sym_STR_BANG] = SHIFT(51),
    },
    [36] = {
        [sym_expression] = SHIFT(44),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [37] = {
        [sym_expression] = SHIFT(43),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [38] = {
        [sym_expression] = SHIFT(39),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [39] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [40] = {
        [sym_expression] = SHIFT(42),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [41] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [42] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [43] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [44] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [45] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_deref, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [46] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [47] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [48] = {
        [sym_type] = SHIFT(58),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [49] = {
        [sym_expression] = SHIFT(57),
        [sym_deref] = SHIFT(46),
        [sym_address_of] = SHIFT(47),
        [sym_field_access] = SHIFT(46),
        [sym_deref_field_access] = SHIFT(46),
        [sym_function_call] = SHIFT(47),
        [sym_math_op] = SHIFT(47),
        [sym_bool_op] = SHIFT(47),
        [sym_rel_op] = SHIFT(47),
        [sym_assignment] = SHIFT(47),
        [sym_compound_literal] = SHIFT(47),
        [sym_number] = SHIFT(47),
        [sym_char] = SHIFT(47),
        [sym_string] = SHIFT(47),
        [sym_identifier] = SHIFT(46),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(48),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(49),
        [aux_sym_STR_DASH] = SHIFT(50),
        [aux_sym_STR_BANG] = SHIFT(51),
    },
    [50] = {
        [sym_expression] = SHIFT(56),
        [sym_deref] = SHIFT(46),
        [sym_address_of] = SHIFT(47),
        [sym_field_access] = SHIFT(46),
        [sym_deref_field_access] = SHIFT(46),
        [sym_function_call] = SHIFT(47),
        [sym_math_op] = SHIFT(47),
        [sym_bool_op] = SHIFT(47),
        [sym_rel_op] = SHIFT(47),
        [sym_assignment] = SHIFT(47),
        [sym_compound_literal] = SHIFT(47),
        [sym_number] = SHIFT(47),
        [sym_char] = SHIFT(47),
        [sym_string] = SHIFT(47),
        [sym_identifier] = SHIFT(46),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(48),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(49),
        [aux_sym_STR_DASH] = SHIFT(50),
        [aux_sym_STR_BANG] = SHIFT(51),
    },
    [51] = {
        [sym_expression] = SHIFT(52),
        [sym_deref] = SHIFT(46),
        [sym_address_of] = SHIFT(47),
        [sym_field_access] = SHIFT(46),
        [sym_deref_field_access] = SHIFT(46),
        [sym_function_call] = SHIFT(47),
        [sym_math_op] = SHIFT(47),
        [sym_bool_op] = SHIFT(47),
        [sym_rel_op] = SHIFT(47),
        [sym_assignment] = SHIFT(47),
        [sym_compound_literal] = SHIFT(47),
        [sym_number] = SHIFT(47),
        [sym_char] = SHIFT(47),
        [sym_string] = SHIFT(47),
        [sym_identifier] = SHIFT(46),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(48),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(49),
        [aux_sym_STR_DASH] = SHIFT(50),
        [aux_sym_STR_BANG] = SHIFT(51),
    },
    [52] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(53),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(54),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [53] = {
        [sym_expression] = SHIFT(55),
        [sym_deref] = SHIFT(46),
        [sym_address_of] = SHIFT(47),
        [sym_field_access] = SHIFT(46),
        [sym_deref_field_access] = SHIFT(46),
        [sym_function_call] = SHIFT(47),
        [sym_math_op] = SHIFT(47),
        [sym_bool_op] = SHIFT(47),
        [sym_rel_op] = SHIFT(47),
        [sym_assignment] = SHIFT(47),
        [sym_compound_literal] = SHIFT(47),
        [sym_number] = SHIFT(47),
        [sym_char] = SHIFT(47),
        [sym_string] = SHIFT(47),
        [sym_identifier] = SHIFT(46),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(48),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(49),
        [aux_sym_STR_DASH] = SHIFT(50),
        [aux_sym_STR_BANG] = SHIFT(51),
    },
    [54] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [55] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(53),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(54),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [56] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(54),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [57] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [58] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(147),
    },
    [59] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type, 1),
    },
    [60] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [61] = {
        [sym_identifier] = SHIFT(146),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [62] = {
        [sym_primitive_type] = SHIFT(145),
        [sym_struct_type] = SHIFT(145),
        [sym_union_type] = SHIFT(145),
        [sym_enum_type] = SHIFT(145),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [63] = {
        [sym_identifier] = SHIFT(137),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(138),
    },
    [64] = {
        [sym_identifier] = SHIFT(81),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(82),
    },
    [65] = {
        [sym_identifier] = SHIFT(66),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(67),
    },
    [66] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(77),
    },
    [67] = {
        [sym_enum_value] = SHIFT(68),
        [ts_builtin_sym_error] = SHIFT(69),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(70),
    },
    [68] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(72),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(71),
    },
    [69] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(71),
    },
    [70] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 3),
    },
    [71] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 4),
    },
    [72] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(76),
    },
    [73] = {
        [sym_enum_value] = SHIFT(74),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [74] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(75),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_enum_type_repeat0, 2),
    },
    [75] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_enum_type_repeat0, 3),
    },
    [76] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 5),
    },
    [77] = {
        [sym_enum_value] = SHIFT(78),
        [ts_builtin_sym_error] = SHIFT(72),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(71),
    },
    [78] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(79),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(76),
    },
    [79] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(80),
    },
    [80] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 6),
    },
    [81] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(134),
    },
    [82] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(86),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(86),
        [aux_sym_STR_RBRACE] = SHIFT(89),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [83] = {
        [sym_type_expression] = SHIFT(130),
        [sym_pointer_type] = SHIFT(131),
        [sym_identifier] = SHIFT(131),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(132),
    },
    [84] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [85] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(128),
    },
    [86] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(127),
    },
    [87] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [88] = {
        [sym_identifier] = SHIFT(126),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [89] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 3),
    },
    [90] = {
        [sym_primitive_type] = SHIFT(125),
        [sym_struct_type] = SHIFT(125),
        [sym_union_type] = SHIFT(125),
        [sym_enum_type] = SHIFT(125),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [91] = {
        [sym_identifier] = SHIFT(114),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(115),
    },
    [92] = {
        [sym_identifier] = SHIFT(106),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(107),
    },
    [93] = {
        [sym_identifier] = SHIFT(94),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(95),
    },
    [94] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(102),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [95] = {
        [sym_enum_value] = SHIFT(96),
        [ts_builtin_sym_error] = SHIFT(97),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(98),
    },
    [96] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(100),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(99),
    },
    [97] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(99),
    },
    [98] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [99] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [100] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(101),
    },
    [101] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [102] = {
        [sym_enum_value] = SHIFT(103),
        [ts_builtin_sym_error] = SHIFT(100),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(99),
    },
    [103] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(104),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(101),
    },
    [104] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(105),
    },
    [105] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [106] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(111),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [107] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(108),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(108),
        [aux_sym_STR_RBRACE] = SHIFT(109),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [108] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(110),
    },
    [109] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [110] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [111] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(112),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(112),
        [aux_sym_STR_RBRACE] = SHIFT(110),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [112] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(113),
    },
    [113] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [114] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(122),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [115] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(117),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(117),
        [aux_sym_STR_RBRACE] = SHIFT(118),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [116] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(120),
    },
    [117] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(119),
    },
    [118] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [119] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [120] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(121),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_struct_type_repeat0, 2),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [121] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_struct_type_repeat0, 3),
    },
    [122] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(123),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(123),
        [aux_sym_STR_RBRACE] = SHIFT(119),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [123] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(124),
    },
    [124] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [125] = {
        [sym_type_expression] = REDUCE(sym_type, 2),
        [sym_pointer_type] = REDUCE(sym_type, 2),
        [sym_identifier] = REDUCE(sym_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 2),
    },
    [126] = {
        [sym_type_expression] = REDUCE(sym_primitive_type, 2),
        [sym_pointer_type] = REDUCE(sym_primitive_type, 2),
        [sym_identifier] = REDUCE(sym_primitive_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_primitive_type, 2),
    },
    [127] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 4),
    },
    [128] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(129),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_union_type_repeat0, 2),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [129] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_union_type_repeat0, 3),
    },
    [130] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_field, 2),
    },
    [131] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
    },
    [132] = {
        [sym_type_expression] = SHIFT(133),
        [sym_pointer_type] = SHIFT(131),
        [sym_identifier] = SHIFT(131),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(132),
    },
    [133] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
    },
    [134] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(135),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(135),
        [aux_sym_STR_RBRACE] = SHIFT(127),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [135] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(136),
    },
    [136] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 5),
    },
    [137] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(142),
    },
    [138] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(139),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(139),
        [aux_sym_STR_RBRACE] = SHIFT(140),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [139] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(141),
    },
    [140] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 3),
    },
    [141] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 4),
    },
    [142] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(143),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(143),
        [aux_sym_STR_RBRACE] = SHIFT(141),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [143] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(144),
    },
    [144] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 5),
    },
    [145] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type, 2),
    },
    [146] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_primitive_type, 2),
    },
    [147] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(148),
    },
    [148] = {
        [sym_expression] = SHIFT(149),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(152),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(153),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(155),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [149] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(313),
        [aux_sym_STR_COMMA] = SHIFT(314),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(312),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [150] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(318),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [151] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [152] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(313),
        [aux_sym_STR_COMMA] = SHIFT(314),
        [aux_sym_STR_RBRACE] = SHIFT(312),
    },
    [153] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(312),
    },
    [154] = {
        [sym_type] = SHIFT(299),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [155] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [156] = {
        [sym_expression] = SHIFT(273),
        [sym_deref] = SHIFT(274),
        [sym_address_of] = SHIFT(275),
        [sym_field_access] = SHIFT(274),
        [sym_deref_field_access] = SHIFT(274),
        [sym_function_call] = SHIFT(275),
        [sym_math_op] = SHIFT(275),
        [sym_bool_op] = SHIFT(275),
        [sym_rel_op] = SHIFT(275),
        [sym_assignment] = SHIFT(275),
        [sym_compound_literal] = SHIFT(275),
        [sym_number] = SHIFT(275),
        [sym_char] = SHIFT(275),
        [sym_string] = SHIFT(275),
        [sym_identifier] = SHIFT(274),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(276),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(277),
        [aux_sym_STR_DASH] = SHIFT(278),
        [aux_sym_STR_BANG] = SHIFT(279),
    },
    [157] = {
        [sym_expression] = SHIFT(272),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [158] = {
        [sym_identifier] = SHIFT(166),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [159] = {
        [sym_expression] = SHIFT(165),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [160] = {
        [sym_expression] = SHIFT(161),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [161] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [162] = {
        [sym_expression] = SHIFT(164),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [163] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [164] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [165] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [166] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_EQ] = SHIFT(167),
    },
    [167] = {
        [sym_expression] = SHIFT(168),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [168] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [169] = {
        [sym_expression] = SHIFT(184),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(187),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(189),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [170] = {
        [sym_identifier] = SHIFT(183),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [171] = {
        [sym_identifier] = SHIFT(182),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [172] = {
        [sym_expression] = SHIFT(181),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [173] = {
        [sym_expression] = SHIFT(180),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [174] = {
        [sym_expression] = SHIFT(179),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [175] = {
        [sym_expression] = SHIFT(178),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [176] = {
        [sym_expression] = SHIFT(177),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [177] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [178] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [179] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [180] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [181] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [182] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [183] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [184] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(270),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(243),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [185] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(244),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [186] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [187] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(243),
    },
    [188] = {
        [sym_type] = SHIFT(230),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [189] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [190] = {
        [sym_expression] = SHIFT(200),
        [sym_deref] = SHIFT(201),
        [sym_address_of] = SHIFT(202),
        [sym_field_access] = SHIFT(201),
        [sym_deref_field_access] = SHIFT(201),
        [sym_function_call] = SHIFT(202),
        [sym_math_op] = SHIFT(202),
        [sym_bool_op] = SHIFT(202),
        [sym_rel_op] = SHIFT(202),
        [sym_assignment] = SHIFT(202),
        [sym_compound_literal] = SHIFT(202),
        [sym_number] = SHIFT(202),
        [sym_char] = SHIFT(202),
        [sym_string] = SHIFT(202),
        [sym_identifier] = SHIFT(201),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(203),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(204),
        [aux_sym_STR_DASH] = SHIFT(205),
        [aux_sym_STR_BANG] = SHIFT(206),
    },
    [191] = {
        [sym_expression] = SHIFT(199),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [192] = {
        [sym_expression] = SHIFT(198),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [193] = {
        [sym_expression] = SHIFT(194),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [194] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [195] = {
        [sym_expression] = SHIFT(197),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [196] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [197] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [198] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [199] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [200] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_deref, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [201] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [202] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [203] = {
        [sym_type] = SHIFT(213),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [204] = {
        [sym_expression] = SHIFT(212),
        [sym_deref] = SHIFT(201),
        [sym_address_of] = SHIFT(202),
        [sym_field_access] = SHIFT(201),
        [sym_deref_field_access] = SHIFT(201),
        [sym_function_call] = SHIFT(202),
        [sym_math_op] = SHIFT(202),
        [sym_bool_op] = SHIFT(202),
        [sym_rel_op] = SHIFT(202),
        [sym_assignment] = SHIFT(202),
        [sym_compound_literal] = SHIFT(202),
        [sym_number] = SHIFT(202),
        [sym_char] = SHIFT(202),
        [sym_string] = SHIFT(202),
        [sym_identifier] = SHIFT(201),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(203),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(204),
        [aux_sym_STR_DASH] = SHIFT(205),
        [aux_sym_STR_BANG] = SHIFT(206),
    },
    [205] = {
        [sym_expression] = SHIFT(211),
        [sym_deref] = SHIFT(201),
        [sym_address_of] = SHIFT(202),
        [sym_field_access] = SHIFT(201),
        [sym_deref_field_access] = SHIFT(201),
        [sym_function_call] = SHIFT(202),
        [sym_math_op] = SHIFT(202),
        [sym_bool_op] = SHIFT(202),
        [sym_rel_op] = SHIFT(202),
        [sym_assignment] = SHIFT(202),
        [sym_compound_literal] = SHIFT(202),
        [sym_number] = SHIFT(202),
        [sym_char] = SHIFT(202),
        [sym_string] = SHIFT(202),
        [sym_identifier] = SHIFT(201),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(203),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(204),
        [aux_sym_STR_DASH] = SHIFT(205),
        [aux_sym_STR_BANG] = SHIFT(206),
    },
    [206] = {
        [sym_expression] = SHIFT(207),
        [sym_deref] = SHIFT(201),
        [sym_address_of] = SHIFT(202),
        [sym_field_access] = SHIFT(201),
        [sym_deref_field_access] = SHIFT(201),
        [sym_function_call] = SHIFT(202),
        [sym_math_op] = SHIFT(202),
        [sym_bool_op] = SHIFT(202),
        [sym_rel_op] = SHIFT(202),
        [sym_assignment] = SHIFT(202),
        [sym_compound_literal] = SHIFT(202),
        [sym_number] = SHIFT(202),
        [sym_char] = SHIFT(202),
        [sym_string] = SHIFT(202),
        [sym_identifier] = SHIFT(201),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(203),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(204),
        [aux_sym_STR_DASH] = SHIFT(205),
        [aux_sym_STR_BANG] = SHIFT(206),
    },
    [207] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(208),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(209),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [208] = {
        [sym_expression] = SHIFT(210),
        [sym_deref] = SHIFT(201),
        [sym_address_of] = SHIFT(202),
        [sym_field_access] = SHIFT(201),
        [sym_deref_field_access] = SHIFT(201),
        [sym_function_call] = SHIFT(202),
        [sym_math_op] = SHIFT(202),
        [sym_bool_op] = SHIFT(202),
        [sym_rel_op] = SHIFT(202),
        [sym_assignment] = SHIFT(202),
        [sym_compound_literal] = SHIFT(202),
        [sym_number] = SHIFT(202),
        [sym_char] = SHIFT(202),
        [sym_string] = SHIFT(202),
        [sym_identifier] = SHIFT(201),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(203),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(204),
        [aux_sym_STR_DASH] = SHIFT(205),
        [aux_sym_STR_BANG] = SHIFT(206),
    },
    [209] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [210] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(208),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(209),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [211] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(209),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [212] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [213] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(214),
    },
    [214] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(215),
    },
    [215] = {
        [sym_expression] = SHIFT(216),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(217),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(218),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(219),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [216] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(221),
        [aux_sym_STR_COMMA] = SHIFT(222),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(220),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [217] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(221),
        [aux_sym_STR_COMMA] = SHIFT(222),
        [aux_sym_STR_RBRACE] = SHIFT(220),
    },
    [218] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(220),
    },
    [219] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [220] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [221] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(228),
        [aux_sym_STR_RBRACE] = SHIFT(225),
    },
    [222] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(225),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [223] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(226),
        [aux_sym_STR_COMMA] = SHIFT(227),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(aux_sym_compound_literal_repeat0, 2),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [224] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(226),
        [aux_sym_STR_COMMA] = SHIFT(227),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(aux_sym_compound_literal_repeat0, 2),
    },
    [225] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [226] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = REDUCE(aux_sym_compound_literal_repeat0, 3),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_compound_literal_repeat0, 3),
    },
    [227] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [228] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(229),
    },
    [229] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [230] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(231),
    },
    [231] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(232),
    },
    [232] = {
        [sym_expression] = SHIFT(233),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(234),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(235),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(236),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [233] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(238),
        [aux_sym_STR_COMMA] = SHIFT(239),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(237),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [234] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(238),
        [aux_sym_STR_COMMA] = SHIFT(239),
        [aux_sym_STR_RBRACE] = SHIFT(237),
    },
    [235] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(237),
    },
    [236] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [237] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [238] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(241),
        [aux_sym_STR_RBRACE] = SHIFT(240),
    },
    [239] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(240),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [240] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [241] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(242),
    },
    [242] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [243] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [244] = {
        [sym_expression] = SHIFT(245),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [245] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [246] = {
        [sym_expression] = SHIFT(261),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(262),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(263),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [247] = {
        [sym_identifier] = SHIFT(260),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [248] = {
        [sym_identifier] = SHIFT(259),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [249] = {
        [sym_expression] = SHIFT(258),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [250] = {
        [sym_expression] = SHIFT(257),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [251] = {
        [sym_expression] = SHIFT(256),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [252] = {
        [sym_expression] = SHIFT(255),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [253] = {
        [sym_expression] = SHIFT(254),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [254] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [255] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [256] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [257] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [258] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [259] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [260] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [261] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(265),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(264),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [262] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(264),
    },
    [263] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [264] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [265] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(269),
    },
    [266] = {
        [sym_expression] = SHIFT(267),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [267] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(268),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(aux_sym_function_call_repeat0, 2),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [268] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_function_call_repeat0, 3),
    },
    [269] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [270] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(271),
    },
    [271] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [272] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [273] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_deref, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [274] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [275] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [276] = {
        [sym_type] = SHIFT(286),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [277] = {
        [sym_expression] = SHIFT(285),
        [sym_deref] = SHIFT(274),
        [sym_address_of] = SHIFT(275),
        [sym_field_access] = SHIFT(274),
        [sym_deref_field_access] = SHIFT(274),
        [sym_function_call] = SHIFT(275),
        [sym_math_op] = SHIFT(275),
        [sym_bool_op] = SHIFT(275),
        [sym_rel_op] = SHIFT(275),
        [sym_assignment] = SHIFT(275),
        [sym_compound_literal] = SHIFT(275),
        [sym_number] = SHIFT(275),
        [sym_char] = SHIFT(275),
        [sym_string] = SHIFT(275),
        [sym_identifier] = SHIFT(274),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(276),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(277),
        [aux_sym_STR_DASH] = SHIFT(278),
        [aux_sym_STR_BANG] = SHIFT(279),
    },
    [278] = {
        [sym_expression] = SHIFT(284),
        [sym_deref] = SHIFT(274),
        [sym_address_of] = SHIFT(275),
        [sym_field_access] = SHIFT(274),
        [sym_deref_field_access] = SHIFT(274),
        [sym_function_call] = SHIFT(275),
        [sym_math_op] = SHIFT(275),
        [sym_bool_op] = SHIFT(275),
        [sym_rel_op] = SHIFT(275),
        [sym_assignment] = SHIFT(275),
        [sym_compound_literal] = SHIFT(275),
        [sym_number] = SHIFT(275),
        [sym_char] = SHIFT(275),
        [sym_string] = SHIFT(275),
        [sym_identifier] = SHIFT(274),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(276),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(277),
        [aux_sym_STR_DASH] = SHIFT(278),
        [aux_sym_STR_BANG] = SHIFT(279),
    },
    [279] = {
        [sym_expression] = SHIFT(280),
        [sym_deref] = SHIFT(274),
        [sym_address_of] = SHIFT(275),
        [sym_field_access] = SHIFT(274),
        [sym_deref_field_access] = SHIFT(274),
        [sym_function_call] = SHIFT(275),
        [sym_math_op] = SHIFT(275),
        [sym_bool_op] = SHIFT(275),
        [sym_rel_op] = SHIFT(275),
        [sym_assignment] = SHIFT(275),
        [sym_compound_literal] = SHIFT(275),
        [sym_number] = SHIFT(275),
        [sym_char] = SHIFT(275),
        [sym_string] = SHIFT(275),
        [sym_identifier] = SHIFT(274),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(276),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(277),
        [aux_sym_STR_DASH] = SHIFT(278),
        [aux_sym_STR_BANG] = SHIFT(279),
    },
    [280] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(281),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(282),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [281] = {
        [sym_expression] = SHIFT(283),
        [sym_deref] = SHIFT(274),
        [sym_address_of] = SHIFT(275),
        [sym_field_access] = SHIFT(274),
        [sym_deref_field_access] = SHIFT(274),
        [sym_function_call] = SHIFT(275),
        [sym_math_op] = SHIFT(275),
        [sym_bool_op] = SHIFT(275),
        [sym_rel_op] = SHIFT(275),
        [sym_assignment] = SHIFT(275),
        [sym_compound_literal] = SHIFT(275),
        [sym_number] = SHIFT(275),
        [sym_char] = SHIFT(275),
        [sym_string] = SHIFT(275),
        [sym_identifier] = SHIFT(274),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(276),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(277),
        [aux_sym_STR_DASH] = SHIFT(278),
        [aux_sym_STR_BANG] = SHIFT(279),
    },
    [282] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [283] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(281),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(282),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [284] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(282),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [285] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [286] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(287),
    },
    [287] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(288),
    },
    [288] = {
        [sym_expression] = SHIFT(289),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(290),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(291),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(292),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [289] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(294),
        [aux_sym_STR_COMMA] = SHIFT(295),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(293),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [290] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(294),
        [aux_sym_STR_COMMA] = SHIFT(295),
        [aux_sym_STR_RBRACE] = SHIFT(293),
    },
    [291] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(293),
    },
    [292] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [293] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [294] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(297),
        [aux_sym_STR_RBRACE] = SHIFT(296),
    },
    [295] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(296),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [296] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [297] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(298),
    },
    [298] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [299] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(300),
    },
    [300] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(301),
    },
    [301] = {
        [sym_expression] = SHIFT(302),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(303),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(304),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(305),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [302] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(307),
        [aux_sym_STR_COMMA] = SHIFT(308),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(306),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [303] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(307),
        [aux_sym_STR_COMMA] = SHIFT(308),
        [aux_sym_STR_RBRACE] = SHIFT(306),
    },
    [304] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(306),
    },
    [305] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [306] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [307] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(310),
        [aux_sym_STR_RBRACE] = SHIFT(309),
    },
    [308] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(309),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [309] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [310] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(311),
    },
    [311] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [312] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [313] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(316),
        [aux_sym_STR_RBRACE] = SHIFT(315),
    },
    [314] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(315),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [315] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [316] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(317),
    },
    [317] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [318] = {
        [sym_expression] = SHIFT(319),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [319] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [320] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(321),
    },
    [321] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(322),
    },
    [322] = {
        [sym_expression] = SHIFT(323),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(324),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(325),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(326),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [323] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(328),
        [aux_sym_STR_COMMA] = SHIFT(329),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(327),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [324] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(328),
        [aux_sym_STR_COMMA] = SHIFT(329),
        [aux_sym_STR_RBRACE] = SHIFT(327),
    },
    [325] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(327),
    },
    [326] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [327] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [328] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(331),
        [aux_sym_STR_RBRACE] = SHIFT(330),
    },
    [329] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(330),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [330] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [331] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(332),
    },
    [332] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [333] = {
        [sym_expression] = SHIFT(334),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [334] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(335),
        [aux_sym_STR_RBRACE] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = SHIFT(336),
        [aux_sym_STR_DASH_GT] = SHIFT(337),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = SHIFT(338),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = SHIFT(338),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(341),
        [aux_sym_STR_LT] = SHIFT(342),
        [aux_sym_STR_LT_EQ] = SHIFT(342),
        [aux_sym_STR_EQ_EQ] = SHIFT(342),
        [aux_sym_STR_BANG_EQ] = SHIFT(342),
        [aux_sym_STR_GT_EQ] = SHIFT(342),
        [aux_sym_STR_GT] = SHIFT(342),
    },
    [335] = {
        [sym_expression] = SHIFT(350),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(351),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(352),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [336] = {
        [sym_identifier] = SHIFT(349),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [337] = {
        [sym_identifier] = SHIFT(348),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [338] = {
        [sym_expression] = SHIFT(347),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [339] = {
        [sym_expression] = SHIFT(346),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [340] = {
        [sym_expression] = SHIFT(345),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [341] = {
        [sym_expression] = SHIFT(344),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [342] = {
        [sym_expression] = SHIFT(343),
        [sym_deref] = SHIFT(32),
        [sym_address_of] = SHIFT(33),
        [sym_field_access] = SHIFT(32),
        [sym_deref_field_access] = SHIFT(32),
        [sym_function_call] = SHIFT(33),
        [sym_math_op] = SHIFT(33),
        [sym_bool_op] = SHIFT(33),
        [sym_rel_op] = SHIFT(33),
        [sym_assignment] = SHIFT(33),
        [sym_compound_literal] = SHIFT(33),
        [sym_number] = SHIFT(33),
        [sym_char] = SHIFT(33),
        [sym_string] = SHIFT(33),
        [sym_identifier] = SHIFT(32),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(34),
        [aux_sym_STR_STAR] = SHIFT(35),
        [aux_sym_STR_AMP] = SHIFT(36),
        [aux_sym_STR_DASH] = SHIFT(37),
        [aux_sym_STR_BANG] = SHIFT(38),
    },
    [343] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = SHIFT(338),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = SHIFT(338),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(341),
        [aux_sym_STR_LT] = SHIFT(342),
        [aux_sym_STR_LT_EQ] = SHIFT(342),
        [aux_sym_STR_EQ_EQ] = SHIFT(342),
        [aux_sym_STR_BANG_EQ] = SHIFT(342),
        [aux_sym_STR_GT_EQ] = SHIFT(342),
        [aux_sym_STR_GT] = SHIFT(342),
    },
    [344] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = SHIFT(338),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = SHIFT(338),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(341),
        [aux_sym_STR_LT] = SHIFT(342),
        [aux_sym_STR_LT_EQ] = SHIFT(342),
        [aux_sym_STR_EQ_EQ] = SHIFT(342),
        [aux_sym_STR_BANG_EQ] = SHIFT(342),
        [aux_sym_STR_GT_EQ] = SHIFT(342),
        [aux_sym_STR_GT] = SHIFT(342),
    },
    [345] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [346] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [347] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(40),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(41),
        [aux_sym_STR_DASH] = SHIFT(338),
        [aux_sym_STR_SLASH] = SHIFT(339),
        [aux_sym_STR_PLUS] = SHIFT(338),
        [aux_sym_STR_AMP_AMP] = SHIFT(340),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(341),
        [aux_sym_STR_LT] = SHIFT(342),
        [aux_sym_STR_LT_EQ] = SHIFT(342),
        [aux_sym_STR_EQ_EQ] = SHIFT(342),
        [aux_sym_STR_BANG_EQ] = SHIFT(342),
        [aux_sym_STR_GT_EQ] = SHIFT(342),
        [aux_sym_STR_GT] = SHIFT(342),
    },
    [348] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [349] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [350] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(354),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(353),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [351] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(353),
    },
    [352] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [353] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [354] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(355),
    },
    [355] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [356] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_var_assignment] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [357] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(358),
    },
    [358] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_var_assignment] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [359] = {
        [sym_enum_value] = SHIFT(360),
        [ts_builtin_sym_error] = SHIFT(357),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(356),
    },
    [360] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(361),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(358),
    },
    [361] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(362),
    },
    [362] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_var_assignment] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [363] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_var_assignment] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(368),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [364] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(365),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(365),
        [aux_sym_STR_RBRACE] = SHIFT(366),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [365] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(367),
    },
    [366] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_var_assignment] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [367] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_var_assignment] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [368] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(369),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(369),
        [aux_sym_STR_RBRACE] = SHIFT(367),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [369] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(370),
    },
    [370] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_var_assignment] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [371] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_var_assignment] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(376),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [372] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(373),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(373),
        [aux_sym_STR_RBRACE] = SHIFT(374),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [373] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(375),
    },
    [374] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_var_assignment] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [375] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_var_assignment] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [376] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(377),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(377),
        [aux_sym_STR_RBRACE] = SHIFT(375),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [377] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(378),
    },
    [378] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_var_assignment] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [379] = {
        [sym_identifier] = REDUCE(aux_sym_primitive_type_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [380] = {
        [sym_type_expression] = REDUCE(sym_type, 2),
        [sym_pointer_type] = REDUCE(sym_type, 2),
        [sym_var_assignment] = REDUCE(sym_type, 2),
        [sym_identifier] = REDUCE(sym_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 2),
    },
    [381] = {
        [sym_identifier] = SHIFT(404),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(405),
    },
    [382] = {
        [sym_identifier] = SHIFT(396),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(397),
    },
    [383] = {
        [sym_identifier] = SHIFT(384),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(385),
    },
    [384] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_var_assignment] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(392),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [385] = {
        [sym_enum_value] = SHIFT(386),
        [ts_builtin_sym_error] = SHIFT(387),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(388),
    },
    [386] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(390),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(389),
    },
    [387] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(389),
    },
    [388] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_var_assignment] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [389] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_var_assignment] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [390] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(391),
    },
    [391] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_var_assignment] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [392] = {
        [sym_enum_value] = SHIFT(393),
        [ts_builtin_sym_error] = SHIFT(390),
        [sym_identifier] = SHIFT(28),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(389),
    },
    [393] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(394),
        [aux_sym_STR_COMMA] = SHIFT(73),
        [aux_sym_STR_RBRACE] = SHIFT(391),
    },
    [394] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(395),
    },
    [395] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_var_assignment] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [396] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_var_assignment] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(401),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [397] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(398),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(398),
        [aux_sym_STR_RBRACE] = SHIFT(399),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [398] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(400),
    },
    [399] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_var_assignment] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [400] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_var_assignment] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [401] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(402),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_union_type_repeat0] = SHIFT(402),
        [aux_sym_STR_RBRACE] = SHIFT(400),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [402] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(403),
    },
    [403] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_var_assignment] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [404] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_var_assignment] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(409),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [405] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(406),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(406),
        [aux_sym_STR_RBRACE] = SHIFT(407),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [406] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(408),
    },
    [407] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_var_assignment] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [408] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_var_assignment] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [409] = {
        [sym_type] = SHIFT(83),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(410),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_struct_type_repeat0] = SHIFT(410),
        [aux_sym_STR_RBRACE] = SHIFT(408),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [410] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(411),
    },
    [411] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_var_assignment] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [412] = {
        [sym_type] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_primitive_type] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_struct_type] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_union_type] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_enum_type] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_identifier] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_const] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_unsigned] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_short] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_long] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_struct] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_union] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_enum] = REDUCE(aux_sym_var_declaration_repeat0, 2),
    },
    [413] = {
        [sym_type_expression] = SHIFT(414),
        [sym_pointer_type] = SHIFT(131),
        [sym_identifier] = SHIFT(131),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(132),
    },
    [414] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(415),
    },
    [415] = {
        [sym_preproc_include] = REDUCE(sym_typedef, 4),
        [sym_preproc_define] = REDUCE(sym_typedef, 4),
        [sym_preproc_call] = REDUCE(sym_typedef, 4),
        [sym_preproc_ifdef] = REDUCE(sym_typedef, 4),
        [sym_preproc_ifndef] = REDUCE(sym_typedef, 4),
        [sym_typedef] = REDUCE(sym_typedef, 4),
        [sym_var_declaration] = REDUCE(sym_typedef, 4),
        [sym_function_declaration] = REDUCE(sym_typedef, 4),
        [sym_type] = REDUCE(sym_typedef, 4),
        [sym_primitive_type] = REDUCE(sym_typedef, 4),
        [sym_struct_declaration] = REDUCE(sym_typedef, 4),
        [sym_struct_type] = REDUCE(sym_typedef, 4),
        [sym_union_declaration] = REDUCE(sym_typedef, 4),
        [sym_union_type] = REDUCE(sym_typedef, 4),
        [sym_enum_declaration] = REDUCE(sym_typedef, 4),
        [sym_enum_type] = REDUCE(sym_typedef, 4),
        [ts_builtin_sym_end] = REDUCE(sym_typedef, 4),
        [sym_preproc_else] = REDUCE(sym_typedef, 4),
        [sym_preproc_endif] = REDUCE(sym_typedef, 4),
        [sym_preproc_directive] = REDUCE(sym_typedef, 4),
        [sym_identifier] = REDUCE(sym_typedef, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_typedef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_static] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_extern] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_const] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_short] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_long] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_struct] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_union] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_enum] = REDUCE(sym_typedef, 4),
    },
    [416] = {
        [sym_preproc_include] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_define] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_call] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_ifdef] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_ifndef] = REDUCE(sym_preproc_ifndef, 2),
        [sym_typedef] = REDUCE(sym_preproc_ifndef, 2),
        [sym_var_declaration] = REDUCE(sym_preproc_ifndef, 2),
        [sym_function_declaration] = REDUCE(sym_preproc_ifndef, 2),
        [sym_type] = REDUCE(sym_preproc_ifndef, 2),
        [sym_primitive_type] = REDUCE(sym_preproc_ifndef, 2),
        [sym_struct_declaration] = REDUCE(sym_preproc_ifndef, 2),
        [sym_struct_type] = REDUCE(sym_preproc_ifndef, 2),
        [sym_union_declaration] = REDUCE(sym_preproc_ifndef, 2),
        [sym_union_type] = REDUCE(sym_preproc_ifndef, 2),
        [sym_enum_declaration] = REDUCE(sym_preproc_ifndef, 2),
        [sym_enum_type] = REDUCE(sym_preproc_ifndef, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_ifndef, 2),
        [sym_identifier] = REDUCE(sym_preproc_ifndef, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_ifndef, 2),
    },
    [417] = {
        [sym_preproc_include] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_define] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_call] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_ifdef] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_ifndef] = REDUCE(sym_preproc_ifdef, 2),
        [sym_typedef] = REDUCE(sym_preproc_ifdef, 2),
        [sym_var_declaration] = REDUCE(sym_preproc_ifdef, 2),
        [sym_function_declaration] = REDUCE(sym_preproc_ifdef, 2),
        [sym_type] = REDUCE(sym_preproc_ifdef, 2),
        [sym_primitive_type] = REDUCE(sym_preproc_ifdef, 2),
        [sym_struct_declaration] = REDUCE(sym_preproc_ifdef, 2),
        [sym_struct_type] = REDUCE(sym_preproc_ifdef, 2),
        [sym_union_declaration] = REDUCE(sym_preproc_ifdef, 2),
        [sym_union_type] = REDUCE(sym_preproc_ifdef, 2),
        [sym_enum_declaration] = REDUCE(sym_preproc_ifdef, 2),
        [sym_enum_type] = REDUCE(sym_preproc_ifdef, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_ifdef, 2),
        [sym_identifier] = REDUCE(sym_preproc_ifdef, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_ifdef, 2),
    },
    [418] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN] = SHIFT(419),
    },
    [419] = {
        [sym_preproc_include] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_define] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_call] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_ifdef] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_ifndef] = REDUCE(sym_preproc_define, 3),
        [sym_typedef] = REDUCE(sym_preproc_define, 3),
        [sym_var_declaration] = REDUCE(sym_preproc_define, 3),
        [sym_function_declaration] = REDUCE(sym_preproc_define, 3),
        [sym_type] = REDUCE(sym_preproc_define, 3),
        [sym_primitive_type] = REDUCE(sym_preproc_define, 3),
        [sym_struct_declaration] = REDUCE(sym_preproc_define, 3),
        [sym_struct_type] = REDUCE(sym_preproc_define, 3),
        [sym_union_declaration] = REDUCE(sym_preproc_define, 3),
        [sym_union_type] = REDUCE(sym_preproc_define, 3),
        [sym_enum_declaration] = REDUCE(sym_preproc_define, 3),
        [sym_enum_type] = REDUCE(sym_preproc_define, 3),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_else] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_endif] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_directive] = REDUCE(sym_preproc_define, 3),
        [sym_identifier] = REDUCE(sym_preproc_define, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_static] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_const] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_short] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_long] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_union] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_define, 3),
    },
    [420] = {
        [sym_preproc_include] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_define] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_call] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_ifdef] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_ifndef] = REDUCE(sym_preproc_include, 2),
        [sym_typedef] = REDUCE(sym_preproc_include, 2),
        [sym_var_declaration] = REDUCE(sym_preproc_include, 2),
        [sym_function_declaration] = REDUCE(sym_preproc_include, 2),
        [sym_type] = REDUCE(sym_preproc_include, 2),
        [sym_primitive_type] = REDUCE(sym_preproc_include, 2),
        [sym_struct_declaration] = REDUCE(sym_preproc_include, 2),
        [sym_struct_type] = REDUCE(sym_preproc_include, 2),
        [sym_union_declaration] = REDUCE(sym_preproc_include, 2),
        [sym_union_type] = REDUCE(sym_preproc_include, 2),
        [sym_enum_declaration] = REDUCE(sym_preproc_include, 2),
        [sym_enum_type] = REDUCE(sym_preproc_include, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_include, 2),
        [sym_identifier] = REDUCE(sym_preproc_include, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_include, 2),
    },
    [421] = {
        [sym_type_expression] = REDUCE(sym_primitive_type, 2),
        [sym_pointer_type] = REDUCE(sym_primitive_type, 2),
        [sym_var_assignment] = REDUCE(sym_primitive_type, 2),
        [sym_identifier] = REDUCE(sym_primitive_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_primitive_type, 2),
    },
    [422] = {
        [sym_type_expression] = SHIFT(423),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(425),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [423] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(428),
        [aux_sym_STR_SEMI] = SHIFT(429),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [424] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_type_expression, 1),
    },
    [425] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(428),
        [aux_sym_STR_SEMI] = SHIFT(429),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [426] = {
        [sym_type_expression] = SHIFT(427),
        [sym_pointer_type] = SHIFT(424),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [427] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_pointer_type, 2),
    },
    [428] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(511),
    },
    [429] = {
        [sym_preproc_include] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_define] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_call] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_ifdef] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_ifndef] = REDUCE(sym_var_declaration, 4),
        [sym_typedef] = REDUCE(sym_var_declaration, 4),
        [sym_var_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_function_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_type] = REDUCE(sym_var_declaration, 4),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 4),
        [sym_struct_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_struct_type] = REDUCE(sym_var_declaration, 4),
        [sym_union_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_union_type] = REDUCE(sym_var_declaration, 4),
        [sym_enum_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_enum_type] = REDUCE(sym_var_declaration, 4),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 4),
        [sym_identifier] = REDUCE(sym_var_declaration, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 4),
    },
    [430] = {
        [sym_type_expression] = SHIFT(431),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(432),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [431] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(433),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat1, 2),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [432] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(433),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat1, 2),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [433] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat1, 3),
    },
    [434] = {
        [sym_expression] = SHIFT(435),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [435] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(490),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = SHIFT(491),
        [aux_sym_STR_DASH_GT] = SHIFT(492),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = SHIFT(493),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = SHIFT(493),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(496),
        [aux_sym_STR_LT] = SHIFT(497),
        [aux_sym_STR_LT_EQ] = SHIFT(497),
        [aux_sym_STR_EQ_EQ] = SHIFT(497),
        [aux_sym_STR_BANG_EQ] = SHIFT(497),
        [aux_sym_STR_GT_EQ] = SHIFT(497),
        [aux_sym_STR_GT] = SHIFT(497),
    },
    [436] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(488),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [437] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [438] = {
        [sym_type] = SHIFT(475),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [439] = {
        [sym_expression] = SHIFT(449),
        [sym_deref] = SHIFT(450),
        [sym_address_of] = SHIFT(451),
        [sym_field_access] = SHIFT(450),
        [sym_deref_field_access] = SHIFT(450),
        [sym_function_call] = SHIFT(451),
        [sym_math_op] = SHIFT(451),
        [sym_bool_op] = SHIFT(451),
        [sym_rel_op] = SHIFT(451),
        [sym_assignment] = SHIFT(451),
        [sym_compound_literal] = SHIFT(451),
        [sym_number] = SHIFT(451),
        [sym_char] = SHIFT(451),
        [sym_string] = SHIFT(451),
        [sym_identifier] = SHIFT(450),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(452),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(453),
        [aux_sym_STR_DASH] = SHIFT(454),
        [aux_sym_STR_BANG] = SHIFT(455),
    },
    [440] = {
        [sym_expression] = SHIFT(448),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [441] = {
        [sym_expression] = SHIFT(447),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [442] = {
        [sym_expression] = SHIFT(443),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [443] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [444] = {
        [sym_expression] = SHIFT(446),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [445] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [446] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [447] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [448] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [449] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [450] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [451] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [452] = {
        [sym_type] = SHIFT(462),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [453] = {
        [sym_expression] = SHIFT(461),
        [sym_deref] = SHIFT(450),
        [sym_address_of] = SHIFT(451),
        [sym_field_access] = SHIFT(450),
        [sym_deref_field_access] = SHIFT(450),
        [sym_function_call] = SHIFT(451),
        [sym_math_op] = SHIFT(451),
        [sym_bool_op] = SHIFT(451),
        [sym_rel_op] = SHIFT(451),
        [sym_assignment] = SHIFT(451),
        [sym_compound_literal] = SHIFT(451),
        [sym_number] = SHIFT(451),
        [sym_char] = SHIFT(451),
        [sym_string] = SHIFT(451),
        [sym_identifier] = SHIFT(450),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(452),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(453),
        [aux_sym_STR_DASH] = SHIFT(454),
        [aux_sym_STR_BANG] = SHIFT(455),
    },
    [454] = {
        [sym_expression] = SHIFT(460),
        [sym_deref] = SHIFT(450),
        [sym_address_of] = SHIFT(451),
        [sym_field_access] = SHIFT(450),
        [sym_deref_field_access] = SHIFT(450),
        [sym_function_call] = SHIFT(451),
        [sym_math_op] = SHIFT(451),
        [sym_bool_op] = SHIFT(451),
        [sym_rel_op] = SHIFT(451),
        [sym_assignment] = SHIFT(451),
        [sym_compound_literal] = SHIFT(451),
        [sym_number] = SHIFT(451),
        [sym_char] = SHIFT(451),
        [sym_string] = SHIFT(451),
        [sym_identifier] = SHIFT(450),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(452),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(453),
        [aux_sym_STR_DASH] = SHIFT(454),
        [aux_sym_STR_BANG] = SHIFT(455),
    },
    [455] = {
        [sym_expression] = SHIFT(456),
        [sym_deref] = SHIFT(450),
        [sym_address_of] = SHIFT(451),
        [sym_field_access] = SHIFT(450),
        [sym_deref_field_access] = SHIFT(450),
        [sym_function_call] = SHIFT(451),
        [sym_math_op] = SHIFT(451),
        [sym_bool_op] = SHIFT(451),
        [sym_rel_op] = SHIFT(451),
        [sym_assignment] = SHIFT(451),
        [sym_compound_literal] = SHIFT(451),
        [sym_number] = SHIFT(451),
        [sym_char] = SHIFT(451),
        [sym_string] = SHIFT(451),
        [sym_identifier] = SHIFT(450),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(452),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(453),
        [aux_sym_STR_DASH] = SHIFT(454),
        [aux_sym_STR_BANG] = SHIFT(455),
    },
    [456] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(457),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(458),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [457] = {
        [sym_expression] = SHIFT(459),
        [sym_deref] = SHIFT(450),
        [sym_address_of] = SHIFT(451),
        [sym_field_access] = SHIFT(450),
        [sym_deref_field_access] = SHIFT(450),
        [sym_function_call] = SHIFT(451),
        [sym_math_op] = SHIFT(451),
        [sym_bool_op] = SHIFT(451),
        [sym_rel_op] = SHIFT(451),
        [sym_assignment] = SHIFT(451),
        [sym_compound_literal] = SHIFT(451),
        [sym_number] = SHIFT(451),
        [sym_char] = SHIFT(451),
        [sym_string] = SHIFT(451),
        [sym_identifier] = SHIFT(450),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(452),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(453),
        [aux_sym_STR_DASH] = SHIFT(454),
        [aux_sym_STR_BANG] = SHIFT(455),
    },
    [458] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [459] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(457),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(458),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [460] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(458),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [461] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [462] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(463),
    },
    [463] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(464),
    },
    [464] = {
        [sym_expression] = SHIFT(465),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(466),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(467),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(468),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [465] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(470),
        [aux_sym_STR_COMMA] = SHIFT(471),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(469),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [466] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(470),
        [aux_sym_STR_COMMA] = SHIFT(471),
        [aux_sym_STR_RBRACE] = SHIFT(469),
    },
    [467] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(469),
    },
    [468] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [469] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [470] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(473),
        [aux_sym_STR_RBRACE] = SHIFT(472),
    },
    [471] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(472),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [472] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [473] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(474),
    },
    [474] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [475] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(476),
    },
    [476] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(477),
    },
    [477] = {
        [sym_expression] = SHIFT(478),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(479),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(480),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(481),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [478] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(483),
        [aux_sym_STR_COMMA] = SHIFT(484),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(482),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [479] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(483),
        [aux_sym_STR_COMMA] = SHIFT(484),
        [aux_sym_STR_RBRACE] = SHIFT(482),
    },
    [480] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(482),
    },
    [481] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [482] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [483] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(486),
        [aux_sym_STR_RBRACE] = SHIFT(485),
    },
    [484] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(485),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [485] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [486] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(487),
    },
    [487] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [488] = {
        [sym_expression] = SHIFT(489),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [489] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(490),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = SHIFT(491),
        [aux_sym_STR_DASH_GT] = SHIFT(492),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = SHIFT(493),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = SHIFT(493),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(496),
        [aux_sym_STR_LT] = SHIFT(497),
        [aux_sym_STR_LT_EQ] = SHIFT(497),
        [aux_sym_STR_EQ_EQ] = SHIFT(497),
        [aux_sym_STR_BANG_EQ] = SHIFT(497),
        [aux_sym_STR_GT_EQ] = SHIFT(497),
        [aux_sym_STR_GT] = SHIFT(497),
    },
    [490] = {
        [sym_expression] = SHIFT(505),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(506),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(507),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [491] = {
        [sym_identifier] = SHIFT(504),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [492] = {
        [sym_identifier] = SHIFT(503),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [493] = {
        [sym_expression] = SHIFT(502),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [494] = {
        [sym_expression] = SHIFT(501),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [495] = {
        [sym_expression] = SHIFT(500),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [496] = {
        [sym_expression] = SHIFT(499),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [497] = {
        [sym_expression] = SHIFT(498),
        [sym_deref] = SHIFT(436),
        [sym_address_of] = SHIFT(437),
        [sym_field_access] = SHIFT(436),
        [sym_deref_field_access] = SHIFT(436),
        [sym_function_call] = SHIFT(437),
        [sym_math_op] = SHIFT(437),
        [sym_bool_op] = SHIFT(437),
        [sym_rel_op] = SHIFT(437),
        [sym_assignment] = SHIFT(437),
        [sym_compound_literal] = SHIFT(437),
        [sym_number] = SHIFT(437),
        [sym_char] = SHIFT(437),
        [sym_string] = SHIFT(437),
        [sym_identifier] = SHIFT(436),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(438),
        [aux_sym_STR_STAR] = SHIFT(439),
        [aux_sym_STR_AMP] = SHIFT(440),
        [aux_sym_STR_DASH] = SHIFT(441),
        [aux_sym_STR_BANG] = SHIFT(442),
    },
    [498] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = SHIFT(493),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = SHIFT(493),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(496),
        [aux_sym_STR_LT] = SHIFT(497),
        [aux_sym_STR_LT_EQ] = SHIFT(497),
        [aux_sym_STR_EQ_EQ] = SHIFT(497),
        [aux_sym_STR_BANG_EQ] = SHIFT(497),
        [aux_sym_STR_GT_EQ] = SHIFT(497),
        [aux_sym_STR_GT] = SHIFT(497),
    },
    [499] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = SHIFT(493),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = SHIFT(493),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(496),
        [aux_sym_STR_LT] = SHIFT(497),
        [aux_sym_STR_LT_EQ] = SHIFT(497),
        [aux_sym_STR_EQ_EQ] = SHIFT(497),
        [aux_sym_STR_BANG_EQ] = SHIFT(497),
        [aux_sym_STR_GT_EQ] = SHIFT(497),
        [aux_sym_STR_GT] = SHIFT(497),
    },
    [500] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [501] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [502] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(445),
        [aux_sym_STR_DASH] = SHIFT(493),
        [aux_sym_STR_SLASH] = SHIFT(494),
        [aux_sym_STR_PLUS] = SHIFT(493),
        [aux_sym_STR_AMP_AMP] = SHIFT(495),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(496),
        [aux_sym_STR_LT] = SHIFT(497),
        [aux_sym_STR_LT_EQ] = SHIFT(497),
        [aux_sym_STR_EQ_EQ] = SHIFT(497),
        [aux_sym_STR_BANG_EQ] = SHIFT(497),
        [aux_sym_STR_GT_EQ] = SHIFT(497),
        [aux_sym_STR_GT] = SHIFT(497),
    },
    [503] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [504] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [505] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(509),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(508),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [506] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(508),
    },
    [507] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [508] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [509] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(510),
    },
    [510] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [511] = {
        [sym_preproc_include] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_define] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_call] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_ifdef] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_ifndef] = REDUCE(sym_var_declaration, 5),
        [sym_typedef] = REDUCE(sym_var_declaration, 5),
        [sym_var_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_function_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_type] = REDUCE(sym_var_declaration, 5),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 5),
        [sym_struct_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_struct_type] = REDUCE(sym_var_declaration, 5),
        [sym_union_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_union_type] = REDUCE(sym_var_declaration, 5),
        [sym_enum_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_enum_type] = REDUCE(sym_var_declaration, 5),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 5),
        [sym_identifier] = REDUCE(sym_var_declaration, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 5),
    },
    [512] = {
        [sym_preproc_include] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_define] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_call] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_ifdef] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_ifndef] = REDUCE(sym_preproc_call, 2),
        [sym_typedef] = REDUCE(sym_preproc_call, 2),
        [sym_var_declaration] = REDUCE(sym_preproc_call, 2),
        [sym_function_declaration] = REDUCE(sym_preproc_call, 2),
        [sym_type] = REDUCE(sym_preproc_call, 2),
        [sym_primitive_type] = REDUCE(sym_preproc_call, 2),
        [sym_struct_declaration] = REDUCE(sym_preproc_call, 2),
        [sym_struct_type] = REDUCE(sym_preproc_call, 2),
        [sym_union_declaration] = REDUCE(sym_preproc_call, 2),
        [sym_union_type] = REDUCE(sym_preproc_call, 2),
        [sym_enum_declaration] = REDUCE(sym_preproc_call, 2),
        [sym_enum_type] = REDUCE(sym_preproc_call, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_call, 2),
        [sym_identifier] = REDUCE(sym_preproc_call, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_call, 2),
    },
    [513] = {
        [sym_preproc_include] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_define] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_call] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_ifdef] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_ifndef] = REDUCE(sym_enum_declaration, 2),
        [sym_typedef] = REDUCE(sym_enum_declaration, 2),
        [sym_var_declaration] = REDUCE(sym_enum_declaration, 2),
        [sym_function_declaration] = REDUCE(sym_enum_declaration, 2),
        [sym_type] = REDUCE(sym_enum_declaration, 2),
        [sym_primitive_type] = REDUCE(sym_enum_declaration, 2),
        [sym_struct_declaration] = REDUCE(sym_enum_declaration, 2),
        [sym_struct_type] = REDUCE(sym_enum_declaration, 2),
        [sym_union_declaration] = REDUCE(sym_enum_declaration, 2),
        [sym_union_type] = REDUCE(sym_enum_declaration, 2),
        [sym_enum_declaration] = REDUCE(sym_enum_declaration, 2),
        [sym_enum_type] = REDUCE(sym_enum_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_enum_declaration, 2),
        [sym_identifier] = REDUCE(sym_enum_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_enum_declaration, 2),
    },
    [514] = {
        [sym_preproc_include] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_define] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_call] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_ifdef] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_ifndef] = REDUCE(sym_union_declaration, 2),
        [sym_typedef] = REDUCE(sym_union_declaration, 2),
        [sym_var_declaration] = REDUCE(sym_union_declaration, 2),
        [sym_function_declaration] = REDUCE(sym_union_declaration, 2),
        [sym_type] = REDUCE(sym_union_declaration, 2),
        [sym_primitive_type] = REDUCE(sym_union_declaration, 2),
        [sym_struct_declaration] = REDUCE(sym_union_declaration, 2),
        [sym_struct_type] = REDUCE(sym_union_declaration, 2),
        [sym_union_declaration] = REDUCE(sym_union_declaration, 2),
        [sym_union_type] = REDUCE(sym_union_declaration, 2),
        [sym_enum_declaration] = REDUCE(sym_union_declaration, 2),
        [sym_enum_type] = REDUCE(sym_union_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_union_declaration, 2),
        [sym_identifier] = REDUCE(sym_union_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_union_declaration, 2),
    },
    [515] = {
        [sym_preproc_include] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_define] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_call] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_ifdef] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_ifndef] = REDUCE(sym_struct_declaration, 2),
        [sym_typedef] = REDUCE(sym_struct_declaration, 2),
        [sym_var_declaration] = REDUCE(sym_struct_declaration, 2),
        [sym_function_declaration] = REDUCE(sym_struct_declaration, 2),
        [sym_type] = REDUCE(sym_struct_declaration, 2),
        [sym_primitive_type] = REDUCE(sym_struct_declaration, 2),
        [sym_struct_declaration] = REDUCE(sym_struct_declaration, 2),
        [sym_struct_type] = REDUCE(sym_struct_declaration, 2),
        [sym_union_declaration] = REDUCE(sym_struct_declaration, 2),
        [sym_union_type] = REDUCE(sym_struct_declaration, 2),
        [sym_enum_declaration] = REDUCE(sym_struct_declaration, 2),
        [sym_enum_type] = REDUCE(sym_struct_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_struct_declaration, 2),
        [sym_identifier] = REDUCE(sym_struct_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_struct_declaration, 2),
    },
    [516] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(521),
        [aux_sym_STR_SEMI] = SHIFT(522),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_LPAREN] = SHIFT(523),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [517] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_type_expression, 1),
    },
    [518] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(521),
        [aux_sym_STR_SEMI] = SHIFT(522),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [519] = {
        [sym_type_expression] = SHIFT(520),
        [sym_pointer_type] = SHIFT(517),
        [sym_identifier] = SHIFT(517),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(519),
    },
    [520] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_pointer_type, 2),
    },
    [521] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(429),
    },
    [522] = {
        [sym_preproc_include] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_define] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_call] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_ifdef] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_ifndef] = REDUCE(sym_var_declaration, 3),
        [sym_typedef] = REDUCE(sym_var_declaration, 3),
        [sym_var_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_function_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_type] = REDUCE(sym_var_declaration, 3),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 3),
        [sym_struct_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_struct_type] = REDUCE(sym_var_declaration, 3),
        [sym_union_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_union_type] = REDUCE(sym_var_declaration, 3),
        [sym_enum_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_enum_type] = REDUCE(sym_var_declaration, 3),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 3),
        [sym_identifier] = REDUCE(sym_var_declaration, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 3),
    },
    [523] = {
        [sym_type] = SHIFT(524),
        [sym_primitive_type] = SHIFT(84),
        [sym_formal_parameters] = SHIFT(525),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(526),
        [ts_builtin_sym_error] = SHIFT(527),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 0),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [524] = {
        [sym_type_expression] = SHIFT(815),
        [sym_pointer_type] = SHIFT(816),
        [sym_identifier] = SHIFT(816),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(817),
    },
    [525] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(532),
    },
    [526] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = SHIFT(528),
        [aux_sym_STR_COMMA] = SHIFT(529),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 1),
    },
    [527] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 1),
    },
    [528] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 2),
    },
    [529] = {
        [sym_type] = SHIFT(524),
        [sym_primitive_type] = SHIFT(84),
        [sym_struct_type] = SHIFT(84),
        [sym_union_type] = SHIFT(84),
        [sym_enum_type] = SHIFT(84),
        [sym_field] = SHIFT(530),
        [sym_identifier] = SHIFT(87),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(88),
        [aux_sym_STR_const] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(91),
        [aux_sym_STR_union] = SHIFT(92),
        [aux_sym_STR_enum] = SHIFT(93),
    },
    [530] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = SHIFT(531),
        [aux_sym_STR_COMMA] = SHIFT(529),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_formal_parameters_repeat0, 2),
    },
    [531] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_formal_parameters_repeat0, 3),
    },
    [532] = {
        [sym_statement_block] = SHIFT(533),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(533),
        [aux_sym_STR_LBRACE] = SHIFT(534),
    },
    [533] = {
        [sym_preproc_include] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_define] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_call] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_ifdef] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_ifndef] = REDUCE(sym_function_declaration, 6),
        [sym_typedef] = REDUCE(sym_function_declaration, 6),
        [sym_var_declaration] = REDUCE(sym_function_declaration, 6),
        [sym_function_declaration] = REDUCE(sym_function_declaration, 6),
        [sym_type] = REDUCE(sym_function_declaration, 6),
        [sym_primitive_type] = REDUCE(sym_function_declaration, 6),
        [sym_struct_declaration] = REDUCE(sym_function_declaration, 6),
        [sym_struct_type] = REDUCE(sym_function_declaration, 6),
        [sym_union_declaration] = REDUCE(sym_function_declaration, 6),
        [sym_union_type] = REDUCE(sym_function_declaration, 6),
        [sym_enum_declaration] = REDUCE(sym_function_declaration, 6),
        [sym_enum_type] = REDUCE(sym_function_declaration, 6),
        [ts_builtin_sym_end] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_else] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_endif] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_directive] = REDUCE(sym_function_declaration, 6),
        [sym_identifier] = REDUCE(sym_function_declaration, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_typedef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_static] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_extern] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_const] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_unsigned] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_short] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_long] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_struct] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_union] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_enum] = REDUCE(sym_function_declaration, 6),
    },
    [534] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(536),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(541),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_statement_block_repeat0] = SHIFT(541),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_RBRACE] = SHIFT(546),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [535] = {
        [sym_var_declaration] = REDUCE(sym_statement, 1),
        [sym_statement_block] = REDUCE(sym_statement, 1),
        [sym_statement] = REDUCE(sym_statement, 1),
        [sym_return_statement] = REDUCE(sym_statement, 1),
        [sym_expression_statement] = REDUCE(sym_statement, 1),
        [sym_if_statement] = REDUCE(sym_statement, 1),
        [sym_for_statement] = REDUCE(sym_statement, 1),
        [sym_while_statement] = REDUCE(sym_statement, 1),
        [sym_type] = REDUCE(sym_statement, 1),
        [sym_primitive_type] = REDUCE(sym_statement, 1),
        [sym_struct_type] = REDUCE(sym_statement, 1),
        [sym_union_type] = REDUCE(sym_statement, 1),
        [sym_enum_type] = REDUCE(sym_statement, 1),
        [sym_expression] = REDUCE(sym_statement, 1),
        [sym_deref] = REDUCE(sym_statement, 1),
        [sym_address_of] = REDUCE(sym_statement, 1),
        [sym_field_access] = REDUCE(sym_statement, 1),
        [sym_deref_field_access] = REDUCE(sym_statement, 1),
        [sym_function_call] = REDUCE(sym_statement, 1),
        [sym_math_op] = REDUCE(sym_statement, 1),
        [sym_bool_op] = REDUCE(sym_statement, 1),
        [sym_rel_op] = REDUCE(sym_statement, 1),
        [sym_assignment] = REDUCE(sym_statement, 1),
        [sym_compound_literal] = REDUCE(sym_statement, 1),
        [sym_number] = REDUCE(sym_statement, 1),
        [sym_char] = REDUCE(sym_statement, 1),
        [sym_string] = REDUCE(sym_statement, 1),
        [sym_identifier] = REDUCE(sym_statement, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_STR_static] = REDUCE(sym_statement, 1),
        [aux_sym_STR_extern] = REDUCE(sym_statement, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement, 1),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement, 1),
        [aux_sym_STR_return] = REDUCE(sym_statement, 1),
        [aux_sym_STR_if] = REDUCE(sym_statement, 1),
        [aux_sym_STR_for] = REDUCE(sym_statement, 1),
        [aux_sym_STR_while] = REDUCE(sym_statement, 1),
        [aux_sym_STR_const] = REDUCE(sym_statement, 1),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement, 1),
        [aux_sym_STR_short] = REDUCE(sym_statement, 1),
        [aux_sym_STR_long] = REDUCE(sym_statement, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_statement, 1),
        [aux_sym_STR_struct] = REDUCE(sym_statement, 1),
        [aux_sym_STR_union] = REDUCE(sym_statement, 1),
        [aux_sym_STR_enum] = REDUCE(sym_statement, 1),
        [aux_sym_STR_AMP] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_BANG] = REDUCE(sym_statement, 1),
    },
    [536] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(536),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_statement_block_repeat0] = SHIFT(814),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_statement_block_repeat0, 1),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [537] = {
        [sym_type_expression] = SHIFT(810),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(811),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [538] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(809),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [539] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(806),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [540] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [541] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(808),
    },
    [542] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_var_assignment] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [aux_sym_STR_EQ] = SHIFT(806),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_expression, 1),
    },
    [543] = {
        [sym_type] = SHIFT(800),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
    },
    [544] = {
        [sym_type] = SHIFT(787),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [545] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(536),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(784),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_statement_block_repeat0] = SHIFT(784),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_RBRACE] = SHIFT(785),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [546] = {
        [sym_preproc_include] = REDUCE(sym_statement_block, 2),
        [sym_preproc_define] = REDUCE(sym_statement_block, 2),
        [sym_preproc_call] = REDUCE(sym_statement_block, 2),
        [sym_preproc_ifdef] = REDUCE(sym_statement_block, 2),
        [sym_preproc_ifndef] = REDUCE(sym_statement_block, 2),
        [sym_typedef] = REDUCE(sym_statement_block, 2),
        [sym_var_declaration] = REDUCE(sym_statement_block, 2),
        [sym_function_declaration] = REDUCE(sym_statement_block, 2),
        [sym_type] = REDUCE(sym_statement_block, 2),
        [sym_primitive_type] = REDUCE(sym_statement_block, 2),
        [sym_struct_declaration] = REDUCE(sym_statement_block, 2),
        [sym_struct_type] = REDUCE(sym_statement_block, 2),
        [sym_union_declaration] = REDUCE(sym_statement_block, 2),
        [sym_union_type] = REDUCE(sym_statement_block, 2),
        [sym_enum_declaration] = REDUCE(sym_statement_block, 2),
        [sym_enum_type] = REDUCE(sym_statement_block, 2),
        [ts_builtin_sym_end] = REDUCE(sym_statement_block, 2),
        [sym_preproc_else] = REDUCE(sym_statement_block, 2),
        [sym_preproc_endif] = REDUCE(sym_statement_block, 2),
        [sym_preproc_directive] = REDUCE(sym_statement_block, 2),
        [sym_identifier] = REDUCE(sym_statement_block, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 2),
    },
    [547] = {
        [sym_expression] = SHIFT(782),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [548] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(719),
    },
    [549] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(666),
    },
    [550] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(587),
    },
    [551] = {
        [sym_expression] = SHIFT(561),
        [sym_deref] = SHIFT(562),
        [sym_address_of] = SHIFT(563),
        [sym_field_access] = SHIFT(562),
        [sym_deref_field_access] = SHIFT(562),
        [sym_function_call] = SHIFT(563),
        [sym_math_op] = SHIFT(563),
        [sym_bool_op] = SHIFT(563),
        [sym_rel_op] = SHIFT(563),
        [sym_assignment] = SHIFT(563),
        [sym_compound_literal] = SHIFT(563),
        [sym_number] = SHIFT(563),
        [sym_char] = SHIFT(563),
        [sym_string] = SHIFT(563),
        [sym_identifier] = SHIFT(562),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(564),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(565),
        [aux_sym_STR_DASH] = SHIFT(566),
        [aux_sym_STR_BANG] = SHIFT(567),
    },
    [552] = {
        [sym_expression] = SHIFT(560),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [553] = {
        [sym_expression] = SHIFT(559),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [554] = {
        [sym_expression] = SHIFT(555),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [555] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [556] = {
        [sym_expression] = SHIFT(558),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [557] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [558] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [559] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [560] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [561] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [562] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [563] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [564] = {
        [sym_type] = SHIFT(574),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [565] = {
        [sym_expression] = SHIFT(573),
        [sym_deref] = SHIFT(562),
        [sym_address_of] = SHIFT(563),
        [sym_field_access] = SHIFT(562),
        [sym_deref_field_access] = SHIFT(562),
        [sym_function_call] = SHIFT(563),
        [sym_math_op] = SHIFT(563),
        [sym_bool_op] = SHIFT(563),
        [sym_rel_op] = SHIFT(563),
        [sym_assignment] = SHIFT(563),
        [sym_compound_literal] = SHIFT(563),
        [sym_number] = SHIFT(563),
        [sym_char] = SHIFT(563),
        [sym_string] = SHIFT(563),
        [sym_identifier] = SHIFT(562),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(564),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(565),
        [aux_sym_STR_DASH] = SHIFT(566),
        [aux_sym_STR_BANG] = SHIFT(567),
    },
    [566] = {
        [sym_expression] = SHIFT(572),
        [sym_deref] = SHIFT(562),
        [sym_address_of] = SHIFT(563),
        [sym_field_access] = SHIFT(562),
        [sym_deref_field_access] = SHIFT(562),
        [sym_function_call] = SHIFT(563),
        [sym_math_op] = SHIFT(563),
        [sym_bool_op] = SHIFT(563),
        [sym_rel_op] = SHIFT(563),
        [sym_assignment] = SHIFT(563),
        [sym_compound_literal] = SHIFT(563),
        [sym_number] = SHIFT(563),
        [sym_char] = SHIFT(563),
        [sym_string] = SHIFT(563),
        [sym_identifier] = SHIFT(562),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(564),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(565),
        [aux_sym_STR_DASH] = SHIFT(566),
        [aux_sym_STR_BANG] = SHIFT(567),
    },
    [567] = {
        [sym_expression] = SHIFT(568),
        [sym_deref] = SHIFT(562),
        [sym_address_of] = SHIFT(563),
        [sym_field_access] = SHIFT(562),
        [sym_deref_field_access] = SHIFT(562),
        [sym_function_call] = SHIFT(563),
        [sym_math_op] = SHIFT(563),
        [sym_bool_op] = SHIFT(563),
        [sym_rel_op] = SHIFT(563),
        [sym_assignment] = SHIFT(563),
        [sym_compound_literal] = SHIFT(563),
        [sym_number] = SHIFT(563),
        [sym_char] = SHIFT(563),
        [sym_string] = SHIFT(563),
        [sym_identifier] = SHIFT(562),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(564),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(565),
        [aux_sym_STR_DASH] = SHIFT(566),
        [aux_sym_STR_BANG] = SHIFT(567),
    },
    [568] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(569),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(570),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [569] = {
        [sym_expression] = SHIFT(571),
        [sym_deref] = SHIFT(562),
        [sym_address_of] = SHIFT(563),
        [sym_field_access] = SHIFT(562),
        [sym_deref_field_access] = SHIFT(562),
        [sym_function_call] = SHIFT(563),
        [sym_math_op] = SHIFT(563),
        [sym_bool_op] = SHIFT(563),
        [sym_rel_op] = SHIFT(563),
        [sym_assignment] = SHIFT(563),
        [sym_compound_literal] = SHIFT(563),
        [sym_number] = SHIFT(563),
        [sym_char] = SHIFT(563),
        [sym_string] = SHIFT(563),
        [sym_identifier] = SHIFT(562),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(564),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(565),
        [aux_sym_STR_DASH] = SHIFT(566),
        [aux_sym_STR_BANG] = SHIFT(567),
    },
    [570] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [571] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(569),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(570),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [572] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(570),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [573] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [574] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(575),
    },
    [575] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(576),
    },
    [576] = {
        [sym_expression] = SHIFT(577),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(578),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(579),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(580),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [577] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(582),
        [aux_sym_STR_COMMA] = SHIFT(583),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(581),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [578] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(582),
        [aux_sym_STR_COMMA] = SHIFT(583),
        [aux_sym_STR_RBRACE] = SHIFT(581),
    },
    [579] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(581),
    },
    [580] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [581] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [582] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(585),
        [aux_sym_STR_RBRACE] = SHIFT(584),
    },
    [583] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(584),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [584] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [585] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(586),
    },
    [586] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [587] = {
        [sym_expression] = SHIFT(588),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [588] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(664),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [589] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(641),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [590] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [591] = {
        [sym_type] = SHIFT(628),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [592] = {
        [sym_expression] = SHIFT(602),
        [sym_deref] = SHIFT(603),
        [sym_address_of] = SHIFT(604),
        [sym_field_access] = SHIFT(603),
        [sym_deref_field_access] = SHIFT(603),
        [sym_function_call] = SHIFT(604),
        [sym_math_op] = SHIFT(604),
        [sym_bool_op] = SHIFT(604),
        [sym_rel_op] = SHIFT(604),
        [sym_assignment] = SHIFT(604),
        [sym_compound_literal] = SHIFT(604),
        [sym_number] = SHIFT(604),
        [sym_char] = SHIFT(604),
        [sym_string] = SHIFT(604),
        [sym_identifier] = SHIFT(603),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(605),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(606),
        [aux_sym_STR_DASH] = SHIFT(607),
        [aux_sym_STR_BANG] = SHIFT(608),
    },
    [593] = {
        [sym_expression] = SHIFT(601),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [594] = {
        [sym_expression] = SHIFT(600),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [595] = {
        [sym_expression] = SHIFT(596),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [596] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [597] = {
        [sym_expression] = SHIFT(599),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [598] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [599] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [600] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [601] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [602] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_GT] = REDUCE(sym_deref, 2),
    },
    [603] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [604] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SLASH] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_GT] = REDUCE(sym_expression, 1),
    },
    [605] = {
        [sym_type] = SHIFT(615),
        [sym_primitive_type] = SHIFT(59),
        [sym_struct_type] = SHIFT(59),
        [sym_union_type] = SHIFT(59),
        [sym_enum_type] = SHIFT(59),
        [sym_identifier] = SHIFT(60),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(61),
        [aux_sym_STR_const] = SHIFT(62),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(63),
        [aux_sym_STR_union] = SHIFT(64),
        [aux_sym_STR_enum] = SHIFT(65),
    },
    [606] = {
        [sym_expression] = SHIFT(614),
        [sym_deref] = SHIFT(603),
        [sym_address_of] = SHIFT(604),
        [sym_field_access] = SHIFT(603),
        [sym_deref_field_access] = SHIFT(603),
        [sym_function_call] = SHIFT(604),
        [sym_math_op] = SHIFT(604),
        [sym_bool_op] = SHIFT(604),
        [sym_rel_op] = SHIFT(604),
        [sym_assignment] = SHIFT(604),
        [sym_compound_literal] = SHIFT(604),
        [sym_number] = SHIFT(604),
        [sym_char] = SHIFT(604),
        [sym_string] = SHIFT(604),
        [sym_identifier] = SHIFT(603),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(605),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(606),
        [aux_sym_STR_DASH] = SHIFT(607),
        [aux_sym_STR_BANG] = SHIFT(608),
    },
    [607] = {
        [sym_expression] = SHIFT(613),
        [sym_deref] = SHIFT(603),
        [sym_address_of] = SHIFT(604),
        [sym_field_access] = SHIFT(603),
        [sym_deref_field_access] = SHIFT(603),
        [sym_function_call] = SHIFT(604),
        [sym_math_op] = SHIFT(604),
        [sym_bool_op] = SHIFT(604),
        [sym_rel_op] = SHIFT(604),
        [sym_assignment] = SHIFT(604),
        [sym_compound_literal] = SHIFT(604),
        [sym_number] = SHIFT(604),
        [sym_char] = SHIFT(604),
        [sym_string] = SHIFT(604),
        [sym_identifier] = SHIFT(603),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(605),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(606),
        [aux_sym_STR_DASH] = SHIFT(607),
        [aux_sym_STR_BANG] = SHIFT(608),
    },
    [608] = {
        [sym_expression] = SHIFT(609),
        [sym_deref] = SHIFT(603),
        [sym_address_of] = SHIFT(604),
        [sym_field_access] = SHIFT(603),
        [sym_deref_field_access] = SHIFT(603),
        [sym_function_call] = SHIFT(604),
        [sym_math_op] = SHIFT(604),
        [sym_bool_op] = SHIFT(604),
        [sym_rel_op] = SHIFT(604),
        [sym_assignment] = SHIFT(604),
        [sym_compound_literal] = SHIFT(604),
        [sym_number] = SHIFT(604),
        [sym_char] = SHIFT(604),
        [sym_string] = SHIFT(604),
        [sym_identifier] = SHIFT(603),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(605),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(606),
        [aux_sym_STR_DASH] = SHIFT(607),
        [aux_sym_STR_BANG] = SHIFT(608),
    },
    [609] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(610),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(611),
        [aux_sym_STR_DASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_bool_op, 2),
    },
    [610] = {
        [sym_expression] = SHIFT(612),
        [sym_deref] = SHIFT(603),
        [sym_address_of] = SHIFT(604),
        [sym_field_access] = SHIFT(603),
        [sym_deref_field_access] = SHIFT(603),
        [sym_function_call] = SHIFT(604),
        [sym_math_op] = SHIFT(604),
        [sym_bool_op] = SHIFT(604),
        [sym_rel_op] = SHIFT(604),
        [sym_assignment] = SHIFT(604),
        [sym_compound_literal] = SHIFT(604),
        [sym_number] = SHIFT(604),
        [sym_char] = SHIFT(604),
        [sym_string] = SHIFT(604),
        [sym_identifier] = SHIFT(603),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(605),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(606),
        [aux_sym_STR_DASH] = SHIFT(607),
        [aux_sym_STR_BANG] = SHIFT(608),
    },
    [611] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE(sym_math_op, 2),
    },
    [612] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(610),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(611),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [613] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(611),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SLASH] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 2),
    },
    [614] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SLASH] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_GT] = REDUCE(sym_address_of, 2),
    },
    [615] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(616),
    },
    [616] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(617),
    },
    [617] = {
        [sym_expression] = SHIFT(618),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(619),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(620),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(621),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [618] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(623),
        [aux_sym_STR_COMMA] = SHIFT(624),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(622),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [619] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(623),
        [aux_sym_STR_COMMA] = SHIFT(624),
        [aux_sym_STR_RBRACE] = SHIFT(622),
    },
    [620] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(622),
    },
    [621] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [622] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [623] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(626),
        [aux_sym_STR_RBRACE] = SHIFT(625),
    },
    [624] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(625),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [625] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [626] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(627),
    },
    [627] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [628] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(629),
    },
    [629] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(630),
    },
    [630] = {
        [sym_expression] = SHIFT(631),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(632),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(633),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(634),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [631] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(636),
        [aux_sym_STR_COMMA] = SHIFT(637),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(635),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [632] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(636),
        [aux_sym_STR_COMMA] = SHIFT(637),
        [aux_sym_STR_RBRACE] = SHIFT(635),
    },
    [633] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(635),
    },
    [634] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [635] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [636] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(639),
        [aux_sym_STR_RBRACE] = SHIFT(638),
    },
    [637] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(638),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [638] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [639] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(640),
    },
    [640] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [641] = {
        [sym_expression] = SHIFT(642),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [642] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [643] = {
        [sym_expression] = SHIFT(658),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(659),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(660),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [644] = {
        [sym_identifier] = SHIFT(657),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [645] = {
        [sym_identifier] = SHIFT(656),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [646] = {
        [sym_expression] = SHIFT(655),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [647] = {
        [sym_expression] = SHIFT(654),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [648] = {
        [sym_expression] = SHIFT(653),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [649] = {
        [sym_expression] = SHIFT(652),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [650] = {
        [sym_expression] = SHIFT(651),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [651] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [652] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [653] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [654] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [655] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [656] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [657] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [658] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(662),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(661),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [659] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(661),
    },
    [660] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [661] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [662] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(663),
    },
    [663] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [664] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(665),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [665] = {
        [sym_var_declaration] = REDUCE(sym_while_statement, 5),
        [sym_statement_block] = REDUCE(sym_while_statement, 5),
        [sym_statement] = REDUCE(sym_while_statement, 5),
        [sym_return_statement] = REDUCE(sym_while_statement, 5),
        [sym_expression_statement] = REDUCE(sym_while_statement, 5),
        [sym_if_statement] = REDUCE(sym_while_statement, 5),
        [sym_for_statement] = REDUCE(sym_while_statement, 5),
        [sym_while_statement] = REDUCE(sym_while_statement, 5),
        [sym_type] = REDUCE(sym_while_statement, 5),
        [sym_primitive_type] = REDUCE(sym_while_statement, 5),
        [sym_struct_type] = REDUCE(sym_while_statement, 5),
        [sym_union_type] = REDUCE(sym_while_statement, 5),
        [sym_enum_type] = REDUCE(sym_while_statement, 5),
        [sym_expression] = REDUCE(sym_while_statement, 5),
        [sym_deref] = REDUCE(sym_while_statement, 5),
        [sym_address_of] = REDUCE(sym_while_statement, 5),
        [sym_field_access] = REDUCE(sym_while_statement, 5),
        [sym_deref_field_access] = REDUCE(sym_while_statement, 5),
        [sym_function_call] = REDUCE(sym_while_statement, 5),
        [sym_math_op] = REDUCE(sym_while_statement, 5),
        [sym_bool_op] = REDUCE(sym_while_statement, 5),
        [sym_rel_op] = REDUCE(sym_while_statement, 5),
        [sym_assignment] = REDUCE(sym_while_statement, 5),
        [sym_compound_literal] = REDUCE(sym_while_statement, 5),
        [sym_number] = REDUCE(sym_while_statement, 5),
        [sym_char] = REDUCE(sym_while_statement, 5),
        [sym_string] = REDUCE(sym_while_statement, 5),
        [sym_identifier] = REDUCE(sym_while_statement, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_static] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_extern] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_return] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_if] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_for] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_while] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_const] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_short] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_long] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_struct] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_union] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_enum] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_while_statement, 5),
    },
    [666] = {
        [sym_var_declaration] = SHIFT(667),
        [sym_type] = SHIFT(668),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(669),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(670),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_SEMI] = SHIFT(667),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [667] = {
        [sym_expression] = SHIFT(714),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(715),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [668] = {
        [sym_type_expression] = SHIFT(710),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(711),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [669] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(677),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [670] = {
        [sym_type] = SHIFT(671),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
    },
    [671] = {
        [sym_type_expression] = SHIFT(672),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(673),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [672] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(674),
        [aux_sym_STR_SEMI] = SHIFT(675),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [673] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(674),
        [aux_sym_STR_SEMI] = SHIFT(675),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [674] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(676),
    },
    [675] = {
        [sym_expression] = REDUCE(sym_var_declaration, 4),
        [sym_deref] = REDUCE(sym_var_declaration, 4),
        [sym_address_of] = REDUCE(sym_var_declaration, 4),
        [sym_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_function_call] = REDUCE(sym_var_declaration, 4),
        [sym_math_op] = REDUCE(sym_var_declaration, 4),
        [sym_bool_op] = REDUCE(sym_var_declaration, 4),
        [sym_rel_op] = REDUCE(sym_var_declaration, 4),
        [sym_assignment] = REDUCE(sym_var_declaration, 4),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 4),
        [sym_number] = REDUCE(sym_var_declaration, 4),
        [sym_char] = REDUCE(sym_var_declaration, 4),
        [sym_string] = REDUCE(sym_var_declaration, 4),
        [sym_identifier] = REDUCE(sym_var_declaration, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [676] = {
        [sym_expression] = REDUCE(sym_var_declaration, 5),
        [sym_deref] = REDUCE(sym_var_declaration, 5),
        [sym_address_of] = REDUCE(sym_var_declaration, 5),
        [sym_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_function_call] = REDUCE(sym_var_declaration, 5),
        [sym_math_op] = REDUCE(sym_var_declaration, 5),
        [sym_bool_op] = REDUCE(sym_var_declaration, 5),
        [sym_rel_op] = REDUCE(sym_var_declaration, 5),
        [sym_assignment] = REDUCE(sym_var_declaration, 5),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 5),
        [sym_number] = REDUCE(sym_var_declaration, 5),
        [sym_char] = REDUCE(sym_var_declaration, 5),
        [sym_string] = REDUCE(sym_var_declaration, 5),
        [sym_identifier] = REDUCE(sym_var_declaration, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [677] = {
        [sym_expression] = SHIFT(699),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(700),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [678] = {
        [sym_expression] = SHIFT(693),
        [sym_deref] = SHIFT(185),
        [sym_address_of] = SHIFT(186),
        [sym_field_access] = SHIFT(185),
        [sym_deref_field_access] = SHIFT(185),
        [sym_function_call] = SHIFT(186),
        [sym_math_op] = SHIFT(186),
        [sym_bool_op] = SHIFT(186),
        [sym_rel_op] = SHIFT(186),
        [sym_assignment] = SHIFT(186),
        [sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(694),
        [sym_number] = SHIFT(186),
        [sym_char] = SHIFT(186),
        [sym_string] = SHIFT(186),
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(188),
        [aux_sym_STR_RPAREN] = SHIFT(695),
        [aux_sym_STR_STAR] = SHIFT(190),
        [aux_sym_STR_AMP] = SHIFT(191),
        [aux_sym_STR_DASH] = SHIFT(192),
        [aux_sym_STR_BANG] = SHIFT(193),
    },
    [679] = {
        [sym_identifier] = SHIFT(692),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [680] = {
        [sym_identifier] = SHIFT(691),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [681] = {
        [sym_expression] = SHIFT(690),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [682] = {
        [sym_expression] = SHIFT(689),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [683] = {
        [sym_expression] = SHIFT(688),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [684] = {
        [sym_expression] = SHIFT(687),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [685] = {
        [sym_expression] = SHIFT(686),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [686] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [687] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [688] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [689] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [690] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [691] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_deref_field_access, 3),
    },
    [692] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_GT] = REDUCE(sym_field_access, 3),
    },
    [693] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(697),
        [aux_sym_STR_COMMA] = SHIFT(266),
        [aux_sym_STR_LPAREN] = SHIFT(246),
        [aux_sym_STR_RPAREN] = SHIFT(696),
        [aux_sym_STR_STAR] = SHIFT(195),
        [aux_sym_STR_DOT] = SHIFT(247),
        [aux_sym_STR_DASH_GT] = SHIFT(248),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(196),
        [aux_sym_STR_DASH] = SHIFT(249),
        [aux_sym_STR_SLASH] = SHIFT(250),
        [aux_sym_STR_PLUS] = SHIFT(249),
        [aux_sym_STR_AMP_AMP] = SHIFT(251),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(252),
        [aux_sym_STR_LT] = SHIFT(253),
        [aux_sym_STR_LT_EQ] = SHIFT(253),
        [aux_sym_STR_EQ_EQ] = SHIFT(253),
        [aux_sym_STR_BANG_EQ] = SHIFT(253),
        [aux_sym_STR_GT_EQ] = SHIFT(253),
        [aux_sym_STR_GT] = SHIFT(253),
    },
    [694] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(696),
    },
    [695] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 3),
    },
    [696] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 4),
    },
    [697] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(698),
    },
    [698] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_GT] = REDUCE(sym_function_call, 5),
    },
    [699] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(706),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [700] = {
        [sym_expression] = SHIFT(701),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(702),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [701] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(704),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [702] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(703),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [703] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 7),
        [sym_statement_block] = REDUCE(sym_for_statement, 7),
        [sym_statement] = REDUCE(sym_for_statement, 7),
        [sym_return_statement] = REDUCE(sym_for_statement, 7),
        [sym_expression_statement] = REDUCE(sym_for_statement, 7),
        [sym_if_statement] = REDUCE(sym_for_statement, 7),
        [sym_for_statement] = REDUCE(sym_for_statement, 7),
        [sym_while_statement] = REDUCE(sym_for_statement, 7),
        [sym_type] = REDUCE(sym_for_statement, 7),
        [sym_primitive_type] = REDUCE(sym_for_statement, 7),
        [sym_struct_type] = REDUCE(sym_for_statement, 7),
        [sym_union_type] = REDUCE(sym_for_statement, 7),
        [sym_enum_type] = REDUCE(sym_for_statement, 7),
        [sym_expression] = REDUCE(sym_for_statement, 7),
        [sym_deref] = REDUCE(sym_for_statement, 7),
        [sym_address_of] = REDUCE(sym_for_statement, 7),
        [sym_field_access] = REDUCE(sym_for_statement, 7),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 7),
        [sym_function_call] = REDUCE(sym_for_statement, 7),
        [sym_math_op] = REDUCE(sym_for_statement, 7),
        [sym_bool_op] = REDUCE(sym_for_statement, 7),
        [sym_rel_op] = REDUCE(sym_for_statement, 7),
        [sym_assignment] = REDUCE(sym_for_statement, 7),
        [sym_compound_literal] = REDUCE(sym_for_statement, 7),
        [sym_number] = REDUCE(sym_for_statement, 7),
        [sym_char] = REDUCE(sym_for_statement, 7),
        [sym_string] = REDUCE(sym_for_statement, 7),
        [sym_identifier] = REDUCE(sym_for_statement, 7),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 7),
    },
    [704] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(705),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [705] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 8),
        [sym_statement_block] = REDUCE(sym_for_statement, 8),
        [sym_statement] = REDUCE(sym_for_statement, 8),
        [sym_return_statement] = REDUCE(sym_for_statement, 8),
        [sym_expression_statement] = REDUCE(sym_for_statement, 8),
        [sym_if_statement] = REDUCE(sym_for_statement, 8),
        [sym_for_statement] = REDUCE(sym_for_statement, 8),
        [sym_while_statement] = REDUCE(sym_for_statement, 8),
        [sym_type] = REDUCE(sym_for_statement, 8),
        [sym_primitive_type] = REDUCE(sym_for_statement, 8),
        [sym_struct_type] = REDUCE(sym_for_statement, 8),
        [sym_union_type] = REDUCE(sym_for_statement, 8),
        [sym_enum_type] = REDUCE(sym_for_statement, 8),
        [sym_expression] = REDUCE(sym_for_statement, 8),
        [sym_deref] = REDUCE(sym_for_statement, 8),
        [sym_address_of] = REDUCE(sym_for_statement, 8),
        [sym_field_access] = REDUCE(sym_for_statement, 8),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 8),
        [sym_function_call] = REDUCE(sym_for_statement, 8),
        [sym_math_op] = REDUCE(sym_for_statement, 8),
        [sym_bool_op] = REDUCE(sym_for_statement, 8),
        [sym_rel_op] = REDUCE(sym_for_statement, 8),
        [sym_assignment] = REDUCE(sym_for_statement, 8),
        [sym_compound_literal] = REDUCE(sym_for_statement, 8),
        [sym_number] = REDUCE(sym_for_statement, 8),
        [sym_char] = REDUCE(sym_for_statement, 8),
        [sym_string] = REDUCE(sym_for_statement, 8),
        [sym_identifier] = REDUCE(sym_for_statement, 8),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 8),
    },
    [706] = {
        [sym_expression] = SHIFT(707),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(704),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [707] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(708),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [708] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(709),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [709] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 9),
        [sym_statement_block] = REDUCE(sym_for_statement, 9),
        [sym_statement] = REDUCE(sym_for_statement, 9),
        [sym_return_statement] = REDUCE(sym_for_statement, 9),
        [sym_expression_statement] = REDUCE(sym_for_statement, 9),
        [sym_if_statement] = REDUCE(sym_for_statement, 9),
        [sym_for_statement] = REDUCE(sym_for_statement, 9),
        [sym_while_statement] = REDUCE(sym_for_statement, 9),
        [sym_type] = REDUCE(sym_for_statement, 9),
        [sym_primitive_type] = REDUCE(sym_for_statement, 9),
        [sym_struct_type] = REDUCE(sym_for_statement, 9),
        [sym_union_type] = REDUCE(sym_for_statement, 9),
        [sym_enum_type] = REDUCE(sym_for_statement, 9),
        [sym_expression] = REDUCE(sym_for_statement, 9),
        [sym_deref] = REDUCE(sym_for_statement, 9),
        [sym_address_of] = REDUCE(sym_for_statement, 9),
        [sym_field_access] = REDUCE(sym_for_statement, 9),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 9),
        [sym_function_call] = REDUCE(sym_for_statement, 9),
        [sym_math_op] = REDUCE(sym_for_statement, 9),
        [sym_bool_op] = REDUCE(sym_for_statement, 9),
        [sym_rel_op] = REDUCE(sym_for_statement, 9),
        [sym_assignment] = REDUCE(sym_for_statement, 9),
        [sym_compound_literal] = REDUCE(sym_for_statement, 9),
        [sym_number] = REDUCE(sym_for_statement, 9),
        [sym_char] = REDUCE(sym_for_statement, 9),
        [sym_string] = REDUCE(sym_for_statement, 9),
        [sym_identifier] = REDUCE(sym_for_statement, 9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 9),
    },
    [710] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(712),
        [aux_sym_STR_SEMI] = SHIFT(713),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [711] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(712),
        [aux_sym_STR_SEMI] = SHIFT(713),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [712] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(675),
    },
    [713] = {
        [sym_expression] = REDUCE(sym_var_declaration, 3),
        [sym_deref] = REDUCE(sym_var_declaration, 3),
        [sym_address_of] = REDUCE(sym_var_declaration, 3),
        [sym_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_function_call] = REDUCE(sym_var_declaration, 3),
        [sym_math_op] = REDUCE(sym_var_declaration, 3),
        [sym_bool_op] = REDUCE(sym_var_declaration, 3),
        [sym_rel_op] = REDUCE(sym_var_declaration, 3),
        [sym_assignment] = REDUCE(sym_var_declaration, 3),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 3),
        [sym_number] = REDUCE(sym_var_declaration, 3),
        [sym_char] = REDUCE(sym_var_declaration, 3),
        [sym_string] = REDUCE(sym_var_declaration, 3),
        [sym_identifier] = REDUCE(sym_var_declaration, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [714] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(700),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [715] = {
        [sym_expression] = SHIFT(716),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(717),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [716] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(702),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [717] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(718),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [718] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 6),
        [sym_statement_block] = REDUCE(sym_for_statement, 6),
        [sym_statement] = REDUCE(sym_for_statement, 6),
        [sym_return_statement] = REDUCE(sym_for_statement, 6),
        [sym_expression_statement] = REDUCE(sym_for_statement, 6),
        [sym_if_statement] = REDUCE(sym_for_statement, 6),
        [sym_for_statement] = REDUCE(sym_for_statement, 6),
        [sym_while_statement] = REDUCE(sym_for_statement, 6),
        [sym_type] = REDUCE(sym_for_statement, 6),
        [sym_primitive_type] = REDUCE(sym_for_statement, 6),
        [sym_struct_type] = REDUCE(sym_for_statement, 6),
        [sym_union_type] = REDUCE(sym_for_statement, 6),
        [sym_enum_type] = REDUCE(sym_for_statement, 6),
        [sym_expression] = REDUCE(sym_for_statement, 6),
        [sym_deref] = REDUCE(sym_for_statement, 6),
        [sym_address_of] = REDUCE(sym_for_statement, 6),
        [sym_field_access] = REDUCE(sym_for_statement, 6),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 6),
        [sym_function_call] = REDUCE(sym_for_statement, 6),
        [sym_math_op] = REDUCE(sym_for_statement, 6),
        [sym_bool_op] = REDUCE(sym_for_statement, 6),
        [sym_rel_op] = REDUCE(sym_for_statement, 6),
        [sym_assignment] = REDUCE(sym_for_statement, 6),
        [sym_compound_literal] = REDUCE(sym_for_statement, 6),
        [sym_number] = REDUCE(sym_for_statement, 6),
        [sym_char] = REDUCE(sym_for_statement, 6),
        [sym_string] = REDUCE(sym_for_statement, 6),
        [sym_identifier] = REDUCE(sym_for_statement, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 6),
    },
    [719] = {
        [sym_expression] = SHIFT(720),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [ts_builtin_sym_error] = SHIFT(721),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [720] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(722),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [721] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(722),
    },
    [722] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(724),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [723] = {
        [sym_var_declaration] = REDUCE(sym_statement, 1),
        [sym_statement_block] = REDUCE(sym_statement, 1),
        [sym_statement] = REDUCE(sym_statement, 1),
        [sym_return_statement] = REDUCE(sym_statement, 1),
        [sym_expression_statement] = REDUCE(sym_statement, 1),
        [sym_if_statement] = REDUCE(sym_statement, 1),
        [sym_for_statement] = REDUCE(sym_statement, 1),
        [sym_while_statement] = REDUCE(sym_statement, 1),
        [sym_type] = REDUCE(sym_statement, 1),
        [sym_primitive_type] = REDUCE(sym_statement, 1),
        [sym_struct_type] = REDUCE(sym_statement, 1),
        [sym_union_type] = REDUCE(sym_statement, 1),
        [sym_enum_type] = REDUCE(sym_statement, 1),
        [sym_expression] = REDUCE(sym_statement, 1),
        [sym_deref] = REDUCE(sym_statement, 1),
        [sym_address_of] = REDUCE(sym_statement, 1),
        [sym_field_access] = REDUCE(sym_statement, 1),
        [sym_deref_field_access] = REDUCE(sym_statement, 1),
        [sym_function_call] = REDUCE(sym_statement, 1),
        [sym_math_op] = REDUCE(sym_statement, 1),
        [sym_bool_op] = REDUCE(sym_statement, 1),
        [sym_rel_op] = REDUCE(sym_statement, 1),
        [sym_assignment] = REDUCE(sym_statement, 1),
        [sym_compound_literal] = REDUCE(sym_statement, 1),
        [sym_number] = REDUCE(sym_statement, 1),
        [sym_char] = REDUCE(sym_statement, 1),
        [sym_string] = REDUCE(sym_statement, 1),
        [sym_identifier] = REDUCE(sym_statement, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_STR_static] = REDUCE(sym_statement, 1),
        [aux_sym_STR_extern] = REDUCE(sym_statement, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement, 1),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement, 1),
        [aux_sym_STR_return] = REDUCE(sym_statement, 1),
        [aux_sym_STR_if] = REDUCE(sym_statement, 1),
        [aux_sym_STR_else] = REDUCE(sym_statement, 1),
        [aux_sym_STR_for] = REDUCE(sym_statement, 1),
        [aux_sym_STR_while] = REDUCE(sym_statement, 1),
        [aux_sym_STR_const] = REDUCE(sym_statement, 1),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement, 1),
        [aux_sym_STR_short] = REDUCE(sym_statement, 1),
        [aux_sym_STR_long] = REDUCE(sym_statement, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_statement, 1),
        [aux_sym_STR_struct] = REDUCE(sym_statement, 1),
        [aux_sym_STR_union] = REDUCE(sym_statement, 1),
        [aux_sym_STR_enum] = REDUCE(sym_statement, 1),
        [aux_sym_STR_AMP] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_BANG] = REDUCE(sym_statement, 1),
    },
    [724] = {
        [sym_var_declaration] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_statement_block] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_return_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_expression_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_if_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_for_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_while_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_primitive_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_struct_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_union_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_enum_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_expression] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_deref] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_address_of] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_field_access] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_deref_field_access] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_function_call] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_math_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_bool_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_rel_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_assignment] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_compound_literal] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_number] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_char] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_string] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_identifier] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_statement_block_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_static] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_extern] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_return] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_if] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_else] = SHIFT(780),
        [aux_sym_STR_for] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_while] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_const] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_unsigned] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_short] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_long] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_struct] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_union] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_enum] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_AMP] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_BANG] = REDUCE_FRAGILE(sym_if_statement, 5),
    },
    [725] = {
        [sym_type_expression] = SHIFT(776),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(777),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [726] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(775),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [727] = {
        [sym_type] = SHIFT(769),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
    },
    [728] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(536),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(766),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_statement_block_repeat0] = SHIFT(766),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_RBRACE] = SHIFT(767),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [729] = {
        [sym_expression] = SHIFT(764),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [730] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(757),
    },
    [731] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(737),
    },
    [732] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(733),
    },
    [733] = {
        [sym_expression] = SHIFT(734),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [734] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(735),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [735] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(736),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [736] = {
        [sym_var_declaration] = REDUCE(sym_while_statement, 5),
        [sym_statement_block] = REDUCE(sym_while_statement, 5),
        [sym_statement] = REDUCE(sym_while_statement, 5),
        [sym_return_statement] = REDUCE(sym_while_statement, 5),
        [sym_expression_statement] = REDUCE(sym_while_statement, 5),
        [sym_if_statement] = REDUCE(sym_while_statement, 5),
        [sym_for_statement] = REDUCE(sym_while_statement, 5),
        [sym_while_statement] = REDUCE(sym_while_statement, 5),
        [sym_type] = REDUCE(sym_while_statement, 5),
        [sym_primitive_type] = REDUCE(sym_while_statement, 5),
        [sym_struct_type] = REDUCE(sym_while_statement, 5),
        [sym_union_type] = REDUCE(sym_while_statement, 5),
        [sym_enum_type] = REDUCE(sym_while_statement, 5),
        [sym_expression] = REDUCE(sym_while_statement, 5),
        [sym_deref] = REDUCE(sym_while_statement, 5),
        [sym_address_of] = REDUCE(sym_while_statement, 5),
        [sym_field_access] = REDUCE(sym_while_statement, 5),
        [sym_deref_field_access] = REDUCE(sym_while_statement, 5),
        [sym_function_call] = REDUCE(sym_while_statement, 5),
        [sym_math_op] = REDUCE(sym_while_statement, 5),
        [sym_bool_op] = REDUCE(sym_while_statement, 5),
        [sym_rel_op] = REDUCE(sym_while_statement, 5),
        [sym_assignment] = REDUCE(sym_while_statement, 5),
        [sym_compound_literal] = REDUCE(sym_while_statement, 5),
        [sym_number] = REDUCE(sym_while_statement, 5),
        [sym_char] = REDUCE(sym_while_statement, 5),
        [sym_string] = REDUCE(sym_while_statement, 5),
        [sym_identifier] = REDUCE(sym_while_statement, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_static] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_extern] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_return] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_if] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_else] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_for] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_while] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_const] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_short] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_long] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_struct] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_union] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_enum] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_while_statement, 5),
    },
    [737] = {
        [sym_var_declaration] = SHIFT(738),
        [sym_type] = SHIFT(668),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(739),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(670),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_SEMI] = SHIFT(738),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [738] = {
        [sym_expression] = SHIFT(752),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(753),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [739] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(740),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [740] = {
        [sym_expression] = SHIFT(741),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(742),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [741] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(748),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [742] = {
        [sym_expression] = SHIFT(743),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(744),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [743] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(746),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [744] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(745),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [745] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 7),
        [sym_statement_block] = REDUCE(sym_for_statement, 7),
        [sym_statement] = REDUCE(sym_for_statement, 7),
        [sym_return_statement] = REDUCE(sym_for_statement, 7),
        [sym_expression_statement] = REDUCE(sym_for_statement, 7),
        [sym_if_statement] = REDUCE(sym_for_statement, 7),
        [sym_for_statement] = REDUCE(sym_for_statement, 7),
        [sym_while_statement] = REDUCE(sym_for_statement, 7),
        [sym_type] = REDUCE(sym_for_statement, 7),
        [sym_primitive_type] = REDUCE(sym_for_statement, 7),
        [sym_struct_type] = REDUCE(sym_for_statement, 7),
        [sym_union_type] = REDUCE(sym_for_statement, 7),
        [sym_enum_type] = REDUCE(sym_for_statement, 7),
        [sym_expression] = REDUCE(sym_for_statement, 7),
        [sym_deref] = REDUCE(sym_for_statement, 7),
        [sym_address_of] = REDUCE(sym_for_statement, 7),
        [sym_field_access] = REDUCE(sym_for_statement, 7),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 7),
        [sym_function_call] = REDUCE(sym_for_statement, 7),
        [sym_math_op] = REDUCE(sym_for_statement, 7),
        [sym_bool_op] = REDUCE(sym_for_statement, 7),
        [sym_rel_op] = REDUCE(sym_for_statement, 7),
        [sym_assignment] = REDUCE(sym_for_statement, 7),
        [sym_compound_literal] = REDUCE(sym_for_statement, 7),
        [sym_number] = REDUCE(sym_for_statement, 7),
        [sym_char] = REDUCE(sym_for_statement, 7),
        [sym_string] = REDUCE(sym_for_statement, 7),
        [sym_identifier] = REDUCE(sym_for_statement, 7),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_else] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 7),
    },
    [746] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(747),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [747] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 8),
        [sym_statement_block] = REDUCE(sym_for_statement, 8),
        [sym_statement] = REDUCE(sym_for_statement, 8),
        [sym_return_statement] = REDUCE(sym_for_statement, 8),
        [sym_expression_statement] = REDUCE(sym_for_statement, 8),
        [sym_if_statement] = REDUCE(sym_for_statement, 8),
        [sym_for_statement] = REDUCE(sym_for_statement, 8),
        [sym_while_statement] = REDUCE(sym_for_statement, 8),
        [sym_type] = REDUCE(sym_for_statement, 8),
        [sym_primitive_type] = REDUCE(sym_for_statement, 8),
        [sym_struct_type] = REDUCE(sym_for_statement, 8),
        [sym_union_type] = REDUCE(sym_for_statement, 8),
        [sym_enum_type] = REDUCE(sym_for_statement, 8),
        [sym_expression] = REDUCE(sym_for_statement, 8),
        [sym_deref] = REDUCE(sym_for_statement, 8),
        [sym_address_of] = REDUCE(sym_for_statement, 8),
        [sym_field_access] = REDUCE(sym_for_statement, 8),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 8),
        [sym_function_call] = REDUCE(sym_for_statement, 8),
        [sym_math_op] = REDUCE(sym_for_statement, 8),
        [sym_bool_op] = REDUCE(sym_for_statement, 8),
        [sym_rel_op] = REDUCE(sym_for_statement, 8),
        [sym_assignment] = REDUCE(sym_for_statement, 8),
        [sym_compound_literal] = REDUCE(sym_for_statement, 8),
        [sym_number] = REDUCE(sym_for_statement, 8),
        [sym_char] = REDUCE(sym_for_statement, 8),
        [sym_string] = REDUCE(sym_for_statement, 8),
        [sym_identifier] = REDUCE(sym_for_statement, 8),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_else] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 8),
    },
    [748] = {
        [sym_expression] = SHIFT(749),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(746),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [749] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(750),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [750] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(751),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [751] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 9),
        [sym_statement_block] = REDUCE(sym_for_statement, 9),
        [sym_statement] = REDUCE(sym_for_statement, 9),
        [sym_return_statement] = REDUCE(sym_for_statement, 9),
        [sym_expression_statement] = REDUCE(sym_for_statement, 9),
        [sym_if_statement] = REDUCE(sym_for_statement, 9),
        [sym_for_statement] = REDUCE(sym_for_statement, 9),
        [sym_while_statement] = REDUCE(sym_for_statement, 9),
        [sym_type] = REDUCE(sym_for_statement, 9),
        [sym_primitive_type] = REDUCE(sym_for_statement, 9),
        [sym_struct_type] = REDUCE(sym_for_statement, 9),
        [sym_union_type] = REDUCE(sym_for_statement, 9),
        [sym_enum_type] = REDUCE(sym_for_statement, 9),
        [sym_expression] = REDUCE(sym_for_statement, 9),
        [sym_deref] = REDUCE(sym_for_statement, 9),
        [sym_address_of] = REDUCE(sym_for_statement, 9),
        [sym_field_access] = REDUCE(sym_for_statement, 9),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 9),
        [sym_function_call] = REDUCE(sym_for_statement, 9),
        [sym_math_op] = REDUCE(sym_for_statement, 9),
        [sym_bool_op] = REDUCE(sym_for_statement, 9),
        [sym_rel_op] = REDUCE(sym_for_statement, 9),
        [sym_assignment] = REDUCE(sym_for_statement, 9),
        [sym_compound_literal] = REDUCE(sym_for_statement, 9),
        [sym_number] = REDUCE(sym_for_statement, 9),
        [sym_char] = REDUCE(sym_for_statement, 9),
        [sym_string] = REDUCE(sym_for_statement, 9),
        [sym_identifier] = REDUCE(sym_for_statement, 9),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_else] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 9),
    },
    [752] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(742),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [753] = {
        [sym_expression] = SHIFT(754),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_RPAREN] = SHIFT(755),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [754] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(744),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [755] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(756),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [756] = {
        [sym_var_declaration] = REDUCE(sym_for_statement, 6),
        [sym_statement_block] = REDUCE(sym_for_statement, 6),
        [sym_statement] = REDUCE(sym_for_statement, 6),
        [sym_return_statement] = REDUCE(sym_for_statement, 6),
        [sym_expression_statement] = REDUCE(sym_for_statement, 6),
        [sym_if_statement] = REDUCE(sym_for_statement, 6),
        [sym_for_statement] = REDUCE(sym_for_statement, 6),
        [sym_while_statement] = REDUCE(sym_for_statement, 6),
        [sym_type] = REDUCE(sym_for_statement, 6),
        [sym_primitive_type] = REDUCE(sym_for_statement, 6),
        [sym_struct_type] = REDUCE(sym_for_statement, 6),
        [sym_union_type] = REDUCE(sym_for_statement, 6),
        [sym_enum_type] = REDUCE(sym_for_statement, 6),
        [sym_expression] = REDUCE(sym_for_statement, 6),
        [sym_deref] = REDUCE(sym_for_statement, 6),
        [sym_address_of] = REDUCE(sym_for_statement, 6),
        [sym_field_access] = REDUCE(sym_for_statement, 6),
        [sym_deref_field_access] = REDUCE(sym_for_statement, 6),
        [sym_function_call] = REDUCE(sym_for_statement, 6),
        [sym_math_op] = REDUCE(sym_for_statement, 6),
        [sym_bool_op] = REDUCE(sym_for_statement, 6),
        [sym_rel_op] = REDUCE(sym_for_statement, 6),
        [sym_assignment] = REDUCE(sym_for_statement, 6),
        [sym_compound_literal] = REDUCE(sym_for_statement, 6),
        [sym_number] = REDUCE(sym_for_statement, 6),
        [sym_char] = REDUCE(sym_for_statement, 6),
        [sym_string] = REDUCE(sym_for_statement, 6),
        [sym_identifier] = REDUCE(sym_for_statement, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_LBRACE] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_return] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_if] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_else] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_for] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_while] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_const] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_unsigned] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_short] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_long] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_struct] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_union] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_enum] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 6),
    },
    [757] = {
        [sym_expression] = SHIFT(758),
        [sym_deref] = SHIFT(589),
        [sym_address_of] = SHIFT(590),
        [sym_field_access] = SHIFT(589),
        [sym_deref_field_access] = SHIFT(589),
        [sym_function_call] = SHIFT(590),
        [sym_math_op] = SHIFT(590),
        [sym_bool_op] = SHIFT(590),
        [sym_rel_op] = SHIFT(590),
        [sym_assignment] = SHIFT(590),
        [sym_compound_literal] = SHIFT(590),
        [ts_builtin_sym_error] = SHIFT(759),
        [sym_number] = SHIFT(590),
        [sym_char] = SHIFT(590),
        [sym_string] = SHIFT(590),
        [sym_identifier] = SHIFT(589),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(591),
        [aux_sym_STR_STAR] = SHIFT(592),
        [aux_sym_STR_AMP] = SHIFT(593),
        [aux_sym_STR_DASH] = SHIFT(594),
        [aux_sym_STR_BANG] = SHIFT(595),
    },
    [758] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(643),
        [aux_sym_STR_RPAREN] = SHIFT(760),
        [aux_sym_STR_STAR] = SHIFT(597),
        [aux_sym_STR_DOT] = SHIFT(644),
        [aux_sym_STR_DASH_GT] = SHIFT(645),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(598),
        [aux_sym_STR_DASH] = SHIFT(646),
        [aux_sym_STR_SLASH] = SHIFT(647),
        [aux_sym_STR_PLUS] = SHIFT(646),
        [aux_sym_STR_AMP_AMP] = SHIFT(648),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(649),
        [aux_sym_STR_LT] = SHIFT(650),
        [aux_sym_STR_LT_EQ] = SHIFT(650),
        [aux_sym_STR_EQ_EQ] = SHIFT(650),
        [aux_sym_STR_BANG_EQ] = SHIFT(650),
        [aux_sym_STR_GT_EQ] = SHIFT(650),
        [aux_sym_STR_GT] = SHIFT(650),
    },
    [759] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(760),
    },
    [760] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(761),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [761] = {
        [sym_var_declaration] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_statement_block] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_return_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_expression_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_if_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_for_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_while_statement] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_primitive_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_struct_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_union_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_enum_type] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_expression] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_deref] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_address_of] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_field_access] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_deref_field_access] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_function_call] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_math_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_bool_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_rel_op] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_assignment] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_compound_literal] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_number] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_char] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_string] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_identifier] = REDUCE_FRAGILE(sym_if_statement, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_statement_block_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_static] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_extern] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_return] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_if] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_else] = SHIFT(762),
        [aux_sym_STR_for] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_while] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_const] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_unsigned] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_short] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_long] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_struct] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_union] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_enum] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_AMP] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_BANG] = REDUCE_FRAGILE(sym_if_statement, 5),
    },
    [762] = {
        [sym_var_declaration] = SHIFT(723),
        [sym_statement_block] = SHIFT(723),
        [sym_statement] = SHIFT(763),
        [sym_return_statement] = SHIFT(723),
        [sym_expression_statement] = SHIFT(723),
        [sym_if_statement] = SHIFT(723),
        [sym_for_statement] = SHIFT(723),
        [sym_while_statement] = SHIFT(723),
        [sym_type] = SHIFT(725),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(726),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(727),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(728),
        [aux_sym_STR_return] = SHIFT(729),
        [aux_sym_STR_if] = SHIFT(730),
        [aux_sym_STR_for] = SHIFT(731),
        [aux_sym_STR_while] = SHIFT(732),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [763] = {
        [sym_var_declaration] = REDUCE(sym_if_statement, 7),
        [sym_statement_block] = REDUCE(sym_if_statement, 7),
        [sym_statement] = REDUCE(sym_if_statement, 7),
        [sym_return_statement] = REDUCE(sym_if_statement, 7),
        [sym_expression_statement] = REDUCE(sym_if_statement, 7),
        [sym_if_statement] = REDUCE(sym_if_statement, 7),
        [sym_for_statement] = REDUCE(sym_if_statement, 7),
        [sym_while_statement] = REDUCE(sym_if_statement, 7),
        [sym_type] = REDUCE(sym_if_statement, 7),
        [sym_primitive_type] = REDUCE(sym_if_statement, 7),
        [sym_struct_type] = REDUCE(sym_if_statement, 7),
        [sym_union_type] = REDUCE(sym_if_statement, 7),
        [sym_enum_type] = REDUCE(sym_if_statement, 7),
        [sym_expression] = REDUCE(sym_if_statement, 7),
        [sym_deref] = REDUCE(sym_if_statement, 7),
        [sym_address_of] = REDUCE(sym_if_statement, 7),
        [sym_field_access] = REDUCE(sym_if_statement, 7),
        [sym_deref_field_access] = REDUCE(sym_if_statement, 7),
        [sym_function_call] = REDUCE(sym_if_statement, 7),
        [sym_math_op] = REDUCE(sym_if_statement, 7),
        [sym_bool_op] = REDUCE(sym_if_statement, 7),
        [sym_rel_op] = REDUCE(sym_if_statement, 7),
        [sym_assignment] = REDUCE(sym_if_statement, 7),
        [sym_compound_literal] = REDUCE(sym_if_statement, 7),
        [sym_number] = REDUCE(sym_if_statement, 7),
        [sym_char] = REDUCE(sym_if_statement, 7),
        [sym_string] = REDUCE(sym_if_statement, 7),
        [sym_identifier] = REDUCE(sym_if_statement, 7),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_static] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_LBRACE] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_return] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_if] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_else] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_for] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_while] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_const] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_unsigned] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_short] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_long] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_struct] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_union] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_enum] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_if_statement, 7),
    },
    [764] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(765),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [765] = {
        [sym_var_declaration] = REDUCE(sym_return_statement, 3),
        [sym_statement_block] = REDUCE(sym_return_statement, 3),
        [sym_statement] = REDUCE(sym_return_statement, 3),
        [sym_return_statement] = REDUCE(sym_return_statement, 3),
        [sym_expression_statement] = REDUCE(sym_return_statement, 3),
        [sym_if_statement] = REDUCE(sym_return_statement, 3),
        [sym_for_statement] = REDUCE(sym_return_statement, 3),
        [sym_while_statement] = REDUCE(sym_return_statement, 3),
        [sym_type] = REDUCE(sym_return_statement, 3),
        [sym_primitive_type] = REDUCE(sym_return_statement, 3),
        [sym_struct_type] = REDUCE(sym_return_statement, 3),
        [sym_union_type] = REDUCE(sym_return_statement, 3),
        [sym_enum_type] = REDUCE(sym_return_statement, 3),
        [sym_expression] = REDUCE(sym_return_statement, 3),
        [sym_deref] = REDUCE(sym_return_statement, 3),
        [sym_address_of] = REDUCE(sym_return_statement, 3),
        [sym_field_access] = REDUCE(sym_return_statement, 3),
        [sym_deref_field_access] = REDUCE(sym_return_statement, 3),
        [sym_function_call] = REDUCE(sym_return_statement, 3),
        [sym_math_op] = REDUCE(sym_return_statement, 3),
        [sym_bool_op] = REDUCE(sym_return_statement, 3),
        [sym_rel_op] = REDUCE(sym_return_statement, 3),
        [sym_assignment] = REDUCE(sym_return_statement, 3),
        [sym_compound_literal] = REDUCE(sym_return_statement, 3),
        [sym_number] = REDUCE(sym_return_statement, 3),
        [sym_char] = REDUCE(sym_return_statement, 3),
        [sym_string] = REDUCE(sym_return_statement, 3),
        [sym_identifier] = REDUCE(sym_return_statement, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_static] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_extern] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_return] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_if] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_else] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_for] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_while] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_const] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_short] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_long] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_struct] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_union] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_enum] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_return_statement, 3),
    },
    [766] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(768),
    },
    [767] = {
        [sym_var_declaration] = REDUCE(sym_statement_block, 2),
        [sym_statement_block] = REDUCE(sym_statement_block, 2),
        [sym_statement] = REDUCE(sym_statement_block, 2),
        [sym_return_statement] = REDUCE(sym_statement_block, 2),
        [sym_expression_statement] = REDUCE(sym_statement_block, 2),
        [sym_if_statement] = REDUCE(sym_statement_block, 2),
        [sym_for_statement] = REDUCE(sym_statement_block, 2),
        [sym_while_statement] = REDUCE(sym_statement_block, 2),
        [sym_type] = REDUCE(sym_statement_block, 2),
        [sym_primitive_type] = REDUCE(sym_statement_block, 2),
        [sym_struct_type] = REDUCE(sym_statement_block, 2),
        [sym_union_type] = REDUCE(sym_statement_block, 2),
        [sym_enum_type] = REDUCE(sym_statement_block, 2),
        [sym_expression] = REDUCE(sym_statement_block, 2),
        [sym_deref] = REDUCE(sym_statement_block, 2),
        [sym_address_of] = REDUCE(sym_statement_block, 2),
        [sym_field_access] = REDUCE(sym_statement_block, 2),
        [sym_deref_field_access] = REDUCE(sym_statement_block, 2),
        [sym_function_call] = REDUCE(sym_statement_block, 2),
        [sym_math_op] = REDUCE(sym_statement_block, 2),
        [sym_bool_op] = REDUCE(sym_statement_block, 2),
        [sym_rel_op] = REDUCE(sym_statement_block, 2),
        [sym_assignment] = REDUCE(sym_statement_block, 2),
        [sym_compound_literal] = REDUCE(sym_statement_block, 2),
        [sym_number] = REDUCE(sym_statement_block, 2),
        [sym_char] = REDUCE(sym_statement_block, 2),
        [sym_string] = REDUCE(sym_statement_block, 2),
        [sym_identifier] = REDUCE(sym_statement_block, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_return] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_if] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_else] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_for] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_while] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 2),
    },
    [768] = {
        [sym_var_declaration] = REDUCE(sym_statement_block, 3),
        [sym_statement_block] = REDUCE(sym_statement_block, 3),
        [sym_statement] = REDUCE(sym_statement_block, 3),
        [sym_return_statement] = REDUCE(sym_statement_block, 3),
        [sym_expression_statement] = REDUCE(sym_statement_block, 3),
        [sym_if_statement] = REDUCE(sym_statement_block, 3),
        [sym_for_statement] = REDUCE(sym_statement_block, 3),
        [sym_while_statement] = REDUCE(sym_statement_block, 3),
        [sym_type] = REDUCE(sym_statement_block, 3),
        [sym_primitive_type] = REDUCE(sym_statement_block, 3),
        [sym_struct_type] = REDUCE(sym_statement_block, 3),
        [sym_union_type] = REDUCE(sym_statement_block, 3),
        [sym_enum_type] = REDUCE(sym_statement_block, 3),
        [sym_expression] = REDUCE(sym_statement_block, 3),
        [sym_deref] = REDUCE(sym_statement_block, 3),
        [sym_address_of] = REDUCE(sym_statement_block, 3),
        [sym_field_access] = REDUCE(sym_statement_block, 3),
        [sym_deref_field_access] = REDUCE(sym_statement_block, 3),
        [sym_function_call] = REDUCE(sym_statement_block, 3),
        [sym_math_op] = REDUCE(sym_statement_block, 3),
        [sym_bool_op] = REDUCE(sym_statement_block, 3),
        [sym_rel_op] = REDUCE(sym_statement_block, 3),
        [sym_assignment] = REDUCE(sym_statement_block, 3),
        [sym_compound_literal] = REDUCE(sym_statement_block, 3),
        [sym_number] = REDUCE(sym_statement_block, 3),
        [sym_char] = REDUCE(sym_statement_block, 3),
        [sym_string] = REDUCE(sym_statement_block, 3),
        [sym_identifier] = REDUCE(sym_statement_block, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_return] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_if] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_else] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_for] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_while] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 3),
    },
    [769] = {
        [sym_type_expression] = SHIFT(770),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(771),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [770] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(772),
        [aux_sym_STR_SEMI] = SHIFT(773),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [771] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(772),
        [aux_sym_STR_SEMI] = SHIFT(773),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [772] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(774),
    },
    [773] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_statement_block] = REDUCE(sym_var_declaration, 4),
        [sym_statement] = REDUCE(sym_var_declaration, 4),
        [sym_return_statement] = REDUCE(sym_var_declaration, 4),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 4),
        [sym_if_statement] = REDUCE(sym_var_declaration, 4),
        [sym_for_statement] = REDUCE(sym_var_declaration, 4),
        [sym_while_statement] = REDUCE(sym_var_declaration, 4),
        [sym_type] = REDUCE(sym_var_declaration, 4),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 4),
        [sym_struct_type] = REDUCE(sym_var_declaration, 4),
        [sym_union_type] = REDUCE(sym_var_declaration, 4),
        [sym_enum_type] = REDUCE(sym_var_declaration, 4),
        [sym_expression] = REDUCE(sym_var_declaration, 4),
        [sym_deref] = REDUCE(sym_var_declaration, 4),
        [sym_address_of] = REDUCE(sym_var_declaration, 4),
        [sym_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_function_call] = REDUCE(sym_var_declaration, 4),
        [sym_math_op] = REDUCE(sym_var_declaration, 4),
        [sym_bool_op] = REDUCE(sym_var_declaration, 4),
        [sym_rel_op] = REDUCE(sym_var_declaration, 4),
        [sym_assignment] = REDUCE(sym_var_declaration, 4),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 4),
        [sym_number] = REDUCE(sym_var_declaration, 4),
        [sym_char] = REDUCE(sym_var_declaration, 4),
        [sym_string] = REDUCE(sym_var_declaration, 4),
        [sym_identifier] = REDUCE(sym_var_declaration, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_else] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [774] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_statement_block] = REDUCE(sym_var_declaration, 5),
        [sym_statement] = REDUCE(sym_var_declaration, 5),
        [sym_return_statement] = REDUCE(sym_var_declaration, 5),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 5),
        [sym_if_statement] = REDUCE(sym_var_declaration, 5),
        [sym_for_statement] = REDUCE(sym_var_declaration, 5),
        [sym_while_statement] = REDUCE(sym_var_declaration, 5),
        [sym_type] = REDUCE(sym_var_declaration, 5),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 5),
        [sym_struct_type] = REDUCE(sym_var_declaration, 5),
        [sym_union_type] = REDUCE(sym_var_declaration, 5),
        [sym_enum_type] = REDUCE(sym_var_declaration, 5),
        [sym_expression] = REDUCE(sym_var_declaration, 5),
        [sym_deref] = REDUCE(sym_var_declaration, 5),
        [sym_address_of] = REDUCE(sym_var_declaration, 5),
        [sym_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_function_call] = REDUCE(sym_var_declaration, 5),
        [sym_math_op] = REDUCE(sym_var_declaration, 5),
        [sym_bool_op] = REDUCE(sym_var_declaration, 5),
        [sym_rel_op] = REDUCE(sym_var_declaration, 5),
        [sym_assignment] = REDUCE(sym_var_declaration, 5),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 5),
        [sym_number] = REDUCE(sym_var_declaration, 5),
        [sym_char] = REDUCE(sym_var_declaration, 5),
        [sym_string] = REDUCE(sym_var_declaration, 5),
        [sym_identifier] = REDUCE(sym_var_declaration, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_else] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [775] = {
        [sym_var_declaration] = REDUCE(sym_expression_statement, 2),
        [sym_statement_block] = REDUCE(sym_expression_statement, 2),
        [sym_statement] = REDUCE(sym_expression_statement, 2),
        [sym_return_statement] = REDUCE(sym_expression_statement, 2),
        [sym_expression_statement] = REDUCE(sym_expression_statement, 2),
        [sym_if_statement] = REDUCE(sym_expression_statement, 2),
        [sym_for_statement] = REDUCE(sym_expression_statement, 2),
        [sym_while_statement] = REDUCE(sym_expression_statement, 2),
        [sym_type] = REDUCE(sym_expression_statement, 2),
        [sym_primitive_type] = REDUCE(sym_expression_statement, 2),
        [sym_struct_type] = REDUCE(sym_expression_statement, 2),
        [sym_union_type] = REDUCE(sym_expression_statement, 2),
        [sym_enum_type] = REDUCE(sym_expression_statement, 2),
        [sym_expression] = REDUCE(sym_expression_statement, 2),
        [sym_deref] = REDUCE(sym_expression_statement, 2),
        [sym_address_of] = REDUCE(sym_expression_statement, 2),
        [sym_field_access] = REDUCE(sym_expression_statement, 2),
        [sym_deref_field_access] = REDUCE(sym_expression_statement, 2),
        [sym_function_call] = REDUCE(sym_expression_statement, 2),
        [sym_math_op] = REDUCE(sym_expression_statement, 2),
        [sym_bool_op] = REDUCE(sym_expression_statement, 2),
        [sym_rel_op] = REDUCE(sym_expression_statement, 2),
        [sym_assignment] = REDUCE(sym_expression_statement, 2),
        [sym_compound_literal] = REDUCE(sym_expression_statement, 2),
        [sym_number] = REDUCE(sym_expression_statement, 2),
        [sym_char] = REDUCE(sym_expression_statement, 2),
        [sym_string] = REDUCE(sym_expression_statement, 2),
        [sym_identifier] = REDUCE(sym_expression_statement, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_static] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_extern] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_LBRACE] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_return] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_if] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_else] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_for] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_while] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_const] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_short] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_long] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_struct] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_union] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_enum] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_expression_statement, 2),
    },
    [776] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(778),
        [aux_sym_STR_SEMI] = SHIFT(779),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [777] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(778),
        [aux_sym_STR_SEMI] = SHIFT(779),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [778] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(773),
    },
    [779] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_statement_block] = REDUCE(sym_var_declaration, 3),
        [sym_statement] = REDUCE(sym_var_declaration, 3),
        [sym_return_statement] = REDUCE(sym_var_declaration, 3),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 3),
        [sym_if_statement] = REDUCE(sym_var_declaration, 3),
        [sym_for_statement] = REDUCE(sym_var_declaration, 3),
        [sym_while_statement] = REDUCE(sym_var_declaration, 3),
        [sym_type] = REDUCE(sym_var_declaration, 3),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 3),
        [sym_struct_type] = REDUCE(sym_var_declaration, 3),
        [sym_union_type] = REDUCE(sym_var_declaration, 3),
        [sym_enum_type] = REDUCE(sym_var_declaration, 3),
        [sym_expression] = REDUCE(sym_var_declaration, 3),
        [sym_deref] = REDUCE(sym_var_declaration, 3),
        [sym_address_of] = REDUCE(sym_var_declaration, 3),
        [sym_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_function_call] = REDUCE(sym_var_declaration, 3),
        [sym_math_op] = REDUCE(sym_var_declaration, 3),
        [sym_bool_op] = REDUCE(sym_var_declaration, 3),
        [sym_rel_op] = REDUCE(sym_var_declaration, 3),
        [sym_assignment] = REDUCE(sym_var_declaration, 3),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 3),
        [sym_number] = REDUCE(sym_var_declaration, 3),
        [sym_char] = REDUCE(sym_var_declaration, 3),
        [sym_string] = REDUCE(sym_var_declaration, 3),
        [sym_identifier] = REDUCE(sym_var_declaration, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_else] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [780] = {
        [sym_var_declaration] = SHIFT(535),
        [sym_statement_block] = SHIFT(535),
        [sym_statement] = SHIFT(781),
        [sym_return_statement] = SHIFT(535),
        [sym_expression_statement] = SHIFT(535),
        [sym_if_statement] = SHIFT(535),
        [sym_for_statement] = SHIFT(535),
        [sym_while_statement] = SHIFT(535),
        [sym_type] = SHIFT(537),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_expression] = SHIFT(538),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(542),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(543),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_static] = SHIFT(18),
        [aux_sym_STR_extern] = SHIFT(18),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_LBRACE] = SHIFT(545),
        [aux_sym_STR_return] = SHIFT(547),
        [aux_sym_STR_if] = SHIFT(548),
        [aux_sym_STR_for] = SHIFT(549),
        [aux_sym_STR_while] = SHIFT(550),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_struct] = SHIFT(381),
        [aux_sym_STR_union] = SHIFT(382),
        [aux_sym_STR_enum] = SHIFT(383),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [781] = {
        [sym_var_declaration] = REDUCE(sym_if_statement, 7),
        [sym_statement_block] = REDUCE(sym_if_statement, 7),
        [sym_statement] = REDUCE(sym_if_statement, 7),
        [sym_return_statement] = REDUCE(sym_if_statement, 7),
        [sym_expression_statement] = REDUCE(sym_if_statement, 7),
        [sym_if_statement] = REDUCE(sym_if_statement, 7),
        [sym_for_statement] = REDUCE(sym_if_statement, 7),
        [sym_while_statement] = REDUCE(sym_if_statement, 7),
        [sym_type] = REDUCE(sym_if_statement, 7),
        [sym_primitive_type] = REDUCE(sym_if_statement, 7),
        [sym_struct_type] = REDUCE(sym_if_statement, 7),
        [sym_union_type] = REDUCE(sym_if_statement, 7),
        [sym_enum_type] = REDUCE(sym_if_statement, 7),
        [sym_expression] = REDUCE(sym_if_statement, 7),
        [sym_deref] = REDUCE(sym_if_statement, 7),
        [sym_address_of] = REDUCE(sym_if_statement, 7),
        [sym_field_access] = REDUCE(sym_if_statement, 7),
        [sym_deref_field_access] = REDUCE(sym_if_statement, 7),
        [sym_function_call] = REDUCE(sym_if_statement, 7),
        [sym_math_op] = REDUCE(sym_if_statement, 7),
        [sym_bool_op] = REDUCE(sym_if_statement, 7),
        [sym_rel_op] = REDUCE(sym_if_statement, 7),
        [sym_assignment] = REDUCE(sym_if_statement, 7),
        [sym_compound_literal] = REDUCE(sym_if_statement, 7),
        [sym_number] = REDUCE(sym_if_statement, 7),
        [sym_char] = REDUCE(sym_if_statement, 7),
        [sym_string] = REDUCE(sym_if_statement, 7),
        [sym_identifier] = REDUCE(sym_if_statement, 7),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_static] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_LBRACE] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_return] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_if] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_for] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_while] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_const] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_unsigned] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_short] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_long] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_struct] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_union] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_enum] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_if_statement, 7),
    },
    [782] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(783),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [783] = {
        [sym_var_declaration] = REDUCE(sym_return_statement, 3),
        [sym_statement_block] = REDUCE(sym_return_statement, 3),
        [sym_statement] = REDUCE(sym_return_statement, 3),
        [sym_return_statement] = REDUCE(sym_return_statement, 3),
        [sym_expression_statement] = REDUCE(sym_return_statement, 3),
        [sym_if_statement] = REDUCE(sym_return_statement, 3),
        [sym_for_statement] = REDUCE(sym_return_statement, 3),
        [sym_while_statement] = REDUCE(sym_return_statement, 3),
        [sym_type] = REDUCE(sym_return_statement, 3),
        [sym_primitive_type] = REDUCE(sym_return_statement, 3),
        [sym_struct_type] = REDUCE(sym_return_statement, 3),
        [sym_union_type] = REDUCE(sym_return_statement, 3),
        [sym_enum_type] = REDUCE(sym_return_statement, 3),
        [sym_expression] = REDUCE(sym_return_statement, 3),
        [sym_deref] = REDUCE(sym_return_statement, 3),
        [sym_address_of] = REDUCE(sym_return_statement, 3),
        [sym_field_access] = REDUCE(sym_return_statement, 3),
        [sym_deref_field_access] = REDUCE(sym_return_statement, 3),
        [sym_function_call] = REDUCE(sym_return_statement, 3),
        [sym_math_op] = REDUCE(sym_return_statement, 3),
        [sym_bool_op] = REDUCE(sym_return_statement, 3),
        [sym_rel_op] = REDUCE(sym_return_statement, 3),
        [sym_assignment] = REDUCE(sym_return_statement, 3),
        [sym_compound_literal] = REDUCE(sym_return_statement, 3),
        [sym_number] = REDUCE(sym_return_statement, 3),
        [sym_char] = REDUCE(sym_return_statement, 3),
        [sym_string] = REDUCE(sym_return_statement, 3),
        [sym_identifier] = REDUCE(sym_return_statement, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_static] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_extern] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_return] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_if] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_for] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_while] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_const] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_short] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_long] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_struct] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_union] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_enum] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_return_statement, 3),
    },
    [784] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(786),
    },
    [785] = {
        [sym_var_declaration] = REDUCE(sym_statement_block, 2),
        [sym_statement_block] = REDUCE(sym_statement_block, 2),
        [sym_statement] = REDUCE(sym_statement_block, 2),
        [sym_return_statement] = REDUCE(sym_statement_block, 2),
        [sym_expression_statement] = REDUCE(sym_statement_block, 2),
        [sym_if_statement] = REDUCE(sym_statement_block, 2),
        [sym_for_statement] = REDUCE(sym_statement_block, 2),
        [sym_while_statement] = REDUCE(sym_statement_block, 2),
        [sym_type] = REDUCE(sym_statement_block, 2),
        [sym_primitive_type] = REDUCE(sym_statement_block, 2),
        [sym_struct_type] = REDUCE(sym_statement_block, 2),
        [sym_union_type] = REDUCE(sym_statement_block, 2),
        [sym_enum_type] = REDUCE(sym_statement_block, 2),
        [sym_expression] = REDUCE(sym_statement_block, 2),
        [sym_deref] = REDUCE(sym_statement_block, 2),
        [sym_address_of] = REDUCE(sym_statement_block, 2),
        [sym_field_access] = REDUCE(sym_statement_block, 2),
        [sym_deref_field_access] = REDUCE(sym_statement_block, 2),
        [sym_function_call] = REDUCE(sym_statement_block, 2),
        [sym_math_op] = REDUCE(sym_statement_block, 2),
        [sym_bool_op] = REDUCE(sym_statement_block, 2),
        [sym_rel_op] = REDUCE(sym_statement_block, 2),
        [sym_assignment] = REDUCE(sym_statement_block, 2),
        [sym_compound_literal] = REDUCE(sym_statement_block, 2),
        [sym_number] = REDUCE(sym_statement_block, 2),
        [sym_char] = REDUCE(sym_statement_block, 2),
        [sym_string] = REDUCE(sym_statement_block, 2),
        [sym_identifier] = REDUCE(sym_statement_block, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_return] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_if] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_for] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_while] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 2),
    },
    [786] = {
        [sym_var_declaration] = REDUCE(sym_statement_block, 3),
        [sym_statement_block] = REDUCE(sym_statement_block, 3),
        [sym_statement] = REDUCE(sym_statement_block, 3),
        [sym_return_statement] = REDUCE(sym_statement_block, 3),
        [sym_expression_statement] = REDUCE(sym_statement_block, 3),
        [sym_if_statement] = REDUCE(sym_statement_block, 3),
        [sym_for_statement] = REDUCE(sym_statement_block, 3),
        [sym_while_statement] = REDUCE(sym_statement_block, 3),
        [sym_type] = REDUCE(sym_statement_block, 3),
        [sym_primitive_type] = REDUCE(sym_statement_block, 3),
        [sym_struct_type] = REDUCE(sym_statement_block, 3),
        [sym_union_type] = REDUCE(sym_statement_block, 3),
        [sym_enum_type] = REDUCE(sym_statement_block, 3),
        [sym_expression] = REDUCE(sym_statement_block, 3),
        [sym_deref] = REDUCE(sym_statement_block, 3),
        [sym_address_of] = REDUCE(sym_statement_block, 3),
        [sym_field_access] = REDUCE(sym_statement_block, 3),
        [sym_deref_field_access] = REDUCE(sym_statement_block, 3),
        [sym_function_call] = REDUCE(sym_statement_block, 3),
        [sym_math_op] = REDUCE(sym_statement_block, 3),
        [sym_bool_op] = REDUCE(sym_statement_block, 3),
        [sym_rel_op] = REDUCE(sym_statement_block, 3),
        [sym_assignment] = REDUCE(sym_statement_block, 3),
        [sym_compound_literal] = REDUCE(sym_statement_block, 3),
        [sym_number] = REDUCE(sym_statement_block, 3),
        [sym_char] = REDUCE(sym_statement_block, 3),
        [sym_string] = REDUCE(sym_statement_block, 3),
        [sym_identifier] = REDUCE(sym_statement_block, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_return] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_if] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_for] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_while] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 3),
    },
    [787] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(788),
    },
    [788] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(789),
    },
    [789] = {
        [sym_expression] = SHIFT(790),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(791),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(792),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(793),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [790] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(795),
        [aux_sym_STR_COMMA] = SHIFT(796),
        [aux_sym_STR_LPAREN] = SHIFT(169),
        [aux_sym_STR_RBRACE] = SHIFT(794),
        [aux_sym_STR_STAR] = SHIFT(162),
        [aux_sym_STR_DOT] = SHIFT(170),
        [aux_sym_STR_DASH_GT] = SHIFT(171),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(163),
        [aux_sym_STR_DASH] = SHIFT(172),
        [aux_sym_STR_SLASH] = SHIFT(173),
        [aux_sym_STR_PLUS] = SHIFT(172),
        [aux_sym_STR_AMP_AMP] = SHIFT(174),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(175),
        [aux_sym_STR_LT] = SHIFT(176),
        [aux_sym_STR_LT_EQ] = SHIFT(176),
        [aux_sym_STR_EQ_EQ] = SHIFT(176),
        [aux_sym_STR_BANG_EQ] = SHIFT(176),
        [aux_sym_STR_GT_EQ] = SHIFT(176),
        [aux_sym_STR_GT] = SHIFT(176),
    },
    [791] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(795),
        [aux_sym_STR_COMMA] = SHIFT(796),
        [aux_sym_STR_RBRACE] = SHIFT(794),
    },
    [792] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(794),
    },
    [793] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 5),
    },
    [794] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 6),
    },
    [795] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(798),
        [aux_sym_STR_RBRACE] = SHIFT(797),
    },
    [796] = {
        [sym_expression] = SHIFT(223),
        [sym_deref] = SHIFT(150),
        [sym_address_of] = SHIFT(151),
        [sym_field_access] = SHIFT(150),
        [sym_deref_field_access] = SHIFT(150),
        [sym_function_call] = SHIFT(151),
        [sym_math_op] = SHIFT(151),
        [sym_bool_op] = SHIFT(151),
        [sym_rel_op] = SHIFT(151),
        [sym_assignment] = SHIFT(151),
        [sym_compound_literal] = SHIFT(151),
        [sym_struct_literal_field] = SHIFT(224),
        [sym_number] = SHIFT(151),
        [sym_char] = SHIFT(151),
        [sym_string] = SHIFT(151),
        [sym_identifier] = SHIFT(150),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(154),
        [aux_sym_STR_RBRACE] = SHIFT(797),
        [aux_sym_STR_STAR] = SHIFT(156),
        [aux_sym_STR_AMP] = SHIFT(157),
        [aux_sym_STR_DOT] = SHIFT(158),
        [aux_sym_STR_DASH] = SHIFT(159),
        [aux_sym_STR_BANG] = SHIFT(160),
    },
    [797] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 7),
    },
    [798] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(799),
    },
    [799] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SLASH] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_AMP_AMP] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PIPE_PIPE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_BANG_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_GT] = REDUCE(sym_compound_literal, 8),
    },
    [800] = {
        [sym_type_expression] = SHIFT(801),
        [sym_pointer_type] = SHIFT(424),
        [sym_var_assignment] = SHIFT(802),
        [sym_identifier] = SHIFT(424),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(426),
    },
    [801] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(803),
        [aux_sym_STR_SEMI] = SHIFT(804),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [802] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(803),
        [aux_sym_STR_SEMI] = SHIFT(804),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [803] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(805),
    },
    [804] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 4),
        [sym_statement_block] = REDUCE(sym_var_declaration, 4),
        [sym_statement] = REDUCE(sym_var_declaration, 4),
        [sym_return_statement] = REDUCE(sym_var_declaration, 4),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 4),
        [sym_if_statement] = REDUCE(sym_var_declaration, 4),
        [sym_for_statement] = REDUCE(sym_var_declaration, 4),
        [sym_while_statement] = REDUCE(sym_var_declaration, 4),
        [sym_type] = REDUCE(sym_var_declaration, 4),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 4),
        [sym_struct_type] = REDUCE(sym_var_declaration, 4),
        [sym_union_type] = REDUCE(sym_var_declaration, 4),
        [sym_enum_type] = REDUCE(sym_var_declaration, 4),
        [sym_expression] = REDUCE(sym_var_declaration, 4),
        [sym_deref] = REDUCE(sym_var_declaration, 4),
        [sym_address_of] = REDUCE(sym_var_declaration, 4),
        [sym_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 4),
        [sym_function_call] = REDUCE(sym_var_declaration, 4),
        [sym_math_op] = REDUCE(sym_var_declaration, 4),
        [sym_bool_op] = REDUCE(sym_var_declaration, 4),
        [sym_rel_op] = REDUCE(sym_var_declaration, 4),
        [sym_assignment] = REDUCE(sym_var_declaration, 4),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 4),
        [sym_number] = REDUCE(sym_var_declaration, 4),
        [sym_char] = REDUCE(sym_var_declaration, 4),
        [sym_string] = REDUCE(sym_var_declaration, 4),
        [sym_identifier] = REDUCE(sym_var_declaration, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [805] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 5),
        [sym_statement_block] = REDUCE(sym_var_declaration, 5),
        [sym_statement] = REDUCE(sym_var_declaration, 5),
        [sym_return_statement] = REDUCE(sym_var_declaration, 5),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 5),
        [sym_if_statement] = REDUCE(sym_var_declaration, 5),
        [sym_for_statement] = REDUCE(sym_var_declaration, 5),
        [sym_while_statement] = REDUCE(sym_var_declaration, 5),
        [sym_type] = REDUCE(sym_var_declaration, 5),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 5),
        [sym_struct_type] = REDUCE(sym_var_declaration, 5),
        [sym_union_type] = REDUCE(sym_var_declaration, 5),
        [sym_enum_type] = REDUCE(sym_var_declaration, 5),
        [sym_expression] = REDUCE(sym_var_declaration, 5),
        [sym_deref] = REDUCE(sym_var_declaration, 5),
        [sym_address_of] = REDUCE(sym_var_declaration, 5),
        [sym_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 5),
        [sym_function_call] = REDUCE(sym_var_declaration, 5),
        [sym_math_op] = REDUCE(sym_var_declaration, 5),
        [sym_bool_op] = REDUCE(sym_var_declaration, 5),
        [sym_rel_op] = REDUCE(sym_var_declaration, 5),
        [sym_assignment] = REDUCE(sym_var_declaration, 5),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 5),
        [sym_number] = REDUCE(sym_var_declaration, 5),
        [sym_char] = REDUCE(sym_var_declaration, 5),
        [sym_string] = REDUCE(sym_var_declaration, 5),
        [sym_identifier] = REDUCE(sym_var_declaration, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [806] = {
        [sym_expression] = SHIFT(807),
        [sym_deref] = SHIFT(539),
        [sym_address_of] = SHIFT(540),
        [sym_field_access] = SHIFT(539),
        [sym_deref_field_access] = SHIFT(539),
        [sym_function_call] = SHIFT(540),
        [sym_math_op] = SHIFT(540),
        [sym_bool_op] = SHIFT(540),
        [sym_rel_op] = SHIFT(540),
        [sym_assignment] = SHIFT(540),
        [sym_compound_literal] = SHIFT(540),
        [sym_number] = SHIFT(540),
        [sym_char] = SHIFT(540),
        [sym_string] = SHIFT(540),
        [sym_identifier] = SHIFT(539),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(544),
        [aux_sym_STR_STAR] = SHIFT(551),
        [aux_sym_STR_AMP] = SHIFT(552),
        [aux_sym_STR_DASH] = SHIFT(553),
        [aux_sym_STR_BANG] = SHIFT(554),
    },
    [807] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(678),
        [aux_sym_STR_STAR] = SHIFT(556),
        [aux_sym_STR_DOT] = SHIFT(679),
        [aux_sym_STR_DASH_GT] = SHIFT(680),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(557),
        [aux_sym_STR_DASH] = SHIFT(681),
        [aux_sym_STR_SLASH] = SHIFT(682),
        [aux_sym_STR_PLUS] = SHIFT(681),
        [aux_sym_STR_AMP_AMP] = SHIFT(683),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(684),
        [aux_sym_STR_LT] = SHIFT(685),
        [aux_sym_STR_LT_EQ] = SHIFT(685),
        [aux_sym_STR_EQ_EQ] = SHIFT(685),
        [aux_sym_STR_BANG_EQ] = SHIFT(685),
        [aux_sym_STR_GT_EQ] = SHIFT(685),
        [aux_sym_STR_GT] = SHIFT(685),
    },
    [808] = {
        [sym_preproc_include] = REDUCE(sym_statement_block, 3),
        [sym_preproc_define] = REDUCE(sym_statement_block, 3),
        [sym_preproc_call] = REDUCE(sym_statement_block, 3),
        [sym_preproc_ifdef] = REDUCE(sym_statement_block, 3),
        [sym_preproc_ifndef] = REDUCE(sym_statement_block, 3),
        [sym_typedef] = REDUCE(sym_statement_block, 3),
        [sym_var_declaration] = REDUCE(sym_statement_block, 3),
        [sym_function_declaration] = REDUCE(sym_statement_block, 3),
        [sym_type] = REDUCE(sym_statement_block, 3),
        [sym_primitive_type] = REDUCE(sym_statement_block, 3),
        [sym_struct_declaration] = REDUCE(sym_statement_block, 3),
        [sym_struct_type] = REDUCE(sym_statement_block, 3),
        [sym_union_declaration] = REDUCE(sym_statement_block, 3),
        [sym_union_type] = REDUCE(sym_statement_block, 3),
        [sym_enum_declaration] = REDUCE(sym_statement_block, 3),
        [sym_enum_type] = REDUCE(sym_statement_block, 3),
        [ts_builtin_sym_end] = REDUCE(sym_statement_block, 3),
        [sym_preproc_else] = REDUCE(sym_statement_block, 3),
        [sym_preproc_endif] = REDUCE(sym_statement_block, 3),
        [sym_preproc_directive] = REDUCE(sym_statement_block, 3),
        [sym_identifier] = REDUCE(sym_statement_block, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 3),
    },
    [809] = {
        [sym_var_declaration] = REDUCE(sym_expression_statement, 2),
        [sym_statement_block] = REDUCE(sym_expression_statement, 2),
        [sym_statement] = REDUCE(sym_expression_statement, 2),
        [sym_return_statement] = REDUCE(sym_expression_statement, 2),
        [sym_expression_statement] = REDUCE(sym_expression_statement, 2),
        [sym_if_statement] = REDUCE(sym_expression_statement, 2),
        [sym_for_statement] = REDUCE(sym_expression_statement, 2),
        [sym_while_statement] = REDUCE(sym_expression_statement, 2),
        [sym_type] = REDUCE(sym_expression_statement, 2),
        [sym_primitive_type] = REDUCE(sym_expression_statement, 2),
        [sym_struct_type] = REDUCE(sym_expression_statement, 2),
        [sym_union_type] = REDUCE(sym_expression_statement, 2),
        [sym_enum_type] = REDUCE(sym_expression_statement, 2),
        [sym_expression] = REDUCE(sym_expression_statement, 2),
        [sym_deref] = REDUCE(sym_expression_statement, 2),
        [sym_address_of] = REDUCE(sym_expression_statement, 2),
        [sym_field_access] = REDUCE(sym_expression_statement, 2),
        [sym_deref_field_access] = REDUCE(sym_expression_statement, 2),
        [sym_function_call] = REDUCE(sym_expression_statement, 2),
        [sym_math_op] = REDUCE(sym_expression_statement, 2),
        [sym_bool_op] = REDUCE(sym_expression_statement, 2),
        [sym_rel_op] = REDUCE(sym_expression_statement, 2),
        [sym_assignment] = REDUCE(sym_expression_statement, 2),
        [sym_compound_literal] = REDUCE(sym_expression_statement, 2),
        [sym_number] = REDUCE(sym_expression_statement, 2),
        [sym_char] = REDUCE(sym_expression_statement, 2),
        [sym_string] = REDUCE(sym_expression_statement, 2),
        [sym_identifier] = REDUCE(sym_expression_statement, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_static] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_extern] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_LBRACE] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_return] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_if] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_for] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_while] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_const] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_short] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_long] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_struct] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_union] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_enum] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_expression_statement, 2),
    },
    [810] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(812),
        [aux_sym_STR_SEMI] = SHIFT(813),
        [aux_sym_STR_COMMA] = SHIFT(430),
        [aux_sym_STR_EQ] = SHIFT(434),
    },
    [811] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat1] = SHIFT(812),
        [aux_sym_STR_SEMI] = SHIFT(813),
        [aux_sym_STR_COMMA] = SHIFT(430),
    },
    [812] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(804),
    },
    [813] = {
        [sym_var_declaration] = REDUCE(sym_var_declaration, 3),
        [sym_statement_block] = REDUCE(sym_var_declaration, 3),
        [sym_statement] = REDUCE(sym_var_declaration, 3),
        [sym_return_statement] = REDUCE(sym_var_declaration, 3),
        [sym_expression_statement] = REDUCE(sym_var_declaration, 3),
        [sym_if_statement] = REDUCE(sym_var_declaration, 3),
        [sym_for_statement] = REDUCE(sym_var_declaration, 3),
        [sym_while_statement] = REDUCE(sym_var_declaration, 3),
        [sym_type] = REDUCE(sym_var_declaration, 3),
        [sym_primitive_type] = REDUCE(sym_var_declaration, 3),
        [sym_struct_type] = REDUCE(sym_var_declaration, 3),
        [sym_union_type] = REDUCE(sym_var_declaration, 3),
        [sym_enum_type] = REDUCE(sym_var_declaration, 3),
        [sym_expression] = REDUCE(sym_var_declaration, 3),
        [sym_deref] = REDUCE(sym_var_declaration, 3),
        [sym_address_of] = REDUCE(sym_var_declaration, 3),
        [sym_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_deref_field_access] = REDUCE(sym_var_declaration, 3),
        [sym_function_call] = REDUCE(sym_var_declaration, 3),
        [sym_math_op] = REDUCE(sym_var_declaration, 3),
        [sym_bool_op] = REDUCE(sym_var_declaration, 3),
        [sym_rel_op] = REDUCE(sym_var_declaration, 3),
        [sym_assignment] = REDUCE(sym_var_declaration, 3),
        [sym_compound_literal] = REDUCE(sym_var_declaration, 3),
        [sym_number] = REDUCE(sym_var_declaration, 3),
        [sym_char] = REDUCE(sym_var_declaration, 3),
        [sym_string] = REDUCE(sym_var_declaration, 3),
        [sym_identifier] = REDUCE(sym_var_declaration, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_LBRACE] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_return] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_if] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_for] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_while] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [814] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_statement_block_repeat0, 2),
    },
    [815] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_field, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_field, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_field, 2),
    },
    [816] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type_expression, 1),
    },
    [817] = {
        [sym_type_expression] = SHIFT(818),
        [sym_pointer_type] = SHIFT(816),
        [sym_identifier] = SHIFT(816),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(817),
    },
    [818] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_pointer_type, 2),
    },
    [819] = {
        [ts_builtin_sym_end] = REDUCE(aux_sym_program_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c);
