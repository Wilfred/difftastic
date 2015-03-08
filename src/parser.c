#include "tree_sitter/parser.h"

#define STATE_COUNT 825
#define SYMBOL_COUNT 112

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
    sym_storage_class,
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
    aux_sym_statement_block_repeat0,
    aux_sym_primitive_type_repeat0,
    aux_sym_formal_parameters_repeat0,
    aux_sym_struct_type_repeat0,
    aux_sym_union_type_repeat0,
    aux_sym_enum_type_repeat0,
    aux_sym_storage_class_repeat0,
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
    aux_sym_STR_static,
    aux_sym_STR_extern,
    aux_sym_STR_AMP,
    aux_sym_STR_DOT,
    aux_sym_STR_DASH_GT,
    aux_sym_STR_PLUS_PLUS,
    aux_sym_STR_DASH_DASH,
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
    [sym_storage_class] = "storage_class",
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
    [aux_sym_statement_block_repeat0] = "statement_block_repeat0",
    [aux_sym_primitive_type_repeat0] = "primitive_type_repeat0",
    [aux_sym_formal_parameters_repeat0] = "formal_parameters_repeat0",
    [aux_sym_struct_type_repeat0] = "struct_type_repeat0",
    [aux_sym_union_type_repeat0] = "union_type_repeat0",
    [aux_sym_enum_type_repeat0] = "enum_type_repeat0",
    [aux_sym_storage_class_repeat0] = "storage_class_repeat0",
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
    [aux_sym_STR_static] = "STR_static",
    [aux_sym_STR_extern] = "STR_extern",
    [aux_sym_STR_AMP] = "STR_&",
    [aux_sym_STR_DOT] = "STR_.",
    [aux_sym_STR_DASH_GT] = "STR_->",
    [aux_sym_STR_PLUS_PLUS] = "STR_++",
    [aux_sym_STR_DASH_DASH] = "STR_--",
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
    [aux_sym_statement_block_repeat0] = 1,
    [aux_sym_primitive_type_repeat0] = 1,
    [aux_sym_formal_parameters_repeat0] = 1,
    [aux_sym_struct_type_repeat0] = 1,
    [aux_sym_union_type_repeat0] = 1,
    [aux_sym_enum_type_repeat0] = 1,
    [aux_sym_storage_class_repeat0] = 1,
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
    [aux_sym_STR_static] = 1,
    [aux_sym_STR_extern] = 1,
    [aux_sym_STR_AMP] = 1,
    [aux_sym_STR_DOT] = 1,
    [aux_sym_STR_DASH_GT] = 1,
    [aux_sym_STR_PLUS_PLUS] = 1,
    [aux_sym_STR_DASH_DASH] = 1,
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
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(96);
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
                ADVANCE(97);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(98);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 97:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier);
        case 98:
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
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier);
        case 99:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier);
        case 100:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == '\n')
                ADVANCE(100);
            if (lookahead == '/')
                ADVANCE(102);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(106);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 101:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(101);
            if (lookahead == '\n')
                ADVANCE(100);
            if (lookahead == '/')
                ADVANCE(102);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(106);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 102:
            if (lookahead == '*')
                ADVANCE(103);
            if (lookahead == '/')
                ADVANCE(107);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/')))
                ADVANCE(106);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 103:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(104);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(103);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 104:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(105);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/')))
                ADVANCE(103);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 105:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(106);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 106:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(106);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 107:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(107);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
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
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(97);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(98);
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
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(120);
            if (lookahead == 'u')
                ADVANCE(121);
            LEX_ERROR();
        case 120:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier);
        case 121:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier);
        case 123:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(123);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            ACCEPT_TOKEN(aux_sym_STR_LBRACE);
        case 125:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(125);
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
                ADVANCE(124);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
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
            if (lookahead == '+')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            ACCEPT_TOKEN(aux_sym_STR_PLUS_PLUS);
        case 145:
            if (lookahead == '-')
                ADVANCE(146);
            ACCEPT_TOKEN(aux_sym_STR_DASH);
        case 146:
            ACCEPT_TOKEN(aux_sym_STR_DASH_DASH);
        case 147:
            if (lookahead == '.')
                ADVANCE(148);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_number);
        case 148:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_number);
        case 150:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(150);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 151:
            if (lookahead == '=')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            ACCEPT_TOKEN(aux_sym_STR_BANG_EQ);
        case 153:
            if (lookahead == '&')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            ACCEPT_TOKEN(aux_sym_STR_AMP_AMP);
        case 155:
            if (lookahead == '+')
                ADVANCE(144);
            ACCEPT_TOKEN(aux_sym_STR_PLUS);
        case 156:
            if (lookahead == '-')
                ADVANCE(146);
            if (lookahead == '>')
                ADVANCE(157);
            ACCEPT_TOKEN(aux_sym_STR_DASH);
        case 157:
            ACCEPT_TOKEN(aux_sym_STR_DASH_GT);
        case 158:
            ACCEPT_TOKEN(aux_sym_STR_DOT);
        case 159:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            ACCEPT_TOKEN(aux_sym_STR_SLASH);
        case 160:
            if (lookahead == '=')
                ADVANCE(161);
            ACCEPT_TOKEN(aux_sym_STR_LT);
        case 161:
            ACCEPT_TOKEN(aux_sym_STR_LT_EQ);
        case 162:
            if (lookahead == '=')
                ADVANCE(163);
            LEX_ERROR();
        case 163:
            ACCEPT_TOKEN(aux_sym_STR_EQ_EQ);
        case 164:
            if (lookahead == '=')
                ADVANCE(165);
            ACCEPT_TOKEN(aux_sym_STR_GT);
        case 165:
            ACCEPT_TOKEN(aux_sym_STR_GT_EQ);
        case 166:
            if (lookahead == '|')
                ADVANCE(167);
            LEX_ERROR();
        case 167:
            ACCEPT_TOKEN(aux_sym_STR_PIPE_PIPE);
        case 168:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(168);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 169:
            if (lookahead == '=')
                ADVANCE(163);
            ACCEPT_TOKEN(aux_sym_STR_EQ);
        case 170:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(170);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 171:
            ACCEPT_TOKEN(aux_sym_STR_RPAREN);
        case 172:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(172);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '{')
                ADVANCE(124);
            LEX_ERROR();
        case 173:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(173);
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
                ADVANCE(97);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(98);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == '}')
                ADVANCE(128);
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
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 175:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(175);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '/')
                ADVANCE(35);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '{')
                ADVANCE(124);
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
            if (lookahead == '{')
                ADVANCE(124);
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
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 178:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(178);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == '=')
                ADVANCE(133);
            LEX_ERROR();
        case 179:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(179);
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
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 180:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(180);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 181:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(181);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 182:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(182);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 183:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(183);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 184:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == '\n')
                ADVANCE(184);
            if (lookahead == '/')
                ADVANCE(186);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/')))
                ADVANCE(192);
            LEX_ERROR();
        case 185:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(185);
            if (lookahead == '\n')
                ADVANCE(184);
            if (lookahead == '/')
                ADVANCE(186);
            if (lookahead == '\\')
                ADVANCE(197);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' ') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 186:
            if (lookahead == '*')
                ADVANCE(187);
            if (lookahead == '/')
                ADVANCE(195);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 187:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(193);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(187);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 188:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(193);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(187);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 189:
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 190:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 191:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 193:
            if (lookahead == '\n')
                ADVANCE(194);
            if (lookahead == '*')
                ADVANCE(188);
            if (lookahead == '\\')
                ADVANCE(193);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(187);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 194:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(187);
            LEX_ERROR();
        case 195:
            if (lookahead == '\\')
                ADVANCE(196);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(195);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 196:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(196);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(195);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 197:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 198:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(198);
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
        case 199:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(199);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            LEX_ERROR();
        case 200:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(200);
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
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 202:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(202);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 203:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(203);
            if (lookahead == ')')
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
                ADVANCE(97);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 's')
                ADVANCE(98);
            if (lookahead == 'u')
                ADVANCE(80);
            LEX_ERROR();
        case 204:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(204);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == ',')
                ADVANCE(130);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 205:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(205);
            if (lookahead == '/')
                ADVANCE(35);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '{')
                ADVANCE(124);
            LEX_ERROR();
        case 206:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(206);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
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
                ADVANCE(207);
            if (lookahead == 'i')
                ADVANCE(210);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(212);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(218);
            if (lookahead == '{')
                ADVANCE(124);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(208);
            ACCEPT_TOKEN(sym_identifier);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(209);
            ACCEPT_TOKEN(sym_identifier);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_for);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(211);
            ACCEPT_TOKEN(sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_if);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(213);
            ACCEPT_TOKEN(sym_identifier);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(214);
            ACCEPT_TOKEN(sym_identifier);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(215);
            ACCEPT_TOKEN(sym_identifier);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(216);
            ACCEPT_TOKEN(sym_identifier);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(217);
            ACCEPT_TOKEN(sym_identifier);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_return);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(219);
            ACCEPT_TOKEN(sym_identifier);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(220);
            ACCEPT_TOKEN(sym_identifier);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(221);
            ACCEPT_TOKEN(sym_identifier);
        case 221:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(222);
            ACCEPT_TOKEN(sym_identifier);
        case 222:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_while);
        case 223:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(223);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 224:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(224);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 225:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(225);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == ';')
                ADVANCE(95);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 226:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(226);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == '/')
                ADVANCE(35);
            LEX_ERROR();
        case 227:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(227);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(162);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
            LEX_ERROR();
        case 228:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(228);
            if (lookahead == '!')
                ADVANCE(151);
            if (lookahead == '&')
                ADVANCE(153);
            if (lookahead == '(')
                ADVANCE(142);
            if (lookahead == ')')
                ADVANCE(171);
            if (lookahead == '*')
                ADVANCE(93);
            if (lookahead == '+')
                ADVANCE(155);
            if (lookahead == '-')
                ADVANCE(156);
            if (lookahead == '.')
                ADVANCE(158);
            if (lookahead == '/')
                ADVANCE(159);
            if (lookahead == '<')
                ADVANCE(160);
            if (lookahead == '=')
                ADVANCE(169);
            if (lookahead == '>')
                ADVANCE(164);
            if (lookahead == '|')
                ADVANCE(166);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
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
                ADVANCE(207);
            if (lookahead == 'i')
                ADVANCE(210);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(212);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(218);
            if (lookahead == '{')
                ADVANCE(124);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
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
        case 231:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(231);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
            if (lookahead == ';')
                ADVANCE(95);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            LEX_ERROR();
        case 232:
            START_TOKEN();
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(232);
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
            if (lookahead == '+')
                ADVANCE(143);
            if (lookahead == '-')
                ADVANCE(145);
            if (lookahead == '/')
                ADVANCE(35);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(147);
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
                ADVANCE(233);
            if (lookahead == 'f')
                ADVANCE(207);
            if (lookahead == 'i')
                ADVANCE(210);
            if (lookahead == 'l')
                ADVANCE(55);
            if (lookahead == 'r')
                ADVANCE(212);
            if (lookahead == 's')
                ADVANCE(59);
            if (lookahead == 'u')
                ADVANCE(80);
            if (lookahead == 'w')
                ADVANCE(218);
            if (lookahead == '{')
                ADVANCE(124);
            if (lookahead == '}')
                ADVANCE(128);
            LEX_ERROR();
        case 233:
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
                ADVANCE(234);
            if (lookahead == 'n')
                ADVANCE(47);
            if (lookahead == 'x')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(235);
            ACCEPT_TOKEN(sym_identifier);
        case 235:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(236);
            ACCEPT_TOKEN(sym_identifier);
        case 236:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(aux_sym_STR_else);
        case 237:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '\n')
                ADVANCE(238);
            if (lookahead == '!')
                ADVANCE(239);
            if (lookahead == '\"')
                ADVANCE(243);
            if (lookahead == '#')
                ADVANCE(253);
            if (lookahead == '&')
                ADVANCE(285);
            if (lookahead == '\'')
                ADVANCE(287);
            if (lookahead == '(')
                ADVANCE(295);
            if (lookahead == ')')
                ADVANCE(296);
            if (lookahead == '*')
                ADVANCE(297);
            if (lookahead == '+')
                ADVANCE(298);
            if (lookahead == ',')
                ADVANCE(300);
            if (lookahead == '-')
                ADVANCE(301);
            if (lookahead == '.')
                ADVANCE(304);
            if (lookahead == '/')
                ADVANCE(305);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(312);
            if (lookahead == ';')
                ADVANCE(315);
            if (lookahead == '<')
                ADVANCE(316);
            if (lookahead == '=')
                ADVANCE(328);
            if (lookahead == '>')
                ADVANCE(330);
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
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(406);
            if (lookahead == 'c')
                ADVANCE(333);
            if (lookahead == 'e')
                ADVANCE(338);
            if (lookahead == 'f')
                ADVANCE(350);
            if (lookahead == 'i')
                ADVANCE(353);
            if (lookahead == 'l')
                ADVANCE(355);
            if (lookahead == 'r')
                ADVANCE(359);
            if (lookahead == 's')
                ADVANCE(365);
            if (lookahead == 't')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(386);
            if (lookahead == 'w')
                ADVANCE(397);
            if (lookahead == '{')
                ADVANCE(402);
            if (lookahead == '|')
                ADVANCE(403);
            if (lookahead == '}')
                ADVANCE(405);
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
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 238:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '\n')
                ADVANCE(238);
            if (lookahead == '!')
                ADVANCE(239);
            if (lookahead == '\"')
                ADVANCE(243);
            if (lookahead == '#')
                ADVANCE(253);
            if (lookahead == '&')
                ADVANCE(285);
            if (lookahead == '\'')
                ADVANCE(287);
            if (lookahead == '(')
                ADVANCE(295);
            if (lookahead == ')')
                ADVANCE(296);
            if (lookahead == '*')
                ADVANCE(297);
            if (lookahead == '+')
                ADVANCE(298);
            if (lookahead == ',')
                ADVANCE(300);
            if (lookahead == '-')
                ADVANCE(301);
            if (lookahead == '.')
                ADVANCE(304);
            if (lookahead == '/')
                ADVANCE(305);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(312);
            if (lookahead == ';')
                ADVANCE(315);
            if (lookahead == '<')
                ADVANCE(316);
            if (lookahead == '=')
                ADVANCE(328);
            if (lookahead == '>')
                ADVANCE(330);
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
                ADVANCE(332);
            if (lookahead == 'c')
                ADVANCE(333);
            if (lookahead == 'e')
                ADVANCE(338);
            if (lookahead == 'f')
                ADVANCE(350);
            if (lookahead == 'i')
                ADVANCE(353);
            if (lookahead == 'l')
                ADVANCE(355);
            if (lookahead == 'r')
                ADVANCE(359);
            if (lookahead == 's')
                ADVANCE(365);
            if (lookahead == 't')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(386);
            if (lookahead == 'w')
                ADVANCE(397);
            if (lookahead == '{')
                ADVANCE(402);
            if (lookahead == '|')
                ADVANCE(403);
            if (lookahead == '}')
                ADVANCE(405);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_PAT_DOT_STAR);
        case 239:
            if (lookahead == '=')
                ADVANCE(240);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 240:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 241:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 242:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 243:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(244);
            if (lookahead == '\\')
                ADVANCE(245);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(243);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 244:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 245:
            if (lookahead == '\n')
                ADVANCE(246);
            if (lookahead == '\"')
                ADVANCE(252);
            if (lookahead == '\\')
                ADVANCE(245);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(243);
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
                ADVANCE(251);
            LEX_ERROR();
        case 247:
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 248:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(249);
            if (lookahead == '\\')
                ADVANCE(250);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(251);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 249:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(247);
            if (lookahead == '\\')
                ADVANCE(250);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(251);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 250:
            if (lookahead == '\n')
                ADVANCE(246);
            if (lookahead == '\"')
                ADVANCE(249);
            if (lookahead == '\\')
                ADVANCE(250);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(251);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 251:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(247);
            if (lookahead == '\\')
                ADVANCE(250);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(251);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 252:
            if (lookahead == '\n')
                ADVANCE(110);
            if (lookahead == '\"')
                ADVANCE(244);
            if (lookahead == '\\')
                ADVANCE(245);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\"') ||
                (lookahead == '\\')))
                ADVANCE(243);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 253:
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('f' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(254);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(256);
            if (lookahead == 'e')
                ADVANCE(262);
            if (lookahead == 'i')
                ADVANCE(270);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 254:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 255:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 256:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(257);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 257:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(258);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 258:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(259);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 259:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(260);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 260:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(261);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 261:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_POUNDdefine);
        case 262:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'l')
                ADVANCE(263);
            if (lookahead == 'n')
                ADVANCE(266);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 263:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 's')
                ADVANCE(264);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 264:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(265);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 265:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_else);
        case 266:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(267);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 267:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(268);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 268:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(269);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 269:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_endif);
        case 270:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(271);
            if (lookahead == 'n')
                ADVANCE(279);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 271:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(272);
            if (lookahead == 'n')
                ADVANCE(275);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 272:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(273);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 273:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(274);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 274:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifdef);
        case 275:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(276);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 276:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(277);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 277:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(278);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 278:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_POUNDifndef);
        case 279:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'c')
                ADVANCE(280);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 280:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'l')
                ADVANCE(281);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 281:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'u')
                ADVANCE(282);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 282:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(283);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(sym_preproc_directive);
        case 283:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(284);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 284:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(255);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_POUNDinclude);
        case 285:
            if (lookahead == '&')
                ADVANCE(286);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '&') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 286:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 287:
            if (lookahead == '\n')
                ADVANCE(141);
            if (lookahead == '\'')
                ADVANCE(242);
            if (lookahead == '\\')
                ADVANCE(288);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(294);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 288:
            if (lookahead == '\n')
                ADVANCE(289);
            if (lookahead == '\'')
                ADVANCE(291);
            if (lookahead == '\\')
                ADVANCE(293);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(294);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 289:
            if (lookahead == '\'')
                ADVANCE(290);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'')))
                ADVANCE(192);
            LEX_ERROR();
        case 290:
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 291:
            if (lookahead == '\'')
                ADVANCE(292);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 292:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 293:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\'')
                ADVANCE(292);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 294:
            if (lookahead == '\'')
                ADVANCE(292);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\'') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 295:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 296:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 297:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 298:
            if (lookahead == '+')
                ADVANCE(299);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '+') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 299:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 300:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 301:
            if (lookahead == '-')
                ADVANCE(302);
            if (lookahead == '>')
                ADVANCE(303);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '-') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 302:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 303:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 304:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 305:
            if (lookahead == '*')
                ADVANCE(306);
            if (lookahead == '/')
                ADVANCE(310);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 306:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(307);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(306);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 307:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(308);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/') ||
                (lookahead == '\\')))
                ADVANCE(306);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 308:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 309:
            if (lookahead == '\n')
                ADVANCE(194);
            if (lookahead == '*')
                ADVANCE(307);
            if (lookahead == '\\')
                ADVANCE(309);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*') ||
                (lookahead == '\\')))
                ADVANCE(306);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 310:
            if (lookahead == '\\')
                ADVANCE(311);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(310);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 311:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(311);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(310);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 312:
            if (lookahead == '.')
                ADVANCE(313);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(312);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '.') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 313:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 314:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(314);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 315:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 316:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '=')
                ADVANCE(317);
            if (lookahead == '>')
                ADVANCE(318);
            if (lookahead == '\\')
                ADVANCE(319);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(327);
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
                ADVANCE(327);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 318:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 319:
            if (lookahead == '\n')
                ADVANCE(320);
            if (lookahead == '>')
                ADVANCE(326);
            if (lookahead == '\\')
                ADVANCE(319);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(327);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 320:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(321);
            if (lookahead == '\\')
                ADVANCE(322);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(325);
            LEX_ERROR();
        case 321:
            if (lookahead == '\\')
                ADVANCE(190);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(192);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 322:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(323);
            if (lookahead == '\\')
                ADVANCE(324);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(325);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 323:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(321);
            if (lookahead == '\\')
                ADVANCE(324);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(325);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 324:
            if (lookahead == '\n')
                ADVANCE(320);
            if (lookahead == '>')
                ADVANCE(323);
            if (lookahead == '\\')
                ADVANCE(324);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(325);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 325:
            if (lookahead == '\n')
                ADVANCE(114);
            if (lookahead == '>')
                ADVANCE(321);
            if (lookahead == '\\')
                ADVANCE(324);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '>') ||
                (lookahead == '\\')))
                ADVANCE(325);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 326:
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
                ADVANCE(327);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 327:
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
                ADVANCE(327);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 328:
            if (lookahead == '=')
                ADVANCE(329);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 329:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 330:
            if (lookahead == '=')
                ADVANCE(331);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '=') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 331:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 332:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 333:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'o')
                ADVANCE(334);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 334:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(335);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 335:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 's')
                ADVANCE(336);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 336:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(337);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 337:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_const);
        case 338:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'w') ||
                (lookahead == 'y') ||
                (lookahead == 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'l')
                ADVANCE(339);
            if (lookahead == 'n')
                ADVANCE(342);
            if (lookahead == 'x')
                ADVANCE(345);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 339:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 's')
                ADVANCE(340);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 340:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(341);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 341:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_else);
        case 342:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'u')
                ADVANCE(343);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 343:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'm')
                ADVANCE(344);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 344:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_enum);
        case 345:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(346);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 346:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(347);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 347:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'r')
                ADVANCE(348);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 348:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(349);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 349:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_extern);
        case 350:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'o')
                ADVANCE(351);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 351:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'r')
                ADVANCE(352);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 352:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_for);
        case 353:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(354);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 354:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_if);
        case 355:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'o')
                ADVANCE(356);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 356:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(357);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 357:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'g')
                ADVANCE(358);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 358:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_long);
        case 359:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(360);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 360:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(361);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 361:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'u')
                ADVANCE(362);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 362:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'r')
                ADVANCE(363);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 363:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(364);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 364:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_return);
        case 365:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'h')
                ADVANCE(366);
            if (lookahead == 't')
                ADVANCE(370);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 366:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'o')
                ADVANCE(367);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 367:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'r')
                ADVANCE(368);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 368:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(369);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 369:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_short);
        case 370:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'a')
                ADVANCE(371);
            if (lookahead == 'r')
                ADVANCE(375);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 371:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(372);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 372:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(373);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 373:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'c')
                ADVANCE(374);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 374:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_static);
        case 375:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'u')
                ADVANCE(376);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 376:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'c')
                ADVANCE(377);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 377:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 't')
                ADVANCE(378);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 378:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_struct);
        case 379:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'y')
                ADVANCE(380);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 380:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'p')
                ADVANCE(381);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 381:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(382);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 382:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(383);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 383:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(384);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 384:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'f')
                ADVANCE(385);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 385:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_typedef);
        case 386:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(387);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 387:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(388);
            if (lookahead == 's')
                ADVANCE(391);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 388:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'o')
                ADVANCE(389);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 389:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(390);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 390:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_union);
        case 391:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(392);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 392:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'g')
                ADVANCE(393);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 393:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'n')
                ADVANCE(394);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 394:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(395);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 395:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'd')
                ADVANCE(396);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 396:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_unsigned);
        case 397:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'h')
                ADVANCE(398);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 398:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'i')
                ADVANCE(399);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 399:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'l')
                ADVANCE(400);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 400:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == 'e')
                ADVANCE(401);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 401:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(332);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '\\') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym_STR_while);
        case 402:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 403:
            if (lookahead == '\\')
                ADVANCE(241);
            if (lookahead == '|')
                ADVANCE(404);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\') ||
                (lookahead == '|')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 404:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 405:
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case 406:
            if (lookahead == '\n')
                ADVANCE(191);
            if (lookahead == '\\')
                ADVANCE(241);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(242);
            ACCEPT_TOKEN(aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN);
        case ts_lex_state_error:
            START_TOKEN();
            if (lookahead == 0)
                ADVANCE(2);
            if ((lookahead == '\t') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                ADVANCE(237);
            if (lookahead == '\n')
                ADVANCE(238);
            if (lookahead == '!')
                ADVANCE(239);
            if (lookahead == '\"')
                ADVANCE(243);
            if (lookahead == '#')
                ADVANCE(253);
            if (lookahead == '&')
                ADVANCE(285);
            if (lookahead == '\'')
                ADVANCE(287);
            if (lookahead == '(')
                ADVANCE(295);
            if (lookahead == ')')
                ADVANCE(296);
            if (lookahead == '*')
                ADVANCE(297);
            if (lookahead == '+')
                ADVANCE(298);
            if (lookahead == ',')
                ADVANCE(300);
            if (lookahead == '-')
                ADVANCE(301);
            if (lookahead == '.')
                ADVANCE(304);
            if (lookahead == '/')
                ADVANCE(305);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(312);
            if (lookahead == ';')
                ADVANCE(315);
            if (lookahead == '<')
                ADVANCE(316);
            if (lookahead == '=')
                ADVANCE(328);
            if (lookahead == '>')
                ADVANCE(330);
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
                ADVANCE(332);
            if (lookahead == 'c')
                ADVANCE(333);
            if (lookahead == 'e')
                ADVANCE(338);
            if (lookahead == 'f')
                ADVANCE(350);
            if (lookahead == 'i')
                ADVANCE(353);
            if (lookahead == 'l')
                ADVANCE(355);
            if (lookahead == 'r')
                ADVANCE(359);
            if (lookahead == 's')
                ADVANCE(365);
            if (lookahead == 't')
                ADVANCE(379);
            if (lookahead == 'u')
                ADVANCE(386);
            if (lookahead == 'w')
                ADVANCE(397);
            if (lookahead == '{')
                ADVANCE(402);
            if (lookahead == '|')
                ADVANCE(403);
            if (lookahead == '}')
                ADVANCE(405);
            if (!((lookahead == 0) ||
                (lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (' ' <= lookahead && lookahead <= '#') ||
                ('&' <= lookahead && lookahead <= '9') ||
                (';' <= lookahead && lookahead <= '>') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= '}')))
                ADVANCE(242);
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
    [9] = 100,
    [10] = 92,
    [11] = 91,
    [12] = 108,
    [13] = 96,
    [14] = 109,
    [15] = 108,
    [16] = 108,
    [17] = 108,
    [18] = 96,
    [19] = 118,
    [20] = 119,
    [21] = 123,
    [22] = 123,
    [23] = 123,
    [24] = 125,
    [25] = 96,
    [26] = 126,
    [27] = 127,
    [28] = 129,
    [29] = 131,
    [30] = 132,
    [31] = 94,
    [32] = 134,
    [33] = 150,
    [34] = 168,
    [35] = 150,
    [36] = 96,
    [37] = 134,
    [38] = 134,
    [39] = 134,
    [40] = 134,
    [41] = 150,
    [42] = 134,
    [43] = 150,
    [44] = 150,
    [45] = 150,
    [46] = 150,
    [47] = 168,
    [48] = 168,
    [49] = 168,
    [50] = 96,
    [51] = 134,
    [52] = 134,
    [53] = 134,
    [54] = 168,
    [55] = 134,
    [56] = 168,
    [57] = 168,
    [58] = 168,
    [59] = 168,
    [60] = 170,
    [61] = 170,
    [62] = 170,
    [63] = 108,
    [64] = 118,
    [65] = 123,
    [66] = 123,
    [67] = 123,
    [68] = 172,
    [69] = 127,
    [70] = 129,
    [71] = 131,
    [72] = 170,
    [73] = 170,
    [74] = 131,
    [75] = 108,
    [76] = 129,
    [77] = 131,
    [78] = 170,
    [79] = 127,
    [80] = 129,
    [81] = 131,
    [82] = 170,
    [83] = 172,
    [84] = 173,
    [85] = 92,
    [86] = 92,
    [87] = 174,
    [88] = 131,
    [89] = 92,
    [90] = 108,
    [91] = 170,
    [92] = 118,
    [93] = 123,
    [94] = 123,
    [95] = 123,
    [96] = 175,
    [97] = 127,
    [98] = 129,
    [99] = 131,
    [100] = 92,
    [101] = 92,
    [102] = 131,
    [103] = 92,
    [104] = 127,
    [105] = 129,
    [106] = 131,
    [107] = 92,
    [108] = 175,
    [109] = 173,
    [110] = 131,
    [111] = 92,
    [112] = 92,
    [113] = 173,
    [114] = 131,
    [115] = 92,
    [116] = 175,
    [117] = 173,
    [118] = 174,
    [119] = 131,
    [120] = 92,
    [121] = 92,
    [122] = 173,
    [123] = 131,
    [124] = 173,
    [125] = 131,
    [126] = 92,
    [127] = 92,
    [128] = 92,
    [129] = 170,
    [130] = 173,
    [131] = 131,
    [132] = 174,
    [133] = 174,
    [134] = 92,
    [135] = 174,
    [136] = 173,
    [137] = 131,
    [138] = 170,
    [139] = 172,
    [140] = 173,
    [141] = 131,
    [142] = 170,
    [143] = 170,
    [144] = 173,
    [145] = 131,
    [146] = 170,
    [147] = 170,
    [148] = 170,
    [149] = 176,
    [150] = 177,
    [151] = 150,
    [152] = 168,
    [153] = 150,
    [154] = 129,
    [155] = 131,
    [156] = 96,
    [157] = 168,
    [158] = 134,
    [159] = 134,
    [160] = 108,
    [161] = 134,
    [162] = 134,
    [163] = 150,
    [164] = 134,
    [165] = 150,
    [166] = 150,
    [167] = 150,
    [168] = 178,
    [169] = 134,
    [170] = 150,
    [171] = 179,
    [172] = 108,
    [173] = 108,
    [174] = 134,
    [175] = 134,
    [176] = 134,
    [177] = 134,
    [178] = 134,
    [179] = 150,
    [180] = 150,
    [181] = 150,
    [182] = 150,
    [183] = 150,
    [184] = 168,
    [185] = 168,
    [186] = 180,
    [187] = 181,
    [188] = 180,
    [189] = 170,
    [190] = 96,
    [191] = 150,
    [192] = 134,
    [193] = 134,
    [194] = 134,
    [195] = 134,
    [196] = 180,
    [197] = 134,
    [198] = 180,
    [199] = 180,
    [200] = 180,
    [201] = 180,
    [202] = 181,
    [203] = 181,
    [204] = 181,
    [205] = 96,
    [206] = 134,
    [207] = 134,
    [208] = 134,
    [209] = 181,
    [210] = 134,
    [211] = 181,
    [212] = 181,
    [213] = 181,
    [214] = 181,
    [215] = 170,
    [216] = 176,
    [217] = 177,
    [218] = 150,
    [219] = 129,
    [220] = 131,
    [221] = 181,
    [222] = 181,
    [223] = 129,
    [224] = 182,
    [225] = 150,
    [226] = 129,
    [227] = 181,
    [228] = 129,
    [229] = 183,
    [230] = 131,
    [231] = 181,
    [232] = 170,
    [233] = 176,
    [234] = 177,
    [235] = 150,
    [236] = 129,
    [237] = 131,
    [238] = 180,
    [239] = 180,
    [240] = 129,
    [241] = 182,
    [242] = 180,
    [243] = 131,
    [244] = 180,
    [245] = 150,
    [246] = 134,
    [247] = 180,
    [248] = 179,
    [249] = 108,
    [250] = 108,
    [251] = 134,
    [252] = 134,
    [253] = 134,
    [254] = 134,
    [255] = 134,
    [256] = 180,
    [257] = 180,
    [258] = 180,
    [259] = 180,
    [260] = 180,
    [261] = 181,
    [262] = 181,
    [263] = 180,
    [264] = 170,
    [265] = 180,
    [266] = 180,
    [267] = 170,
    [268] = 134,
    [269] = 180,
    [270] = 170,
    [271] = 180,
    [272] = 170,
    [273] = 150,
    [274] = 150,
    [275] = 168,
    [276] = 168,
    [277] = 168,
    [278] = 96,
    [279] = 134,
    [280] = 134,
    [281] = 134,
    [282] = 168,
    [283] = 134,
    [284] = 168,
    [285] = 168,
    [286] = 168,
    [287] = 168,
    [288] = 170,
    [289] = 176,
    [290] = 177,
    [291] = 150,
    [292] = 129,
    [293] = 131,
    [294] = 168,
    [295] = 168,
    [296] = 129,
    [297] = 182,
    [298] = 168,
    [299] = 131,
    [300] = 168,
    [301] = 170,
    [302] = 176,
    [303] = 177,
    [304] = 150,
    [305] = 129,
    [306] = 131,
    [307] = 150,
    [308] = 150,
    [309] = 129,
    [310] = 182,
    [311] = 150,
    [312] = 131,
    [313] = 150,
    [314] = 168,
    [315] = 129,
    [316] = 182,
    [317] = 168,
    [318] = 131,
    [319] = 168,
    [320] = 134,
    [321] = 150,
    [322] = 170,
    [323] = 176,
    [324] = 177,
    [325] = 150,
    [326] = 129,
    [327] = 131,
    [328] = 150,
    [329] = 150,
    [330] = 129,
    [331] = 182,
    [332] = 150,
    [333] = 131,
    [334] = 150,
    [335] = 134,
    [336] = 150,
    [337] = 179,
    [338] = 108,
    [339] = 108,
    [340] = 134,
    [341] = 134,
    [342] = 134,
    [343] = 134,
    [344] = 134,
    [345] = 150,
    [346] = 150,
    [347] = 150,
    [348] = 150,
    [349] = 150,
    [350] = 168,
    [351] = 168,
    [352] = 180,
    [353] = 170,
    [354] = 150,
    [355] = 150,
    [356] = 170,
    [357] = 150,
    [358] = 94,
    [359] = 131,
    [360] = 94,
    [361] = 127,
    [362] = 129,
    [363] = 131,
    [364] = 94,
    [365] = 126,
    [366] = 173,
    [367] = 131,
    [368] = 94,
    [369] = 94,
    [370] = 173,
    [371] = 131,
    [372] = 94,
    [373] = 126,
    [374] = 173,
    [375] = 131,
    [376] = 94,
    [377] = 94,
    [378] = 173,
    [379] = 131,
    [380] = 94,
    [381] = 108,
    [382] = 92,
    [383] = 123,
    [384] = 123,
    [385] = 123,
    [386] = 175,
    [387] = 127,
    [388] = 129,
    [389] = 131,
    [390] = 92,
    [391] = 92,
    [392] = 131,
    [393] = 92,
    [394] = 127,
    [395] = 129,
    [396] = 131,
    [397] = 92,
    [398] = 175,
    [399] = 173,
    [400] = 131,
    [401] = 92,
    [402] = 92,
    [403] = 173,
    [404] = 131,
    [405] = 92,
    [406] = 175,
    [407] = 173,
    [408] = 131,
    [409] = 92,
    [410] = 92,
    [411] = 173,
    [412] = 131,
    [413] = 92,
    [414] = 92,
    [415] = 174,
    [416] = 1,
    [417] = 1,
    [418] = 1,
    [419] = 184,
    [420] = 1,
    [421] = 1,
    [422] = 92,
    [423] = 1,
    [424] = 92,
    [425] = 198,
    [426] = 198,
    [427] = 199,
    [428] = 92,
    [429] = 198,
    [430] = 174,
    [431] = 1,
    [432] = 92,
    [433] = 200,
    [434] = 200,
    [435] = 199,
    [436] = 92,
    [437] = 200,
    [438] = 174,
    [439] = 134,
    [440] = 201,
    [441] = 202,
    [442] = 201,
    [443] = 96,
    [444] = 134,
    [445] = 134,
    [446] = 134,
    [447] = 134,
    [448] = 201,
    [449] = 134,
    [450] = 201,
    [451] = 201,
    [452] = 201,
    [453] = 201,
    [454] = 202,
    [455] = 202,
    [456] = 202,
    [457] = 96,
    [458] = 134,
    [459] = 134,
    [460] = 134,
    [461] = 202,
    [462] = 134,
    [463] = 202,
    [464] = 202,
    [465] = 202,
    [466] = 202,
    [467] = 170,
    [468] = 176,
    [469] = 177,
    [470] = 150,
    [471] = 129,
    [472] = 131,
    [473] = 202,
    [474] = 202,
    [475] = 129,
    [476] = 182,
    [477] = 202,
    [478] = 131,
    [479] = 202,
    [480] = 170,
    [481] = 176,
    [482] = 177,
    [483] = 150,
    [484] = 129,
    [485] = 131,
    [486] = 201,
    [487] = 201,
    [488] = 129,
    [489] = 182,
    [490] = 201,
    [491] = 131,
    [492] = 201,
    [493] = 134,
    [494] = 201,
    [495] = 179,
    [496] = 108,
    [497] = 108,
    [498] = 134,
    [499] = 134,
    [500] = 134,
    [501] = 134,
    [502] = 134,
    [503] = 201,
    [504] = 201,
    [505] = 201,
    [506] = 201,
    [507] = 201,
    [508] = 202,
    [509] = 202,
    [510] = 180,
    [511] = 170,
    [512] = 201,
    [513] = 201,
    [514] = 170,
    [515] = 201,
    [516] = 1,
    [517] = 203,
    [518] = 92,
    [519] = 170,
    [520] = 204,
    [521] = 170,
    [522] = 170,
    [523] = 96,
    [524] = 204,
    [525] = 170,
    [526] = 205,
    [527] = 1,
    [528] = 206,
    [529] = 206,
    [530] = 206,
    [531] = 92,
    [532] = 96,
    [533] = 223,
    [534] = 224,
    [535] = 223,
    [536] = 131,
    [537] = 225,
    [538] = 96,
    [539] = 206,
    [540] = 1,
    [541] = 134,
    [542] = 226,
    [543] = 226,
    [544] = 226,
    [545] = 134,
    [546] = 134,
    [547] = 134,
    [548] = 134,
    [549] = 223,
    [550] = 134,
    [551] = 223,
    [552] = 223,
    [553] = 223,
    [554] = 223,
    [555] = 224,
    [556] = 224,
    [557] = 224,
    [558] = 96,
    [559] = 134,
    [560] = 134,
    [561] = 134,
    [562] = 224,
    [563] = 134,
    [564] = 224,
    [565] = 224,
    [566] = 224,
    [567] = 224,
    [568] = 170,
    [569] = 176,
    [570] = 177,
    [571] = 150,
    [572] = 129,
    [573] = 131,
    [574] = 224,
    [575] = 224,
    [576] = 129,
    [577] = 182,
    [578] = 224,
    [579] = 131,
    [580] = 224,
    [581] = 134,
    [582] = 227,
    [583] = 228,
    [584] = 227,
    [585] = 96,
    [586] = 134,
    [587] = 134,
    [588] = 134,
    [589] = 134,
    [590] = 227,
    [591] = 134,
    [592] = 227,
    [593] = 227,
    [594] = 227,
    [595] = 227,
    [596] = 228,
    [597] = 228,
    [598] = 228,
    [599] = 96,
    [600] = 134,
    [601] = 134,
    [602] = 134,
    [603] = 228,
    [604] = 134,
    [605] = 228,
    [606] = 228,
    [607] = 228,
    [608] = 228,
    [609] = 170,
    [610] = 176,
    [611] = 177,
    [612] = 150,
    [613] = 129,
    [614] = 131,
    [615] = 228,
    [616] = 228,
    [617] = 129,
    [618] = 182,
    [619] = 228,
    [620] = 131,
    [621] = 228,
    [622] = 170,
    [623] = 176,
    [624] = 177,
    [625] = 150,
    [626] = 129,
    [627] = 131,
    [628] = 227,
    [629] = 227,
    [630] = 129,
    [631] = 182,
    [632] = 227,
    [633] = 131,
    [634] = 227,
    [635] = 134,
    [636] = 227,
    [637] = 179,
    [638] = 108,
    [639] = 108,
    [640] = 134,
    [641] = 134,
    [642] = 134,
    [643] = 134,
    [644] = 134,
    [645] = 227,
    [646] = 227,
    [647] = 227,
    [648] = 227,
    [649] = 227,
    [650] = 228,
    [651] = 228,
    [652] = 180,
    [653] = 170,
    [654] = 227,
    [655] = 227,
    [656] = 170,
    [657] = 227,
    [658] = 229,
    [659] = 206,
    [660] = 230,
    [661] = 231,
    [662] = 92,
    [663] = 96,
    [664] = 223,
    [665] = 231,
    [666] = 179,
    [667] = 108,
    [668] = 108,
    [669] = 134,
    [670] = 134,
    [671] = 134,
    [672] = 134,
    [673] = 134,
    [674] = 223,
    [675] = 223,
    [676] = 223,
    [677] = 223,
    [678] = 223,
    [679] = 224,
    [680] = 224,
    [681] = 180,
    [682] = 170,
    [683] = 223,
    [684] = 223,
    [685] = 170,
    [686] = 223,
    [687] = 223,
    [688] = 179,
    [689] = 227,
    [690] = 229,
    [691] = 206,
    [692] = 229,
    [693] = 206,
    [694] = 179,
    [695] = 227,
    [696] = 229,
    [697] = 206,
    [698] = 92,
    [699] = 200,
    [700] = 199,
    [701] = 174,
    [702] = 231,
    [703] = 231,
    [704] = 200,
    [705] = 199,
    [706] = 174,
    [707] = 231,
    [708] = 223,
    [709] = 179,
    [710] = 227,
    [711] = 229,
    [712] = 206,
    [713] = 134,
    [714] = 227,
    [715] = 170,
    [716] = 229,
    [717] = 232,
    [718] = 232,
    [719] = 92,
    [720] = 96,
    [721] = 223,
    [722] = 206,
    [723] = 134,
    [724] = 226,
    [725] = 226,
    [726] = 226,
    [727] = 134,
    [728] = 227,
    [729] = 229,
    [730] = 232,
    [731] = 230,
    [732] = 231,
    [733] = 223,
    [734] = 231,
    [735] = 223,
    [736] = 179,
    [737] = 227,
    [738] = 229,
    [739] = 232,
    [740] = 229,
    [741] = 232,
    [742] = 179,
    [743] = 227,
    [744] = 229,
    [745] = 232,
    [746] = 223,
    [747] = 179,
    [748] = 227,
    [749] = 229,
    [750] = 232,
    [751] = 134,
    [752] = 227,
    [753] = 170,
    [754] = 229,
    [755] = 232,
    [756] = 229,
    [757] = 232,
    [758] = 223,
    [759] = 232,
    [760] = 131,
    [761] = 232,
    [762] = 232,
    [763] = 232,
    [764] = 92,
    [765] = 200,
    [766] = 199,
    [767] = 174,
    [768] = 232,
    [769] = 232,
    [770] = 200,
    [771] = 199,
    [772] = 174,
    [773] = 232,
    [774] = 229,
    [775] = 206,
    [776] = 223,
    [777] = 206,
    [778] = 131,
    [779] = 206,
    [780] = 206,
    [781] = 170,
    [782] = 176,
    [783] = 177,
    [784] = 150,
    [785] = 129,
    [786] = 131,
    [787] = 223,
    [788] = 223,
    [789] = 129,
    [790] = 182,
    [791] = 223,
    [792] = 131,
    [793] = 223,
    [794] = 134,
    [795] = 223,
    [796] = 1,
    [797] = 206,
    [798] = 92,
    [799] = 200,
    [800] = 199,
    [801] = 174,
    [802] = 206,
    [803] = 206,
    [804] = 200,
    [805] = 199,
    [806] = 174,
    [807] = 206,
    [808] = 131,
    [809] = 204,
    [810] = 204,
    [811] = 92,
    [812] = 204,
    [813] = 1,
    [814] = 1,
    [815] = 1,
    [816] = 198,
    [817] = 199,
    [818] = 174,
    [819] = 1,
    [820] = 203,
    [821] = 170,
    [822] = 205,
    [823] = 1,
    [824] = 91,
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
        [sym_storage_class] = SHIFT(8),
        [ts_builtin_sym_end] = REDUCE_FRAGILE(sym_program, 0),
        [sym_preproc_else] = SHIFT(2),
        [sym_preproc_endif] = SHIFT(2),
        [sym_preproc_directive] = SHIFT(9),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = SHIFT(11),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_POUNDinclude] = SHIFT(14),
        [aux_sym_STR_POUNDdefine] = SHIFT(15),
        [aux_sym_STR_POUNDifdef] = SHIFT(16),
        [aux_sym_STR_POUNDifndef] = SHIFT(17),
        [aux_sym_STR_typedef] = SHIFT(18),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(21),
        [aux_sym_STR_union] = SHIFT(22),
        [aux_sym_STR_enum] = SHIFT(23),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
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
        [sym_storage_class] = SHIFT(8),
        [ts_builtin_sym_end] = REDUCE(aux_sym_program_repeat0, 1),
        [sym_preproc_else] = SHIFT(2),
        [sym_preproc_endif] = SHIFT(2),
        [sym_preproc_directive] = SHIFT(9),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = SHIFT(824),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_POUNDinclude] = SHIFT(14),
        [aux_sym_STR_POUNDdefine] = SHIFT(15),
        [aux_sym_STR_POUNDifdef] = SHIFT(16),
        [aux_sym_STR_POUNDifndef] = SHIFT(17),
        [aux_sym_STR_typedef] = SHIFT(18),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(21),
        [aux_sym_STR_union] = SHIFT(22),
        [aux_sym_STR_enum] = SHIFT(23),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
    },
    [3] = {
        [sym_type_expression] = SHIFT(816),
        [sym_pointer_type] = SHIFT(426),
        [sym_var_assignment] = SHIFT(817),
        [sym_identifier] = SHIFT(426),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(428),
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
        [aux_sym_STR_SEMI] = SHIFT(815),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [6] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(814),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [7] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_var_assignment] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(813),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [8] = {
        [sym_type] = SHIFT(424),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
    },
    [9] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_PAT_DOT_STAR] = SHIFT(423),
    },
    [10] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_var_assignment] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [11] = {
        [ts_builtin_sym_end] = REDUCE(sym_program, 1),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [12] = {
        [sym_identifier] = SHIFT(422),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [13] = {
        [sym_type] = REDUCE(sym_storage_class, 1),
        [sym_primitive_type] = REDUCE(sym_storage_class, 1),
        [sym_struct_type] = REDUCE(sym_storage_class, 1),
        [sym_union_type] = REDUCE(sym_storage_class, 1),
        [sym_enum_type] = REDUCE(sym_storage_class, 1),
        [sym_identifier] = REDUCE(sym_storage_class, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_const] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_unsigned] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_short] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_long] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_struct] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_union] = REDUCE(sym_storage_class, 1),
        [aux_sym_STR_enum] = REDUCE(sym_storage_class, 1),
    },
    [14] = {
        [sym_string] = SHIFT(421),
        [sym_system_lib_string] = SHIFT(421),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [15] = {
        [sym_identifier] = SHIFT(419),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [16] = {
        [sym_identifier] = SHIFT(418),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [17] = {
        [sym_identifier] = SHIFT(417),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [18] = {
        [sym_type] = SHIFT(414),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [19] = {
        [sym_primitive_type] = SHIFT(382),
        [sym_struct_type] = SHIFT(382),
        [sym_union_type] = SHIFT(382),
        [sym_enum_type] = SHIFT(382),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
    },
    [20] = {
        [sym_identifier] = REDUCE(aux_sym_primitive_type_repeat0, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(381),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
    },
    [21] = {
        [sym_identifier] = SHIFT(373),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(374),
    },
    [22] = {
        [sym_identifier] = SHIFT(365),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(366),
    },
    [23] = {
        [sym_identifier] = SHIFT(26),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(27),
    },
    [24] = {
        [sym_type] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_primitive_type] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_struct_type] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_union_type] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_enum_type] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_identifier] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_storage_class_repeat0] = SHIFT(25),
        [aux_sym_STR_const] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_unsigned] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_short] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_long] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_struct] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_union] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_enum] = REDUCE(aux_sym_storage_class_repeat0, 1),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
    },
    [25] = {
        [sym_type] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_primitive_type] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_struct_type] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_union_type] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_enum_type] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_identifier] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_const] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_unsigned] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_short] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_long] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_struct] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_union] = REDUCE(aux_sym_storage_class_repeat0, 2),
        [aux_sym_STR_enum] = REDUCE(aux_sym_storage_class_repeat0, 2),
    },
    [26] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_var_assignment] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(361),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [27] = {
        [sym_enum_value] = SHIFT(28),
        [ts_builtin_sym_error] = SHIFT(29),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(31),
    },
    [28] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(359),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(358),
    },
    [29] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(358),
    },
    [30] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_enum_value, 1),
        [aux_sym_STR_EQ] = SHIFT(32),
    },
    [31] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_var_assignment] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [32] = {
        [sym_expression] = SHIFT(33),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [33] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_LPAREN] = SHIFT(337),
        [aux_sym_STR_RBRACE] = REDUCE(sym_enum_value, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = SHIFT(338),
        [aux_sym_STR_DASH_GT] = SHIFT(339),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = SHIFT(340),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = SHIFT(340),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(343),
        [aux_sym_STR_LT] = SHIFT(344),
        [aux_sym_STR_LT_EQ] = SHIFT(344),
        [aux_sym_STR_EQ_EQ] = SHIFT(344),
        [aux_sym_STR_BANG_EQ] = SHIFT(344),
        [aux_sym_STR_GT_EQ] = SHIFT(344),
        [aux_sym_STR_GT] = SHIFT(344),
    },
    [34] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(335),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [35] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [36] = {
        [sym_type] = SHIFT(322),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [37] = {
        [sym_expression] = SHIFT(47),
        [sym_deref] = SHIFT(48),
        [sym_address_of] = SHIFT(49),
        [sym_field_access] = SHIFT(48),
        [sym_deref_field_access] = SHIFT(48),
        [sym_function_call] = SHIFT(49),
        [sym_math_op] = SHIFT(49),
        [sym_bool_op] = SHIFT(49),
        [sym_rel_op] = SHIFT(49),
        [sym_assignment] = SHIFT(49),
        [sym_compound_literal] = SHIFT(49),
        [sym_number] = SHIFT(49),
        [sym_char] = SHIFT(49),
        [sym_string] = SHIFT(49),
        [sym_identifier] = SHIFT(48),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(50),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(51),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(52),
        [aux_sym_STR_DASH_DASH] = SHIFT(52),
        [aux_sym_STR_DASH] = SHIFT(52),
        [aux_sym_STR_BANG] = SHIFT(53),
    },
    [38] = {
        [sym_expression] = SHIFT(46),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [39] = {
        [sym_expression] = SHIFT(45),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [40] = {
        [sym_expression] = SHIFT(41),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [41] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
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
    [42] = {
        [sym_expression] = SHIFT(44),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [43] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [44] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
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
    [45] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
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
    [46] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [47] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [48] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [49] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [50] = {
        [sym_type] = SHIFT(60),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [51] = {
        [sym_expression] = SHIFT(59),
        [sym_deref] = SHIFT(48),
        [sym_address_of] = SHIFT(49),
        [sym_field_access] = SHIFT(48),
        [sym_deref_field_access] = SHIFT(48),
        [sym_function_call] = SHIFT(49),
        [sym_math_op] = SHIFT(49),
        [sym_bool_op] = SHIFT(49),
        [sym_rel_op] = SHIFT(49),
        [sym_assignment] = SHIFT(49),
        [sym_compound_literal] = SHIFT(49),
        [sym_number] = SHIFT(49),
        [sym_char] = SHIFT(49),
        [sym_string] = SHIFT(49),
        [sym_identifier] = SHIFT(48),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(50),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(51),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(52),
        [aux_sym_STR_DASH_DASH] = SHIFT(52),
        [aux_sym_STR_DASH] = SHIFT(52),
        [aux_sym_STR_BANG] = SHIFT(53),
    },
    [52] = {
        [sym_expression] = SHIFT(58),
        [sym_deref] = SHIFT(48),
        [sym_address_of] = SHIFT(49),
        [sym_field_access] = SHIFT(48),
        [sym_deref_field_access] = SHIFT(48),
        [sym_function_call] = SHIFT(49),
        [sym_math_op] = SHIFT(49),
        [sym_bool_op] = SHIFT(49),
        [sym_rel_op] = SHIFT(49),
        [sym_assignment] = SHIFT(49),
        [sym_compound_literal] = SHIFT(49),
        [sym_number] = SHIFT(49),
        [sym_char] = SHIFT(49),
        [sym_string] = SHIFT(49),
        [sym_identifier] = SHIFT(48),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(50),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(51),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(52),
        [aux_sym_STR_DASH_DASH] = SHIFT(52),
        [aux_sym_STR_DASH] = SHIFT(52),
        [aux_sym_STR_BANG] = SHIFT(53),
    },
    [53] = {
        [sym_expression] = SHIFT(54),
        [sym_deref] = SHIFT(48),
        [sym_address_of] = SHIFT(49),
        [sym_field_access] = SHIFT(48),
        [sym_deref_field_access] = SHIFT(48),
        [sym_function_call] = SHIFT(49),
        [sym_math_op] = SHIFT(49),
        [sym_bool_op] = SHIFT(49),
        [sym_rel_op] = SHIFT(49),
        [sym_assignment] = SHIFT(49),
        [sym_compound_literal] = SHIFT(49),
        [sym_number] = SHIFT(49),
        [sym_char] = SHIFT(49),
        [sym_string] = SHIFT(49),
        [sym_identifier] = SHIFT(48),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(50),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(51),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(52),
        [aux_sym_STR_DASH_DASH] = SHIFT(52),
        [aux_sym_STR_DASH] = SHIFT(52),
        [aux_sym_STR_BANG] = SHIFT(53),
    },
    [54] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(55),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(56),
        [aux_sym_STR_DASH_DASH] = SHIFT(56),
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
    [55] = {
        [sym_expression] = SHIFT(57),
        [sym_deref] = SHIFT(48),
        [sym_address_of] = SHIFT(49),
        [sym_field_access] = SHIFT(48),
        [sym_deref_field_access] = SHIFT(48),
        [sym_function_call] = SHIFT(49),
        [sym_math_op] = SHIFT(49),
        [sym_bool_op] = SHIFT(49),
        [sym_rel_op] = SHIFT(49),
        [sym_assignment] = SHIFT(49),
        [sym_compound_literal] = SHIFT(49),
        [sym_number] = SHIFT(49),
        [sym_char] = SHIFT(49),
        [sym_string] = SHIFT(49),
        [sym_identifier] = SHIFT(48),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(50),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(51),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(52),
        [aux_sym_STR_DASH_DASH] = SHIFT(52),
        [aux_sym_STR_DASH] = SHIFT(52),
        [aux_sym_STR_BANG] = SHIFT(53),
    },
    [56] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [57] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(55),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(56),
        [aux_sym_STR_DASH_DASH] = SHIFT(56),
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
    [58] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(56),
        [aux_sym_STR_DASH_DASH] = SHIFT(56),
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
    [59] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [60] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(149),
    },
    [61] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type, 1),
    },
    [62] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [63] = {
        [sym_identifier] = SHIFT(148),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [64] = {
        [sym_primitive_type] = SHIFT(147),
        [sym_struct_type] = SHIFT(147),
        [sym_union_type] = SHIFT(147),
        [sym_enum_type] = SHIFT(147),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [65] = {
        [sym_identifier] = SHIFT(139),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(140),
    },
    [66] = {
        [sym_identifier] = SHIFT(83),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(84),
    },
    [67] = {
        [sym_identifier] = SHIFT(68),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(69),
    },
    [68] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(79),
    },
    [69] = {
        [sym_enum_value] = SHIFT(70),
        [ts_builtin_sym_error] = SHIFT(71),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(72),
    },
    [70] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(74),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(73),
    },
    [71] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(73),
    },
    [72] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 3),
    },
    [73] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 4),
    },
    [74] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(78),
    },
    [75] = {
        [sym_enum_value] = SHIFT(76),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [76] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(77),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_enum_type_repeat0, 2),
    },
    [77] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_enum_type_repeat0, 3),
    },
    [78] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 5),
    },
    [79] = {
        [sym_enum_value] = SHIFT(80),
        [ts_builtin_sym_error] = SHIFT(74),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(73),
    },
    [80] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(81),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(78),
    },
    [81] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(82),
    },
    [82] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_enum_type, 6),
    },
    [83] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(136),
    },
    [84] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(88),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(88),
        [aux_sym_STR_RBRACE] = SHIFT(91),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [85] = {
        [sym_type_expression] = SHIFT(132),
        [sym_pointer_type] = SHIFT(133),
        [sym_identifier] = SHIFT(133),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(134),
    },
    [86] = {
        [sym_type_expression] = REDUCE(sym_type, 1),
        [sym_pointer_type] = REDUCE(sym_type, 1),
        [sym_identifier] = REDUCE(sym_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 1),
    },
    [87] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(130),
    },
    [88] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(129),
    },
    [89] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
    },
    [90] = {
        [sym_identifier] = SHIFT(128),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [91] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 3),
    },
    [92] = {
        [sym_primitive_type] = SHIFT(127),
        [sym_struct_type] = SHIFT(127),
        [sym_union_type] = SHIFT(127),
        [sym_enum_type] = SHIFT(127),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [93] = {
        [sym_identifier] = SHIFT(116),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(117),
    },
    [94] = {
        [sym_identifier] = SHIFT(108),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(109),
    },
    [95] = {
        [sym_identifier] = SHIFT(96),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(97),
    },
    [96] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(104),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [97] = {
        [sym_enum_value] = SHIFT(98),
        [ts_builtin_sym_error] = SHIFT(99),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(100),
    },
    [98] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(102),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(101),
    },
    [99] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(101),
    },
    [100] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [101] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [102] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(103),
    },
    [103] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [104] = {
        [sym_enum_value] = SHIFT(105),
        [ts_builtin_sym_error] = SHIFT(102),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(101),
    },
    [105] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(106),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(103),
    },
    [106] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(107),
    },
    [107] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [108] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(113),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [109] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(110),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(110),
        [aux_sym_STR_RBRACE] = SHIFT(111),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [110] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(112),
    },
    [111] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [112] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [113] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(114),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(114),
        [aux_sym_STR_RBRACE] = SHIFT(112),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [114] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(115),
    },
    [115] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [116] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(124),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [117] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(119),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(119),
        [aux_sym_STR_RBRACE] = SHIFT(120),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [118] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(122),
    },
    [119] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(121),
    },
    [120] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [121] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [122] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(123),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_struct_type_repeat0, 2),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [123] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_struct_type_repeat0, 3),
    },
    [124] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(125),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(125),
        [aux_sym_STR_RBRACE] = SHIFT(121),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [125] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(126),
    },
    [126] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [127] = {
        [sym_type_expression] = REDUCE(sym_type, 2),
        [sym_pointer_type] = REDUCE(sym_type, 2),
        [sym_identifier] = REDUCE(sym_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 2),
    },
    [128] = {
        [sym_type_expression] = REDUCE(sym_primitive_type, 2),
        [sym_pointer_type] = REDUCE(sym_primitive_type, 2),
        [sym_identifier] = REDUCE(sym_primitive_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_primitive_type, 2),
    },
    [129] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 4),
    },
    [130] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(131),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_union_type_repeat0, 2),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [131] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_union_type_repeat0, 3),
    },
    [132] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_field, 2),
    },
    [133] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
    },
    [134] = {
        [sym_type_expression] = SHIFT(135),
        [sym_pointer_type] = SHIFT(133),
        [sym_identifier] = SHIFT(133),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(134),
    },
    [135] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
    },
    [136] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(137),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(137),
        [aux_sym_STR_RBRACE] = SHIFT(129),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [137] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(138),
    },
    [138] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_union_type, 5),
    },
    [139] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(144),
    },
    [140] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(141),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(141),
        [aux_sym_STR_RBRACE] = SHIFT(142),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [141] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(143),
    },
    [142] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 3),
    },
    [143] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 4),
    },
    [144] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(145),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(145),
        [aux_sym_STR_RBRACE] = SHIFT(143),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [145] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(146),
    },
    [146] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_struct_type, 5),
    },
    [147] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type, 2),
    },
    [148] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_primitive_type, 2),
    },
    [149] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(150),
    },
    [150] = {
        [sym_expression] = SHIFT(151),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(154),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(155),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(157),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [151] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(315),
        [aux_sym_STR_COMMA] = SHIFT(316),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(314),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [152] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(320),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [153] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RBRACE] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [154] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(315),
        [aux_sym_STR_COMMA] = SHIFT(316),
        [aux_sym_STR_RBRACE] = SHIFT(314),
    },
    [155] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(314),
    },
    [156] = {
        [sym_type] = SHIFT(301),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [157] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [158] = {
        [sym_expression] = SHIFT(275),
        [sym_deref] = SHIFT(276),
        [sym_address_of] = SHIFT(277),
        [sym_field_access] = SHIFT(276),
        [sym_deref_field_access] = SHIFT(276),
        [sym_function_call] = SHIFT(277),
        [sym_math_op] = SHIFT(277),
        [sym_bool_op] = SHIFT(277),
        [sym_rel_op] = SHIFT(277),
        [sym_assignment] = SHIFT(277),
        [sym_compound_literal] = SHIFT(277),
        [sym_number] = SHIFT(277),
        [sym_char] = SHIFT(277),
        [sym_string] = SHIFT(277),
        [sym_identifier] = SHIFT(276),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(278),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(279),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(280),
        [aux_sym_STR_DASH_DASH] = SHIFT(280),
        [aux_sym_STR_DASH] = SHIFT(280),
        [aux_sym_STR_BANG] = SHIFT(281),
    },
    [159] = {
        [sym_expression] = SHIFT(274),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [160] = {
        [sym_identifier] = SHIFT(168),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [161] = {
        [sym_expression] = SHIFT(167),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [162] = {
        [sym_expression] = SHIFT(163),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [163] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
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
    [164] = {
        [sym_expression] = SHIFT(166),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [165] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [166] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
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
    [167] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
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
    [168] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_EQ] = SHIFT(169),
    },
    [169] = {
        [sym_expression] = SHIFT(170),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [170] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = REDUCE(sym_struct_literal_field, 4),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [171] = {
        [sym_expression] = SHIFT(186),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(189),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(191),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [172] = {
        [sym_identifier] = SHIFT(185),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [173] = {
        [sym_identifier] = SHIFT(184),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [174] = {
        [sym_expression] = SHIFT(183),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [175] = {
        [sym_expression] = SHIFT(182),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [176] = {
        [sym_expression] = SHIFT(181),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [177] = {
        [sym_expression] = SHIFT(180),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [178] = {
        [sym_expression] = SHIFT(179),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [179] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [180] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [181] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [182] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [183] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [184] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [185] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [186] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(272),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(245),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [187] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(246),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [188] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [189] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(245),
    },
    [190] = {
        [sym_type] = SHIFT(232),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [191] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [192] = {
        [sym_expression] = SHIFT(202),
        [sym_deref] = SHIFT(203),
        [sym_address_of] = SHIFT(204),
        [sym_field_access] = SHIFT(203),
        [sym_deref_field_access] = SHIFT(203),
        [sym_function_call] = SHIFT(204),
        [sym_math_op] = SHIFT(204),
        [sym_bool_op] = SHIFT(204),
        [sym_rel_op] = SHIFT(204),
        [sym_assignment] = SHIFT(204),
        [sym_compound_literal] = SHIFT(204),
        [sym_number] = SHIFT(204),
        [sym_char] = SHIFT(204),
        [sym_string] = SHIFT(204),
        [sym_identifier] = SHIFT(203),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(205),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(206),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(207),
        [aux_sym_STR_DASH_DASH] = SHIFT(207),
        [aux_sym_STR_DASH] = SHIFT(207),
        [aux_sym_STR_BANG] = SHIFT(208),
    },
    [193] = {
        [sym_expression] = SHIFT(201),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [194] = {
        [sym_expression] = SHIFT(200),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [195] = {
        [sym_expression] = SHIFT(196),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [196] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
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
    [197] = {
        [sym_expression] = SHIFT(199),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [198] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [199] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
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
    [200] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
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
    [201] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [202] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [203] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [204] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [205] = {
        [sym_type] = SHIFT(215),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [206] = {
        [sym_expression] = SHIFT(214),
        [sym_deref] = SHIFT(203),
        [sym_address_of] = SHIFT(204),
        [sym_field_access] = SHIFT(203),
        [sym_deref_field_access] = SHIFT(203),
        [sym_function_call] = SHIFT(204),
        [sym_math_op] = SHIFT(204),
        [sym_bool_op] = SHIFT(204),
        [sym_rel_op] = SHIFT(204),
        [sym_assignment] = SHIFT(204),
        [sym_compound_literal] = SHIFT(204),
        [sym_number] = SHIFT(204),
        [sym_char] = SHIFT(204),
        [sym_string] = SHIFT(204),
        [sym_identifier] = SHIFT(203),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(205),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(206),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(207),
        [aux_sym_STR_DASH_DASH] = SHIFT(207),
        [aux_sym_STR_DASH] = SHIFT(207),
        [aux_sym_STR_BANG] = SHIFT(208),
    },
    [207] = {
        [sym_expression] = SHIFT(213),
        [sym_deref] = SHIFT(203),
        [sym_address_of] = SHIFT(204),
        [sym_field_access] = SHIFT(203),
        [sym_deref_field_access] = SHIFT(203),
        [sym_function_call] = SHIFT(204),
        [sym_math_op] = SHIFT(204),
        [sym_bool_op] = SHIFT(204),
        [sym_rel_op] = SHIFT(204),
        [sym_assignment] = SHIFT(204),
        [sym_compound_literal] = SHIFT(204),
        [sym_number] = SHIFT(204),
        [sym_char] = SHIFT(204),
        [sym_string] = SHIFT(204),
        [sym_identifier] = SHIFT(203),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(205),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(206),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(207),
        [aux_sym_STR_DASH_DASH] = SHIFT(207),
        [aux_sym_STR_DASH] = SHIFT(207),
        [aux_sym_STR_BANG] = SHIFT(208),
    },
    [208] = {
        [sym_expression] = SHIFT(209),
        [sym_deref] = SHIFT(203),
        [sym_address_of] = SHIFT(204),
        [sym_field_access] = SHIFT(203),
        [sym_deref_field_access] = SHIFT(203),
        [sym_function_call] = SHIFT(204),
        [sym_math_op] = SHIFT(204),
        [sym_bool_op] = SHIFT(204),
        [sym_rel_op] = SHIFT(204),
        [sym_assignment] = SHIFT(204),
        [sym_compound_literal] = SHIFT(204),
        [sym_number] = SHIFT(204),
        [sym_char] = SHIFT(204),
        [sym_string] = SHIFT(204),
        [sym_identifier] = SHIFT(203),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(205),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(206),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(207),
        [aux_sym_STR_DASH_DASH] = SHIFT(207),
        [aux_sym_STR_DASH] = SHIFT(207),
        [aux_sym_STR_BANG] = SHIFT(208),
    },
    [209] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(210),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(211),
        [aux_sym_STR_DASH_DASH] = SHIFT(211),
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
    [210] = {
        [sym_expression] = SHIFT(212),
        [sym_deref] = SHIFT(203),
        [sym_address_of] = SHIFT(204),
        [sym_field_access] = SHIFT(203),
        [sym_deref_field_access] = SHIFT(203),
        [sym_function_call] = SHIFT(204),
        [sym_math_op] = SHIFT(204),
        [sym_bool_op] = SHIFT(204),
        [sym_rel_op] = SHIFT(204),
        [sym_assignment] = SHIFT(204),
        [sym_compound_literal] = SHIFT(204),
        [sym_number] = SHIFT(204),
        [sym_char] = SHIFT(204),
        [sym_string] = SHIFT(204),
        [sym_identifier] = SHIFT(203),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(205),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(206),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(207),
        [aux_sym_STR_DASH_DASH] = SHIFT(207),
        [aux_sym_STR_DASH] = SHIFT(207),
        [aux_sym_STR_BANG] = SHIFT(208),
    },
    [211] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [212] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(210),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(211),
        [aux_sym_STR_DASH_DASH] = SHIFT(211),
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
    [213] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(211),
        [aux_sym_STR_DASH_DASH] = SHIFT(211),
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
    [214] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [215] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(216),
    },
    [216] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(217),
    },
    [217] = {
        [sym_expression] = SHIFT(218),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(219),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(220),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(221),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [218] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(223),
        [aux_sym_STR_COMMA] = SHIFT(224),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(222),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [219] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(223),
        [aux_sym_STR_COMMA] = SHIFT(224),
        [aux_sym_STR_RBRACE] = SHIFT(222),
    },
    [220] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(222),
    },
    [221] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [222] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [223] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(230),
        [aux_sym_STR_RBRACE] = SHIFT(227),
    },
    [224] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(227),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [225] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(228),
        [aux_sym_STR_COMMA] = SHIFT(229),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(aux_sym_compound_literal_repeat0, 2),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [226] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(228),
        [aux_sym_STR_COMMA] = SHIFT(229),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(aux_sym_compound_literal_repeat0, 2),
    },
    [227] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [228] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = REDUCE(aux_sym_compound_literal_repeat0, 3),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_compound_literal_repeat0, 3),
    },
    [229] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [230] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(231),
    },
    [231] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [232] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(233),
    },
    [233] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(234),
    },
    [234] = {
        [sym_expression] = SHIFT(235),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(236),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(237),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(238),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [235] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(240),
        [aux_sym_STR_COMMA] = SHIFT(241),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(239),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [236] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(240),
        [aux_sym_STR_COMMA] = SHIFT(241),
        [aux_sym_STR_RBRACE] = SHIFT(239),
    },
    [237] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(239),
    },
    [238] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [239] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [240] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(243),
        [aux_sym_STR_RBRACE] = SHIFT(242),
    },
    [241] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(242),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [242] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [243] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(244),
    },
    [244] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [245] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [246] = {
        [sym_expression] = SHIFT(247),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [247] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [248] = {
        [sym_expression] = SHIFT(263),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(264),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(265),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [249] = {
        [sym_identifier] = SHIFT(262),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [250] = {
        [sym_identifier] = SHIFT(261),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [251] = {
        [sym_expression] = SHIFT(260),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [252] = {
        [sym_expression] = SHIFT(259),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [253] = {
        [sym_expression] = SHIFT(258),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [254] = {
        [sym_expression] = SHIFT(257),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [255] = {
        [sym_expression] = SHIFT(256),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [256] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [257] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [258] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [259] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [260] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [261] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [262] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [263] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(267),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(266),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [264] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(266),
    },
    [265] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [266] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [267] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(271),
    },
    [268] = {
        [sym_expression] = SHIFT(269),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [269] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(270),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(aux_sym_function_call_repeat0, 2),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [270] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_function_call_repeat0, 3),
    },
    [271] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
        [aux_sym_STR_RPAREN] = SHIFT(273),
    },
    [273] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
    [274] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [275] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [276] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [277] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [278] = {
        [sym_type] = SHIFT(288),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [279] = {
        [sym_expression] = SHIFT(287),
        [sym_deref] = SHIFT(276),
        [sym_address_of] = SHIFT(277),
        [sym_field_access] = SHIFT(276),
        [sym_deref_field_access] = SHIFT(276),
        [sym_function_call] = SHIFT(277),
        [sym_math_op] = SHIFT(277),
        [sym_bool_op] = SHIFT(277),
        [sym_rel_op] = SHIFT(277),
        [sym_assignment] = SHIFT(277),
        [sym_compound_literal] = SHIFT(277),
        [sym_number] = SHIFT(277),
        [sym_char] = SHIFT(277),
        [sym_string] = SHIFT(277),
        [sym_identifier] = SHIFT(276),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(278),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(279),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(280),
        [aux_sym_STR_DASH_DASH] = SHIFT(280),
        [aux_sym_STR_DASH] = SHIFT(280),
        [aux_sym_STR_BANG] = SHIFT(281),
    },
    [280] = {
        [sym_expression] = SHIFT(286),
        [sym_deref] = SHIFT(276),
        [sym_address_of] = SHIFT(277),
        [sym_field_access] = SHIFT(276),
        [sym_deref_field_access] = SHIFT(276),
        [sym_function_call] = SHIFT(277),
        [sym_math_op] = SHIFT(277),
        [sym_bool_op] = SHIFT(277),
        [sym_rel_op] = SHIFT(277),
        [sym_assignment] = SHIFT(277),
        [sym_compound_literal] = SHIFT(277),
        [sym_number] = SHIFT(277),
        [sym_char] = SHIFT(277),
        [sym_string] = SHIFT(277),
        [sym_identifier] = SHIFT(276),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(278),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(279),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(280),
        [aux_sym_STR_DASH_DASH] = SHIFT(280),
        [aux_sym_STR_DASH] = SHIFT(280),
        [aux_sym_STR_BANG] = SHIFT(281),
    },
    [281] = {
        [sym_expression] = SHIFT(282),
        [sym_deref] = SHIFT(276),
        [sym_address_of] = SHIFT(277),
        [sym_field_access] = SHIFT(276),
        [sym_deref_field_access] = SHIFT(276),
        [sym_function_call] = SHIFT(277),
        [sym_math_op] = SHIFT(277),
        [sym_bool_op] = SHIFT(277),
        [sym_rel_op] = SHIFT(277),
        [sym_assignment] = SHIFT(277),
        [sym_compound_literal] = SHIFT(277),
        [sym_number] = SHIFT(277),
        [sym_char] = SHIFT(277),
        [sym_string] = SHIFT(277),
        [sym_identifier] = SHIFT(276),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(278),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(279),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(280),
        [aux_sym_STR_DASH_DASH] = SHIFT(280),
        [aux_sym_STR_DASH] = SHIFT(280),
        [aux_sym_STR_BANG] = SHIFT(281),
    },
    [282] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(283),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(284),
        [aux_sym_STR_DASH_DASH] = SHIFT(284),
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
    [283] = {
        [sym_expression] = SHIFT(285),
        [sym_deref] = SHIFT(276),
        [sym_address_of] = SHIFT(277),
        [sym_field_access] = SHIFT(276),
        [sym_deref_field_access] = SHIFT(276),
        [sym_function_call] = SHIFT(277),
        [sym_math_op] = SHIFT(277),
        [sym_bool_op] = SHIFT(277),
        [sym_rel_op] = SHIFT(277),
        [sym_assignment] = SHIFT(277),
        [sym_compound_literal] = SHIFT(277),
        [sym_number] = SHIFT(277),
        [sym_char] = SHIFT(277),
        [sym_string] = SHIFT(277),
        [sym_identifier] = SHIFT(276),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(278),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(279),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(280),
        [aux_sym_STR_DASH_DASH] = SHIFT(280),
        [aux_sym_STR_DASH] = SHIFT(280),
        [aux_sym_STR_BANG] = SHIFT(281),
    },
    [284] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [285] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(283),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(284),
        [aux_sym_STR_DASH_DASH] = SHIFT(284),
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
    [286] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(284),
        [aux_sym_STR_DASH_DASH] = SHIFT(284),
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
    [287] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [288] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(289),
    },
    [289] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(290),
    },
    [290] = {
        [sym_expression] = SHIFT(291),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(292),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(293),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(294),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [291] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(296),
        [aux_sym_STR_COMMA] = SHIFT(297),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(295),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [292] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(296),
        [aux_sym_STR_COMMA] = SHIFT(297),
        [aux_sym_STR_RBRACE] = SHIFT(295),
    },
    [293] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(295),
    },
    [294] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [295] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [296] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(299),
        [aux_sym_STR_RBRACE] = SHIFT(298),
    },
    [297] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(298),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [298] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [299] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(300),
    },
    [300] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [301] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(302),
    },
    [302] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(303),
    },
    [303] = {
        [sym_expression] = SHIFT(304),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(305),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(306),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(307),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [304] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(309),
        [aux_sym_STR_COMMA] = SHIFT(310),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(308),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [305] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(309),
        [aux_sym_STR_COMMA] = SHIFT(310),
        [aux_sym_STR_RBRACE] = SHIFT(308),
    },
    [306] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(308),
    },
    [307] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [308] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [309] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(312),
        [aux_sym_STR_RBRACE] = SHIFT(311),
    },
    [310] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(311),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [311] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [312] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(313),
    },
    [313] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [314] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [315] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(318),
        [aux_sym_STR_RBRACE] = SHIFT(317),
    },
    [316] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(317),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [317] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [318] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(319),
    },
    [319] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [320] = {
        [sym_expression] = SHIFT(321),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [321] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [322] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(323),
    },
    [323] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(324),
    },
    [324] = {
        [sym_expression] = SHIFT(325),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(326),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(327),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(328),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [325] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(330),
        [aux_sym_STR_COMMA] = SHIFT(331),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(329),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [326] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(330),
        [aux_sym_STR_COMMA] = SHIFT(331),
        [aux_sym_STR_RBRACE] = SHIFT(329),
    },
    [327] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(329),
    },
    [328] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [329] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [330] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(333),
        [aux_sym_STR_RBRACE] = SHIFT(332),
    },
    [331] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(332),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [332] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [333] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(334),
    },
    [334] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RBRACE] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [335] = {
        [sym_expression] = SHIFT(336),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [336] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(337),
        [aux_sym_STR_RBRACE] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = SHIFT(338),
        [aux_sym_STR_DASH_GT] = SHIFT(339),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = SHIFT(340),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = SHIFT(340),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(343),
        [aux_sym_STR_LT] = SHIFT(344),
        [aux_sym_STR_LT_EQ] = SHIFT(344),
        [aux_sym_STR_EQ_EQ] = SHIFT(344),
        [aux_sym_STR_BANG_EQ] = SHIFT(344),
        [aux_sym_STR_GT_EQ] = SHIFT(344),
        [aux_sym_STR_GT] = SHIFT(344),
    },
    [337] = {
        [sym_expression] = SHIFT(352),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(353),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(354),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [338] = {
        [sym_identifier] = SHIFT(351),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [339] = {
        [sym_identifier] = SHIFT(350),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [340] = {
        [sym_expression] = SHIFT(349),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [341] = {
        [sym_expression] = SHIFT(348),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [342] = {
        [sym_expression] = SHIFT(347),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [343] = {
        [sym_expression] = SHIFT(346),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [344] = {
        [sym_expression] = SHIFT(345),
        [sym_deref] = SHIFT(34),
        [sym_address_of] = SHIFT(35),
        [sym_field_access] = SHIFT(34),
        [sym_deref_field_access] = SHIFT(34),
        [sym_function_call] = SHIFT(35),
        [sym_math_op] = SHIFT(35),
        [sym_bool_op] = SHIFT(35),
        [sym_rel_op] = SHIFT(35),
        [sym_assignment] = SHIFT(35),
        [sym_compound_literal] = SHIFT(35),
        [sym_number] = SHIFT(35),
        [sym_char] = SHIFT(35),
        [sym_string] = SHIFT(35),
        [sym_identifier] = SHIFT(34),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(36),
        [aux_sym_STR_STAR] = SHIFT(37),
        [aux_sym_STR_AMP] = SHIFT(38),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(39),
        [aux_sym_STR_DASH_DASH] = SHIFT(39),
        [aux_sym_STR_DASH] = SHIFT(39),
        [aux_sym_STR_BANG] = SHIFT(40),
    },
    [345] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = SHIFT(340),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = SHIFT(340),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(343),
        [aux_sym_STR_LT] = SHIFT(344),
        [aux_sym_STR_LT_EQ] = SHIFT(344),
        [aux_sym_STR_EQ_EQ] = SHIFT(344),
        [aux_sym_STR_BANG_EQ] = SHIFT(344),
        [aux_sym_STR_GT_EQ] = SHIFT(344),
        [aux_sym_STR_GT] = SHIFT(344),
    },
    [346] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = SHIFT(340),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = SHIFT(340),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(343),
        [aux_sym_STR_LT] = SHIFT(344),
        [aux_sym_STR_LT_EQ] = SHIFT(344),
        [aux_sym_STR_EQ_EQ] = SHIFT(344),
        [aux_sym_STR_BANG_EQ] = SHIFT(344),
        [aux_sym_STR_GT_EQ] = SHIFT(344),
        [aux_sym_STR_GT] = SHIFT(344),
    },
    [347] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [348] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [349] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(42),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(43),
        [aux_sym_STR_DASH_DASH] = SHIFT(43),
        [aux_sym_STR_DASH] = SHIFT(340),
        [aux_sym_STR_SLASH] = SHIFT(341),
        [aux_sym_STR_PLUS] = SHIFT(340),
        [aux_sym_STR_AMP_AMP] = SHIFT(342),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(343),
        [aux_sym_STR_LT] = SHIFT(344),
        [aux_sym_STR_LT_EQ] = SHIFT(344),
        [aux_sym_STR_EQ_EQ] = SHIFT(344),
        [aux_sym_STR_BANG_EQ] = SHIFT(344),
        [aux_sym_STR_GT_EQ] = SHIFT(344),
        [aux_sym_STR_GT] = SHIFT(344),
    },
    [350] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [351] = {
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
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [352] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(356),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(355),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [353] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(355),
    },
    [354] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [355] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [356] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(357),
    },
    [357] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RBRACE] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
    [358] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_var_assignment] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [359] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(360),
    },
    [360] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_var_assignment] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [361] = {
        [sym_enum_value] = SHIFT(362),
        [ts_builtin_sym_error] = SHIFT(359),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(358),
    },
    [362] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(363),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(360),
    },
    [363] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(364),
    },
    [364] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_var_assignment] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_enum_type, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [365] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_var_assignment] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(370),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [366] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(367),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(367),
        [aux_sym_STR_RBRACE] = SHIFT(368),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [367] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(369),
    },
    [368] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_var_assignment] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [369] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_var_assignment] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [370] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(371),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(371),
        [aux_sym_STR_RBRACE] = SHIFT(369),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [371] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(372),
    },
    [372] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_var_assignment] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_union_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [373] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_var_assignment] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 2),
        [aux_sym_STR_LBRACE] = SHIFT(378),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [374] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(375),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(375),
        [aux_sym_STR_RBRACE] = SHIFT(376),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [375] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(377),
    },
    [376] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_var_assignment] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [377] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_var_assignment] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [378] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(379),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(379),
        [aux_sym_STR_RBRACE] = SHIFT(377),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [379] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(380),
    },
    [380] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_var_assignment] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_struct_type, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [381] = {
        [sym_identifier] = REDUCE(aux_sym_primitive_type_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [382] = {
        [sym_type_expression] = REDUCE(sym_type, 2),
        [sym_pointer_type] = REDUCE(sym_type, 2),
        [sym_var_assignment] = REDUCE(sym_type, 2),
        [sym_identifier] = REDUCE(sym_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_type, 2),
    },
    [383] = {
        [sym_identifier] = SHIFT(406),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(407),
    },
    [384] = {
        [sym_identifier] = SHIFT(398),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(399),
    },
    [385] = {
        [sym_identifier] = SHIFT(386),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(387),
    },
    [386] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 2),
        [sym_pointer_type] = REDUCE(sym_enum_type, 2),
        [sym_var_assignment] = REDUCE(sym_enum_type, 2),
        [sym_identifier] = REDUCE(sym_enum_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(394),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 2),
    },
    [387] = {
        [sym_enum_value] = SHIFT(388),
        [ts_builtin_sym_error] = SHIFT(389),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(390),
    },
    [388] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(392),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(391),
    },
    [389] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(391),
    },
    [390] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 3),
        [sym_pointer_type] = REDUCE(sym_enum_type, 3),
        [sym_var_assignment] = REDUCE(sym_enum_type, 3),
        [sym_identifier] = REDUCE(sym_enum_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 3),
    },
    [391] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 4),
        [sym_pointer_type] = REDUCE(sym_enum_type, 4),
        [sym_var_assignment] = REDUCE(sym_enum_type, 4),
        [sym_identifier] = REDUCE(sym_enum_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 4),
    },
    [392] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(393),
    },
    [393] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 5),
        [sym_pointer_type] = REDUCE(sym_enum_type, 5),
        [sym_var_assignment] = REDUCE(sym_enum_type, 5),
        [sym_identifier] = REDUCE(sym_enum_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 5),
    },
    [394] = {
        [sym_enum_value] = SHIFT(395),
        [ts_builtin_sym_error] = SHIFT(392),
        [sym_identifier] = SHIFT(30),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(391),
    },
    [395] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_enum_type_repeat0] = SHIFT(396),
        [aux_sym_STR_COMMA] = SHIFT(75),
        [aux_sym_STR_RBRACE] = SHIFT(393),
    },
    [396] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(397),
    },
    [397] = {
        [sym_type_expression] = REDUCE(sym_enum_type, 6),
        [sym_pointer_type] = REDUCE(sym_enum_type, 6),
        [sym_var_assignment] = REDUCE(sym_enum_type, 6),
        [sym_identifier] = REDUCE(sym_enum_type, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_enum_type, 6),
    },
    [398] = {
        [sym_type_expression] = REDUCE(sym_union_type, 2),
        [sym_pointer_type] = REDUCE(sym_union_type, 2),
        [sym_var_assignment] = REDUCE(sym_union_type, 2),
        [sym_identifier] = REDUCE(sym_union_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(403),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 2),
    },
    [399] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(400),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(400),
        [aux_sym_STR_RBRACE] = SHIFT(401),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [400] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(402),
    },
    [401] = {
        [sym_type_expression] = REDUCE(sym_union_type, 3),
        [sym_pointer_type] = REDUCE(sym_union_type, 3),
        [sym_var_assignment] = REDUCE(sym_union_type, 3),
        [sym_identifier] = REDUCE(sym_union_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 3),
    },
    [402] = {
        [sym_type_expression] = REDUCE(sym_union_type, 4),
        [sym_pointer_type] = REDUCE(sym_union_type, 4),
        [sym_var_assignment] = REDUCE(sym_union_type, 4),
        [sym_identifier] = REDUCE(sym_union_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 4),
    },
    [403] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(87),
        [ts_builtin_sym_error] = SHIFT(404),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_union_type_repeat0] = SHIFT(404),
        [aux_sym_STR_RBRACE] = SHIFT(402),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [404] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(405),
    },
    [405] = {
        [sym_type_expression] = REDUCE(sym_union_type, 5),
        [sym_pointer_type] = REDUCE(sym_union_type, 5),
        [sym_var_assignment] = REDUCE(sym_union_type, 5),
        [sym_identifier] = REDUCE(sym_union_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_union_type, 5),
    },
    [406] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 2),
        [sym_pointer_type] = REDUCE(sym_struct_type, 2),
        [sym_var_assignment] = REDUCE(sym_struct_type, 2),
        [sym_identifier] = REDUCE(sym_struct_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(411),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 2),
    },
    [407] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(408),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(408),
        [aux_sym_STR_RBRACE] = SHIFT(409),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [408] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(410),
    },
    [409] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 3),
        [sym_pointer_type] = REDUCE(sym_struct_type, 3),
        [sym_var_assignment] = REDUCE(sym_struct_type, 3),
        [sym_identifier] = REDUCE(sym_struct_type, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 3),
    },
    [410] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 4),
        [sym_pointer_type] = REDUCE(sym_struct_type, 4),
        [sym_var_assignment] = REDUCE(sym_struct_type, 4),
        [sym_identifier] = REDUCE(sym_struct_type, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 4),
    },
    [411] = {
        [sym_type] = SHIFT(85),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(118),
        [ts_builtin_sym_error] = SHIFT(412),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_struct_type_repeat0] = SHIFT(412),
        [aux_sym_STR_RBRACE] = SHIFT(410),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [412] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(413),
    },
    [413] = {
        [sym_type_expression] = REDUCE(sym_struct_type, 5),
        [sym_pointer_type] = REDUCE(sym_struct_type, 5),
        [sym_var_assignment] = REDUCE(sym_struct_type, 5),
        [sym_identifier] = REDUCE(sym_struct_type, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_struct_type, 5),
    },
    [414] = {
        [sym_type_expression] = SHIFT(415),
        [sym_pointer_type] = SHIFT(133),
        [sym_identifier] = SHIFT(133),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(134),
    },
    [415] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(416),
    },
    [416] = {
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
        [sym_storage_class] = REDUCE(sym_typedef, 4),
        [ts_builtin_sym_end] = REDUCE(sym_typedef, 4),
        [sym_preproc_else] = REDUCE(sym_typedef, 4),
        [sym_preproc_endif] = REDUCE(sym_typedef, 4),
        [sym_preproc_directive] = REDUCE(sym_typedef, 4),
        [sym_identifier] = REDUCE(sym_typedef, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_typedef] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_const] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_short] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_long] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_struct] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_union] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_enum] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_static] = REDUCE(sym_typedef, 4),
        [aux_sym_STR_extern] = REDUCE(sym_typedef, 4),
    },
    [417] = {
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
        [sym_storage_class] = REDUCE(sym_preproc_ifndef, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_ifndef, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_ifndef, 2),
        [sym_identifier] = REDUCE(sym_preproc_ifndef, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_ifndef, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_ifndef, 2),
    },
    [418] = {
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
        [sym_storage_class] = REDUCE(sym_preproc_ifdef, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_ifdef, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_ifdef, 2),
        [sym_identifier] = REDUCE(sym_preproc_ifdef, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_ifdef, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_ifdef, 2),
    },
    [419] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym__LPARENseqPAT_DOT_PLUS_RPAREN] = SHIFT(420),
    },
    [420] = {
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
        [sym_storage_class] = REDUCE(sym_preproc_define, 3),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_else] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_endif] = REDUCE(sym_preproc_define, 3),
        [sym_preproc_directive] = REDUCE(sym_preproc_define, 3),
        [sym_identifier] = REDUCE(sym_preproc_define, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_const] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_short] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_long] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_union] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_static] = REDUCE(sym_preproc_define, 3),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_define, 3),
    },
    [421] = {
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
        [sym_storage_class] = REDUCE(sym_preproc_include, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_include, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_include, 2),
        [sym_identifier] = REDUCE(sym_preproc_include, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_include, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_include, 2),
    },
    [422] = {
        [sym_type_expression] = REDUCE(sym_primitive_type, 2),
        [sym_pointer_type] = REDUCE(sym_primitive_type, 2),
        [sym_var_assignment] = REDUCE(sym_primitive_type, 2),
        [sym_identifier] = REDUCE(sym_primitive_type, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = REDUCE(sym_primitive_type, 2),
    },
    [423] = {
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
        [sym_storage_class] = REDUCE(sym_preproc_call, 2),
        [ts_builtin_sym_end] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_else] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_endif] = REDUCE(sym_preproc_call, 2),
        [sym_preproc_directive] = REDUCE(sym_preproc_call, 2),
        [sym_identifier] = REDUCE(sym_preproc_call, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_const] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_short] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_long] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_struct] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_union] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_enum] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_static] = REDUCE(sym_preproc_call, 2),
        [aux_sym_STR_extern] = REDUCE(sym_preproc_call, 2),
    },
    [424] = {
        [sym_type_expression] = SHIFT(425),
        [sym_pointer_type] = SHIFT(426),
        [sym_var_assignment] = SHIFT(427),
        [sym_identifier] = SHIFT(426),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(428),
    },
    [425] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(430),
        [aux_sym_STR_SEMI] = SHIFT(431),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_LPAREN] = SHIFT(517),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [426] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_type_expression, 1),
    },
    [427] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(430),
        [aux_sym_STR_SEMI] = SHIFT(431),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [428] = {
        [sym_type_expression] = SHIFT(429),
        [sym_pointer_type] = SHIFT(426),
        [sym_identifier] = SHIFT(426),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(428),
    },
    [429] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_pointer_type, 2),
    },
    [430] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(516),
    },
    [431] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 4),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 4),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 4),
        [sym_identifier] = REDUCE(sym_var_declaration, 4),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
    },
    [432] = {
        [sym_type_expression] = SHIFT(433),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(435),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [433] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(438),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [434] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_type_expression, 1),
    },
    [435] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(438),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat0, 2),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [436] = {
        [sym_type_expression] = SHIFT(437),
        [sym_pointer_type] = SHIFT(434),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [437] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_pointer_type, 2),
    },
    [438] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(aux_sym_var_declaration_repeat0, 3),
    },
    [439] = {
        [sym_expression] = SHIFT(440),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [440] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_var_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(495),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = SHIFT(496),
        [aux_sym_STR_DASH_GT] = SHIFT(497),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = SHIFT(498),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = SHIFT(498),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(501),
        [aux_sym_STR_LT] = SHIFT(502),
        [aux_sym_STR_LT_EQ] = SHIFT(502),
        [aux_sym_STR_EQ_EQ] = SHIFT(502),
        [aux_sym_STR_BANG_EQ] = SHIFT(502),
        [aux_sym_STR_GT_EQ] = SHIFT(502),
        [aux_sym_STR_GT] = SHIFT(502),
    },
    [441] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(493),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [442] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [443] = {
        [sym_type] = SHIFT(480),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [444] = {
        [sym_expression] = SHIFT(454),
        [sym_deref] = SHIFT(455),
        [sym_address_of] = SHIFT(456),
        [sym_field_access] = SHIFT(455),
        [sym_deref_field_access] = SHIFT(455),
        [sym_function_call] = SHIFT(456),
        [sym_math_op] = SHIFT(456),
        [sym_bool_op] = SHIFT(456),
        [sym_rel_op] = SHIFT(456),
        [sym_assignment] = SHIFT(456),
        [sym_compound_literal] = SHIFT(456),
        [sym_number] = SHIFT(456),
        [sym_char] = SHIFT(456),
        [sym_string] = SHIFT(456),
        [sym_identifier] = SHIFT(455),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(457),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(458),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(459),
        [aux_sym_STR_DASH_DASH] = SHIFT(459),
        [aux_sym_STR_DASH] = SHIFT(459),
        [aux_sym_STR_BANG] = SHIFT(460),
    },
    [445] = {
        [sym_expression] = SHIFT(453),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [446] = {
        [sym_expression] = SHIFT(452),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [447] = {
        [sym_expression] = SHIFT(448),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [448] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
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
    [449] = {
        [sym_expression] = SHIFT(451),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [450] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [451] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
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
    [452] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
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
    [453] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [454] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_deref, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [455] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [456] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_expression, 1),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [457] = {
        [sym_type] = SHIFT(467),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [458] = {
        [sym_expression] = SHIFT(466),
        [sym_deref] = SHIFT(455),
        [sym_address_of] = SHIFT(456),
        [sym_field_access] = SHIFT(455),
        [sym_deref_field_access] = SHIFT(455),
        [sym_function_call] = SHIFT(456),
        [sym_math_op] = SHIFT(456),
        [sym_bool_op] = SHIFT(456),
        [sym_rel_op] = SHIFT(456),
        [sym_assignment] = SHIFT(456),
        [sym_compound_literal] = SHIFT(456),
        [sym_number] = SHIFT(456),
        [sym_char] = SHIFT(456),
        [sym_string] = SHIFT(456),
        [sym_identifier] = SHIFT(455),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(457),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(458),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(459),
        [aux_sym_STR_DASH_DASH] = SHIFT(459),
        [aux_sym_STR_DASH] = SHIFT(459),
        [aux_sym_STR_BANG] = SHIFT(460),
    },
    [459] = {
        [sym_expression] = SHIFT(465),
        [sym_deref] = SHIFT(455),
        [sym_address_of] = SHIFT(456),
        [sym_field_access] = SHIFT(455),
        [sym_deref_field_access] = SHIFT(455),
        [sym_function_call] = SHIFT(456),
        [sym_math_op] = SHIFT(456),
        [sym_bool_op] = SHIFT(456),
        [sym_rel_op] = SHIFT(456),
        [sym_assignment] = SHIFT(456),
        [sym_compound_literal] = SHIFT(456),
        [sym_number] = SHIFT(456),
        [sym_char] = SHIFT(456),
        [sym_string] = SHIFT(456),
        [sym_identifier] = SHIFT(455),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(457),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(458),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(459),
        [aux_sym_STR_DASH_DASH] = SHIFT(459),
        [aux_sym_STR_DASH] = SHIFT(459),
        [aux_sym_STR_BANG] = SHIFT(460),
    },
    [460] = {
        [sym_expression] = SHIFT(461),
        [sym_deref] = SHIFT(455),
        [sym_address_of] = SHIFT(456),
        [sym_field_access] = SHIFT(455),
        [sym_deref_field_access] = SHIFT(455),
        [sym_function_call] = SHIFT(456),
        [sym_math_op] = SHIFT(456),
        [sym_bool_op] = SHIFT(456),
        [sym_rel_op] = SHIFT(456),
        [sym_assignment] = SHIFT(456),
        [sym_compound_literal] = SHIFT(456),
        [sym_number] = SHIFT(456),
        [sym_char] = SHIFT(456),
        [sym_string] = SHIFT(456),
        [sym_identifier] = SHIFT(455),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(457),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(458),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(459),
        [aux_sym_STR_DASH_DASH] = SHIFT(459),
        [aux_sym_STR_DASH] = SHIFT(459),
        [aux_sym_STR_BANG] = SHIFT(460),
    },
    [461] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(462),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(463),
        [aux_sym_STR_DASH_DASH] = SHIFT(463),
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
    [462] = {
        [sym_expression] = SHIFT(464),
        [sym_deref] = SHIFT(455),
        [sym_address_of] = SHIFT(456),
        [sym_field_access] = SHIFT(455),
        [sym_deref_field_access] = SHIFT(455),
        [sym_function_call] = SHIFT(456),
        [sym_math_op] = SHIFT(456),
        [sym_bool_op] = SHIFT(456),
        [sym_rel_op] = SHIFT(456),
        [sym_assignment] = SHIFT(456),
        [sym_compound_literal] = SHIFT(456),
        [sym_number] = SHIFT(456),
        [sym_char] = SHIFT(456),
        [sym_string] = SHIFT(456),
        [sym_identifier] = SHIFT(455),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(457),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(458),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(459),
        [aux_sym_STR_DASH_DASH] = SHIFT(459),
        [aux_sym_STR_DASH] = SHIFT(459),
        [aux_sym_STR_BANG] = SHIFT(460),
    },
    [463] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [464] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(462),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(463),
        [aux_sym_STR_DASH_DASH] = SHIFT(463),
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
    [465] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(463),
        [aux_sym_STR_DASH_DASH] = SHIFT(463),
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
    [466] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [467] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(468),
    },
    [468] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(469),
    },
    [469] = {
        [sym_expression] = SHIFT(470),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(471),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(472),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(473),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [470] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(475),
        [aux_sym_STR_COMMA] = SHIFT(476),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(474),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [471] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(475),
        [aux_sym_STR_COMMA] = SHIFT(476),
        [aux_sym_STR_RBRACE] = SHIFT(474),
    },
    [472] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(474),
    },
    [473] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [474] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [475] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(478),
        [aux_sym_STR_RBRACE] = SHIFT(477),
    },
    [476] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(477),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [477] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [478] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(479),
    },
    [479] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [480] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(481),
    },
    [481] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(482),
    },
    [482] = {
        [sym_expression] = SHIFT(483),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(484),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(485),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(486),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [483] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(488),
        [aux_sym_STR_COMMA] = SHIFT(489),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(487),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [484] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(488),
        [aux_sym_STR_COMMA] = SHIFT(489),
        [aux_sym_STR_RBRACE] = SHIFT(487),
    },
    [485] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(487),
    },
    [486] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [487] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [488] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(491),
        [aux_sym_STR_RBRACE] = SHIFT(490),
    },
    [489] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(490),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [490] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [491] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(492),
    },
    [492] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_COMMA] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [493] = {
        [sym_expression] = SHIFT(494),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [494] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(495),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = SHIFT(496),
        [aux_sym_STR_DASH_GT] = SHIFT(497),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = SHIFT(498),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = SHIFT(498),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(501),
        [aux_sym_STR_LT] = SHIFT(502),
        [aux_sym_STR_LT_EQ] = SHIFT(502),
        [aux_sym_STR_EQ_EQ] = SHIFT(502),
        [aux_sym_STR_BANG_EQ] = SHIFT(502),
        [aux_sym_STR_GT_EQ] = SHIFT(502),
        [aux_sym_STR_GT] = SHIFT(502),
    },
    [495] = {
        [sym_expression] = SHIFT(510),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(511),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(512),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [496] = {
        [sym_identifier] = SHIFT(509),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [497] = {
        [sym_identifier] = SHIFT(508),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [498] = {
        [sym_expression] = SHIFT(507),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [499] = {
        [sym_expression] = SHIFT(506),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [500] = {
        [sym_expression] = SHIFT(505),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [501] = {
        [sym_expression] = SHIFT(504),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [502] = {
        [sym_expression] = SHIFT(503),
        [sym_deref] = SHIFT(441),
        [sym_address_of] = SHIFT(442),
        [sym_field_access] = SHIFT(441),
        [sym_deref_field_access] = SHIFT(441),
        [sym_function_call] = SHIFT(442),
        [sym_math_op] = SHIFT(442),
        [sym_bool_op] = SHIFT(442),
        [sym_rel_op] = SHIFT(442),
        [sym_assignment] = SHIFT(442),
        [sym_compound_literal] = SHIFT(442),
        [sym_number] = SHIFT(442),
        [sym_char] = SHIFT(442),
        [sym_string] = SHIFT(442),
        [sym_identifier] = SHIFT(441),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(443),
        [aux_sym_STR_STAR] = SHIFT(444),
        [aux_sym_STR_AMP] = SHIFT(445),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(446),
        [aux_sym_STR_DASH_DASH] = SHIFT(446),
        [aux_sym_STR_DASH] = SHIFT(446),
        [aux_sym_STR_BANG] = SHIFT(447),
    },
    [503] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = SHIFT(498),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = SHIFT(498),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(501),
        [aux_sym_STR_LT] = SHIFT(502),
        [aux_sym_STR_LT_EQ] = SHIFT(502),
        [aux_sym_STR_EQ_EQ] = SHIFT(502),
        [aux_sym_STR_BANG_EQ] = SHIFT(502),
        [aux_sym_STR_GT_EQ] = SHIFT(502),
        [aux_sym_STR_GT] = SHIFT(502),
    },
    [504] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = SHIFT(498),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = SHIFT(498),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(501),
        [aux_sym_STR_LT] = SHIFT(502),
        [aux_sym_STR_LT_EQ] = SHIFT(502),
        [aux_sym_STR_EQ_EQ] = SHIFT(502),
        [aux_sym_STR_BANG_EQ] = SHIFT(502),
        [aux_sym_STR_GT_EQ] = SHIFT(502),
        [aux_sym_STR_GT] = SHIFT(502),
    },
    [505] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [506] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [507] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_COMMA] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(449),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(450),
        [aux_sym_STR_DASH_DASH] = SHIFT(450),
        [aux_sym_STR_DASH] = SHIFT(498),
        [aux_sym_STR_SLASH] = SHIFT(499),
        [aux_sym_STR_PLUS] = SHIFT(498),
        [aux_sym_STR_AMP_AMP] = SHIFT(500),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(501),
        [aux_sym_STR_LT] = SHIFT(502),
        [aux_sym_STR_LT_EQ] = SHIFT(502),
        [aux_sym_STR_EQ_EQ] = SHIFT(502),
        [aux_sym_STR_BANG_EQ] = SHIFT(502),
        [aux_sym_STR_GT_EQ] = SHIFT(502),
        [aux_sym_STR_GT] = SHIFT(502),
    },
    [508] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [509] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [510] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(514),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(513),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [511] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(513),
    },
    [512] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [513] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [514] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(515),
    },
    [515] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_COMMA] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
    [516] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 5),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 5),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 5),
        [sym_identifier] = REDUCE(sym_var_declaration, 5),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
    },
    [517] = {
        [sym_type] = SHIFT(518),
        [sym_primitive_type] = SHIFT(86),
        [sym_formal_parameters] = SHIFT(519),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(520),
        [ts_builtin_sym_error] = SHIFT(521),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_formal_parameters, 0),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [518] = {
        [sym_type_expression] = SHIFT(809),
        [sym_pointer_type] = SHIFT(810),
        [sym_identifier] = SHIFT(810),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(811),
    },
    [519] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(526),
    },
    [520] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = SHIFT(522),
        [aux_sym_STR_COMMA] = SHIFT(523),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 1),
    },
    [521] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 1),
    },
    [522] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(sym_formal_parameters, 2),
    },
    [523] = {
        [sym_type] = SHIFT(518),
        [sym_primitive_type] = SHIFT(86),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(524),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [524] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = SHIFT(525),
        [aux_sym_STR_COMMA] = SHIFT(523),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_formal_parameters_repeat0, 2),
    },
    [525] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = REDUCE(aux_sym_formal_parameters_repeat0, 3),
    },
    [526] = {
        [sym_statement_block] = SHIFT(527),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(527),
        [aux_sym_STR_LBRACE] = SHIFT(528),
    },
    [527] = {
        [sym_preproc_include] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_define] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_call] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_ifdef] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_ifndef] = REDUCE(sym_function_declaration, 7),
        [sym_typedef] = REDUCE(sym_function_declaration, 7),
        [sym_var_declaration] = REDUCE(sym_function_declaration, 7),
        [sym_function_declaration] = REDUCE(sym_function_declaration, 7),
        [sym_type] = REDUCE(sym_function_declaration, 7),
        [sym_primitive_type] = REDUCE(sym_function_declaration, 7),
        [sym_struct_declaration] = REDUCE(sym_function_declaration, 7),
        [sym_struct_type] = REDUCE(sym_function_declaration, 7),
        [sym_union_declaration] = REDUCE(sym_function_declaration, 7),
        [sym_union_type] = REDUCE(sym_function_declaration, 7),
        [sym_enum_declaration] = REDUCE(sym_function_declaration, 7),
        [sym_enum_type] = REDUCE(sym_function_declaration, 7),
        [sym_storage_class] = REDUCE(sym_function_declaration, 7),
        [ts_builtin_sym_end] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_else] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_endif] = REDUCE(sym_function_declaration, 7),
        [sym_preproc_directive] = REDUCE(sym_function_declaration, 7),
        [sym_identifier] = REDUCE(sym_function_declaration, 7),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_function_declaration, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_function_declaration, 7),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_typedef] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_const] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_unsigned] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_short] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_long] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_struct] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_union] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_enum] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_static] = REDUCE(sym_function_declaration, 7),
        [aux_sym_STR_extern] = REDUCE(sym_function_declaration, 7),
    },
    [528] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(530),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [ts_builtin_sym_error] = SHIFT(536),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_statement_block_repeat0] = SHIFT(536),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_RBRACE] = SHIFT(540),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [529] = {
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
        [sym_storage_class] = REDUCE(sym_statement, 1),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement, 1),
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
        [aux_sym_STR_static] = REDUCE(sym_statement, 1),
        [aux_sym_STR_extern] = REDUCE(sym_statement, 1),
        [aux_sym_STR_AMP] = REDUCE(sym_statement, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_BANG] = REDUCE(sym_statement, 1),
    },
    [530] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(530),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_statement_block_repeat0] = SHIFT(808),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_statement_block_repeat0, 1),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [531] = {
        [sym_type_expression] = SHIFT(804),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(805),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [532] = {
        [sym_type] = SHIFT(798),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
    },
    [533] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(797),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [534] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(794),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [535] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [536] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(796),
    },
    [537] = {
        [sym_type_expression] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_pointer_type] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_var_assignment] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_identifier] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_primitive_type, 1),
        [aux_sym_STR_EQ] = SHIFT(794),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE_FRAGILE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE_FRAGILE(sym_expression, 1),
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
    [538] = {
        [sym_type] = SHIFT(781),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [539] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(530),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [ts_builtin_sym_error] = SHIFT(778),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_statement_block_repeat0] = SHIFT(778),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_RBRACE] = SHIFT(779),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [540] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 2),
        [ts_builtin_sym_end] = REDUCE(sym_statement_block, 2),
        [sym_preproc_else] = REDUCE(sym_statement_block, 2),
        [sym_preproc_endif] = REDUCE(sym_statement_block, 2),
        [sym_preproc_directive] = REDUCE(sym_statement_block, 2),
        [sym_identifier] = REDUCE(sym_statement_block, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
    },
    [541] = {
        [sym_expression] = SHIFT(776),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [542] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(713),
    },
    [543] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(660),
    },
    [544] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(581),
    },
    [545] = {
        [sym_expression] = SHIFT(555),
        [sym_deref] = SHIFT(556),
        [sym_address_of] = SHIFT(557),
        [sym_field_access] = SHIFT(556),
        [sym_deref_field_access] = SHIFT(556),
        [sym_function_call] = SHIFT(557),
        [sym_math_op] = SHIFT(557),
        [sym_bool_op] = SHIFT(557),
        [sym_rel_op] = SHIFT(557),
        [sym_assignment] = SHIFT(557),
        [sym_compound_literal] = SHIFT(557),
        [sym_number] = SHIFT(557),
        [sym_char] = SHIFT(557),
        [sym_string] = SHIFT(557),
        [sym_identifier] = SHIFT(556),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(558),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(559),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(560),
        [aux_sym_STR_DASH_DASH] = SHIFT(560),
        [aux_sym_STR_DASH] = SHIFT(560),
        [aux_sym_STR_BANG] = SHIFT(561),
    },
    [546] = {
        [sym_expression] = SHIFT(554),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [547] = {
        [sym_expression] = SHIFT(553),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [548] = {
        [sym_expression] = SHIFT(549),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [549] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
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
    [550] = {
        [sym_expression] = SHIFT(552),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [551] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [552] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
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
    [553] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
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
    [554] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [555] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [556] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [557] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_expression, 1),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [558] = {
        [sym_type] = SHIFT(568),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [559] = {
        [sym_expression] = SHIFT(567),
        [sym_deref] = SHIFT(556),
        [sym_address_of] = SHIFT(557),
        [sym_field_access] = SHIFT(556),
        [sym_deref_field_access] = SHIFT(556),
        [sym_function_call] = SHIFT(557),
        [sym_math_op] = SHIFT(557),
        [sym_bool_op] = SHIFT(557),
        [sym_rel_op] = SHIFT(557),
        [sym_assignment] = SHIFT(557),
        [sym_compound_literal] = SHIFT(557),
        [sym_number] = SHIFT(557),
        [sym_char] = SHIFT(557),
        [sym_string] = SHIFT(557),
        [sym_identifier] = SHIFT(556),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(558),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(559),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(560),
        [aux_sym_STR_DASH_DASH] = SHIFT(560),
        [aux_sym_STR_DASH] = SHIFT(560),
        [aux_sym_STR_BANG] = SHIFT(561),
    },
    [560] = {
        [sym_expression] = SHIFT(566),
        [sym_deref] = SHIFT(556),
        [sym_address_of] = SHIFT(557),
        [sym_field_access] = SHIFT(556),
        [sym_deref_field_access] = SHIFT(556),
        [sym_function_call] = SHIFT(557),
        [sym_math_op] = SHIFT(557),
        [sym_bool_op] = SHIFT(557),
        [sym_rel_op] = SHIFT(557),
        [sym_assignment] = SHIFT(557),
        [sym_compound_literal] = SHIFT(557),
        [sym_number] = SHIFT(557),
        [sym_char] = SHIFT(557),
        [sym_string] = SHIFT(557),
        [sym_identifier] = SHIFT(556),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(558),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(559),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(560),
        [aux_sym_STR_DASH_DASH] = SHIFT(560),
        [aux_sym_STR_DASH] = SHIFT(560),
        [aux_sym_STR_BANG] = SHIFT(561),
    },
    [561] = {
        [sym_expression] = SHIFT(562),
        [sym_deref] = SHIFT(556),
        [sym_address_of] = SHIFT(557),
        [sym_field_access] = SHIFT(556),
        [sym_deref_field_access] = SHIFT(556),
        [sym_function_call] = SHIFT(557),
        [sym_math_op] = SHIFT(557),
        [sym_bool_op] = SHIFT(557),
        [sym_rel_op] = SHIFT(557),
        [sym_assignment] = SHIFT(557),
        [sym_compound_literal] = SHIFT(557),
        [sym_number] = SHIFT(557),
        [sym_char] = SHIFT(557),
        [sym_string] = SHIFT(557),
        [sym_identifier] = SHIFT(556),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(558),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(559),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(560),
        [aux_sym_STR_DASH_DASH] = SHIFT(560),
        [aux_sym_STR_DASH] = SHIFT(560),
        [aux_sym_STR_BANG] = SHIFT(561),
    },
    [562] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(563),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(564),
        [aux_sym_STR_DASH_DASH] = SHIFT(564),
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
    [563] = {
        [sym_expression] = SHIFT(565),
        [sym_deref] = SHIFT(556),
        [sym_address_of] = SHIFT(557),
        [sym_field_access] = SHIFT(556),
        [sym_deref_field_access] = SHIFT(556),
        [sym_function_call] = SHIFT(557),
        [sym_math_op] = SHIFT(557),
        [sym_bool_op] = SHIFT(557),
        [sym_rel_op] = SHIFT(557),
        [sym_assignment] = SHIFT(557),
        [sym_compound_literal] = SHIFT(557),
        [sym_number] = SHIFT(557),
        [sym_char] = SHIFT(557),
        [sym_string] = SHIFT(557),
        [sym_identifier] = SHIFT(556),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(558),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(559),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(560),
        [aux_sym_STR_DASH_DASH] = SHIFT(560),
        [aux_sym_STR_DASH] = SHIFT(560),
        [aux_sym_STR_BANG] = SHIFT(561),
    },
    [564] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [565] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(563),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(564),
        [aux_sym_STR_DASH_DASH] = SHIFT(564),
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
    [566] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(564),
        [aux_sym_STR_DASH_DASH] = SHIFT(564),
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
    [567] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [568] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(569),
    },
    [569] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(570),
    },
    [570] = {
        [sym_expression] = SHIFT(571),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(572),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(573),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(574),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [571] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(576),
        [aux_sym_STR_COMMA] = SHIFT(577),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(575),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [572] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(576),
        [aux_sym_STR_COMMA] = SHIFT(577),
        [aux_sym_STR_RBRACE] = SHIFT(575),
    },
    [573] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(575),
    },
    [574] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [575] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [576] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(579),
        [aux_sym_STR_RBRACE] = SHIFT(578),
    },
    [577] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(578),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [578] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [579] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(580),
    },
    [580] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [581] = {
        [sym_expression] = SHIFT(582),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [582] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(658),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [583] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = SHIFT(635),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [584] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [585] = {
        [sym_type] = SHIFT(622),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [586] = {
        [sym_expression] = SHIFT(596),
        [sym_deref] = SHIFT(597),
        [sym_address_of] = SHIFT(598),
        [sym_field_access] = SHIFT(597),
        [sym_deref_field_access] = SHIFT(597),
        [sym_function_call] = SHIFT(598),
        [sym_math_op] = SHIFT(598),
        [sym_bool_op] = SHIFT(598),
        [sym_rel_op] = SHIFT(598),
        [sym_assignment] = SHIFT(598),
        [sym_compound_literal] = SHIFT(598),
        [sym_number] = SHIFT(598),
        [sym_char] = SHIFT(598),
        [sym_string] = SHIFT(598),
        [sym_identifier] = SHIFT(597),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(599),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(600),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(601),
        [aux_sym_STR_DASH_DASH] = SHIFT(601),
        [aux_sym_STR_DASH] = SHIFT(601),
        [aux_sym_STR_BANG] = SHIFT(602),
    },
    [587] = {
        [sym_expression] = SHIFT(595),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [588] = {
        [sym_expression] = SHIFT(594),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [589] = {
        [sym_expression] = SHIFT(590),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [590] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
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
    [591] = {
        [sym_expression] = SHIFT(593),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [592] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [593] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
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
    [594] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
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
    [595] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [596] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_deref, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref, 2),
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
    [597] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [598] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_expression, 1),
        [aux_sym_STR_STAR] = REDUCE(sym_expression, 1),
        [aux_sym_STR_EQ] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DOT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_expression, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression, 1),
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
    [599] = {
        [sym_type] = SHIFT(609),
        [sym_primitive_type] = SHIFT(61),
        [sym_struct_type] = SHIFT(61),
        [sym_union_type] = SHIFT(61),
        [sym_enum_type] = SHIFT(61),
        [sym_identifier] = SHIFT(62),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(63),
        [aux_sym_STR_const] = SHIFT(64),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(65),
        [aux_sym_STR_union] = SHIFT(66),
        [aux_sym_STR_enum] = SHIFT(67),
    },
    [600] = {
        [sym_expression] = SHIFT(608),
        [sym_deref] = SHIFT(597),
        [sym_address_of] = SHIFT(598),
        [sym_field_access] = SHIFT(597),
        [sym_deref_field_access] = SHIFT(597),
        [sym_function_call] = SHIFT(598),
        [sym_math_op] = SHIFT(598),
        [sym_bool_op] = SHIFT(598),
        [sym_rel_op] = SHIFT(598),
        [sym_assignment] = SHIFT(598),
        [sym_compound_literal] = SHIFT(598),
        [sym_number] = SHIFT(598),
        [sym_char] = SHIFT(598),
        [sym_string] = SHIFT(598),
        [sym_identifier] = SHIFT(597),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(599),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(600),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(601),
        [aux_sym_STR_DASH_DASH] = SHIFT(601),
        [aux_sym_STR_DASH] = SHIFT(601),
        [aux_sym_STR_BANG] = SHIFT(602),
    },
    [601] = {
        [sym_expression] = SHIFT(607),
        [sym_deref] = SHIFT(597),
        [sym_address_of] = SHIFT(598),
        [sym_field_access] = SHIFT(597),
        [sym_deref_field_access] = SHIFT(597),
        [sym_function_call] = SHIFT(598),
        [sym_math_op] = SHIFT(598),
        [sym_bool_op] = SHIFT(598),
        [sym_rel_op] = SHIFT(598),
        [sym_assignment] = SHIFT(598),
        [sym_compound_literal] = SHIFT(598),
        [sym_number] = SHIFT(598),
        [sym_char] = SHIFT(598),
        [sym_string] = SHIFT(598),
        [sym_identifier] = SHIFT(597),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(599),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(600),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(601),
        [aux_sym_STR_DASH_DASH] = SHIFT(601),
        [aux_sym_STR_DASH] = SHIFT(601),
        [aux_sym_STR_BANG] = SHIFT(602),
    },
    [602] = {
        [sym_expression] = SHIFT(603),
        [sym_deref] = SHIFT(597),
        [sym_address_of] = SHIFT(598),
        [sym_field_access] = SHIFT(597),
        [sym_deref_field_access] = SHIFT(597),
        [sym_function_call] = SHIFT(598),
        [sym_math_op] = SHIFT(598),
        [sym_bool_op] = SHIFT(598),
        [sym_rel_op] = SHIFT(598),
        [sym_assignment] = SHIFT(598),
        [sym_compound_literal] = SHIFT(598),
        [sym_number] = SHIFT(598),
        [sym_char] = SHIFT(598),
        [sym_string] = SHIFT(598),
        [sym_identifier] = SHIFT(597),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(599),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(600),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(601),
        [aux_sym_STR_DASH_DASH] = SHIFT(601),
        [aux_sym_STR_DASH] = SHIFT(601),
        [aux_sym_STR_BANG] = SHIFT(602),
    },
    [603] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_STAR] = SHIFT(604),
        [aux_sym_STR_EQ] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_bool_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(605),
        [aux_sym_STR_DASH_DASH] = SHIFT(605),
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
    [604] = {
        [sym_expression] = SHIFT(606),
        [sym_deref] = SHIFT(597),
        [sym_address_of] = SHIFT(598),
        [sym_field_access] = SHIFT(597),
        [sym_deref_field_access] = SHIFT(597),
        [sym_function_call] = SHIFT(598),
        [sym_math_op] = SHIFT(598),
        [sym_bool_op] = SHIFT(598),
        [sym_rel_op] = SHIFT(598),
        [sym_assignment] = SHIFT(598),
        [sym_compound_literal] = SHIFT(598),
        [sym_number] = SHIFT(598),
        [sym_char] = SHIFT(598),
        [sym_string] = SHIFT(598),
        [sym_identifier] = SHIFT(597),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(599),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(600),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(601),
        [aux_sym_STR_DASH_DASH] = SHIFT(601),
        [aux_sym_STR_DASH] = SHIFT(601),
        [aux_sym_STR_BANG] = SHIFT(602),
    },
    [605] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_math_op, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_math_op, 2),
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
    [606] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(604),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(605),
        [aux_sym_STR_DASH_DASH] = SHIFT(605),
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
    [607] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_STAR] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_EQ] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 2),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(605),
        [aux_sym_STR_DASH_DASH] = SHIFT(605),
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
    [608] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_STAR] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_EQ] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DOT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_address_of, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_address_of, 2),
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
    [609] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(610),
    },
    [610] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(611),
    },
    [611] = {
        [sym_expression] = SHIFT(612),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(613),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(614),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(615),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [612] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(617),
        [aux_sym_STR_COMMA] = SHIFT(618),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(616),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [613] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(617),
        [aux_sym_STR_COMMA] = SHIFT(618),
        [aux_sym_STR_RBRACE] = SHIFT(616),
    },
    [614] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(616),
    },
    [615] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [616] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [617] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(620),
        [aux_sym_STR_RBRACE] = SHIFT(619),
    },
    [618] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(619),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [619] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [620] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(621),
    },
    [621] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_EQ] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [622] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(623),
    },
    [623] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(624),
    },
    [624] = {
        [sym_expression] = SHIFT(625),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(626),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(627),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(628),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [625] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(630),
        [aux_sym_STR_COMMA] = SHIFT(631),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(629),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [626] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(630),
        [aux_sym_STR_COMMA] = SHIFT(631),
        [aux_sym_STR_RBRACE] = SHIFT(629),
    },
    [627] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(629),
    },
    [628] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [629] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [630] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(633),
        [aux_sym_STR_RBRACE] = SHIFT(632),
    },
    [631] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(632),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [632] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [633] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(634),
    },
    [634] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_RPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [635] = {
        [sym_expression] = SHIFT(636),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [636] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [637] = {
        [sym_expression] = SHIFT(652),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(653),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(654),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [638] = {
        [sym_identifier] = SHIFT(651),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [639] = {
        [sym_identifier] = SHIFT(650),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [640] = {
        [sym_expression] = SHIFT(649),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [641] = {
        [sym_expression] = SHIFT(648),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [642] = {
        [sym_expression] = SHIFT(647),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [643] = {
        [sym_expression] = SHIFT(646),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [644] = {
        [sym_expression] = SHIFT(645),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [645] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [646] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [647] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [648] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [649] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [650] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [651] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [652] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(656),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(655),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [653] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(655),
    },
    [654] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [655] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [656] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(657),
    },
    [657] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_RPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
    [658] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(659),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [659] = {
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
        [sym_storage_class] = REDUCE(sym_while_statement, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_while_statement, 5),
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
        [aux_sym_STR_static] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_extern] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_while_statement, 5),
    },
    [660] = {
        [sym_var_declaration] = SHIFT(661),
        [sym_type] = SHIFT(662),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(663),
        [sym_expression] = SHIFT(664),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_SEMI] = SHIFT(661),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [661] = {
        [sym_expression] = SHIFT(708),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(709),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [662] = {
        [sym_type_expression] = SHIFT(704),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(705),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [663] = {
        [sym_type] = SHIFT(698),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
    },
    [664] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(665),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [665] = {
        [sym_expression] = SHIFT(687),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(688),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [666] = {
        [sym_expression] = SHIFT(681),
        [sym_deref] = SHIFT(187),
        [sym_address_of] = SHIFT(188),
        [sym_field_access] = SHIFT(187),
        [sym_deref_field_access] = SHIFT(187),
        [sym_function_call] = SHIFT(188),
        [sym_math_op] = SHIFT(188),
        [sym_bool_op] = SHIFT(188),
        [sym_rel_op] = SHIFT(188),
        [sym_assignment] = SHIFT(188),
        [sym_compound_literal] = SHIFT(188),
        [ts_builtin_sym_error] = SHIFT(682),
        [sym_number] = SHIFT(188),
        [sym_char] = SHIFT(188),
        [sym_string] = SHIFT(188),
        [sym_identifier] = SHIFT(187),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(190),
        [aux_sym_STR_RPAREN] = SHIFT(683),
        [aux_sym_STR_STAR] = SHIFT(192),
        [aux_sym_STR_AMP] = SHIFT(193),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(194),
        [aux_sym_STR_DASH_DASH] = SHIFT(194),
        [aux_sym_STR_DASH] = SHIFT(194),
        [aux_sym_STR_BANG] = SHIFT(195),
    },
    [667] = {
        [sym_identifier] = SHIFT(680),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [668] = {
        [sym_identifier] = SHIFT(679),
        [sym_comment] = SHIFT_EXTRA(),
    },
    [669] = {
        [sym_expression] = SHIFT(678),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [670] = {
        [sym_expression] = SHIFT(677),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [671] = {
        [sym_expression] = SHIFT(676),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [672] = {
        [sym_expression] = SHIFT(675),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [673] = {
        [sym_expression] = SHIFT(674),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [674] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_rel_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [675] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [676] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_bool_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_bool_op, 3),
    },
    [677] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_EQ_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_BANG_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT_EQ] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_GT] = REDUCE_FRAGILE(sym_math_op, 3),
    },
    [678] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_DASH_GT] = REDUCE_FRAGILE(sym_math_op, 3),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [679] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_deref_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_deref_field_access, 3),
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
    [680] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_EQ] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_field_access, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_field_access, 3),
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
    [681] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_function_call_repeat0] = SHIFT(685),
        [aux_sym_STR_COMMA] = SHIFT(268),
        [aux_sym_STR_LPAREN] = SHIFT(248),
        [aux_sym_STR_RPAREN] = SHIFT(684),
        [aux_sym_STR_STAR] = SHIFT(197),
        [aux_sym_STR_DOT] = SHIFT(249),
        [aux_sym_STR_DASH_GT] = SHIFT(250),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(198),
        [aux_sym_STR_DASH_DASH] = SHIFT(198),
        [aux_sym_STR_DASH] = SHIFT(251),
        [aux_sym_STR_SLASH] = SHIFT(252),
        [aux_sym_STR_PLUS] = SHIFT(251),
        [aux_sym_STR_AMP_AMP] = SHIFT(253),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(254),
        [aux_sym_STR_LT] = SHIFT(255),
        [aux_sym_STR_LT_EQ] = SHIFT(255),
        [aux_sym_STR_EQ_EQ] = SHIFT(255),
        [aux_sym_STR_BANG_EQ] = SHIFT(255),
        [aux_sym_STR_GT_EQ] = SHIFT(255),
        [aux_sym_STR_GT] = SHIFT(255),
    },
    [682] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(684),
    },
    [683] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 3),
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
    [684] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 4),
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
    [685] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(686),
    },
    [686] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_function_call, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_function_call, 5),
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
    [687] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(694),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [688] = {
        [sym_expression] = SHIFT(689),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(690),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [689] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(692),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [690] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(691),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [691] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 7),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 7),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 7),
    },
    [692] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(693),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [693] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 8),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 8),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 8),
    },
    [694] = {
        [sym_expression] = SHIFT(695),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(692),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [695] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(696),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [696] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(697),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [697] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 9),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 9),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 9),
    },
    [698] = {
        [sym_type_expression] = SHIFT(699),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(700),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [699] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(701),
        [aux_sym_STR_SEMI] = SHIFT(702),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [700] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(701),
        [aux_sym_STR_SEMI] = SHIFT(702),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [701] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(703),
    },
    [702] = {
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
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [703] = {
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
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [704] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(706),
        [aux_sym_STR_SEMI] = SHIFT(707),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [705] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(706),
        [aux_sym_STR_SEMI] = SHIFT(707),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [706] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(702),
    },
    [707] = {
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
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [708] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(688),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [709] = {
        [sym_expression] = SHIFT(710),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(711),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [710] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(690),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [711] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(712),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [712] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 6),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 6),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 6),
    },
    [713] = {
        [sym_expression] = SHIFT(714),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [ts_builtin_sym_error] = SHIFT(715),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [714] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(716),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [715] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(716),
    },
    [716] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(718),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [717] = {
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
        [sym_storage_class] = REDUCE(sym_statement, 1),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement, 1),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement, 1),
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
        [aux_sym_STR_static] = REDUCE(sym_statement, 1),
        [aux_sym_STR_extern] = REDUCE(sym_statement, 1),
        [aux_sym_STR_AMP] = REDUCE(sym_statement, 1),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_DASH] = REDUCE(sym_statement, 1),
        [aux_sym_STR_BANG] = REDUCE(sym_statement, 1),
    },
    [718] = {
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
        [sym_storage_class] = REDUCE_FRAGILE(sym_if_statement, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_storage_class_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_return] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_if] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_else] = SHIFT(774),
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
        [aux_sym_STR_static] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_extern] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_AMP] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_BANG] = REDUCE_FRAGILE(sym_if_statement, 5),
    },
    [719] = {
        [sym_type_expression] = SHIFT(770),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(771),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [720] = {
        [sym_type] = SHIFT(764),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_identifier] = SHIFT(10),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
    },
    [721] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(763),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [722] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(530),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [ts_builtin_sym_error] = SHIFT(760),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_statement_block_repeat0] = SHIFT(760),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_RBRACE] = SHIFT(761),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [723] = {
        [sym_expression] = SHIFT(758),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [724] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(751),
    },
    [725] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(731),
    },
    [726] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(727),
    },
    [727] = {
        [sym_expression] = SHIFT(728),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [728] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(729),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [729] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(730),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [730] = {
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
        [sym_storage_class] = REDUCE(sym_while_statement, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_while_statement, 5),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_while_statement, 5),
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
        [aux_sym_STR_static] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_extern] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_while_statement, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_while_statement, 5),
    },
    [731] = {
        [sym_var_declaration] = SHIFT(732),
        [sym_type] = SHIFT(662),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(663),
        [sym_expression] = SHIFT(733),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_SEMI] = SHIFT(732),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [732] = {
        [sym_expression] = SHIFT(746),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(747),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [733] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(734),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [734] = {
        [sym_expression] = SHIFT(735),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(736),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [735] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(742),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [736] = {
        [sym_expression] = SHIFT(737),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(738),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [737] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(740),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [738] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(739),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [739] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 7),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 7),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 7),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 7),
    },
    [740] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(741),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [741] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 8),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 8),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 8),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 8),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 8),
    },
    [742] = {
        [sym_expression] = SHIFT(743),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(740),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [743] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(744),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [744] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(745),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [745] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 9),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 9),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 9),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 9),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 9),
    },
    [746] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(736),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [747] = {
        [sym_expression] = SHIFT(748),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_RPAREN] = SHIFT(749),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [748] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(738),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [749] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(750),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [750] = {
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
        [sym_storage_class] = REDUCE(sym_for_statement, 6),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_for_statement, 6),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_for_statement, 6),
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
        [aux_sym_STR_static] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_extern] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_AMP] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_DASH] = REDUCE(sym_for_statement, 6),
        [aux_sym_STR_BANG] = REDUCE(sym_for_statement, 6),
    },
    [751] = {
        [sym_expression] = SHIFT(752),
        [sym_deref] = SHIFT(583),
        [sym_address_of] = SHIFT(584),
        [sym_field_access] = SHIFT(583),
        [sym_deref_field_access] = SHIFT(583),
        [sym_function_call] = SHIFT(584),
        [sym_math_op] = SHIFT(584),
        [sym_bool_op] = SHIFT(584),
        [sym_rel_op] = SHIFT(584),
        [sym_assignment] = SHIFT(584),
        [sym_compound_literal] = SHIFT(584),
        [ts_builtin_sym_error] = SHIFT(753),
        [sym_number] = SHIFT(584),
        [sym_char] = SHIFT(584),
        [sym_string] = SHIFT(584),
        [sym_identifier] = SHIFT(583),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(585),
        [aux_sym_STR_STAR] = SHIFT(586),
        [aux_sym_STR_AMP] = SHIFT(587),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(588),
        [aux_sym_STR_DASH_DASH] = SHIFT(588),
        [aux_sym_STR_DASH] = SHIFT(588),
        [aux_sym_STR_BANG] = SHIFT(589),
    },
    [752] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(637),
        [aux_sym_STR_RPAREN] = SHIFT(754),
        [aux_sym_STR_STAR] = SHIFT(591),
        [aux_sym_STR_DOT] = SHIFT(638),
        [aux_sym_STR_DASH_GT] = SHIFT(639),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(592),
        [aux_sym_STR_DASH_DASH] = SHIFT(592),
        [aux_sym_STR_DASH] = SHIFT(640),
        [aux_sym_STR_SLASH] = SHIFT(641),
        [aux_sym_STR_PLUS] = SHIFT(640),
        [aux_sym_STR_AMP_AMP] = SHIFT(642),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(643),
        [aux_sym_STR_LT] = SHIFT(644),
        [aux_sym_STR_LT_EQ] = SHIFT(644),
        [aux_sym_STR_EQ_EQ] = SHIFT(644),
        [aux_sym_STR_BANG_EQ] = SHIFT(644),
        [aux_sym_STR_GT_EQ] = SHIFT(644),
        [aux_sym_STR_GT] = SHIFT(644),
    },
    [753] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(754),
    },
    [754] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(755),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [755] = {
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
        [sym_storage_class] = REDUCE_FRAGILE(sym_if_statement, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_storage_class_repeat0] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LPAREN] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_LBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_RBRACE] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_return] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_if] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_else] = SHIFT(756),
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
        [aux_sym_STR_static] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_extern] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_AMP] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_DASH] = REDUCE_FRAGILE(sym_if_statement, 5),
        [aux_sym_STR_BANG] = REDUCE_FRAGILE(sym_if_statement, 5),
    },
    [756] = {
        [sym_var_declaration] = SHIFT(717),
        [sym_statement_block] = SHIFT(717),
        [sym_statement] = SHIFT(757),
        [sym_return_statement] = SHIFT(717),
        [sym_expression_statement] = SHIFT(717),
        [sym_if_statement] = SHIFT(717),
        [sym_for_statement] = SHIFT(717),
        [sym_while_statement] = SHIFT(717),
        [sym_type] = SHIFT(719),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(720),
        [sym_expression] = SHIFT(721),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(722),
        [aux_sym_STR_return] = SHIFT(723),
        [aux_sym_STR_if] = SHIFT(724),
        [aux_sym_STR_for] = SHIFT(725),
        [aux_sym_STR_while] = SHIFT(726),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [757] = {
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
        [sym_storage_class] = REDUCE(sym_if_statement, 7),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_if_statement, 7),
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
        [aux_sym_STR_static] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_if_statement, 7),
    },
    [758] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(759),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [759] = {
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
        [sym_storage_class] = REDUCE(sym_return_statement, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_return_statement, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_extern] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_return_statement, 3),
    },
    [760] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(762),
    },
    [761] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 2),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 2),
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
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 2),
    },
    [762] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 3),
    },
    [763] = {
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
        [sym_storage_class] = REDUCE(sym_expression_statement, 2),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_expression_statement, 2),
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
        [aux_sym_STR_static] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_extern] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_expression_statement, 2),
    },
    [764] = {
        [sym_type_expression] = SHIFT(765),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(766),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [765] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(767),
        [aux_sym_STR_SEMI] = SHIFT(768),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [766] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(767),
        [aux_sym_STR_SEMI] = SHIFT(768),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [767] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(769),
    },
    [768] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 4),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 4),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [769] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 5),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [770] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(772),
        [aux_sym_STR_SEMI] = SHIFT(773),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [771] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(772),
        [aux_sym_STR_SEMI] = SHIFT(773),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [772] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(768),
    },
    [773] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [774] = {
        [sym_var_declaration] = SHIFT(529),
        [sym_statement_block] = SHIFT(529),
        [sym_statement] = SHIFT(775),
        [sym_return_statement] = SHIFT(529),
        [sym_expression_statement] = SHIFT(529),
        [sym_if_statement] = SHIFT(529),
        [sym_for_statement] = SHIFT(529),
        [sym_while_statement] = SHIFT(529),
        [sym_type] = SHIFT(531),
        [sym_primitive_type] = SHIFT(4),
        [sym_struct_type] = SHIFT(4),
        [sym_union_type] = SHIFT(4),
        [sym_enum_type] = SHIFT(4),
        [sym_storage_class] = SHIFT(532),
        [sym_expression] = SHIFT(533),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(537),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(12),
        [aux_sym_storage_class_repeat0] = SHIFT(13),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_LBRACE] = SHIFT(539),
        [aux_sym_STR_return] = SHIFT(541),
        [aux_sym_STR_if] = SHIFT(542),
        [aux_sym_STR_for] = SHIFT(543),
        [aux_sym_STR_while] = SHIFT(544),
        [aux_sym_STR_const] = SHIFT(19),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_struct] = SHIFT(383),
        [aux_sym_STR_union] = SHIFT(384),
        [aux_sym_STR_enum] = SHIFT(385),
        [aux_sym_STR_static] = SHIFT(24),
        [aux_sym_STR_extern] = SHIFT(24),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [775] = {
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
        [sym_storage_class] = REDUCE(sym_if_statement, 7),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_if_statement, 7),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_if_statement, 7),
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
        [aux_sym_STR_static] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_extern] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_AMP] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_DASH] = REDUCE(sym_if_statement, 7),
        [aux_sym_STR_BANG] = REDUCE(sym_if_statement, 7),
    },
    [776] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(777),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [777] = {
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
        [sym_storage_class] = REDUCE(sym_return_statement, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_return_statement, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_return_statement, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_extern] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_return_statement, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_return_statement, 3),
    },
    [778] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(780),
    },
    [779] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 2),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 2),
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
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 2),
    },
    [780] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_statement_block, 3),
    },
    [781] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(782),
    },
    [782] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LBRACE] = SHIFT(783),
    },
    [783] = {
        [sym_expression] = SHIFT(784),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(785),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(786),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(787),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [784] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(789),
        [aux_sym_STR_COMMA] = SHIFT(790),
        [aux_sym_STR_LPAREN] = SHIFT(171),
        [aux_sym_STR_RBRACE] = SHIFT(788),
        [aux_sym_STR_STAR] = SHIFT(164),
        [aux_sym_STR_DOT] = SHIFT(172),
        [aux_sym_STR_DASH_GT] = SHIFT(173),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(165),
        [aux_sym_STR_DASH_DASH] = SHIFT(165),
        [aux_sym_STR_DASH] = SHIFT(174),
        [aux_sym_STR_SLASH] = SHIFT(175),
        [aux_sym_STR_PLUS] = SHIFT(174),
        [aux_sym_STR_AMP_AMP] = SHIFT(176),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(177),
        [aux_sym_STR_LT] = SHIFT(178),
        [aux_sym_STR_LT_EQ] = SHIFT(178),
        [aux_sym_STR_EQ_EQ] = SHIFT(178),
        [aux_sym_STR_BANG_EQ] = SHIFT(178),
        [aux_sym_STR_GT_EQ] = SHIFT(178),
        [aux_sym_STR_GT] = SHIFT(178),
    },
    [785] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_compound_literal_repeat0] = SHIFT(789),
        [aux_sym_STR_COMMA] = SHIFT(790),
        [aux_sym_STR_RBRACE] = SHIFT(788),
    },
    [786] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(788),
    },
    [787] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 5),
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
    [788] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 6),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 6),
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
    [789] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_COMMA] = SHIFT(792),
        [aux_sym_STR_RBRACE] = SHIFT(791),
    },
    [790] = {
        [sym_expression] = SHIFT(225),
        [sym_deref] = SHIFT(152),
        [sym_address_of] = SHIFT(153),
        [sym_field_access] = SHIFT(152),
        [sym_deref_field_access] = SHIFT(152),
        [sym_function_call] = SHIFT(153),
        [sym_math_op] = SHIFT(153),
        [sym_bool_op] = SHIFT(153),
        [sym_rel_op] = SHIFT(153),
        [sym_assignment] = SHIFT(153),
        [sym_compound_literal] = SHIFT(153),
        [sym_struct_literal_field] = SHIFT(226),
        [sym_number] = SHIFT(153),
        [sym_char] = SHIFT(153),
        [sym_string] = SHIFT(153),
        [sym_identifier] = SHIFT(152),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(156),
        [aux_sym_STR_RBRACE] = SHIFT(791),
        [aux_sym_STR_STAR] = SHIFT(158),
        [aux_sym_STR_AMP] = SHIFT(159),
        [aux_sym_STR_DOT] = SHIFT(160),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(161),
        [aux_sym_STR_DASH_DASH] = SHIFT(161),
        [aux_sym_STR_DASH] = SHIFT(161),
        [aux_sym_STR_BANG] = SHIFT(162),
    },
    [791] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 7),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 7),
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
    [792] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = SHIFT(793),
    },
    [793] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_LPAREN] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_STAR] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DOT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_GT] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_compound_literal, 8),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_compound_literal, 8),
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
    [794] = {
        [sym_expression] = SHIFT(795),
        [sym_deref] = SHIFT(534),
        [sym_address_of] = SHIFT(535),
        [sym_field_access] = SHIFT(534),
        [sym_deref_field_access] = SHIFT(534),
        [sym_function_call] = SHIFT(535),
        [sym_math_op] = SHIFT(535),
        [sym_bool_op] = SHIFT(535),
        [sym_rel_op] = SHIFT(535),
        [sym_assignment] = SHIFT(535),
        [sym_compound_literal] = SHIFT(535),
        [sym_number] = SHIFT(535),
        [sym_char] = SHIFT(535),
        [sym_string] = SHIFT(535),
        [sym_identifier] = SHIFT(534),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_LPAREN] = SHIFT(538),
        [aux_sym_STR_STAR] = SHIFT(545),
        [aux_sym_STR_AMP] = SHIFT(546),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(547),
        [aux_sym_STR_DASH_DASH] = SHIFT(547),
        [aux_sym_STR_DASH] = SHIFT(547),
        [aux_sym_STR_BANG] = SHIFT(548),
    },
    [795] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = REDUCE(sym_assignment, 3),
        [aux_sym_STR_LPAREN] = SHIFT(666),
        [aux_sym_STR_STAR] = SHIFT(550),
        [aux_sym_STR_DOT] = SHIFT(667),
        [aux_sym_STR_DASH_GT] = SHIFT(668),
        [aux_sym_STR_PLUS_PLUS] = SHIFT(551),
        [aux_sym_STR_DASH_DASH] = SHIFT(551),
        [aux_sym_STR_DASH] = SHIFT(669),
        [aux_sym_STR_SLASH] = SHIFT(670),
        [aux_sym_STR_PLUS] = SHIFT(669),
        [aux_sym_STR_AMP_AMP] = SHIFT(671),
        [aux_sym_STR_PIPE_PIPE] = SHIFT(672),
        [aux_sym_STR_LT] = SHIFT(673),
        [aux_sym_STR_LT_EQ] = SHIFT(673),
        [aux_sym_STR_EQ_EQ] = SHIFT(673),
        [aux_sym_STR_BANG_EQ] = SHIFT(673),
        [aux_sym_STR_GT_EQ] = SHIFT(673),
        [aux_sym_STR_GT] = SHIFT(673),
    },
    [796] = {
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
        [sym_storage_class] = REDUCE(sym_statement_block, 3),
        [ts_builtin_sym_end] = REDUCE(sym_statement_block, 3),
        [sym_preproc_else] = REDUCE(sym_statement_block, 3),
        [sym_preproc_endif] = REDUCE(sym_statement_block, 3),
        [sym_preproc_directive] = REDUCE(sym_statement_block, 3),
        [sym_identifier] = REDUCE(sym_statement_block, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_const] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_short] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_long] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_struct] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_union] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_enum] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_static] = REDUCE(sym_statement_block, 3),
        [aux_sym_STR_extern] = REDUCE(sym_statement_block, 3),
    },
    [797] = {
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
        [sym_storage_class] = REDUCE(sym_expression_statement, 2),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_expression_statement, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_expression_statement, 2),
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
        [aux_sym_STR_static] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_extern] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_AMP] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_DASH] = REDUCE(sym_expression_statement, 2),
        [aux_sym_STR_BANG] = REDUCE(sym_expression_statement, 2),
    },
    [798] = {
        [sym_type_expression] = SHIFT(799),
        [sym_pointer_type] = SHIFT(434),
        [sym_var_assignment] = SHIFT(800),
        [sym_identifier] = SHIFT(434),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(436),
    },
    [799] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(801),
        [aux_sym_STR_SEMI] = SHIFT(802),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [800] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(801),
        [aux_sym_STR_SEMI] = SHIFT(802),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [801] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(803),
    },
    [802] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 4),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 4),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 4),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 4),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 4),
    },
    [803] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 5),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 5),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 5),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 5),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 5),
    },
    [804] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(806),
        [aux_sym_STR_SEMI] = SHIFT(807),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [805] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(806),
        [aux_sym_STR_SEMI] = SHIFT(807),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [806] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(802),
    },
    [807] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 3),
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
        [aux_sym_statement_block_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 3),
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
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_AMP] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_PLUS_PLUS] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_DASH] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_BANG] = REDUCE(sym_var_declaration, 3),
    },
    [808] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RBRACE] = REDUCE(aux_sym_statement_block_repeat0, 2),
    },
    [809] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_field, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_field, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_field, 2),
    },
    [810] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_COMMA] = REDUCE(sym_type_expression, 1),
        [aux_sym_STR_RPAREN] = REDUCE(sym_type_expression, 1),
    },
    [811] = {
        [sym_type_expression] = SHIFT(812),
        [sym_pointer_type] = SHIFT(810),
        [sym_identifier] = SHIFT(810),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_STAR] = SHIFT(811),
    },
    [812] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_formal_parameters_repeat0] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_COMMA] = REDUCE(sym_pointer_type, 2),
        [aux_sym_STR_RPAREN] = REDUCE(sym_pointer_type, 2),
    },
    [813] = {
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
        [sym_storage_class] = REDUCE(sym_enum_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_enum_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_enum_declaration, 2),
        [sym_identifier] = REDUCE(sym_enum_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_enum_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_enum_declaration, 2),
    },
    [814] = {
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
        [sym_storage_class] = REDUCE(sym_union_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_union_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_union_declaration, 2),
        [sym_identifier] = REDUCE(sym_union_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_union_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_union_declaration, 2),
    },
    [815] = {
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
        [sym_storage_class] = REDUCE(sym_struct_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_else] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_endif] = REDUCE(sym_struct_declaration, 2),
        [sym_preproc_directive] = REDUCE(sym_struct_declaration, 2),
        [sym_identifier] = REDUCE(sym_struct_declaration, 2),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_typedef] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_const] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_unsigned] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_short] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_long] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_struct] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_union] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_enum] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_static] = REDUCE(sym_struct_declaration, 2),
        [aux_sym_STR_extern] = REDUCE(sym_struct_declaration, 2),
    },
    [816] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(818),
        [aux_sym_STR_SEMI] = SHIFT(819),
        [aux_sym_STR_COMMA] = SHIFT(432),
        [aux_sym_STR_LPAREN] = SHIFT(820),
        [aux_sym_STR_EQ] = SHIFT(439),
    },
    [817] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_var_declaration_repeat0] = SHIFT(818),
        [aux_sym_STR_SEMI] = SHIFT(819),
        [aux_sym_STR_COMMA] = SHIFT(432),
    },
    [818] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(431),
    },
    [819] = {
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
        [sym_storage_class] = REDUCE(sym_var_declaration, 3),
        [ts_builtin_sym_end] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_else] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_endif] = REDUCE(sym_var_declaration, 3),
        [sym_preproc_directive] = REDUCE(sym_var_declaration, 3),
        [sym_identifier] = REDUCE(sym_var_declaration, 3),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_typedef] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_const] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_unsigned] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_short] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_long] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_struct] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_union] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_enum] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_static] = REDUCE(sym_var_declaration, 3),
        [aux_sym_STR_extern] = REDUCE(sym_var_declaration, 3),
    },
    [820] = {
        [sym_type] = SHIFT(518),
        [sym_primitive_type] = SHIFT(86),
        [sym_formal_parameters] = SHIFT(821),
        [sym_struct_type] = SHIFT(86),
        [sym_union_type] = SHIFT(86),
        [sym_enum_type] = SHIFT(86),
        [sym_field] = SHIFT(520),
        [ts_builtin_sym_error] = SHIFT(521),
        [sym_identifier] = SHIFT(89),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_primitive_type_repeat0] = SHIFT(90),
        [aux_sym_STR_RPAREN] = REDUCE_FRAGILE(sym_formal_parameters, 0),
        [aux_sym_STR_const] = SHIFT(92),
        [aux_sym_STR_unsigned] = SHIFT(20),
        [aux_sym_STR_short] = SHIFT(20),
        [aux_sym_STR_long] = SHIFT(20),
        [aux_sym_STR_struct] = SHIFT(93),
        [aux_sym_STR_union] = SHIFT(94),
        [aux_sym_STR_enum] = SHIFT(95),
    },
    [821] = {
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_RPAREN] = SHIFT(822),
    },
    [822] = {
        [sym_statement_block] = SHIFT(823),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_STR_SEMI] = SHIFT(823),
        [aux_sym_STR_LBRACE] = SHIFT(528),
    },
    [823] = {
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
        [sym_storage_class] = REDUCE(sym_function_declaration, 6),
        [ts_builtin_sym_end] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_else] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_endif] = REDUCE(sym_function_declaration, 6),
        [sym_preproc_directive] = REDUCE(sym_function_declaration, 6),
        [sym_identifier] = REDUCE(sym_function_declaration, 6),
        [sym_comment] = SHIFT_EXTRA(),
        [aux_sym_program_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_primitive_type_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_storage_class_repeat0] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDinclude] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDdefine] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDifdef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_POUNDifndef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_typedef] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_const] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_unsigned] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_short] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_long] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_struct] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_union] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_enum] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_static] = REDUCE(sym_function_declaration, 6),
        [aux_sym_STR_extern] = REDUCE(sym_function_declaration, 6),
    },
    [824] = {
        [ts_builtin_sym_end] = REDUCE(aux_sym_program_repeat0, 2),
        [sym_comment] = SHIFT_EXTRA(),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c);
