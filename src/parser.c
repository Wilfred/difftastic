#include "tree_sitter/parser.h"

#define STATE_COUNT 820
#define SYMBOL_COUNT 110

enum {
    ts_sym_program = ts_builtin_sym_start,
    ts_sym_preproc_include,
    ts_sym_preproc_define,
    ts_sym_preproc_call,
    ts_sym_preproc_ifdef,
    ts_sym_preproc_ifndef,
    ts_sym_typedef,
    ts_sym_var_declaration,
    ts_sym_function_declaration,
    ts_sym_statement_block,
    ts_sym_statement,
    ts_sym_return_statement,
    ts_sym_expression_statement,
    ts_sym_if_statement,
    ts_sym_for_statement,
    ts_sym_while_statement,
    ts_sym_type,
    ts_sym_primitive_type,
    ts_sym_formal_parameters,
    ts_sym_type_expression,
    ts_sym_pointer_type,
    ts_sym_struct_declaration,
    ts_sym_struct_type,
    ts_sym_union_declaration,
    ts_sym_union_type,
    ts_sym_enum_declaration,
    ts_sym_enum_type,
    ts_sym_enum_value,
    ts_sym_field,
    ts_sym_var_assignment,
    ts_sym_expression,
    ts_sym_deref,
    ts_sym_address_of,
    ts_sym_field_access,
    ts_sym_deref_field_access,
    ts_sym_function_call,
    ts_sym_math_op,
    ts_sym_bool_op,
    ts_sym_rel_op,
    ts_sym_assignment,
    ts_sym_compound_literal,
    ts_sym_struct_literal_field,
    ts_sym_preproc_else,
    ts_sym_preproc_endif,
    ts_sym_preproc_directive,
    ts_sym_number,
    ts_sym_char,
    ts_sym_string,
    ts_sym_system_lib_string,
    ts_sym_identifier,
    ts_sym_comment,
    ts_aux_sym_program_repeat0,
    ts_aux_sym_var_declaration_repeat0,
    ts_aux_sym_var_declaration_repeat1,
    ts_aux_sym_statement_block_repeat0,
    ts_aux_sym_primitive_type_repeat0,
    ts_aux_sym_formal_parameters_repeat0,
    ts_aux_sym_struct_type_repeat0,
    ts_aux_sym_union_type_repeat0,
    ts_aux_sym_enum_type_repeat0,
    ts_aux_sym_function_call_repeat0,
    ts_aux_sym_compound_literal_repeat0,
    ts_aux_sym_include,
    ts_aux_sym_define,
    ts_aux_sym_seq,
    ts_aux_sym_1,
    ts_aux_sym_ifdef,
    ts_aux_sym_ifndef,
    ts_aux_sym_typedef1,
    ts_aux_sym_2,
    ts_aux_sym_static,
    ts_aux_sym_extern,
    ts_aux_sym_3,
    ts_aux_sym_4,
    ts_aux_sym_5,
    ts_aux_sym_6,
    ts_aux_sym_7,
    ts_aux_sym_return,
    ts_aux_sym_if,
    ts_aux_sym_else,
    ts_aux_sym_for,
    ts_aux_sym_while,
    ts_aux_sym_const,
    ts_aux_sym_unsigned,
    ts_aux_sym_short,
    ts_aux_sym_long,
    ts_aux_sym_8,
    ts_aux_sym_struct,
    ts_aux_sym_union,
    ts_aux_sym_enum,
    ts_aux_sym_9,
    ts_aux_sym_10,
    ts_aux_sym_11,
    ts_aux_sym_12,
    ts_aux_sym_13,
    ts_aux_sym_14,
    ts_aux_sym_15,
    ts_aux_sym_16,
    ts_aux_sym_17,
    ts_aux_sym_18,
    ts_aux_sym_19,
    ts_aux_sym_20,
    ts_aux_sym_21,
    ts_aux_sym_22,
    ts_aux_sym_23,
    ts_aux_sym_24,
    ts_aux_sym_25,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_document] = "DOCUMENT",
    [ts_sym_program] = "program",
    [ts_sym_preproc_include] = "preproc_include",
    [ts_sym_preproc_define] = "preproc_define",
    [ts_sym_preproc_call] = "preproc_call",
    [ts_sym_preproc_ifdef] = "preproc_ifdef",
    [ts_sym_preproc_ifndef] = "preproc_ifndef",
    [ts_sym_typedef] = "typedef",
    [ts_sym_var_declaration] = "var_declaration",
    [ts_sym_function_declaration] = "function_declaration",
    [ts_sym_statement_block] = "statement_block",
    [ts_sym_statement] = "statement",
    [ts_sym_return_statement] = "return_statement",
    [ts_sym_expression_statement] = "expression_statement",
    [ts_sym_if_statement] = "if_statement",
    [ts_sym_for_statement] = "for_statement",
    [ts_sym_while_statement] = "while_statement",
    [ts_sym_type] = "type",
    [ts_sym_primitive_type] = "primitive_type",
    [ts_sym_formal_parameters] = "formal_parameters",
    [ts_sym_type_expression] = "type_expression",
    [ts_sym_pointer_type] = "pointer_type",
    [ts_sym_struct_declaration] = "struct_declaration",
    [ts_sym_struct_type] = "struct_type",
    [ts_sym_union_declaration] = "union_declaration",
    [ts_sym_union_type] = "union_type",
    [ts_sym_enum_declaration] = "enum_declaration",
    [ts_sym_enum_type] = "enum_type",
    [ts_sym_enum_value] = "enum_value",
    [ts_sym_field] = "field",
    [ts_sym_var_assignment] = "var_assignment",
    [ts_sym_expression] = "expression",
    [ts_sym_deref] = "deref",
    [ts_sym_address_of] = "address_of",
    [ts_sym_field_access] = "field_access",
    [ts_sym_deref_field_access] = "deref_field_access",
    [ts_sym_function_call] = "function_call",
    [ts_sym_math_op] = "math_op",
    [ts_sym_bool_op] = "bool_op",
    [ts_sym_rel_op] = "rel_op",
    [ts_sym_assignment] = "assignment",
    [ts_sym_compound_literal] = "compound_literal",
    [ts_sym_struct_literal_field] = "struct_literal_field",
    [ts_builtin_sym_error] = "error",
    [ts_builtin_sym_end] = "end",
    [ts_sym_preproc_else] = "preproc_else",
    [ts_sym_preproc_endif] = "preproc_endif",
    [ts_sym_preproc_directive] = "preproc_directive",
    [ts_sym_number] = "number",
    [ts_sym_char] = "char",
    [ts_sym_string] = "string",
    [ts_sym_system_lib_string] = "system_lib_string",
    [ts_sym_identifier] = "identifier",
    [ts_sym_comment] = "comment",
    [ts_aux_sym_program_repeat0] = "program_repeat0",
    [ts_aux_sym_var_declaration_repeat0] = "var_declaration_repeat0",
    [ts_aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
    [ts_aux_sym_statement_block_repeat0] = "statement_block_repeat0",
    [ts_aux_sym_primitive_type_repeat0] = "primitive_type_repeat0",
    [ts_aux_sym_formal_parameters_repeat0] = "formal_parameters_repeat0",
    [ts_aux_sym_struct_type_repeat0] = "struct_type_repeat0",
    [ts_aux_sym_union_type_repeat0] = "union_type_repeat0",
    [ts_aux_sym_enum_type_repeat0] = "enum_type_repeat0",
    [ts_aux_sym_function_call_repeat0] = "function_call_repeat0",
    [ts_aux_sym_compound_literal_repeat0] = "compound_literal_repeat0",
    [ts_aux_sym_include] = "'#include'",
    [ts_aux_sym_define] = "'#define'",
    [ts_aux_sym_seq] = "(seq /.+/ )",
    [ts_aux_sym_1] = "/.*/",
    [ts_aux_sym_ifdef] = "'#ifdef'",
    [ts_aux_sym_ifndef] = "'#ifndef'",
    [ts_aux_sym_typedef1] = "'typedef'",
    [ts_aux_sym_2] = "';'",
    [ts_aux_sym_static] = "'static'",
    [ts_aux_sym_extern] = "'extern'",
    [ts_aux_sym_3] = "','",
    [ts_aux_sym_4] = "'('",
    [ts_aux_sym_5] = "')'",
    [ts_aux_sym_6] = "'{'",
    [ts_aux_sym_7] = "'}'",
    [ts_aux_sym_return] = "'return'",
    [ts_aux_sym_if] = "'if'",
    [ts_aux_sym_else] = "'else'",
    [ts_aux_sym_for] = "'for'",
    [ts_aux_sym_while] = "'while'",
    [ts_aux_sym_const] = "'const'",
    [ts_aux_sym_unsigned] = "'unsigned'",
    [ts_aux_sym_short] = "'short'",
    [ts_aux_sym_long] = "'long'",
    [ts_aux_sym_8] = "'*'",
    [ts_aux_sym_struct] = "'struct'",
    [ts_aux_sym_union] = "'union'",
    [ts_aux_sym_enum] = "'enum'",
    [ts_aux_sym_9] = "'='",
    [ts_aux_sym_10] = "'&'",
    [ts_aux_sym_11] = "'.'",
    [ts_aux_sym_12] = "'->'",
    [ts_aux_sym_13] = "'++'",
    [ts_aux_sym_14] = "'-'",
    [ts_aux_sym_15] = "'/'",
    [ts_aux_sym_16] = "'+'",
    [ts_aux_sym_17] = "'!'",
    [ts_aux_sym_18] = "'&&'",
    [ts_aux_sym_19] = "'||'",
    [ts_aux_sym_20] = "'<'",
    [ts_aux_sym_21] = "'<='",
    [ts_aux_sym_22] = "'=='",
    [ts_aux_sym_23] = "'!='",
    [ts_aux_sym_24] = "'>='",
    [ts_aux_sym_25] = "'>'",
};

static const int ts_hidden_symbol_flags[SYMBOL_COUNT] = {
    [ts_aux_sym_program_repeat0] = 1,
    [ts_aux_sym_var_declaration_repeat0] = 1,
    [ts_aux_sym_var_declaration_repeat1] = 1,
    [ts_aux_sym_statement_block_repeat0] = 1,
    [ts_aux_sym_primitive_type_repeat0] = 1,
    [ts_aux_sym_formal_parameters_repeat0] = 1,
    [ts_aux_sym_struct_type_repeat0] = 1,
    [ts_aux_sym_union_type_repeat0] = 1,
    [ts_aux_sym_enum_type_repeat0] = 1,
    [ts_aux_sym_function_call_repeat0] = 1,
    [ts_aux_sym_compound_literal_repeat0] = 1,
    [ts_aux_sym_include] = 1,
    [ts_aux_sym_define] = 1,
    [ts_aux_sym_seq] = 1,
    [ts_aux_sym_1] = 1,
    [ts_aux_sym_ifdef] = 1,
    [ts_aux_sym_ifndef] = 1,
    [ts_aux_sym_typedef1] = 1,
    [ts_aux_sym_2] = 1,
    [ts_aux_sym_static] = 1,
    [ts_aux_sym_extern] = 1,
    [ts_aux_sym_3] = 1,
    [ts_aux_sym_4] = 1,
    [ts_aux_sym_5] = 1,
    [ts_aux_sym_6] = 1,
    [ts_aux_sym_7] = 1,
    [ts_aux_sym_return] = 1,
    [ts_aux_sym_if] = 1,
    [ts_aux_sym_else] = 1,
    [ts_aux_sym_for] = 1,
    [ts_aux_sym_while] = 1,
    [ts_aux_sym_const] = 1,
    [ts_aux_sym_unsigned] = 1,
    [ts_aux_sym_short] = 1,
    [ts_aux_sym_long] = 1,
    [ts_aux_sym_8] = 1,
    [ts_aux_sym_struct] = 1,
    [ts_aux_sym_union] = 1,
    [ts_aux_sym_enum] = 1,
    [ts_aux_sym_9] = 1,
    [ts_aux_sym_10] = 1,
    [ts_aux_sym_11] = 1,
    [ts_aux_sym_12] = 1,
    [ts_aux_sym_13] = 1,
    [ts_aux_sym_14] = 1,
    [ts_aux_sym_15] = 1,
    [ts_aux_sym_16] = 1,
    [ts_aux_sym_17] = 1,
    [ts_aux_sym_18] = 1,
    [ts_aux_sym_19] = 1,
    [ts_aux_sym_20] = 1,
    [ts_aux_sym_21] = 1,
    [ts_aux_sym_22] = 1,
    [ts_aux_sym_23] = 1,
    [ts_aux_sym_24] = 1,
    [ts_aux_sym_25] = 1,
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 8:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(9);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 9:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'n')
                ADVANCE(10);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 10:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(11);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 11:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_define);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 14:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(15);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 15:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_sym_preproc_else);
        case 16:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(17);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 17:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'i')
                ADVANCE(18);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 18:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(19);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 19:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_sym_preproc_endif);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 22:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(23);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 23:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(24);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 24:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_ifdef);
        case 25:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(26);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 26:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(27);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 27:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'f')
                ADVANCE(28);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 28:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_ifndef);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 30:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'l')
                ADVANCE(31);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 31:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'u')
                ADVANCE(32);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 32:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'd')
                ADVANCE(33);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 33:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            if (lookahead == 'e')
                ADVANCE(34);
            ACCEPT_TOKEN(ts_sym_preproc_directive);
        case 34:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(5);
            ACCEPT_TOKEN(ts_aux_sym_include);
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
            ACCEPT_TOKEN(ts_sym_comment);
        case 39:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(39);
            ACCEPT_TOKEN(ts_sym_comment);
        case 40:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 41:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(42);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 42:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(43);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 43:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(44);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 44:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(45);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 45:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_const);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 47:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(48);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 48:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'm')
                ADVANCE(49);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 49:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_enum);
        case 50:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(51);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 51:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 52:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(53);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 53:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(54);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 54:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_extern);
        case 55:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(56);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 56:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(57);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 57:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(58);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 58:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_long);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 60:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 61:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(62);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 62:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(63);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 63:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_short);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 65:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(66);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 66:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(67);
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 68:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_static);
        case 69:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(70);
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 71:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(72);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 72:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_struct);
        case 73:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(40);
            if (lookahead == 'y')
                ADVANCE(74);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 74:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'p')
                ADVANCE(75);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 75:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(76);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 76:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(77);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 77:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(78);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 78:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(79);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 79:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_typedef1);
        case 80:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(81);
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 82:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(83);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 83:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(84);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 84:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_union);
        case 85:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(86);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 86:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'g')
                ADVANCE(87);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 87:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(88);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 88:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(89);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 89:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'd')
                ADVANCE(90);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 90:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_unsigned);
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
            ACCEPT_TOKEN(ts_aux_sym_8);
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
            ACCEPT_TOKEN(ts_aux_sym_2);
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
            ACCEPT_TOKEN(ts_aux_sym_1);
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
            ACCEPT_TOKEN(ts_aux_sym_1);
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
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 99:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '*')
                ADVANCE(100);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '*')))
                ADVANCE(99);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 100:
            if (lookahead == '\n')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(101);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '/')))
                ADVANCE(99);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 101:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 102:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(102);
            ACCEPT_TOKEN(ts_aux_sym_1);
        case 103:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(103);
            ACCEPT_TOKEN(ts_aux_sym_1);
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
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 107:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(69);
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_sym_string);
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
            ACCEPT_TOKEN(ts_sym_string);
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
            ACCEPT_TOKEN(ts_sym_system_lib_string);
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
            ACCEPT_TOKEN(ts_sym_system_lib_string);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 122:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(123);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 123:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(ts_sym_identifier);
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
            ACCEPT_TOKEN(ts_aux_sym_6);
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
            ACCEPT_TOKEN(ts_aux_sym_7);
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
            ACCEPT_TOKEN(ts_aux_sym_3);
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
            ACCEPT_TOKEN(ts_aux_sym_9);
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
            ACCEPT_TOKEN(ts_aux_sym_17);
        case 136:
            ACCEPT_TOKEN(ts_aux_sym_10);
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
            ACCEPT_TOKEN(ts_sym_char);
        case 140:
            ACCEPT_TOKEN(ts_sym_char);
        case 141:
            if (lookahead == '\'')
                ADVANCE(140);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(ts_aux_sym_4);
        case 143:
            ACCEPT_TOKEN(ts_aux_sym_14);
        case 144:
            if (lookahead == '.')
                ADVANCE(145);
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(144);
            ACCEPT_TOKEN(ts_sym_number);
        case 145:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if ('0' <= lookahead && lookahead <= '9')
                ADVANCE(146);
            ACCEPT_TOKEN(ts_sym_number);
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
            ACCEPT_TOKEN(ts_aux_sym_23);
        case 150:
            if (lookahead == '&')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(ts_aux_sym_18);
        case 152:
            if (lookahead == '+')
                ADVANCE(153);
            ACCEPT_TOKEN(ts_aux_sym_16);
        case 153:
            ACCEPT_TOKEN(ts_aux_sym_13);
        case 154:
            if (lookahead == '>')
                ADVANCE(155);
            ACCEPT_TOKEN(ts_aux_sym_14);
        case 155:
            ACCEPT_TOKEN(ts_aux_sym_12);
        case 156:
            ACCEPT_TOKEN(ts_aux_sym_11);
        case 157:
            if (lookahead == '*')
                ADVANCE(36);
            if (lookahead == '/')
                ADVANCE(39);
            ACCEPT_TOKEN(ts_aux_sym_15);
        case 158:
            if (lookahead == '=')
                ADVANCE(159);
            ACCEPT_TOKEN(ts_aux_sym_20);
        case 159:
            ACCEPT_TOKEN(ts_aux_sym_21);
        case 160:
            if (lookahead == '=')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            ACCEPT_TOKEN(ts_aux_sym_22);
        case 162:
            if (lookahead == '=')
                ADVANCE(163);
            ACCEPT_TOKEN(ts_aux_sym_25);
        case 163:
            ACCEPT_TOKEN(ts_aux_sym_24);
        case 164:
            if (lookahead == '|')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            ACCEPT_TOKEN(ts_aux_sym_19);
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
            ACCEPT_TOKEN(ts_aux_sym_9);
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
            ACCEPT_TOKEN(ts_aux_sym_5);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 187:
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 188:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 194:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(194);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(193);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 195:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(188);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(190);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 206:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(207);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 207:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_for);
        case 208:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'f')
                ADVANCE(209);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 209:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_if);
        case 210:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(211);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 211:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 't')
                ADVANCE(212);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 212:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'u')
                ADVANCE(213);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 213:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'r')
                ADVANCE(214);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 214:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'n')
                ADVANCE(215);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 215:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_return);
        case 216:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'h')
                ADVANCE(217);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 217:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'i')
                ADVANCE(218);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 218:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'l')
                ADVANCE(219);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 219:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(220);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 220:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_while);
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
            ACCEPT_TOKEN(ts_sym_identifier);
        case 232:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 's')
                ADVANCE(233);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 233:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            if (lookahead == 'e')
                ADVANCE(234);
            ACCEPT_TOKEN(ts_sym_identifier);
        case 234:
            if (('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == '_') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(40);
            ACCEPT_TOKEN(ts_aux_sym_else);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_1);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 238:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 239:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 240:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 242:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_define);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_sym_preproc_else);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_endif);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_ifdef);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_ifndef);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_sym_preproc_directive);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_include);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 284:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 290:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 293:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 294:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 295:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 297:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 298:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 300:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 301:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 305:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 307:
            if (lookahead == '\\')
                ADVANCE(308);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(307);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 308:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(308);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(307);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 312:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 315:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 326:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 328:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_const);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_else);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_enum);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_extern);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_for);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_if);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_long);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_return);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_short);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_static);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_struct);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_typedef1);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_union);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_unsigned);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_while);
        case 399:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 401:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 402:
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
        case 403:
            if (lookahead == '\n')
                ADVANCE(189);
            if (lookahead == '\\')
                ADVANCE(239);
            if (!((lookahead == 0) ||
                (lookahead == '\n') ||
                (lookahead == '\\')))
                ADVANCE(240);
            ACCEPT_TOKEN(ts_aux_sym_seq);
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
            ACCEPT_TOKEN(ts_aux_sym_1);
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
        [ts_sym_program] = SHIFT(1),
        [ts_sym_preproc_include] = SHIFT(2),
        [ts_sym_preproc_define] = SHIFT(2),
        [ts_sym_preproc_call] = SHIFT(2),
        [ts_sym_preproc_ifdef] = SHIFT(2),
        [ts_sym_preproc_ifndef] = SHIFT(2),
        [ts_sym_typedef] = SHIFT(2),
        [ts_sym_var_declaration] = SHIFT(2),
        [ts_sym_function_declaration] = SHIFT(2),
        [ts_sym_type] = SHIFT(3),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_declaration] = SHIFT(2),
        [ts_sym_struct_type] = SHIFT(5),
        [ts_sym_union_declaration] = SHIFT(2),
        [ts_sym_union_type] = SHIFT(6),
        [ts_sym_enum_declaration] = SHIFT(2),
        [ts_sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 0),
        [ts_sym_preproc_else] = SHIFT(2),
        [ts_sym_preproc_endif] = SHIFT(2),
        [ts_sym_preproc_directive] = SHIFT(8),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = SHIFT(10),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(11),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_include] = SHIFT(13),
        [ts_aux_sym_define] = SHIFT(14),
        [ts_aux_sym_ifdef] = SHIFT(15),
        [ts_aux_sym_ifndef] = SHIFT(16),
        [ts_aux_sym_typedef1] = SHIFT(17),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(21),
        [ts_aux_sym_union] = SHIFT(22),
        [ts_aux_sym_enum] = SHIFT(23),
    },
    [1] = {
        [ts_builtin_sym_end] = ACCEPT_INPUT(),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [2] = {
        [ts_sym_preproc_include] = SHIFT(2),
        [ts_sym_preproc_define] = SHIFT(2),
        [ts_sym_preproc_call] = SHIFT(2),
        [ts_sym_preproc_ifdef] = SHIFT(2),
        [ts_sym_preproc_ifndef] = SHIFT(2),
        [ts_sym_typedef] = SHIFT(2),
        [ts_sym_var_declaration] = SHIFT(2),
        [ts_sym_function_declaration] = SHIFT(2),
        [ts_sym_type] = SHIFT(3),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_declaration] = SHIFT(2),
        [ts_sym_struct_type] = SHIFT(5),
        [ts_sym_union_declaration] = SHIFT(2),
        [ts_sym_union_type] = SHIFT(6),
        [ts_sym_enum_declaration] = SHIFT(2),
        [ts_sym_enum_type] = SHIFT(7),
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 1),
        [ts_sym_preproc_else] = SHIFT(2),
        [ts_sym_preproc_endif] = SHIFT(2),
        [ts_sym_preproc_directive] = SHIFT(8),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = SHIFT(819),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(11),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_include] = SHIFT(13),
        [ts_aux_sym_define] = SHIFT(14),
        [ts_aux_sym_ifdef] = SHIFT(15),
        [ts_aux_sym_ifndef] = SHIFT(16),
        [ts_aux_sym_typedef1] = SHIFT(17),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(21),
        [ts_aux_sym_union] = SHIFT(22),
        [ts_aux_sym_enum] = SHIFT(23),
    },
    [3] = {
        [ts_sym_type_expression] = SHIFT(516),
        [ts_sym_pointer_type] = SHIFT(517),
        [ts_sym_var_assignment] = SHIFT(518),
        [ts_sym_identifier] = SHIFT(517),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(519),
    },
    [4] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [5] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(515),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [6] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(514),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [7] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(513),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [8] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_1] = SHIFT(512),
    },
    [9] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
    },
    [10] = {
        [ts_builtin_sym_end] = REDUCE(ts_sym_program, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [11] = {
        [ts_sym_type] = SHIFT(422),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
    },
    [12] = {
        [ts_sym_identifier] = SHIFT(421),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [13] = {
        [ts_sym_string] = SHIFT(420),
        [ts_sym_system_lib_string] = SHIFT(420),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [14] = {
        [ts_sym_identifier] = SHIFT(418),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [15] = {
        [ts_sym_identifier] = SHIFT(417),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [16] = {
        [ts_sym_identifier] = SHIFT(416),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [17] = {
        [ts_sym_type] = SHIFT(413),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [18] = {
        [ts_sym_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_primitive_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_struct_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_union_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_enum_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_identifier] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(412),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_const] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_short] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_long] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_union] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
        [ts_aux_sym_enum] = REDUCE(ts_aux_sym_var_declaration_repeat0, 1),
    },
    [19] = {
        [ts_sym_primitive_type] = SHIFT(380),
        [ts_sym_struct_type] = SHIFT(380),
        [ts_sym_union_type] = SHIFT(380),
        [ts_sym_enum_type] = SHIFT(380),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
    },
    [20] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(379),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
    },
    [21] = {
        [ts_sym_identifier] = SHIFT(371),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(372),
    },
    [22] = {
        [ts_sym_identifier] = SHIFT(363),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(364),
    },
    [23] = {
        [ts_sym_identifier] = SHIFT(24),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(25),
    },
    [24] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 2),
        [ts_aux_sym_6] = SHIFT(359),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [25] = {
        [ts_sym_enum_value] = SHIFT(26),
        [ts_builtin_sym_error] = SHIFT(27),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(29),
    },
    [26] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(357),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(356),
    },
    [27] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(356),
    },
    [28] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_enum_value, 1),
        [ts_aux_sym_9] = SHIFT(30),
    },
    [29] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [30] = {
        [ts_sym_expression] = SHIFT(31),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [31] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_4] = SHIFT(335),
        [ts_aux_sym_7] = REDUCE(ts_sym_enum_value, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = SHIFT(336),
        [ts_aux_sym_12] = SHIFT(337),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = SHIFT(338),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = SHIFT(338),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = SHIFT(341),
        [ts_aux_sym_20] = SHIFT(342),
        [ts_aux_sym_21] = SHIFT(342),
        [ts_aux_sym_22] = SHIFT(342),
        [ts_aux_sym_23] = SHIFT(342),
        [ts_aux_sym_24] = SHIFT(342),
        [ts_aux_sym_25] = SHIFT(342),
    },
    [32] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(333),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [33] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [34] = {
        [ts_sym_type] = SHIFT(320),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [35] = {
        [ts_sym_expression] = SHIFT(45),
        [ts_sym_deref] = SHIFT(46),
        [ts_sym_address_of] = SHIFT(47),
        [ts_sym_field_access] = SHIFT(46),
        [ts_sym_deref_field_access] = SHIFT(46),
        [ts_sym_function_call] = SHIFT(47),
        [ts_sym_math_op] = SHIFT(47),
        [ts_sym_bool_op] = SHIFT(47),
        [ts_sym_rel_op] = SHIFT(47),
        [ts_sym_assignment] = SHIFT(47),
        [ts_sym_compound_literal] = SHIFT(47),
        [ts_sym_number] = SHIFT(47),
        [ts_sym_char] = SHIFT(47),
        [ts_sym_string] = SHIFT(47),
        [ts_sym_identifier] = SHIFT(46),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(48),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(49),
        [ts_aux_sym_14] = SHIFT(50),
        [ts_aux_sym_17] = SHIFT(51),
    },
    [36] = {
        [ts_sym_expression] = SHIFT(44),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [37] = {
        [ts_sym_expression] = SHIFT(43),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [38] = {
        [ts_sym_expression] = SHIFT(39),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [39] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [40] = {
        [ts_sym_expression] = SHIFT(42),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [41] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [42] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [43] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [44] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [45] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [46] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [47] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [48] = {
        [ts_sym_type] = SHIFT(58),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [49] = {
        [ts_sym_expression] = SHIFT(57),
        [ts_sym_deref] = SHIFT(46),
        [ts_sym_address_of] = SHIFT(47),
        [ts_sym_field_access] = SHIFT(46),
        [ts_sym_deref_field_access] = SHIFT(46),
        [ts_sym_function_call] = SHIFT(47),
        [ts_sym_math_op] = SHIFT(47),
        [ts_sym_bool_op] = SHIFT(47),
        [ts_sym_rel_op] = SHIFT(47),
        [ts_sym_assignment] = SHIFT(47),
        [ts_sym_compound_literal] = SHIFT(47),
        [ts_sym_number] = SHIFT(47),
        [ts_sym_char] = SHIFT(47),
        [ts_sym_string] = SHIFT(47),
        [ts_sym_identifier] = SHIFT(46),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(48),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(49),
        [ts_aux_sym_14] = SHIFT(50),
        [ts_aux_sym_17] = SHIFT(51),
    },
    [50] = {
        [ts_sym_expression] = SHIFT(56),
        [ts_sym_deref] = SHIFT(46),
        [ts_sym_address_of] = SHIFT(47),
        [ts_sym_field_access] = SHIFT(46),
        [ts_sym_deref_field_access] = SHIFT(46),
        [ts_sym_function_call] = SHIFT(47),
        [ts_sym_math_op] = SHIFT(47),
        [ts_sym_bool_op] = SHIFT(47),
        [ts_sym_rel_op] = SHIFT(47),
        [ts_sym_assignment] = SHIFT(47),
        [ts_sym_compound_literal] = SHIFT(47),
        [ts_sym_number] = SHIFT(47),
        [ts_sym_char] = SHIFT(47),
        [ts_sym_string] = SHIFT(47),
        [ts_sym_identifier] = SHIFT(46),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(48),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(49),
        [ts_aux_sym_14] = SHIFT(50),
        [ts_aux_sym_17] = SHIFT(51),
    },
    [51] = {
        [ts_sym_expression] = SHIFT(52),
        [ts_sym_deref] = SHIFT(46),
        [ts_sym_address_of] = SHIFT(47),
        [ts_sym_field_access] = SHIFT(46),
        [ts_sym_deref_field_access] = SHIFT(46),
        [ts_sym_function_call] = SHIFT(47),
        [ts_sym_math_op] = SHIFT(47),
        [ts_sym_bool_op] = SHIFT(47),
        [ts_sym_rel_op] = SHIFT(47),
        [ts_sym_assignment] = SHIFT(47),
        [ts_sym_compound_literal] = SHIFT(47),
        [ts_sym_number] = SHIFT(47),
        [ts_sym_char] = SHIFT(47),
        [ts_sym_string] = SHIFT(47),
        [ts_sym_identifier] = SHIFT(46),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(48),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(49),
        [ts_aux_sym_14] = SHIFT(50),
        [ts_aux_sym_17] = SHIFT(51),
    },
    [52] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(53),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(54),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [53] = {
        [ts_sym_expression] = SHIFT(55),
        [ts_sym_deref] = SHIFT(46),
        [ts_sym_address_of] = SHIFT(47),
        [ts_sym_field_access] = SHIFT(46),
        [ts_sym_deref_field_access] = SHIFT(46),
        [ts_sym_function_call] = SHIFT(47),
        [ts_sym_math_op] = SHIFT(47),
        [ts_sym_bool_op] = SHIFT(47),
        [ts_sym_rel_op] = SHIFT(47),
        [ts_sym_assignment] = SHIFT(47),
        [ts_sym_compound_literal] = SHIFT(47),
        [ts_sym_number] = SHIFT(47),
        [ts_sym_char] = SHIFT(47),
        [ts_sym_string] = SHIFT(47),
        [ts_sym_identifier] = SHIFT(46),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(48),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(49),
        [ts_aux_sym_14] = SHIFT(50),
        [ts_aux_sym_17] = SHIFT(51),
    },
    [54] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [55] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(53),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(54),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [56] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(54),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [57] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [58] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(147),
    },
    [59] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_type, 1),
    },
    [60] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_primitive_type, 1),
    },
    [61] = {
        [ts_sym_identifier] = SHIFT(146),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [62] = {
        [ts_sym_primitive_type] = SHIFT(145),
        [ts_sym_struct_type] = SHIFT(145),
        [ts_sym_union_type] = SHIFT(145),
        [ts_sym_enum_type] = SHIFT(145),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [63] = {
        [ts_sym_identifier] = SHIFT(137),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(138),
    },
    [64] = {
        [ts_sym_identifier] = SHIFT(81),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(82),
    },
    [65] = {
        [ts_sym_identifier] = SHIFT(66),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(67),
    },
    [66] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 2),
        [ts_aux_sym_6] = SHIFT(77),
    },
    [67] = {
        [ts_sym_enum_value] = SHIFT(68),
        [ts_builtin_sym_error] = SHIFT(69),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(70),
    },
    [68] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(72),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(71),
    },
    [69] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(71),
    },
    [70] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 3),
    },
    [71] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 4),
    },
    [72] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(76),
    },
    [73] = {
        [ts_sym_enum_value] = SHIFT(74),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [74] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(75),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 2),
    },
    [75] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_enum_type_repeat0, 3),
    },
    [76] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 5),
    },
    [77] = {
        [ts_sym_enum_value] = SHIFT(78),
        [ts_builtin_sym_error] = SHIFT(72),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(71),
    },
    [78] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(79),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(76),
    },
    [79] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(80),
    },
    [80] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_enum_type, 6),
    },
    [81] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 2),
        [ts_aux_sym_6] = SHIFT(134),
    },
    [82] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(86),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(86),
        [ts_aux_sym_7] = SHIFT(89),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [83] = {
        [ts_sym_type_expression] = SHIFT(130),
        [ts_sym_pointer_type] = SHIFT(131),
        [ts_sym_identifier] = SHIFT(131),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(132),
    },
    [84] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 1),
    },
    [85] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(128),
    },
    [86] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(127),
    },
    [87] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
    },
    [88] = {
        [ts_sym_identifier] = SHIFT(126),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [89] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 3),
    },
    [90] = {
        [ts_sym_primitive_type] = SHIFT(125),
        [ts_sym_struct_type] = SHIFT(125),
        [ts_sym_union_type] = SHIFT(125),
        [ts_sym_enum_type] = SHIFT(125),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [91] = {
        [ts_sym_identifier] = SHIFT(114),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(115),
    },
    [92] = {
        [ts_sym_identifier] = SHIFT(106),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(107),
    },
    [93] = {
        [ts_sym_identifier] = SHIFT(94),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(95),
    },
    [94] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(102),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [95] = {
        [ts_sym_enum_value] = SHIFT(96),
        [ts_builtin_sym_error] = SHIFT(97),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(98),
    },
    [96] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(100),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(99),
    },
    [97] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(99),
    },
    [98] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [99] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [100] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(101),
    },
    [101] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [102] = {
        [ts_sym_enum_value] = SHIFT(103),
        [ts_builtin_sym_error] = SHIFT(100),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(99),
    },
    [103] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(104),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(101),
    },
    [104] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(105),
    },
    [105] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [106] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(111),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [107] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(108),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(108),
        [ts_aux_sym_7] = SHIFT(109),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [108] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(110),
    },
    [109] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [110] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [111] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(112),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(112),
        [ts_aux_sym_7] = SHIFT(110),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [112] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(113),
    },
    [113] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [114] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(122),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [115] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(117),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(117),
        [ts_aux_sym_7] = SHIFT(118),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [116] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(120),
    },
    [117] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(119),
    },
    [118] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [119] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [120] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(121),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [121] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_struct_type_repeat0, 3),
    },
    [122] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(123),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(123),
        [ts_aux_sym_7] = SHIFT(119),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [123] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(124),
    },
    [124] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [125] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [126] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [127] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 4),
    },
    [128] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(129),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 2),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [129] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_union_type_repeat0, 3),
    },
    [130] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_field, 2),
    },
    [131] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
    },
    [132] = {
        [ts_sym_type_expression] = SHIFT(133),
        [ts_sym_pointer_type] = SHIFT(131),
        [ts_sym_identifier] = SHIFT(131),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(132),
    },
    [133] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
    },
    [134] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(135),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(135),
        [ts_aux_sym_7] = SHIFT(127),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [135] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(136),
    },
    [136] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_union_type, 5),
    },
    [137] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 2),
        [ts_aux_sym_6] = SHIFT(142),
    },
    [138] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(139),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(139),
        [ts_aux_sym_7] = SHIFT(140),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [139] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(141),
    },
    [140] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 3),
    },
    [141] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 4),
    },
    [142] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(143),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(143),
        [ts_aux_sym_7] = SHIFT(141),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [143] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(144),
    },
    [144] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_struct_type, 5),
    },
    [145] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_type, 2),
    },
    [146] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_primitive_type, 2),
    },
    [147] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(148),
    },
    [148] = {
        [ts_sym_expression] = SHIFT(149),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(152),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(153),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(155),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [149] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(313),
        [ts_aux_sym_3] = SHIFT(314),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(312),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [150] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(318),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [151] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [152] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(313),
        [ts_aux_sym_3] = SHIFT(314),
        [ts_aux_sym_7] = SHIFT(312),
    },
    [153] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(312),
    },
    [154] = {
        [ts_sym_type] = SHIFT(299),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [155] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [156] = {
        [ts_sym_expression] = SHIFT(273),
        [ts_sym_deref] = SHIFT(274),
        [ts_sym_address_of] = SHIFT(275),
        [ts_sym_field_access] = SHIFT(274),
        [ts_sym_deref_field_access] = SHIFT(274),
        [ts_sym_function_call] = SHIFT(275),
        [ts_sym_math_op] = SHIFT(275),
        [ts_sym_bool_op] = SHIFT(275),
        [ts_sym_rel_op] = SHIFT(275),
        [ts_sym_assignment] = SHIFT(275),
        [ts_sym_compound_literal] = SHIFT(275),
        [ts_sym_number] = SHIFT(275),
        [ts_sym_char] = SHIFT(275),
        [ts_sym_string] = SHIFT(275),
        [ts_sym_identifier] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(276),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(277),
        [ts_aux_sym_14] = SHIFT(278),
        [ts_aux_sym_17] = SHIFT(279),
    },
    [157] = {
        [ts_sym_expression] = SHIFT(272),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [158] = {
        [ts_sym_identifier] = SHIFT(166),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [159] = {
        [ts_sym_expression] = SHIFT(165),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [160] = {
        [ts_sym_expression] = SHIFT(161),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [161] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [162] = {
        [ts_sym_expression] = SHIFT(164),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [163] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [164] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [165] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [166] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_9] = SHIFT(167),
    },
    [167] = {
        [ts_sym_expression] = SHIFT(168),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [168] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = REDUCE(ts_sym_struct_literal_field, 4),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [169] = {
        [ts_sym_expression] = SHIFT(184),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(187),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(189),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [170] = {
        [ts_sym_identifier] = SHIFT(183),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [171] = {
        [ts_sym_identifier] = SHIFT(182),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [172] = {
        [ts_sym_expression] = SHIFT(181),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [173] = {
        [ts_sym_expression] = SHIFT(180),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [174] = {
        [ts_sym_expression] = SHIFT(179),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [175] = {
        [ts_sym_expression] = SHIFT(178),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [176] = {
        [ts_sym_expression] = SHIFT(177),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [177] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [178] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [179] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [180] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [181] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [182] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [183] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [184] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(270),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(243),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [185] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(244),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [186] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [187] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(243),
    },
    [188] = {
        [ts_sym_type] = SHIFT(230),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [189] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [190] = {
        [ts_sym_expression] = SHIFT(200),
        [ts_sym_deref] = SHIFT(201),
        [ts_sym_address_of] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(201),
        [ts_sym_deref_field_access] = SHIFT(201),
        [ts_sym_function_call] = SHIFT(202),
        [ts_sym_math_op] = SHIFT(202),
        [ts_sym_bool_op] = SHIFT(202),
        [ts_sym_rel_op] = SHIFT(202),
        [ts_sym_assignment] = SHIFT(202),
        [ts_sym_compound_literal] = SHIFT(202),
        [ts_sym_number] = SHIFT(202),
        [ts_sym_char] = SHIFT(202),
        [ts_sym_string] = SHIFT(202),
        [ts_sym_identifier] = SHIFT(201),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(203),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(204),
        [ts_aux_sym_14] = SHIFT(205),
        [ts_aux_sym_17] = SHIFT(206),
    },
    [191] = {
        [ts_sym_expression] = SHIFT(199),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [192] = {
        [ts_sym_expression] = SHIFT(198),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [193] = {
        [ts_sym_expression] = SHIFT(194),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [194] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [195] = {
        [ts_sym_expression] = SHIFT(197),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [196] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [197] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [198] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [199] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [200] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [201] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [202] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [203] = {
        [ts_sym_type] = SHIFT(213),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [204] = {
        [ts_sym_expression] = SHIFT(212),
        [ts_sym_deref] = SHIFT(201),
        [ts_sym_address_of] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(201),
        [ts_sym_deref_field_access] = SHIFT(201),
        [ts_sym_function_call] = SHIFT(202),
        [ts_sym_math_op] = SHIFT(202),
        [ts_sym_bool_op] = SHIFT(202),
        [ts_sym_rel_op] = SHIFT(202),
        [ts_sym_assignment] = SHIFT(202),
        [ts_sym_compound_literal] = SHIFT(202),
        [ts_sym_number] = SHIFT(202),
        [ts_sym_char] = SHIFT(202),
        [ts_sym_string] = SHIFT(202),
        [ts_sym_identifier] = SHIFT(201),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(203),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(204),
        [ts_aux_sym_14] = SHIFT(205),
        [ts_aux_sym_17] = SHIFT(206),
    },
    [205] = {
        [ts_sym_expression] = SHIFT(211),
        [ts_sym_deref] = SHIFT(201),
        [ts_sym_address_of] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(201),
        [ts_sym_deref_field_access] = SHIFT(201),
        [ts_sym_function_call] = SHIFT(202),
        [ts_sym_math_op] = SHIFT(202),
        [ts_sym_bool_op] = SHIFT(202),
        [ts_sym_rel_op] = SHIFT(202),
        [ts_sym_assignment] = SHIFT(202),
        [ts_sym_compound_literal] = SHIFT(202),
        [ts_sym_number] = SHIFT(202),
        [ts_sym_char] = SHIFT(202),
        [ts_sym_string] = SHIFT(202),
        [ts_sym_identifier] = SHIFT(201),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(203),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(204),
        [ts_aux_sym_14] = SHIFT(205),
        [ts_aux_sym_17] = SHIFT(206),
    },
    [206] = {
        [ts_sym_expression] = SHIFT(207),
        [ts_sym_deref] = SHIFT(201),
        [ts_sym_address_of] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(201),
        [ts_sym_deref_field_access] = SHIFT(201),
        [ts_sym_function_call] = SHIFT(202),
        [ts_sym_math_op] = SHIFT(202),
        [ts_sym_bool_op] = SHIFT(202),
        [ts_sym_rel_op] = SHIFT(202),
        [ts_sym_assignment] = SHIFT(202),
        [ts_sym_compound_literal] = SHIFT(202),
        [ts_sym_number] = SHIFT(202),
        [ts_sym_char] = SHIFT(202),
        [ts_sym_string] = SHIFT(202),
        [ts_sym_identifier] = SHIFT(201),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(203),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(204),
        [ts_aux_sym_14] = SHIFT(205),
        [ts_aux_sym_17] = SHIFT(206),
    },
    [207] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(208),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(209),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [208] = {
        [ts_sym_expression] = SHIFT(210),
        [ts_sym_deref] = SHIFT(201),
        [ts_sym_address_of] = SHIFT(202),
        [ts_sym_field_access] = SHIFT(201),
        [ts_sym_deref_field_access] = SHIFT(201),
        [ts_sym_function_call] = SHIFT(202),
        [ts_sym_math_op] = SHIFT(202),
        [ts_sym_bool_op] = SHIFT(202),
        [ts_sym_rel_op] = SHIFT(202),
        [ts_sym_assignment] = SHIFT(202),
        [ts_sym_compound_literal] = SHIFT(202),
        [ts_sym_number] = SHIFT(202),
        [ts_sym_char] = SHIFT(202),
        [ts_sym_string] = SHIFT(202),
        [ts_sym_identifier] = SHIFT(201),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(203),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(204),
        [ts_aux_sym_14] = SHIFT(205),
        [ts_aux_sym_17] = SHIFT(206),
    },
    [209] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [210] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(208),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(209),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [211] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(209),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [212] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [213] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(214),
    },
    [214] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(215),
    },
    [215] = {
        [ts_sym_expression] = SHIFT(216),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(217),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(218),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(219),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [216] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(221),
        [ts_aux_sym_3] = SHIFT(222),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(220),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [217] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(221),
        [ts_aux_sym_3] = SHIFT(222),
        [ts_aux_sym_7] = SHIFT(220),
    },
    [218] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(220),
    },
    [219] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [220] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [221] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(228),
        [ts_aux_sym_7] = SHIFT(225),
    },
    [222] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(225),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [223] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(226),
        [ts_aux_sym_3] = SHIFT(227),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 2),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [224] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(226),
        [ts_aux_sym_3] = SHIFT(227),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 2),
    },
    [225] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [226] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = REDUCE(ts_aux_sym_compound_literal_repeat0, 3),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_compound_literal_repeat0, 3),
    },
    [227] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [228] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(229),
    },
    [229] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [230] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(231),
    },
    [231] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(232),
    },
    [232] = {
        [ts_sym_expression] = SHIFT(233),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(234),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(235),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(236),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [233] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(238),
        [ts_aux_sym_3] = SHIFT(239),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(237),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [234] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(238),
        [ts_aux_sym_3] = SHIFT(239),
        [ts_aux_sym_7] = SHIFT(237),
    },
    [235] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(237),
    },
    [236] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [237] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [238] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(241),
        [ts_aux_sym_7] = SHIFT(240),
    },
    [239] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(240),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [240] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [241] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(242),
    },
    [242] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [243] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [244] = {
        [ts_sym_expression] = SHIFT(245),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [245] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [246] = {
        [ts_sym_expression] = SHIFT(261),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(262),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(263),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [247] = {
        [ts_sym_identifier] = SHIFT(260),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [248] = {
        [ts_sym_identifier] = SHIFT(259),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [249] = {
        [ts_sym_expression] = SHIFT(258),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [250] = {
        [ts_sym_expression] = SHIFT(257),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [251] = {
        [ts_sym_expression] = SHIFT(256),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [252] = {
        [ts_sym_expression] = SHIFT(255),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [253] = {
        [ts_sym_expression] = SHIFT(254),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [254] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [255] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [256] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [257] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [258] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [259] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [260] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [261] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(265),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(264),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [262] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(264),
    },
    [263] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [264] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [265] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(269),
    },
    [266] = {
        [ts_sym_expression] = SHIFT(267),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [267] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(268),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 2),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [268] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_function_call_repeat0, 3),
    },
    [269] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [270] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(271),
    },
    [271] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [272] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [273] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [274] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [275] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [276] = {
        [ts_sym_type] = SHIFT(286),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [277] = {
        [ts_sym_expression] = SHIFT(285),
        [ts_sym_deref] = SHIFT(274),
        [ts_sym_address_of] = SHIFT(275),
        [ts_sym_field_access] = SHIFT(274),
        [ts_sym_deref_field_access] = SHIFT(274),
        [ts_sym_function_call] = SHIFT(275),
        [ts_sym_math_op] = SHIFT(275),
        [ts_sym_bool_op] = SHIFT(275),
        [ts_sym_rel_op] = SHIFT(275),
        [ts_sym_assignment] = SHIFT(275),
        [ts_sym_compound_literal] = SHIFT(275),
        [ts_sym_number] = SHIFT(275),
        [ts_sym_char] = SHIFT(275),
        [ts_sym_string] = SHIFT(275),
        [ts_sym_identifier] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(276),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(277),
        [ts_aux_sym_14] = SHIFT(278),
        [ts_aux_sym_17] = SHIFT(279),
    },
    [278] = {
        [ts_sym_expression] = SHIFT(284),
        [ts_sym_deref] = SHIFT(274),
        [ts_sym_address_of] = SHIFT(275),
        [ts_sym_field_access] = SHIFT(274),
        [ts_sym_deref_field_access] = SHIFT(274),
        [ts_sym_function_call] = SHIFT(275),
        [ts_sym_math_op] = SHIFT(275),
        [ts_sym_bool_op] = SHIFT(275),
        [ts_sym_rel_op] = SHIFT(275),
        [ts_sym_assignment] = SHIFT(275),
        [ts_sym_compound_literal] = SHIFT(275),
        [ts_sym_number] = SHIFT(275),
        [ts_sym_char] = SHIFT(275),
        [ts_sym_string] = SHIFT(275),
        [ts_sym_identifier] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(276),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(277),
        [ts_aux_sym_14] = SHIFT(278),
        [ts_aux_sym_17] = SHIFT(279),
    },
    [279] = {
        [ts_sym_expression] = SHIFT(280),
        [ts_sym_deref] = SHIFT(274),
        [ts_sym_address_of] = SHIFT(275),
        [ts_sym_field_access] = SHIFT(274),
        [ts_sym_deref_field_access] = SHIFT(274),
        [ts_sym_function_call] = SHIFT(275),
        [ts_sym_math_op] = SHIFT(275),
        [ts_sym_bool_op] = SHIFT(275),
        [ts_sym_rel_op] = SHIFT(275),
        [ts_sym_assignment] = SHIFT(275),
        [ts_sym_compound_literal] = SHIFT(275),
        [ts_sym_number] = SHIFT(275),
        [ts_sym_char] = SHIFT(275),
        [ts_sym_string] = SHIFT(275),
        [ts_sym_identifier] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(276),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(277),
        [ts_aux_sym_14] = SHIFT(278),
        [ts_aux_sym_17] = SHIFT(279),
    },
    [280] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(281),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(282),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [281] = {
        [ts_sym_expression] = SHIFT(283),
        [ts_sym_deref] = SHIFT(274),
        [ts_sym_address_of] = SHIFT(275),
        [ts_sym_field_access] = SHIFT(274),
        [ts_sym_deref_field_access] = SHIFT(274),
        [ts_sym_function_call] = SHIFT(275),
        [ts_sym_math_op] = SHIFT(275),
        [ts_sym_bool_op] = SHIFT(275),
        [ts_sym_rel_op] = SHIFT(275),
        [ts_sym_assignment] = SHIFT(275),
        [ts_sym_compound_literal] = SHIFT(275),
        [ts_sym_number] = SHIFT(275),
        [ts_sym_char] = SHIFT(275),
        [ts_sym_string] = SHIFT(275),
        [ts_sym_identifier] = SHIFT(274),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(276),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(277),
        [ts_aux_sym_14] = SHIFT(278),
        [ts_aux_sym_17] = SHIFT(279),
    },
    [282] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [283] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(281),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(282),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [284] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(282),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [285] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [286] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(287),
    },
    [287] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(288),
    },
    [288] = {
        [ts_sym_expression] = SHIFT(289),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(290),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(291),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(292),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [289] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(294),
        [ts_aux_sym_3] = SHIFT(295),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(293),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [290] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(294),
        [ts_aux_sym_3] = SHIFT(295),
        [ts_aux_sym_7] = SHIFT(293),
    },
    [291] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(293),
    },
    [292] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [293] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [294] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(297),
        [ts_aux_sym_7] = SHIFT(296),
    },
    [295] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(296),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [296] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [297] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(298),
    },
    [298] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [299] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(300),
    },
    [300] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(301),
    },
    [301] = {
        [ts_sym_expression] = SHIFT(302),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(303),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(304),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(305),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [302] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(307),
        [ts_aux_sym_3] = SHIFT(308),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(306),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [303] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(307),
        [ts_aux_sym_3] = SHIFT(308),
        [ts_aux_sym_7] = SHIFT(306),
    },
    [304] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(306),
    },
    [305] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [306] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [307] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(310),
        [ts_aux_sym_7] = SHIFT(309),
    },
    [308] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(309),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [309] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [310] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(311),
    },
    [311] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [312] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [313] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(316),
        [ts_aux_sym_7] = SHIFT(315),
    },
    [314] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(315),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [315] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [316] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(317),
    },
    [317] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [318] = {
        [ts_sym_expression] = SHIFT(319),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [319] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [320] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(321),
    },
    [321] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(322),
    },
    [322] = {
        [ts_sym_expression] = SHIFT(323),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(324),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(325),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(326),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [323] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(328),
        [ts_aux_sym_3] = SHIFT(329),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(327),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [324] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(328),
        [ts_aux_sym_3] = SHIFT(329),
        [ts_aux_sym_7] = SHIFT(327),
    },
    [325] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(327),
    },
    [326] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [327] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [328] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(331),
        [ts_aux_sym_7] = SHIFT(330),
    },
    [329] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(330),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [330] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [331] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(332),
    },
    [332] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [333] = {
        [ts_sym_expression] = SHIFT(334),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [334] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(335),
        [ts_aux_sym_7] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = SHIFT(336),
        [ts_aux_sym_12] = SHIFT(337),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = SHIFT(338),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = SHIFT(338),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = SHIFT(341),
        [ts_aux_sym_20] = SHIFT(342),
        [ts_aux_sym_21] = SHIFT(342),
        [ts_aux_sym_22] = SHIFT(342),
        [ts_aux_sym_23] = SHIFT(342),
        [ts_aux_sym_24] = SHIFT(342),
        [ts_aux_sym_25] = SHIFT(342),
    },
    [335] = {
        [ts_sym_expression] = SHIFT(350),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(351),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(352),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [336] = {
        [ts_sym_identifier] = SHIFT(349),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [337] = {
        [ts_sym_identifier] = SHIFT(348),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [338] = {
        [ts_sym_expression] = SHIFT(347),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [339] = {
        [ts_sym_expression] = SHIFT(346),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [340] = {
        [ts_sym_expression] = SHIFT(345),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [341] = {
        [ts_sym_expression] = SHIFT(344),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [342] = {
        [ts_sym_expression] = SHIFT(343),
        [ts_sym_deref] = SHIFT(32),
        [ts_sym_address_of] = SHIFT(33),
        [ts_sym_field_access] = SHIFT(32),
        [ts_sym_deref_field_access] = SHIFT(32),
        [ts_sym_function_call] = SHIFT(33),
        [ts_sym_math_op] = SHIFT(33),
        [ts_sym_bool_op] = SHIFT(33),
        [ts_sym_rel_op] = SHIFT(33),
        [ts_sym_assignment] = SHIFT(33),
        [ts_sym_compound_literal] = SHIFT(33),
        [ts_sym_number] = SHIFT(33),
        [ts_sym_char] = SHIFT(33),
        [ts_sym_string] = SHIFT(33),
        [ts_sym_identifier] = SHIFT(32),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(34),
        [ts_aux_sym_8] = SHIFT(35),
        [ts_aux_sym_10] = SHIFT(36),
        [ts_aux_sym_14] = SHIFT(37),
        [ts_aux_sym_17] = SHIFT(38),
    },
    [343] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = SHIFT(338),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = SHIFT(338),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = SHIFT(341),
        [ts_aux_sym_20] = SHIFT(342),
        [ts_aux_sym_21] = SHIFT(342),
        [ts_aux_sym_22] = SHIFT(342),
        [ts_aux_sym_23] = SHIFT(342),
        [ts_aux_sym_24] = SHIFT(342),
        [ts_aux_sym_25] = SHIFT(342),
    },
    [344] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = SHIFT(338),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = SHIFT(338),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = SHIFT(341),
        [ts_aux_sym_20] = SHIFT(342),
        [ts_aux_sym_21] = SHIFT(342),
        [ts_aux_sym_22] = SHIFT(342),
        [ts_aux_sym_23] = SHIFT(342),
        [ts_aux_sym_24] = SHIFT(342),
        [ts_aux_sym_25] = SHIFT(342),
    },
    [345] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [346] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [347] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(40),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(41),
        [ts_aux_sym_14] = SHIFT(338),
        [ts_aux_sym_15] = SHIFT(339),
        [ts_aux_sym_16] = SHIFT(338),
        [ts_aux_sym_18] = SHIFT(340),
        [ts_aux_sym_19] = SHIFT(341),
        [ts_aux_sym_20] = SHIFT(342),
        [ts_aux_sym_21] = SHIFT(342),
        [ts_aux_sym_22] = SHIFT(342),
        [ts_aux_sym_23] = SHIFT(342),
        [ts_aux_sym_24] = SHIFT(342),
        [ts_aux_sym_25] = SHIFT(342),
    },
    [348] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [349] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [350] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(354),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(353),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [351] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(353),
    },
    [352] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [353] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [354] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(355),
    },
    [355] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [356] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [357] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(358),
    },
    [358] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [359] = {
        [ts_sym_enum_value] = SHIFT(360),
        [ts_builtin_sym_error] = SHIFT(357),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(356),
    },
    [360] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(361),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(358),
    },
    [361] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(362),
    },
    [362] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_enum_type, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [363] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 2),
        [ts_aux_sym_6] = SHIFT(368),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [364] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(365),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(365),
        [ts_aux_sym_7] = SHIFT(366),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [365] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(367),
    },
    [366] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [367] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [368] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(369),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(369),
        [ts_aux_sym_7] = SHIFT(367),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [369] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(370),
    },
    [370] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_union_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [371] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 2),
        [ts_aux_sym_6] = SHIFT(376),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [372] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(373),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(373),
        [ts_aux_sym_7] = SHIFT(374),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [373] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(375),
    },
    [374] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [375] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [376] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(377),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(377),
        [ts_aux_sym_7] = SHIFT(375),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [377] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(378),
    },
    [378] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_struct_type, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [379] = {
        [ts_sym_identifier] = REDUCE(ts_aux_sym_primitive_type_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [380] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_type, 2),
    },
    [381] = {
        [ts_sym_identifier] = SHIFT(404),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(405),
    },
    [382] = {
        [ts_sym_identifier] = SHIFT(396),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(397),
    },
    [383] = {
        [ts_sym_identifier] = SHIFT(384),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(385),
    },
    [384] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(392),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 2),
    },
    [385] = {
        [ts_sym_enum_value] = SHIFT(386),
        [ts_builtin_sym_error] = SHIFT(387),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(388),
    },
    [386] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(390),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(389),
    },
    [387] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(389),
    },
    [388] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 3),
    },
    [389] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 4),
    },
    [390] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(391),
    },
    [391] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 5),
    },
    [392] = {
        [ts_sym_enum_value] = SHIFT(393),
        [ts_builtin_sym_error] = SHIFT(390),
        [ts_sym_identifier] = SHIFT(28),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(389),
    },
    [393] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_enum_type_repeat0] = SHIFT(394),
        [ts_aux_sym_3] = SHIFT(73),
        [ts_aux_sym_7] = SHIFT(391),
    },
    [394] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(395),
    },
    [395] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_pointer_type] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_var_assignment] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_type, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_enum_type, 6),
    },
    [396] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(401),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 2),
    },
    [397] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(398),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(398),
        [ts_aux_sym_7] = SHIFT(399),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [398] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(400),
    },
    [399] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 3),
    },
    [400] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 4),
    },
    [401] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(85),
        [ts_builtin_sym_error] = SHIFT(402),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_union_type_repeat0] = SHIFT(402),
        [ts_aux_sym_7] = SHIFT(400),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [402] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(403),
    },
    [403] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_union_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_union_type, 5),
    },
    [404] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(409),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 2),
    },
    [405] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(406),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(406),
        [ts_aux_sym_7] = SHIFT(407),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [406] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(408),
    },
    [407] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 3),
    },
    [408] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 4),
    },
    [409] = {
        [ts_sym_type] = SHIFT(83),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(116),
        [ts_builtin_sym_error] = SHIFT(410),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_struct_type_repeat0] = SHIFT(410),
        [ts_aux_sym_7] = SHIFT(408),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [410] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(411),
    },
    [411] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_pointer_type] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_var_assignment] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_type, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_struct_type, 5),
    },
    [412] = {
        [ts_sym_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_primitive_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_struct_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_union_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_enum_type] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_identifier] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_const] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_short] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_long] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_struct] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_union] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
        [ts_aux_sym_enum] = REDUCE(ts_aux_sym_var_declaration_repeat0, 2),
    },
    [413] = {
        [ts_sym_type_expression] = SHIFT(414),
        [ts_sym_pointer_type] = SHIFT(131),
        [ts_sym_identifier] = SHIFT(131),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(132),
    },
    [414] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(415),
    },
    [415] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_define] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_call] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_typedef] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_var_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_function_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_union_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_typedef, 4),
        [ts_builtin_sym_end] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_else] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_typedef, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_include] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_define] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_typedef, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_typedef, 4),
    },
    [416] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_ifndef, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_ifndef, 2),
    },
    [417] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_ifdef, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_ifdef, 2),
    },
    [418] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_seq] = SHIFT(419),
    },
    [419] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_define, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_define, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_define, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_define, 3),
    },
    [420] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_include, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_include, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_include, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_include, 2),
    },
    [421] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 2),
    },
    [422] = {
        [ts_sym_type_expression] = SHIFT(423),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(425),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [423] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(428),
        [ts_aux_sym_2] = SHIFT(429),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [424] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [425] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(428),
        [ts_aux_sym_2] = SHIFT(429),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [426] = {
        [ts_sym_type_expression] = SHIFT(427),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [427] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_pointer_type, 2),
    },
    [428] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(511),
    },
    [429] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
    },
    [430] = {
        [ts_sym_type_expression] = SHIFT(431),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(432),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [431] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(433),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [432] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(433),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 2),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [433] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_aux_sym_var_declaration_repeat1, 3),
    },
    [434] = {
        [ts_sym_expression] = SHIFT(435),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [435] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_var_assignment, 3),
        [ts_aux_sym_4] = SHIFT(490),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = SHIFT(491),
        [ts_aux_sym_12] = SHIFT(492),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = SHIFT(493),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = SHIFT(496),
        [ts_aux_sym_20] = SHIFT(497),
        [ts_aux_sym_21] = SHIFT(497),
        [ts_aux_sym_22] = SHIFT(497),
        [ts_aux_sym_23] = SHIFT(497),
        [ts_aux_sym_24] = SHIFT(497),
        [ts_aux_sym_25] = SHIFT(497),
    },
    [436] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(488),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [437] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [438] = {
        [ts_sym_type] = SHIFT(475),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [439] = {
        [ts_sym_expression] = SHIFT(449),
        [ts_sym_deref] = SHIFT(450),
        [ts_sym_address_of] = SHIFT(451),
        [ts_sym_field_access] = SHIFT(450),
        [ts_sym_deref_field_access] = SHIFT(450),
        [ts_sym_function_call] = SHIFT(451),
        [ts_sym_math_op] = SHIFT(451),
        [ts_sym_bool_op] = SHIFT(451),
        [ts_sym_rel_op] = SHIFT(451),
        [ts_sym_assignment] = SHIFT(451),
        [ts_sym_compound_literal] = SHIFT(451),
        [ts_sym_number] = SHIFT(451),
        [ts_sym_char] = SHIFT(451),
        [ts_sym_string] = SHIFT(451),
        [ts_sym_identifier] = SHIFT(450),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(452),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(453),
        [ts_aux_sym_14] = SHIFT(454),
        [ts_aux_sym_17] = SHIFT(455),
    },
    [440] = {
        [ts_sym_expression] = SHIFT(448),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [441] = {
        [ts_sym_expression] = SHIFT(447),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [442] = {
        [ts_sym_expression] = SHIFT(443),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [443] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [444] = {
        [ts_sym_expression] = SHIFT(446),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [445] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [446] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [447] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [448] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [449] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [450] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [451] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [452] = {
        [ts_sym_type] = SHIFT(462),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [453] = {
        [ts_sym_expression] = SHIFT(461),
        [ts_sym_deref] = SHIFT(450),
        [ts_sym_address_of] = SHIFT(451),
        [ts_sym_field_access] = SHIFT(450),
        [ts_sym_deref_field_access] = SHIFT(450),
        [ts_sym_function_call] = SHIFT(451),
        [ts_sym_math_op] = SHIFT(451),
        [ts_sym_bool_op] = SHIFT(451),
        [ts_sym_rel_op] = SHIFT(451),
        [ts_sym_assignment] = SHIFT(451),
        [ts_sym_compound_literal] = SHIFT(451),
        [ts_sym_number] = SHIFT(451),
        [ts_sym_char] = SHIFT(451),
        [ts_sym_string] = SHIFT(451),
        [ts_sym_identifier] = SHIFT(450),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(452),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(453),
        [ts_aux_sym_14] = SHIFT(454),
        [ts_aux_sym_17] = SHIFT(455),
    },
    [454] = {
        [ts_sym_expression] = SHIFT(460),
        [ts_sym_deref] = SHIFT(450),
        [ts_sym_address_of] = SHIFT(451),
        [ts_sym_field_access] = SHIFT(450),
        [ts_sym_deref_field_access] = SHIFT(450),
        [ts_sym_function_call] = SHIFT(451),
        [ts_sym_math_op] = SHIFT(451),
        [ts_sym_bool_op] = SHIFT(451),
        [ts_sym_rel_op] = SHIFT(451),
        [ts_sym_assignment] = SHIFT(451),
        [ts_sym_compound_literal] = SHIFT(451),
        [ts_sym_number] = SHIFT(451),
        [ts_sym_char] = SHIFT(451),
        [ts_sym_string] = SHIFT(451),
        [ts_sym_identifier] = SHIFT(450),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(452),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(453),
        [ts_aux_sym_14] = SHIFT(454),
        [ts_aux_sym_17] = SHIFT(455),
    },
    [455] = {
        [ts_sym_expression] = SHIFT(456),
        [ts_sym_deref] = SHIFT(450),
        [ts_sym_address_of] = SHIFT(451),
        [ts_sym_field_access] = SHIFT(450),
        [ts_sym_deref_field_access] = SHIFT(450),
        [ts_sym_function_call] = SHIFT(451),
        [ts_sym_math_op] = SHIFT(451),
        [ts_sym_bool_op] = SHIFT(451),
        [ts_sym_rel_op] = SHIFT(451),
        [ts_sym_assignment] = SHIFT(451),
        [ts_sym_compound_literal] = SHIFT(451),
        [ts_sym_number] = SHIFT(451),
        [ts_sym_char] = SHIFT(451),
        [ts_sym_string] = SHIFT(451),
        [ts_sym_identifier] = SHIFT(450),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(452),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(453),
        [ts_aux_sym_14] = SHIFT(454),
        [ts_aux_sym_17] = SHIFT(455),
    },
    [456] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(457),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(458),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [457] = {
        [ts_sym_expression] = SHIFT(459),
        [ts_sym_deref] = SHIFT(450),
        [ts_sym_address_of] = SHIFT(451),
        [ts_sym_field_access] = SHIFT(450),
        [ts_sym_deref_field_access] = SHIFT(450),
        [ts_sym_function_call] = SHIFT(451),
        [ts_sym_math_op] = SHIFT(451),
        [ts_sym_bool_op] = SHIFT(451),
        [ts_sym_rel_op] = SHIFT(451),
        [ts_sym_assignment] = SHIFT(451),
        [ts_sym_compound_literal] = SHIFT(451),
        [ts_sym_number] = SHIFT(451),
        [ts_sym_char] = SHIFT(451),
        [ts_sym_string] = SHIFT(451),
        [ts_sym_identifier] = SHIFT(450),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(452),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(453),
        [ts_aux_sym_14] = SHIFT(454),
        [ts_aux_sym_17] = SHIFT(455),
    },
    [458] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [459] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(457),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(458),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [460] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(458),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [461] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [462] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(463),
    },
    [463] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(464),
    },
    [464] = {
        [ts_sym_expression] = SHIFT(465),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(466),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(467),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(468),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [465] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(470),
        [ts_aux_sym_3] = SHIFT(471),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(469),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [466] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(470),
        [ts_aux_sym_3] = SHIFT(471),
        [ts_aux_sym_7] = SHIFT(469),
    },
    [467] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(469),
    },
    [468] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [469] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [470] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(473),
        [ts_aux_sym_7] = SHIFT(472),
    },
    [471] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(472),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [472] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [473] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(474),
    },
    [474] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [475] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(476),
    },
    [476] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(477),
    },
    [477] = {
        [ts_sym_expression] = SHIFT(478),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(479),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(480),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(481),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [478] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(483),
        [ts_aux_sym_3] = SHIFT(484),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(482),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [479] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(483),
        [ts_aux_sym_3] = SHIFT(484),
        [ts_aux_sym_7] = SHIFT(482),
    },
    [480] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(482),
    },
    [481] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [482] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [483] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(486),
        [ts_aux_sym_7] = SHIFT(485),
    },
    [484] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(485),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [485] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [486] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(487),
    },
    [487] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_3] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [488] = {
        [ts_sym_expression] = SHIFT(489),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [489] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(490),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = SHIFT(491),
        [ts_aux_sym_12] = SHIFT(492),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = SHIFT(493),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = SHIFT(496),
        [ts_aux_sym_20] = SHIFT(497),
        [ts_aux_sym_21] = SHIFT(497),
        [ts_aux_sym_22] = SHIFT(497),
        [ts_aux_sym_23] = SHIFT(497),
        [ts_aux_sym_24] = SHIFT(497),
        [ts_aux_sym_25] = SHIFT(497),
    },
    [490] = {
        [ts_sym_expression] = SHIFT(505),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(506),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(507),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [491] = {
        [ts_sym_identifier] = SHIFT(504),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [492] = {
        [ts_sym_identifier] = SHIFT(503),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [493] = {
        [ts_sym_expression] = SHIFT(502),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [494] = {
        [ts_sym_expression] = SHIFT(501),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [495] = {
        [ts_sym_expression] = SHIFT(500),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [496] = {
        [ts_sym_expression] = SHIFT(499),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [497] = {
        [ts_sym_expression] = SHIFT(498),
        [ts_sym_deref] = SHIFT(436),
        [ts_sym_address_of] = SHIFT(437),
        [ts_sym_field_access] = SHIFT(436),
        [ts_sym_deref_field_access] = SHIFT(436),
        [ts_sym_function_call] = SHIFT(437),
        [ts_sym_math_op] = SHIFT(437),
        [ts_sym_bool_op] = SHIFT(437),
        [ts_sym_rel_op] = SHIFT(437),
        [ts_sym_assignment] = SHIFT(437),
        [ts_sym_compound_literal] = SHIFT(437),
        [ts_sym_number] = SHIFT(437),
        [ts_sym_char] = SHIFT(437),
        [ts_sym_string] = SHIFT(437),
        [ts_sym_identifier] = SHIFT(436),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(438),
        [ts_aux_sym_8] = SHIFT(439),
        [ts_aux_sym_10] = SHIFT(440),
        [ts_aux_sym_14] = SHIFT(441),
        [ts_aux_sym_17] = SHIFT(442),
    },
    [498] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = SHIFT(493),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = SHIFT(496),
        [ts_aux_sym_20] = SHIFT(497),
        [ts_aux_sym_21] = SHIFT(497),
        [ts_aux_sym_22] = SHIFT(497),
        [ts_aux_sym_23] = SHIFT(497),
        [ts_aux_sym_24] = SHIFT(497),
        [ts_aux_sym_25] = SHIFT(497),
    },
    [499] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = SHIFT(493),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = SHIFT(496),
        [ts_aux_sym_20] = SHIFT(497),
        [ts_aux_sym_21] = SHIFT(497),
        [ts_aux_sym_22] = SHIFT(497),
        [ts_aux_sym_23] = SHIFT(497),
        [ts_aux_sym_24] = SHIFT(497),
        [ts_aux_sym_25] = SHIFT(497),
    },
    [500] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [501] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [502] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(444),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(445),
        [ts_aux_sym_14] = SHIFT(493),
        [ts_aux_sym_15] = SHIFT(494),
        [ts_aux_sym_16] = SHIFT(493),
        [ts_aux_sym_18] = SHIFT(495),
        [ts_aux_sym_19] = SHIFT(496),
        [ts_aux_sym_20] = SHIFT(497),
        [ts_aux_sym_21] = SHIFT(497),
        [ts_aux_sym_22] = SHIFT(497),
        [ts_aux_sym_23] = SHIFT(497),
        [ts_aux_sym_24] = SHIFT(497),
        [ts_aux_sym_25] = SHIFT(497),
    },
    [503] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [504] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [505] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(509),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(508),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [506] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(508),
    },
    [507] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [508] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [509] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(510),
    },
    [510] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_3] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [511] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
    },
    [512] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_preproc_call, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_preproc_call, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_preproc_call, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_preproc_call, 2),
    },
    [513] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_enum_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_enum_declaration, 2),
    },
    [514] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_union_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_union_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_union_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_union_declaration, 2),
    },
    [515] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_struct_declaration, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_struct_declaration, 2),
    },
    [516] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(521),
        [ts_aux_sym_2] = SHIFT(522),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_4] = SHIFT(523),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [517] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_2] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_type_expression, 1),
    },
    [518] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(521),
        [ts_aux_sym_2] = SHIFT(522),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [519] = {
        [ts_sym_type_expression] = SHIFT(520),
        [ts_sym_pointer_type] = SHIFT(517),
        [ts_sym_identifier] = SHIFT(517),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(519),
    },
    [520] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_2] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_pointer_type, 2),
    },
    [521] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(429),
    },
    [522] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
    },
    [523] = {
        [ts_sym_type] = SHIFT(524),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_formal_parameters] = SHIFT(525),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(526),
        [ts_builtin_sym_error] = SHIFT(527),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 0),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [524] = {
        [ts_sym_type_expression] = SHIFT(815),
        [ts_sym_pointer_type] = SHIFT(816),
        [ts_sym_identifier] = SHIFT(816),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(817),
    },
    [525] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(532),
    },
    [526] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(528),
        [ts_aux_sym_3] = SHIFT(529),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [527] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 1),
    },
    [528] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_sym_formal_parameters, 2),
    },
    [529] = {
        [ts_sym_type] = SHIFT(524),
        [ts_sym_primitive_type] = SHIFT(84),
        [ts_sym_struct_type] = SHIFT(84),
        [ts_sym_union_type] = SHIFT(84),
        [ts_sym_enum_type] = SHIFT(84),
        [ts_sym_field] = SHIFT(530),
        [ts_sym_identifier] = SHIFT(87),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(88),
        [ts_aux_sym_const] = SHIFT(90),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(91),
        [ts_aux_sym_union] = SHIFT(92),
        [ts_aux_sym_enum] = SHIFT(93),
    },
    [530] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = SHIFT(531),
        [ts_aux_sym_3] = SHIFT(529),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 2),
    },
    [531] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = REDUCE(ts_aux_sym_formal_parameters_repeat0, 3),
    },
    [532] = {
        [ts_sym_statement_block] = SHIFT(533),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(533),
        [ts_aux_sym_6] = SHIFT(534),
    },
    [533] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_define] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_call] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_typedef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_var_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_function_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_union_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_function_declaration, 6),
        [ts_builtin_sym_end] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_else] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_function_declaration, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_include] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_define] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_function_declaration, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_function_declaration, 6),
    },
    [534] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(536),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(541),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(541),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_7] = SHIFT(546),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [535] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_union_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref] = REDUCE(ts_sym_statement, 1),
        [ts_sym_address_of] = REDUCE(ts_sym_statement, 1),
        [ts_sym_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_function_call] = REDUCE(ts_sym_statement, 1),
        [ts_sym_math_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_assignment] = REDUCE(ts_sym_statement, 1),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement, 1),
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),
        [ts_sym_char] = REDUCE(ts_sym_statement, 1),
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement, 1),
    },
    [536] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(536),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(814),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 1),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [537] = {
        [ts_sym_type_expression] = SHIFT(810),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(811),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [538] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(809),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [539] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(806),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [540] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [541] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(808),
    },
    [542] = {
        [ts_sym_type_expression] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_pointer_type] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_var_assignment] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_primitive_type, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_primitive_type, 1),
        [ts_aux_sym_9] = SHIFT(806),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [543] = {
        [ts_sym_type] = SHIFT(800),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
    },
    [544] = {
        [ts_sym_type] = SHIFT(787),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [545] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(536),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(784),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(784),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_7] = SHIFT(785),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [546] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_define] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_typedef] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_else] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_include] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_define] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
    },
    [547] = {
        [ts_sym_expression] = SHIFT(782),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [548] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(719),
    },
    [549] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(666),
    },
    [550] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(587),
    },
    [551] = {
        [ts_sym_expression] = SHIFT(561),
        [ts_sym_deref] = SHIFT(562),
        [ts_sym_address_of] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(562),
        [ts_sym_deref_field_access] = SHIFT(562),
        [ts_sym_function_call] = SHIFT(563),
        [ts_sym_math_op] = SHIFT(563),
        [ts_sym_bool_op] = SHIFT(563),
        [ts_sym_rel_op] = SHIFT(563),
        [ts_sym_assignment] = SHIFT(563),
        [ts_sym_compound_literal] = SHIFT(563),
        [ts_sym_number] = SHIFT(563),
        [ts_sym_char] = SHIFT(563),
        [ts_sym_string] = SHIFT(563),
        [ts_sym_identifier] = SHIFT(562),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(565),
        [ts_aux_sym_14] = SHIFT(566),
        [ts_aux_sym_17] = SHIFT(567),
    },
    [552] = {
        [ts_sym_expression] = SHIFT(560),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [553] = {
        [ts_sym_expression] = SHIFT(559),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [554] = {
        [ts_sym_expression] = SHIFT(555),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [555] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [556] = {
        [ts_sym_expression] = SHIFT(558),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [557] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [558] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [559] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [560] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [561] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [562] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [563] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [564] = {
        [ts_sym_type] = SHIFT(574),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [565] = {
        [ts_sym_expression] = SHIFT(573),
        [ts_sym_deref] = SHIFT(562),
        [ts_sym_address_of] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(562),
        [ts_sym_deref_field_access] = SHIFT(562),
        [ts_sym_function_call] = SHIFT(563),
        [ts_sym_math_op] = SHIFT(563),
        [ts_sym_bool_op] = SHIFT(563),
        [ts_sym_rel_op] = SHIFT(563),
        [ts_sym_assignment] = SHIFT(563),
        [ts_sym_compound_literal] = SHIFT(563),
        [ts_sym_number] = SHIFT(563),
        [ts_sym_char] = SHIFT(563),
        [ts_sym_string] = SHIFT(563),
        [ts_sym_identifier] = SHIFT(562),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(565),
        [ts_aux_sym_14] = SHIFT(566),
        [ts_aux_sym_17] = SHIFT(567),
    },
    [566] = {
        [ts_sym_expression] = SHIFT(572),
        [ts_sym_deref] = SHIFT(562),
        [ts_sym_address_of] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(562),
        [ts_sym_deref_field_access] = SHIFT(562),
        [ts_sym_function_call] = SHIFT(563),
        [ts_sym_math_op] = SHIFT(563),
        [ts_sym_bool_op] = SHIFT(563),
        [ts_sym_rel_op] = SHIFT(563),
        [ts_sym_assignment] = SHIFT(563),
        [ts_sym_compound_literal] = SHIFT(563),
        [ts_sym_number] = SHIFT(563),
        [ts_sym_char] = SHIFT(563),
        [ts_sym_string] = SHIFT(563),
        [ts_sym_identifier] = SHIFT(562),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(565),
        [ts_aux_sym_14] = SHIFT(566),
        [ts_aux_sym_17] = SHIFT(567),
    },
    [567] = {
        [ts_sym_expression] = SHIFT(568),
        [ts_sym_deref] = SHIFT(562),
        [ts_sym_address_of] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(562),
        [ts_sym_deref_field_access] = SHIFT(562),
        [ts_sym_function_call] = SHIFT(563),
        [ts_sym_math_op] = SHIFT(563),
        [ts_sym_bool_op] = SHIFT(563),
        [ts_sym_rel_op] = SHIFT(563),
        [ts_sym_assignment] = SHIFT(563),
        [ts_sym_compound_literal] = SHIFT(563),
        [ts_sym_number] = SHIFT(563),
        [ts_sym_char] = SHIFT(563),
        [ts_sym_string] = SHIFT(563),
        [ts_sym_identifier] = SHIFT(562),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(565),
        [ts_aux_sym_14] = SHIFT(566),
        [ts_aux_sym_17] = SHIFT(567),
    },
    [568] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(569),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(570),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [569] = {
        [ts_sym_expression] = SHIFT(571),
        [ts_sym_deref] = SHIFT(562),
        [ts_sym_address_of] = SHIFT(563),
        [ts_sym_field_access] = SHIFT(562),
        [ts_sym_deref_field_access] = SHIFT(562),
        [ts_sym_function_call] = SHIFT(563),
        [ts_sym_math_op] = SHIFT(563),
        [ts_sym_bool_op] = SHIFT(563),
        [ts_sym_rel_op] = SHIFT(563),
        [ts_sym_assignment] = SHIFT(563),
        [ts_sym_compound_literal] = SHIFT(563),
        [ts_sym_number] = SHIFT(563),
        [ts_sym_char] = SHIFT(563),
        [ts_sym_string] = SHIFT(563),
        [ts_sym_identifier] = SHIFT(562),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(564),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(565),
        [ts_aux_sym_14] = SHIFT(566),
        [ts_aux_sym_17] = SHIFT(567),
    },
    [570] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [571] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(569),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(570),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [572] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(570),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [573] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [574] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(575),
    },
    [575] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(576),
    },
    [576] = {
        [ts_sym_expression] = SHIFT(577),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(578),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(579),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(580),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [577] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(582),
        [ts_aux_sym_3] = SHIFT(583),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(581),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [578] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(582),
        [ts_aux_sym_3] = SHIFT(583),
        [ts_aux_sym_7] = SHIFT(581),
    },
    [579] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(581),
    },
    [580] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [581] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [582] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(585),
        [ts_aux_sym_7] = SHIFT(584),
    },
    [583] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(584),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [584] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [585] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(586),
    },
    [586] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [587] = {
        [ts_sym_expression] = SHIFT(588),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [588] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(664),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [589] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = SHIFT(641),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [590] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [591] = {
        [ts_sym_type] = SHIFT(628),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [592] = {
        [ts_sym_expression] = SHIFT(602),
        [ts_sym_deref] = SHIFT(603),
        [ts_sym_address_of] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(603),
        [ts_sym_deref_field_access] = SHIFT(603),
        [ts_sym_function_call] = SHIFT(604),
        [ts_sym_math_op] = SHIFT(604),
        [ts_sym_bool_op] = SHIFT(604),
        [ts_sym_rel_op] = SHIFT(604),
        [ts_sym_assignment] = SHIFT(604),
        [ts_sym_compound_literal] = SHIFT(604),
        [ts_sym_number] = SHIFT(604),
        [ts_sym_char] = SHIFT(604),
        [ts_sym_string] = SHIFT(604),
        [ts_sym_identifier] = SHIFT(603),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(605),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(606),
        [ts_aux_sym_14] = SHIFT(607),
        [ts_aux_sym_17] = SHIFT(608),
    },
    [593] = {
        [ts_sym_expression] = SHIFT(601),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [594] = {
        [ts_sym_expression] = SHIFT(600),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [595] = {
        [ts_sym_expression] = SHIFT(596),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [596] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [597] = {
        [ts_sym_expression] = SHIFT(599),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [598] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [599] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [600] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [601] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [602] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref, 2),
    },
    [603] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [604] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_9] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_11] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_12] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_13] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_15] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_16] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_18] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_19] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_20] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_21] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_22] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_23] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_24] = REDUCE(ts_sym_expression, 1),
        [ts_aux_sym_25] = REDUCE(ts_sym_expression, 1),
    },
    [605] = {
        [ts_sym_type] = SHIFT(615),
        [ts_sym_primitive_type] = SHIFT(59),
        [ts_sym_struct_type] = SHIFT(59),
        [ts_sym_union_type] = SHIFT(59),
        [ts_sym_enum_type] = SHIFT(59),
        [ts_sym_identifier] = SHIFT(60),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(61),
        [ts_aux_sym_const] = SHIFT(62),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(63),
        [ts_aux_sym_union] = SHIFT(64),
        [ts_aux_sym_enum] = SHIFT(65),
    },
    [606] = {
        [ts_sym_expression] = SHIFT(614),
        [ts_sym_deref] = SHIFT(603),
        [ts_sym_address_of] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(603),
        [ts_sym_deref_field_access] = SHIFT(603),
        [ts_sym_function_call] = SHIFT(604),
        [ts_sym_math_op] = SHIFT(604),
        [ts_sym_bool_op] = SHIFT(604),
        [ts_sym_rel_op] = SHIFT(604),
        [ts_sym_assignment] = SHIFT(604),
        [ts_sym_compound_literal] = SHIFT(604),
        [ts_sym_number] = SHIFT(604),
        [ts_sym_char] = SHIFT(604),
        [ts_sym_string] = SHIFT(604),
        [ts_sym_identifier] = SHIFT(603),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(605),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(606),
        [ts_aux_sym_14] = SHIFT(607),
        [ts_aux_sym_17] = SHIFT(608),
    },
    [607] = {
        [ts_sym_expression] = SHIFT(613),
        [ts_sym_deref] = SHIFT(603),
        [ts_sym_address_of] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(603),
        [ts_sym_deref_field_access] = SHIFT(603),
        [ts_sym_function_call] = SHIFT(604),
        [ts_sym_math_op] = SHIFT(604),
        [ts_sym_bool_op] = SHIFT(604),
        [ts_sym_rel_op] = SHIFT(604),
        [ts_sym_assignment] = SHIFT(604),
        [ts_sym_compound_literal] = SHIFT(604),
        [ts_sym_number] = SHIFT(604),
        [ts_sym_char] = SHIFT(604),
        [ts_sym_string] = SHIFT(604),
        [ts_sym_identifier] = SHIFT(603),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(605),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(606),
        [ts_aux_sym_14] = SHIFT(607),
        [ts_aux_sym_17] = SHIFT(608),
    },
    [608] = {
        [ts_sym_expression] = SHIFT(609),
        [ts_sym_deref] = SHIFT(603),
        [ts_sym_address_of] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(603),
        [ts_sym_deref_field_access] = SHIFT(603),
        [ts_sym_function_call] = SHIFT(604),
        [ts_sym_math_op] = SHIFT(604),
        [ts_sym_bool_op] = SHIFT(604),
        [ts_sym_rel_op] = SHIFT(604),
        [ts_sym_assignment] = SHIFT(604),
        [ts_sym_compound_literal] = SHIFT(604),
        [ts_sym_number] = SHIFT(604),
        [ts_sym_char] = SHIFT(604),
        [ts_sym_string] = SHIFT(604),
        [ts_sym_identifier] = SHIFT(603),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(605),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(606),
        [ts_aux_sym_14] = SHIFT(607),
        [ts_aux_sym_17] = SHIFT(608),
    },
    [609] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_8] = SHIFT(610),
        [ts_aux_sym_9] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_13] = SHIFT(611),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 2),
    },
    [610] = {
        [ts_sym_expression] = SHIFT(612),
        [ts_sym_deref] = SHIFT(603),
        [ts_sym_address_of] = SHIFT(604),
        [ts_sym_field_access] = SHIFT(603),
        [ts_sym_deref_field_access] = SHIFT(603),
        [ts_sym_function_call] = SHIFT(604),
        [ts_sym_math_op] = SHIFT(604),
        [ts_sym_bool_op] = SHIFT(604),
        [ts_sym_rel_op] = SHIFT(604),
        [ts_sym_assignment] = SHIFT(604),
        [ts_sym_compound_literal] = SHIFT(604),
        [ts_sym_number] = SHIFT(604),
        [ts_sym_char] = SHIFT(604),
        [ts_sym_string] = SHIFT(604),
        [ts_sym_identifier] = SHIFT(603),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(605),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(606),
        [ts_aux_sym_14] = SHIFT(607),
        [ts_aux_sym_17] = SHIFT(608),
    },
    [611] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [612] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(610),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(611),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [613] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_13] = SHIFT(611),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 2),
    },
    [614] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_9] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_11] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_12] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_13] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_15] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_16] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_18] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_19] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_20] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_21] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_22] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_23] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_24] = REDUCE(ts_sym_address_of, 2),
        [ts_aux_sym_25] = REDUCE(ts_sym_address_of, 2),
    },
    [615] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(616),
    },
    [616] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(617),
    },
    [617] = {
        [ts_sym_expression] = SHIFT(618),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(619),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(620),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(621),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [618] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(623),
        [ts_aux_sym_3] = SHIFT(624),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(622),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [619] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(623),
        [ts_aux_sym_3] = SHIFT(624),
        [ts_aux_sym_7] = SHIFT(622),
    },
    [620] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(622),
    },
    [621] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [622] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [623] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(626),
        [ts_aux_sym_7] = SHIFT(625),
    },
    [624] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(625),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [625] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [626] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(627),
    },
    [627] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_9] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [628] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(629),
    },
    [629] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(630),
    },
    [630] = {
        [ts_sym_expression] = SHIFT(631),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(632),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(633),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(634),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [631] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(636),
        [ts_aux_sym_3] = SHIFT(637),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(635),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [632] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(636),
        [ts_aux_sym_3] = SHIFT(637),
        [ts_aux_sym_7] = SHIFT(635),
    },
    [633] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(635),
    },
    [634] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [635] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [636] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(639),
        [ts_aux_sym_7] = SHIFT(638),
    },
    [637] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(638),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [638] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [639] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(640),
    },
    [640] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_5] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [641] = {
        [ts_sym_expression] = SHIFT(642),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [642] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [643] = {
        [ts_sym_expression] = SHIFT(658),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(659),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(660),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [644] = {
        [ts_sym_identifier] = SHIFT(657),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [645] = {
        [ts_sym_identifier] = SHIFT(656),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [646] = {
        [ts_sym_expression] = SHIFT(655),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [647] = {
        [ts_sym_expression] = SHIFT(654),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [648] = {
        [ts_sym_expression] = SHIFT(653),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [649] = {
        [ts_sym_expression] = SHIFT(652),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [650] = {
        [ts_sym_expression] = SHIFT(651),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [651] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [652] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [653] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [654] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [655] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [656] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [657] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [658] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(662),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(661),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [659] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(661),
    },
    [660] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [661] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [662] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(663),
    },
    [663] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_5] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [664] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(665),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [665] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_while_statement, 5),
    },
    [666] = {
        [ts_sym_var_declaration] = SHIFT(667),
        [ts_sym_type] = SHIFT(668),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(669),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(670),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(667),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [667] = {
        [ts_sym_expression] = SHIFT(714),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(715),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [668] = {
        [ts_sym_type_expression] = SHIFT(710),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(711),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [669] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(677),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [670] = {
        [ts_sym_type] = SHIFT(671),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
    },
    [671] = {
        [ts_sym_type_expression] = SHIFT(672),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(673),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [672] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(674),
        [ts_aux_sym_2] = SHIFT(675),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [673] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(674),
        [ts_aux_sym_2] = SHIFT(675),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [674] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(676),
    },
    [675] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 4),
    },
    [676] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 5),
    },
    [677] = {
        [ts_sym_expression] = SHIFT(699),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(700),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [678] = {
        [ts_sym_expression] = SHIFT(693),
        [ts_sym_deref] = SHIFT(185),
        [ts_sym_address_of] = SHIFT(186),
        [ts_sym_field_access] = SHIFT(185),
        [ts_sym_deref_field_access] = SHIFT(185),
        [ts_sym_function_call] = SHIFT(186),
        [ts_sym_math_op] = SHIFT(186),
        [ts_sym_bool_op] = SHIFT(186),
        [ts_sym_rel_op] = SHIFT(186),
        [ts_sym_assignment] = SHIFT(186),
        [ts_sym_compound_literal] = SHIFT(186),
        [ts_builtin_sym_error] = SHIFT(694),
        [ts_sym_number] = SHIFT(186),
        [ts_sym_char] = SHIFT(186),
        [ts_sym_string] = SHIFT(186),
        [ts_sym_identifier] = SHIFT(185),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(188),
        [ts_aux_sym_5] = SHIFT(695),
        [ts_aux_sym_8] = SHIFT(190),
        [ts_aux_sym_10] = SHIFT(191),
        [ts_aux_sym_14] = SHIFT(192),
        [ts_aux_sym_17] = SHIFT(193),
    },
    [679] = {
        [ts_sym_identifier] = SHIFT(692),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [680] = {
        [ts_sym_identifier] = SHIFT(691),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
    [681] = {
        [ts_sym_expression] = SHIFT(690),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [682] = {
        [ts_sym_expression] = SHIFT(689),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [683] = {
        [ts_sym_expression] = SHIFT(688),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [684] = {
        [ts_sym_expression] = SHIFT(687),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [685] = {
        [ts_sym_expression] = SHIFT(686),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [686] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_rel_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [687] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [688] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_bool_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_bool_op, 3),
    },
    [689] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_math_op, 3),
    },
    [690] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_math_op, 3),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [691] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_deref_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_deref_field_access, 3),
    },
    [692] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_9] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_field_access, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_field_access, 3),
    },
    [693] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_function_call_repeat0] = SHIFT(697),
        [ts_aux_sym_3] = SHIFT(266),
        [ts_aux_sym_4] = SHIFT(246),
        [ts_aux_sym_5] = SHIFT(696),
        [ts_aux_sym_8] = SHIFT(195),
        [ts_aux_sym_11] = SHIFT(247),
        [ts_aux_sym_12] = SHIFT(248),
        [ts_aux_sym_13] = SHIFT(196),
        [ts_aux_sym_14] = SHIFT(249),
        [ts_aux_sym_15] = SHIFT(250),
        [ts_aux_sym_16] = SHIFT(249),
        [ts_aux_sym_18] = SHIFT(251),
        [ts_aux_sym_19] = SHIFT(252),
        [ts_aux_sym_20] = SHIFT(253),
        [ts_aux_sym_21] = SHIFT(253),
        [ts_aux_sym_22] = SHIFT(253),
        [ts_aux_sym_23] = SHIFT(253),
        [ts_aux_sym_24] = SHIFT(253),
        [ts_aux_sym_25] = SHIFT(253),
    },
    [694] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(696),
    },
    [695] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 3),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 3),
    },
    [696] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 4),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 4),
    },
    [697] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(698),
    },
    [698] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_function_call, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_function_call, 5),
    },
    [699] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(706),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [700] = {
        [ts_sym_expression] = SHIFT(701),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(702),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [701] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(704),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [702] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(703),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [703] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 7),
    },
    [704] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(705),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [705] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 8),
    },
    [706] = {
        [ts_sym_expression] = SHIFT(707),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(704),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [707] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(708),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [708] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(709),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [709] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 9),
    },
    [710] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(712),
        [ts_aux_sym_2] = SHIFT(713),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [711] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(712),
        [ts_aux_sym_2] = SHIFT(713),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [712] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(675),
    },
    [713] = {
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 3),
    },
    [714] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(700),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [715] = {
        [ts_sym_expression] = SHIFT(716),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(717),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [716] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(702),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [717] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(718),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [718] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 6),
    },
    [719] = {
        [ts_sym_expression] = SHIFT(720),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_builtin_sym_error] = SHIFT(721),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [720] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(722),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [721] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(722),
    },
    [722] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(724),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [723] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement, 1),
        [ts_sym_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement, 1),
        [ts_sym_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_union_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement, 1),
        [ts_sym_expression] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref] = REDUCE(ts_sym_statement, 1),
        [ts_sym_address_of] = REDUCE(ts_sym_statement, 1),
        [ts_sym_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement, 1),
        [ts_sym_function_call] = REDUCE(ts_sym_statement, 1),
        [ts_sym_math_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement, 1),
        [ts_sym_assignment] = REDUCE(ts_sym_statement, 1),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement, 1),
        [ts_sym_number] = REDUCE(ts_sym_statement, 1),
        [ts_sym_char] = REDUCE(ts_sym_statement, 1),
        [ts_sym_string] = REDUCE(ts_sym_statement, 1),
        [ts_sym_identifier] = REDUCE(ts_sym_statement, 1),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement, 1),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement, 1),
    },
    [724] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(780),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_if_statement, 5),
    },
    [725] = {
        [ts_sym_type_expression] = SHIFT(776),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(777),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [726] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(775),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [727] = {
        [ts_sym_type] = SHIFT(769),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_identifier] = SHIFT(9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
    },
    [728] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(536),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_builtin_sym_error] = SHIFT(766),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_statement_block_repeat0] = SHIFT(766),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_7] = SHIFT(767),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [729] = {
        [ts_sym_expression] = SHIFT(764),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [730] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(757),
    },
    [731] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(737),
    },
    [732] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(733),
    },
    [733] = {
        [ts_sym_expression] = SHIFT(734),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [734] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(735),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [735] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(736),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [736] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_while_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_else] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_while_statement, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_while_statement, 5),
    },
    [737] = {
        [ts_sym_var_declaration] = SHIFT(738),
        [ts_sym_type] = SHIFT(668),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(739),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(670),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_2] = SHIFT(738),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [738] = {
        [ts_sym_expression] = SHIFT(752),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(753),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [739] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(740),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [740] = {
        [ts_sym_expression] = SHIFT(741),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(742),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [741] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(748),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [742] = {
        [ts_sym_expression] = SHIFT(743),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(744),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [743] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(746),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [744] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(745),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [745] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 7),
    },
    [746] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(747),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [747] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 8),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 8),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 8),
    },
    [748] = {
        [ts_sym_expression] = SHIFT(749),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(746),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [749] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(750),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [750] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(751),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [751] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 9),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 9),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 9),
    },
    [752] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(742),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [753] = {
        [ts_sym_expression] = SHIFT(754),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_5] = SHIFT(755),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [754] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(744),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [755] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(756),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [756] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement_block] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_return_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_if_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_for_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_while_statement] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_primitive_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_struct_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_union_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_enum_type] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_expression] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_address_of] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_function_call] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_math_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_bool_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_rel_op] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_assignment] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_compound_literal] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_number] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_char] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_string] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_identifier] = REDUCE(ts_sym_for_statement, 6),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_static] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_extern] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_6] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_7] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_return] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_if] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_else] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_for] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_while] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_const] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_short] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_long] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_struct] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_union] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_enum] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_10] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_for_statement, 6),
        [ts_aux_sym_17] = REDUCE(ts_sym_for_statement, 6),
    },
    [757] = {
        [ts_sym_expression] = SHIFT(758),
        [ts_sym_deref] = SHIFT(589),
        [ts_sym_address_of] = SHIFT(590),
        [ts_sym_field_access] = SHIFT(589),
        [ts_sym_deref_field_access] = SHIFT(589),
        [ts_sym_function_call] = SHIFT(590),
        [ts_sym_math_op] = SHIFT(590),
        [ts_sym_bool_op] = SHIFT(590),
        [ts_sym_rel_op] = SHIFT(590),
        [ts_sym_assignment] = SHIFT(590),
        [ts_sym_compound_literal] = SHIFT(590),
        [ts_builtin_sym_error] = SHIFT(759),
        [ts_sym_number] = SHIFT(590),
        [ts_sym_char] = SHIFT(590),
        [ts_sym_string] = SHIFT(590),
        [ts_sym_identifier] = SHIFT(589),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(591),
        [ts_aux_sym_8] = SHIFT(592),
        [ts_aux_sym_10] = SHIFT(593),
        [ts_aux_sym_14] = SHIFT(594),
        [ts_aux_sym_17] = SHIFT(595),
    },
    [758] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(643),
        [ts_aux_sym_5] = SHIFT(760),
        [ts_aux_sym_8] = SHIFT(597),
        [ts_aux_sym_11] = SHIFT(644),
        [ts_aux_sym_12] = SHIFT(645),
        [ts_aux_sym_13] = SHIFT(598),
        [ts_aux_sym_14] = SHIFT(646),
        [ts_aux_sym_15] = SHIFT(647),
        [ts_aux_sym_16] = SHIFT(646),
        [ts_aux_sym_18] = SHIFT(648),
        [ts_aux_sym_19] = SHIFT(649),
        [ts_aux_sym_20] = SHIFT(650),
        [ts_aux_sym_21] = SHIFT(650),
        [ts_aux_sym_22] = SHIFT(650),
        [ts_aux_sym_23] = SHIFT(650),
        [ts_aux_sym_24] = SHIFT(650),
        [ts_aux_sym_25] = SHIFT(650),
    },
    [759] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(760),
    },
    [760] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(761),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [761] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_else] = SHIFT(762),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_if_statement, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_if_statement, 5),
    },
    [762] = {
        [ts_sym_var_declaration] = SHIFT(723),
        [ts_sym_statement_block] = SHIFT(723),
        [ts_sym_statement] = SHIFT(763),
        [ts_sym_return_statement] = SHIFT(723),
        [ts_sym_expression_statement] = SHIFT(723),
        [ts_sym_if_statement] = SHIFT(723),
        [ts_sym_for_statement] = SHIFT(723),
        [ts_sym_while_statement] = SHIFT(723),
        [ts_sym_type] = SHIFT(725),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(726),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(727),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(728),
        [ts_aux_sym_return] = SHIFT(729),
        [ts_aux_sym_if] = SHIFT(730),
        [ts_aux_sym_for] = SHIFT(731),
        [ts_aux_sym_while] = SHIFT(732),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [763] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_address_of] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_else] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_if_statement, 7),
    },
    [764] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(765),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [765] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_number] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_char] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_string] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_return_statement, 3),
    },
    [766] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(768),
    },
    [767] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_address_of] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement_block, 2),
    },
    [768] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement_block, 3),
    },
    [769] = {
        [ts_sym_type_expression] = SHIFT(770),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(771),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [770] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(772),
        [ts_aux_sym_2] = SHIFT(773),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [771] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(772),
        [ts_aux_sym_2] = SHIFT(773),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [772] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(774),
    },
    [773] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 4),
    },
    [774] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 5),
    },
    [775] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_address_of] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_char] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_else] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression_statement, 2),
    },
    [776] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(778),
        [ts_aux_sym_2] = SHIFT(779),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [777] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(778),
        [ts_aux_sym_2] = SHIFT(779),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [778] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(773),
    },
    [779] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_else] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 3),
    },
    [780] = {
        [ts_sym_var_declaration] = SHIFT(535),
        [ts_sym_statement_block] = SHIFT(535),
        [ts_sym_statement] = SHIFT(781),
        [ts_sym_return_statement] = SHIFT(535),
        [ts_sym_expression_statement] = SHIFT(535),
        [ts_sym_if_statement] = SHIFT(535),
        [ts_sym_for_statement] = SHIFT(535),
        [ts_sym_while_statement] = SHIFT(535),
        [ts_sym_type] = SHIFT(537),
        [ts_sym_primitive_type] = SHIFT(4),
        [ts_sym_struct_type] = SHIFT(4),
        [ts_sym_union_type] = SHIFT(4),
        [ts_sym_enum_type] = SHIFT(4),
        [ts_sym_expression] = SHIFT(538),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(542),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = SHIFT(543),
        [ts_aux_sym_primitive_type_repeat0] = SHIFT(12),
        [ts_aux_sym_static] = SHIFT(18),
        [ts_aux_sym_extern] = SHIFT(18),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_6] = SHIFT(545),
        [ts_aux_sym_return] = SHIFT(547),
        [ts_aux_sym_if] = SHIFT(548),
        [ts_aux_sym_for] = SHIFT(549),
        [ts_aux_sym_while] = SHIFT(550),
        [ts_aux_sym_const] = SHIFT(19),
        [ts_aux_sym_unsigned] = SHIFT(20),
        [ts_aux_sym_short] = SHIFT(20),
        [ts_aux_sym_long] = SHIFT(20),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_struct] = SHIFT(381),
        [ts_aux_sym_union] = SHIFT(382),
        [ts_aux_sym_enum] = SHIFT(383),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [781] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement_block] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_return_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_if_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_for_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_while_statement] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_primitive_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_struct_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_union_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_enum_type] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_expression] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_address_of] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_function_call] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_math_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_bool_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_rel_op] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_assignment] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_compound_literal] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_number] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_char] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_string] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_identifier] = REDUCE(ts_sym_if_statement, 7),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_static] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_extern] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_6] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_7] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_return] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_if] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_for] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_while] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_const] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_short] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_long] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_struct] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_union] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_enum] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_10] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_if_statement, 7),
        [ts_aux_sym_17] = REDUCE(ts_sym_if_statement, 7),
    },
    [782] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(783),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [783] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_expression] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_number] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_char] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_string] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_return_statement, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_return_statement, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_return_statement, 3),
    },
    [784] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(786),
    },
    [785] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_address_of] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement_block, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement_block, 2),
    },
    [786] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_expression] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_number] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_char] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_string] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_statement_block, 3),
    },
    [787] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_5] = SHIFT(788),
    },
    [788] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_6] = SHIFT(789),
    },
    [789] = {
        [ts_sym_expression] = SHIFT(790),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(791),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(792),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(793),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [790] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(795),
        [ts_aux_sym_3] = SHIFT(796),
        [ts_aux_sym_4] = SHIFT(169),
        [ts_aux_sym_7] = SHIFT(794),
        [ts_aux_sym_8] = SHIFT(162),
        [ts_aux_sym_11] = SHIFT(170),
        [ts_aux_sym_12] = SHIFT(171),
        [ts_aux_sym_13] = SHIFT(163),
        [ts_aux_sym_14] = SHIFT(172),
        [ts_aux_sym_15] = SHIFT(173),
        [ts_aux_sym_16] = SHIFT(172),
        [ts_aux_sym_18] = SHIFT(174),
        [ts_aux_sym_19] = SHIFT(175),
        [ts_aux_sym_20] = SHIFT(176),
        [ts_aux_sym_21] = SHIFT(176),
        [ts_aux_sym_22] = SHIFT(176),
        [ts_aux_sym_23] = SHIFT(176),
        [ts_aux_sym_24] = SHIFT(176),
        [ts_aux_sym_25] = SHIFT(176),
    },
    [791] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_compound_literal_repeat0] = SHIFT(795),
        [ts_aux_sym_3] = SHIFT(796),
        [ts_aux_sym_7] = SHIFT(794),
    },
    [792] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(794),
    },
    [793] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 5),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 5),
    },
    [794] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 6),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 6),
    },
    [795] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_3] = SHIFT(798),
        [ts_aux_sym_7] = SHIFT(797),
    },
    [796] = {
        [ts_sym_expression] = SHIFT(223),
        [ts_sym_deref] = SHIFT(150),
        [ts_sym_address_of] = SHIFT(151),
        [ts_sym_field_access] = SHIFT(150),
        [ts_sym_deref_field_access] = SHIFT(150),
        [ts_sym_function_call] = SHIFT(151),
        [ts_sym_math_op] = SHIFT(151),
        [ts_sym_bool_op] = SHIFT(151),
        [ts_sym_rel_op] = SHIFT(151),
        [ts_sym_assignment] = SHIFT(151),
        [ts_sym_compound_literal] = SHIFT(151),
        [ts_sym_struct_literal_field] = SHIFT(224),
        [ts_sym_number] = SHIFT(151),
        [ts_sym_char] = SHIFT(151),
        [ts_sym_string] = SHIFT(151),
        [ts_sym_identifier] = SHIFT(150),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(154),
        [ts_aux_sym_7] = SHIFT(797),
        [ts_aux_sym_8] = SHIFT(156),
        [ts_aux_sym_10] = SHIFT(157),
        [ts_aux_sym_11] = SHIFT(158),
        [ts_aux_sym_14] = SHIFT(159),
        [ts_aux_sym_17] = SHIFT(160),
    },
    [797] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 7),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 7),
    },
    [798] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = SHIFT(799),
    },
    [799] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_4] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_8] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_11] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_12] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_13] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_14] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_15] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_16] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_18] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_19] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_20] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_21] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_22] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_23] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_24] = REDUCE(ts_sym_compound_literal, 8),
        [ts_aux_sym_25] = REDUCE(ts_sym_compound_literal, 8),
    },
    [800] = {
        [ts_sym_type_expression] = SHIFT(801),
        [ts_sym_pointer_type] = SHIFT(424),
        [ts_sym_var_assignment] = SHIFT(802),
        [ts_sym_identifier] = SHIFT(424),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(426),
    },
    [801] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(803),
        [ts_aux_sym_2] = SHIFT(804),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [802] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(803),
        [ts_aux_sym_2] = SHIFT(804),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [803] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(805),
    },
    [804] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 4),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 4),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 4),
    },
    [805] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 5),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 5),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 5),
    },
    [806] = {
        [ts_sym_expression] = SHIFT(807),
        [ts_sym_deref] = SHIFT(539),
        [ts_sym_address_of] = SHIFT(540),
        [ts_sym_field_access] = SHIFT(539),
        [ts_sym_deref_field_access] = SHIFT(539),
        [ts_sym_function_call] = SHIFT(540),
        [ts_sym_math_op] = SHIFT(540),
        [ts_sym_bool_op] = SHIFT(540),
        [ts_sym_rel_op] = SHIFT(540),
        [ts_sym_assignment] = SHIFT(540),
        [ts_sym_compound_literal] = SHIFT(540),
        [ts_sym_number] = SHIFT(540),
        [ts_sym_char] = SHIFT(540),
        [ts_sym_string] = SHIFT(540),
        [ts_sym_identifier] = SHIFT(539),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_4] = SHIFT(544),
        [ts_aux_sym_8] = SHIFT(551),
        [ts_aux_sym_10] = SHIFT(552),
        [ts_aux_sym_14] = SHIFT(553),
        [ts_aux_sym_17] = SHIFT(554),
    },
    [807] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = REDUCE(ts_sym_assignment, 3),
        [ts_aux_sym_4] = SHIFT(678),
        [ts_aux_sym_8] = SHIFT(556),
        [ts_aux_sym_11] = SHIFT(679),
        [ts_aux_sym_12] = SHIFT(680),
        [ts_aux_sym_13] = SHIFT(557),
        [ts_aux_sym_14] = SHIFT(681),
        [ts_aux_sym_15] = SHIFT(682),
        [ts_aux_sym_16] = SHIFT(681),
        [ts_aux_sym_18] = SHIFT(683),
        [ts_aux_sym_19] = SHIFT(684),
        [ts_aux_sym_20] = SHIFT(685),
        [ts_aux_sym_21] = SHIFT(685),
        [ts_aux_sym_22] = SHIFT(685),
        [ts_aux_sym_23] = SHIFT(685),
        [ts_aux_sym_24] = SHIFT(685),
        [ts_aux_sym_25] = SHIFT(685),
    },
    [808] = {
        [ts_sym_preproc_include] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_define] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_call] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_ifdef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_ifndef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_typedef] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_var_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_function_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_declaration] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_statement_block, 3),
        [ts_builtin_sym_end] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_else] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_endif] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_preproc_directive] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_statement_block, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_program_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_include] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_define] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_ifdef] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_ifndef] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_typedef1] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_statement_block, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_statement_block, 3),
    },
    [809] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement_block] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_return_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_if_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_for_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_while_statement] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_primitive_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_struct_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_union_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_enum_type] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_expression] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_address_of] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_function_call] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_math_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_bool_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_rel_op] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_assignment] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_compound_literal] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_number] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_char] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_string] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_identifier] = REDUCE(ts_sym_expression_statement, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_static] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_extern] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_4] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_6] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_7] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_return] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_if] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_for] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_while] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_const] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_short] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_long] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_8] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_struct] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_union] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_enum] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_10] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_14] = REDUCE(ts_sym_expression_statement, 2),
        [ts_aux_sym_17] = REDUCE(ts_sym_expression_statement, 2),
    },
    [810] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(812),
        [ts_aux_sym_2] = SHIFT(813),
        [ts_aux_sym_3] = SHIFT(430),
        [ts_aux_sym_9] = SHIFT(434),
    },
    [811] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat1] = SHIFT(812),
        [ts_aux_sym_2] = SHIFT(813),
        [ts_aux_sym_3] = SHIFT(430),
    },
    [812] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_2] = SHIFT(804),
    },
    [813] = {
        [ts_sym_var_declaration] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement_block] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_return_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_if_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_for_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_while_statement] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_primitive_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_struct_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_union_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_enum_type] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_expression] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_address_of] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_deref_field_access] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_function_call] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_math_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_bool_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_rel_op] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_assignment] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_compound_literal] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_number] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_char] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_string] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_identifier] = REDUCE(ts_sym_var_declaration, 3),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_var_declaration_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_statement_block_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_primitive_type_repeat0] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_static] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_extern] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_4] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_6] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_7] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_return] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_if] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_for] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_while] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_const] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_unsigned] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_short] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_long] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_8] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_struct] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_union] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_enum] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_10] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_14] = REDUCE(ts_sym_var_declaration, 3),
        [ts_aux_sym_17] = REDUCE(ts_sym_var_declaration, 3),
    },
    [814] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_7] = REDUCE(ts_aux_sym_statement_block_repeat0, 2),
    },
    [815] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_field, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_field, 2),
    },
    [816] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_3] = REDUCE(ts_sym_type_expression, 1),
        [ts_aux_sym_5] = REDUCE(ts_sym_type_expression, 1),
    },
    [817] = {
        [ts_sym_type_expression] = SHIFT(818),
        [ts_sym_pointer_type] = SHIFT(816),
        [ts_sym_identifier] = SHIFT(816),
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_8] = SHIFT(817),
    },
    [818] = {
        [ts_sym_comment] = SHIFT_EXTRA(),
        [ts_aux_sym_formal_parameters_repeat0] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_3] = REDUCE(ts_sym_pointer_type, 2),
        [ts_aux_sym_5] = REDUCE(ts_sym_pointer_type, 2),
    },
    [819] = {
        [ts_builtin_sym_end] = REDUCE(ts_aux_sym_program_repeat0, 2),
        [ts_sym_comment] = SHIFT_EXTRA(),
    },
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c);
