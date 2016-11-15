#include "tree_sitter/parser.h"

#define STATE_COUNT 126
#define SYMBOL_COUNT 43
#define TOKEN_COUNT 26

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_new = 8,
    anon_sym_public = 9,
    anon_sym_protected = 10,
    anon_sym_internal = 11,
    anon_sym_private = 12,
    anon_sym_abstract = 13,
    anon_sym_sealed = 14,
    anon_sym_static = 15,
    anon_sym_unsafe = 16,
    anon_sym_LT = 17,
    anon_sym_COMMA = 18,
    anon_sym_GT = 19,
    anon_sym_DOT = 20,
    anon_sym_COLON_COLON = 21,
    anon_sym_EQ = 22,
    sym_global = 23,
    sym_identifier_name = 24,
    sym_comment = 25,
    sym_compilation_unit = 26,
    sym_using_directive = 27,
    sym_namespace_declaration = 28,
    sym_class_declaration = 29,
    sym_struct_declaration = 30,
    sym__type_modifiers = 31,
    sym_type_parameter_list = 32,
    sym_type_parameter = 33,
    sym_qualified_name = 34,
    sym_alias_qualified_name = 35,
    sym_name_equals = 36,
    sym_static = 37,
    aux_sym_compilation_unit_repeat1 = 38,
    aux_sym_compilation_unit_repeat2 = 39,
    aux_sym_class_declaration_repeat1 = 40,
    aux_sym__type_modifiers_repeat1 = 41,
    aux_sym_type_parameter_list_repeat1 = 42,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_using] = "using",
    [anon_sym_SEMI] = ";",
    [anon_sym_namespace] = "namespace",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_class] = "class",
    [anon_sym_struct] = "struct",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_unsafe] = "unsafe",
    [anon_sym_LT] = "<",
    [anon_sym_COMMA] = ",",
    [anon_sym_GT] = ">",
    [anon_sym_DOT] = ".",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_EQ] = "=",
    [sym_global] = "global",
    [sym_identifier_name] = "identifier_name",
    [sym_comment] = "comment",
    [sym_compilation_unit] = "compilation_unit",
    [sym_using_directive] = "using_directive",
    [sym_namespace_declaration] = "namespace_declaration",
    [sym_class_declaration] = "class_declaration",
    [sym_struct_declaration] = "struct_declaration",
    [sym__type_modifiers] = "_type_modifiers",
    [sym_type_parameter_list] = "type_parameter_list",
    [sym_type_parameter] = "type_parameter",
    [sym_qualified_name] = "qualified_name",
    [sym_alias_qualified_name] = "alias_qualified_name",
    [sym_name_equals] = "name_equals",
    [sym_static] = "static",
    [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
    [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym__type_modifiers_repeat1] = "_type_modifiers_repeat1",
    [aux_sym_type_parameter_list_repeat1] = "type_parameter_list_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[SYMBOL_COUNT] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [anon_sym_using] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_SEMI] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_namespace] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_RBRACE] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_class] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_struct] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_new] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_public] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_protected] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_internal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_private] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_abstract] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sealed] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_static] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_unsafe] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_LT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COMMA] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_GT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_DOT] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_COLON_COLON] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [sym_global] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_identifier_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
        .structural = false,
        .extra = true,
    },
    [sym_compilation_unit] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_using_directive] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_namespace_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__type_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter_list] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_type_parameter] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_alias_qualified_name] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_name_equals] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_static] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_compilation_unit_repeat2] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_class_declaration_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym__type_modifiers_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [aux_sym_type_parameter_list_repeat1] = {
        .visible = false,
        .named = false,
        .structural = true,
        .extra = false,
    },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
    START_LEXER();
    switch (state) {
        case 0:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(0);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
            if (lookahead == '>')
                ADVANCE(14);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'f') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(24);
            if (lookahead == 'g')
                ADVANCE(29);
            if (lookahead == 'i')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(43);
            if (lookahead == 'p')
                ADVANCE(54);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 'u')
                ADVANCE(88);
            if (lookahead == '{')
                ADVANCE(98);
            if (lookahead == '}')
                ADVANCE(99);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_COMMA);
        case 3:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 4:
            if (lookahead == '*')
                ADVANCE(5);
            if (lookahead == '/')
                ADVANCE(8);
            LEX_ERROR();
        case 5:
            if (lookahead == '*')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(5);
            LEX_ERROR();
        case 6:
            if (lookahead == '/')
                ADVANCE(7);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(5);
            LEX_ERROR();
        case 7:
            ACCEPT_TOKEN(sym_comment);
        case 8:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(8);
            ACCEPT_TOKEN(sym_comment);
        case 9:
            if (lookahead == ':')
                ADVANCE(10);
            LEX_ERROR();
        case 10:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 11:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 12:
            ACCEPT_TOKEN(anon_sym_LT);
        case 13:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 14:
            ACCEPT_TOKEN(anon_sym_GT);
        case 15:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier_name);
        case 16:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier_name);
        case 17:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier_name);
        case 18:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(19);
            ACCEPT_TOKEN(sym_identifier_name);
        case 19:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier_name);
        case 20:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier_name);
        case 21:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier_name);
        case 22:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 23:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_abstract);
        case 24:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier_name);
        case 25:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier_name);
        case 27:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier_name);
        case 28:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_class);
        case 29:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier_name);
        case 30:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier_name);
        case 31:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 32:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier_name);
        case 33:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier_name);
        case 34:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(sym_global);
        case 35:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 36:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier_name);
        case 37:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier_name);
        case 38:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(39);
            ACCEPT_TOKEN(sym_identifier_name);
        case 39:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(40);
            ACCEPT_TOKEN(sym_identifier_name);
        case 40:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier_name);
        case 41:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier_name);
        case 42:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_internal);
        case 43:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(44);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 44:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'm')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier_name);
        case 45:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier_name);
        case 46:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier_name);
        case 47:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier_name);
        case 48:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier_name);
        case 49:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier_name);
        case 50:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(51);
            ACCEPT_TOKEN(sym_identifier_name);
        case 51:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 52:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'w')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier_name);
        case 53:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_new);
        case 54:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(55);
            if (lookahead == 'u')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 55:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(56);
            if (lookahead == 'o')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 56:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'v')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 60:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_private);
        case 61:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(62);
            ACCEPT_TOKEN(sym_identifier_name);
        case 62:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 64:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(65);
            ACCEPT_TOKEN(sym_identifier_name);
        case 65:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_protected);
        case 68:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(70);
            ACCEPT_TOKEN(sym_identifier_name);
        case 70:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_public);
        case 73:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(74);
            if (lookahead == 't')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 74:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(75);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(76);
            ACCEPT_TOKEN(sym_identifier_name);
        case 76:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(77);
            ACCEPT_TOKEN(sym_identifier_name);
        case 77:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 79:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(80);
            if (lookahead == 'r')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 80:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 83:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_static);
        case 84:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'u')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_struct);
        case 88:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(89);
            if (lookahead == 's')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(91);
            ACCEPT_TOKEN(sym_identifier_name);
        case 91:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'f')
                ADVANCE(92);
            ACCEPT_TOKEN(sym_identifier_name);
        case 92:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(93);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 94:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_using);
        case 98:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 99:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 100:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(100);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(122);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(167);
            LEX_ERROR();
        case 101:
            if (lookahead == 'b')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 's')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 't')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            if (lookahead == 'r')
                ADVANCE(105);
            LEX_ERROR();
        case 105:
            if (lookahead == 'a')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 'c')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 't')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 109:
            if (lookahead == 'l')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 's')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            if (lookahead == 's')
                ADVANCE(113);
            LEX_ERROR();
        case 113:
            ACCEPT_TOKEN(anon_sym_class);
        case 114:
            if (lookahead == 'n')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 't')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 'e')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'r')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'n')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'a')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'l')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_internal);
        case 122:
            if (lookahead == 'a')
                ADVANCE(123);
            if (lookahead == 'e')
                ADVANCE(131);
            LEX_ERROR();
        case 123:
            if (lookahead == 'm')
                ADVANCE(124);
            LEX_ERROR();
        case 124:
            if (lookahead == 'e')
                ADVANCE(125);
            LEX_ERROR();
        case 125:
            if (lookahead == 's')
                ADVANCE(126);
            LEX_ERROR();
        case 126:
            if (lookahead == 'p')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 'c')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'e')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 131:
            if (lookahead == 'w')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            ACCEPT_TOKEN(anon_sym_new);
        case 133:
            if (lookahead == 'r')
                ADVANCE(134);
            if (lookahead == 'u')
                ADVANCE(147);
            LEX_ERROR();
        case 134:
            if (lookahead == 'i')
                ADVANCE(135);
            if (lookahead == 'o')
                ADVANCE(140);
            LEX_ERROR();
        case 135:
            if (lookahead == 'v')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'a')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            if (lookahead == 't')
                ADVANCE(138);
            LEX_ERROR();
        case 138:
            if (lookahead == 'e')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            ACCEPT_TOKEN(anon_sym_private);
        case 140:
            if (lookahead == 't')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'e')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            if (lookahead == 'c')
                ADVANCE(143);
            LEX_ERROR();
        case 143:
            if (lookahead == 't')
                ADVANCE(144);
            LEX_ERROR();
        case 144:
            if (lookahead == 'e')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'd')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            ACCEPT_TOKEN(anon_sym_protected);
        case 147:
            if (lookahead == 'b')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            if (lookahead == 'l')
                ADVANCE(149);
            LEX_ERROR();
        case 149:
            if (lookahead == 'i')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 'c')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            ACCEPT_TOKEN(anon_sym_public);
        case 152:
            if (lookahead == 'e')
                ADVANCE(153);
            if (lookahead == 't')
                ADVANCE(158);
            LEX_ERROR();
        case 153:
            if (lookahead == 'a')
                ADVANCE(154);
            LEX_ERROR();
        case 154:
            if (lookahead == 'l')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'e')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'd')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 158:
            if (lookahead == 'a')
                ADVANCE(159);
            if (lookahead == 'r')
                ADVANCE(163);
            LEX_ERROR();
        case 159:
            if (lookahead == 't')
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if (lookahead == 'i')
                ADVANCE(161);
            LEX_ERROR();
        case 161:
            if (lookahead == 'c')
                ADVANCE(162);
            LEX_ERROR();
        case 162:
            ACCEPT_TOKEN(anon_sym_static);
        case 163:
            if (lookahead == 'u')
                ADVANCE(164);
            LEX_ERROR();
        case 164:
            if (lookahead == 'c')
                ADVANCE(165);
            LEX_ERROR();
        case 165:
            if (lookahead == 't')
                ADVANCE(166);
            LEX_ERROR();
        case 166:
            ACCEPT_TOKEN(anon_sym_struct);
        case 167:
            if (lookahead == 'n')
                ADVANCE(168);
            if (lookahead == 's')
                ADVANCE(173);
            LEX_ERROR();
        case 168:
            if (lookahead == 's')
                ADVANCE(169);
            LEX_ERROR();
        case 169:
            if (lookahead == 'a')
                ADVANCE(170);
            LEX_ERROR();
        case 170:
            if (lookahead == 'f')
                ADVANCE(171);
            LEX_ERROR();
        case 171:
            if (lookahead == 'e')
                ADVANCE(172);
            LEX_ERROR();
        case 172:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 173:
            if (lookahead == 'i')
                ADVANCE(174);
            LEX_ERROR();
        case 174:
            if (lookahead == 'n')
                ADVANCE(175);
            LEX_ERROR();
        case 175:
            if (lookahead == 'g')
                ADVANCE(176);
            LEX_ERROR();
        case 176:
            ACCEPT_TOKEN(anon_sym_using);
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(29);
            if (lookahead == 's')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(179);
            ACCEPT_TOKEN(sym_identifier_name);
        case 179:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(80);
            ACCEPT_TOKEN(sym_identifier_name);
        case 180:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(180);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(29);
            LEX_ERROR();
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 182:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(182);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(183);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(184);
            LEX_ERROR();
        case 183:
            if (lookahead == 'e')
                ADVANCE(131);
            LEX_ERROR();
        case 184:
            if (lookahead == 'n')
                ADVANCE(168);
            LEX_ERROR();
        case 185:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(185);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 186:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(186);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(122);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(184);
            if (lookahead == '}')
                ADVANCE(99);
            LEX_ERROR();
        case 187:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(187);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 's')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            if (lookahead == 't')
                ADVANCE(189);
            LEX_ERROR();
        case 189:
            if (lookahead == 'r')
                ADVANCE(163);
            LEX_ERROR();
        case 190:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(190);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(122);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(184);
            LEX_ERROR();
        case 191:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(191);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 192:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(192);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(183);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(184);
            if (lookahead == '}')
                ADVANCE(99);
            LEX_ERROR();
        case 193:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(193);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 194:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(194);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        case 195:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(195);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 196:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(196);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 197:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(197);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 198:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(198);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        case 199:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(199);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(101);
            if (lookahead == 'c')
                ADVANCE(109);
            if (lookahead == 'i')
                ADVANCE(114);
            if (lookahead == 'n')
                ADVANCE(122);
            if (lookahead == 'p')
                ADVANCE(133);
            if (lookahead == 's')
                ADVANCE(152);
            if (lookahead == 'u')
                ADVANCE(184);
            if (lookahead == '}')
                ADVANCE(99);
            LEX_ERROR();
        case 200:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(200);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 201:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(201);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 202:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(202);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'f') ||
                (lookahead == 'h') ||
                ('j' <= lookahead && lookahead <= 'm') ||
                (lookahead == 'o') ||
                (lookahead == 'q') ||
                (lookahead == 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'c')
                ADVANCE(24);
            if (lookahead == 'g')
                ADVANCE(29);
            if (lookahead == 'i')
                ADVANCE(35);
            if (lookahead == 'n')
                ADVANCE(203);
            if (lookahead == 'p')
                ADVANCE(54);
            if (lookahead == 's')
                ADVANCE(73);
            if (lookahead == 'u')
                ADVANCE(204);
            LEX_ERROR();
        case 203:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 204:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 205:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(205);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '=')
                ADVANCE(13);
            if (lookahead == '>')
                ADVANCE(14);
            if (lookahead == '{')
                ADVANCE(98);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 100,
    [2] = 177,
    [3] = 180,
    [4] = 181,
    [5] = 181,
    [6] = 182,
    [7] = 185,
    [8] = 100,
    [9] = 186,
    [10] = 187,
    [11] = 100,
    [12] = 190,
    [13] = 182,
    [14] = 182,
    [15] = 186,
    [16] = 100,
    [17] = 190,
    [18] = 181,
    [19] = 181,
    [20] = 191,
    [21] = 192,
    [22] = 181,
    [23] = 193,
    [24] = 192,
    [25] = 186,
    [26] = 192,
    [27] = 192,
    [28] = 186,
    [29] = 192,
    [30] = 186,
    [31] = 192,
    [32] = 191,
    [33] = 192,
    [34] = 193,
    [35] = 192,
    [36] = 186,
    [37] = 192,
    [38] = 186,
    [39] = 186,
    [40] = 192,
    [41] = 191,
    [42] = 192,
    [43] = 193,
    [44] = 186,
    [45] = 192,
    [46] = 191,
    [47] = 192,
    [48] = 193,
    [49] = 186,
    [50] = 192,
    [51] = 194,
    [52] = 194,
    [53] = 181,
    [54] = 193,
    [55] = 194,
    [56] = 181,
    [57] = 193,
    [58] = 194,
    [59] = 194,
    [60] = 195,
    [61] = 196,
    [62] = 197,
    [63] = 181,
    [64] = 198,
    [65] = 199,
    [66] = 186,
    [67] = 199,
    [68] = 186,
    [69] = 181,
    [70] = 197,
    [71] = 180,
    [72] = 200,
    [73] = 201,
    [74] = 180,
    [75] = 201,
    [76] = 100,
    [77] = 100,
    [78] = 180,
    [79] = 100,
    [80] = 199,
    [81] = 186,
    [82] = 181,
    [83] = 181,
    [84] = 182,
    [85] = 202,
    [86] = 181,
    [87] = 193,
    [88] = 205,
    [89] = 100,
    [90] = 186,
    [91] = 186,
    [92] = 193,
    [93] = 194,
    [94] = 198,
    [95] = 186,
    [96] = 192,
    [97] = 186,
    [98] = 192,
    [99] = 186,
    [100] = 192,
    [101] = 186,
    [102] = 199,
    [103] = 186,
    [104] = 199,
    [105] = 192,
    [106] = 194,
    [107] = 191,
    [108] = 192,
    [109] = 193,
    [110] = 192,
    [111] = 186,
    [112] = 192,
    [113] = 186,
    [114] = 186,
    [115] = 192,
    [116] = 191,
    [117] = 192,
    [118] = 193,
    [119] = 192,
    [120] = 186,
    [121] = 192,
    [122] = 186,
    [123] = 186,
    [124] = 192,
    [125] = 186,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(7),
        [sym_using_directive] = STATE(89),
        [sym_namespace_declaration] = STATE(90),
        [sym_class_declaration] = STATE(91),
        [sym_struct_declaration] = STATE(91),
        [sym__type_modifiers] = STATE(10),
        [sym_type_parameter_list] = STATE(92),
        [sym_type_parameter] = STATE(93),
        [sym_qualified_name] = STATE(94),
        [sym_alias_qualified_name] = STATE(62),
        [sym_name_equals] = STATE(74),
        [sym_static] = STATE(74),
        [aux_sym_compilation_unit_repeat1] = STATE(11),
        [aux_sym_compilation_unit_repeat2] = STATE(95),
        [aux_sym_class_declaration_repeat1] = STATE(96),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [aux_sym_type_parameter_list_repeat1] = STATE(55),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_new] = ACTIONS(17),
        [anon_sym_public] = ACTIONS(17),
        [anon_sym_protected] = ACTIONS(17),
        [anon_sym_internal] = ACTIONS(17),
        [anon_sym_private] = ACTIONS(17),
        [anon_sym_abstract] = ACTIONS(17),
        [anon_sym_sealed] = ACTIONS(17),
        [anon_sym_static] = ACTIONS(19),
        [anon_sym_unsafe] = ACTIONS(17),
        [anon_sym_LT] = ACTIONS(21),
        [anon_sym_COMMA] = ACTIONS(23),
        [anon_sym_GT] = ACTIONS(25),
        [anon_sym_DOT] = ACTIONS(27),
        [anon_sym_COLON_COLON] = ACTIONS(29),
        [anon_sym_EQ] = ACTIONS(31),
        [sym_global] = ACTIONS(33),
        [sym_identifier_name] = ACTIONS(35),
        [sym_comment] = ACTIONS(37),
    },
    [1] = {
        [sym_compilation_unit] = STATE(7),
        [sym_using_directive] = STATE(8),
        [sym_namespace_declaration] = STATE(9),
        [sym_class_declaration] = STATE(9),
        [sym_struct_declaration] = STATE(9),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_compilation_unit_repeat1] = STATE(11),
        [aux_sym_compilation_unit_repeat2] = STATE(12),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(39),
        [anon_sym_using] = ACTIONS(41),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [2] = {
        [sym_qualified_name] = STATE(73),
        [sym_alias_qualified_name] = STATE(62),
        [sym_name_equals] = STATE(74),
        [sym_static] = STATE(74),
        [anon_sym_static] = ACTIONS(51),
        [sym_global] = ACTIONS(53),
        [sym_identifier_name] = ACTIONS(55),
        [sym_comment] = ACTIONS(37),
    },
    [3] = {
        [sym_qualified_name] = STATE(61),
        [sym_alias_qualified_name] = STATE(62),
        [sym_global] = ACTIONS(53),
        [sym_identifier_name] = ACTIONS(57),
        [sym_comment] = ACTIONS(37),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(59),
        [sym_comment] = ACTIONS(37),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(61),
        [sym_comment] = ACTIONS(37),
    },
    [6] = {
        [anon_sym_class] = ACTIONS(63),
        [anon_sym_struct] = ACTIONS(63),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_abstract] = ACTIONS(63),
        [anon_sym_sealed] = ACTIONS(63),
        [anon_sym_static] = ACTIONS(63),
        [anon_sym_unsafe] = ACTIONS(63),
        [sym_comment] = ACTIONS(37),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(65),
        [sym_comment] = ACTIONS(37),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_using] = ACTIONS(67),
        [anon_sym_namespace] = ACTIONS(67),
        [anon_sym_class] = ACTIONS(67),
        [anon_sym_struct] = ACTIONS(67),
        [anon_sym_new] = ACTIONS(67),
        [anon_sym_public] = ACTIONS(67),
        [anon_sym_protected] = ACTIONS(67),
        [anon_sym_internal] = ACTIONS(67),
        [anon_sym_private] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(67),
        [anon_sym_sealed] = ACTIONS(67),
        [anon_sym_static] = ACTIONS(67),
        [anon_sym_unsafe] = ACTIONS(67),
        [sym_comment] = ACTIONS(37),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(69),
        [anon_sym_namespace] = ACTIONS(69),
        [anon_sym_RBRACE] = ACTIONS(69),
        [anon_sym_class] = ACTIONS(69),
        [anon_sym_struct] = ACTIONS(69),
        [anon_sym_new] = ACTIONS(69),
        [anon_sym_public] = ACTIONS(69),
        [anon_sym_protected] = ACTIONS(69),
        [anon_sym_internal] = ACTIONS(69),
        [anon_sym_private] = ACTIONS(69),
        [anon_sym_abstract] = ACTIONS(69),
        [anon_sym_sealed] = ACTIONS(69),
        [anon_sym_static] = ACTIONS(69),
        [anon_sym_unsafe] = ACTIONS(69),
        [sym_comment] = ACTIONS(37),
    },
    [10] = {
        [anon_sym_class] = ACTIONS(71),
        [anon_sym_struct] = ACTIONS(73),
        [sym_comment] = ACTIONS(37),
    },
    [11] = {
        [sym_using_directive] = STATE(16),
        [sym_namespace_declaration] = STATE(9),
        [sym_class_declaration] = STATE(9),
        [sym_struct_declaration] = STATE(9),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_compilation_unit_repeat2] = STATE(17),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_using] = ACTIONS(41),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [12] = {
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(15),
        [sym_struct_declaration] = STATE(15),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(75),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [13] = {
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(79),
        [anon_sym_sealed] = ACTIONS(79),
        [anon_sym_static] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(37),
    },
    [14] = {
        [anon_sym_class] = ACTIONS(81),
        [anon_sym_struct] = ACTIONS(81),
        [anon_sym_new] = ACTIONS(81),
        [anon_sym_public] = ACTIONS(81),
        [anon_sym_protected] = ACTIONS(81),
        [anon_sym_internal] = ACTIONS(81),
        [anon_sym_private] = ACTIONS(81),
        [anon_sym_abstract] = ACTIONS(81),
        [anon_sym_sealed] = ACTIONS(81),
        [anon_sym_static] = ACTIONS(81),
        [anon_sym_unsafe] = ACTIONS(81),
        [sym_comment] = ACTIONS(37),
    },
    [15] = {
        [ts_builtin_sym_end] = ACTIONS(83),
        [anon_sym_namespace] = ACTIONS(83),
        [anon_sym_RBRACE] = ACTIONS(83),
        [anon_sym_class] = ACTIONS(83),
        [anon_sym_struct] = ACTIONS(83),
        [anon_sym_new] = ACTIONS(83),
        [anon_sym_public] = ACTIONS(83),
        [anon_sym_protected] = ACTIONS(83),
        [anon_sym_internal] = ACTIONS(83),
        [anon_sym_private] = ACTIONS(83),
        [anon_sym_abstract] = ACTIONS(83),
        [anon_sym_sealed] = ACTIONS(83),
        [anon_sym_static] = ACTIONS(83),
        [anon_sym_unsafe] = ACTIONS(83),
        [sym_comment] = ACTIONS(37),
    },
    [16] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_using] = ACTIONS(85),
        [anon_sym_namespace] = ACTIONS(85),
        [anon_sym_class] = ACTIONS(85),
        [anon_sym_struct] = ACTIONS(85),
        [anon_sym_new] = ACTIONS(85),
        [anon_sym_public] = ACTIONS(85),
        [anon_sym_protected] = ACTIONS(85),
        [anon_sym_internal] = ACTIONS(85),
        [anon_sym_private] = ACTIONS(85),
        [anon_sym_abstract] = ACTIONS(85),
        [anon_sym_sealed] = ACTIONS(85),
        [anon_sym_static] = ACTIONS(85),
        [anon_sym_unsafe] = ACTIONS(85),
        [sym_comment] = ACTIONS(37),
    },
    [17] = {
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(15),
        [sym_struct_declaration] = STATE(15),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [18] = {
        [sym_identifier_name] = ACTIONS(89),
        [sym_comment] = ACTIONS(37),
    },
    [19] = {
        [sym_identifier_name] = ACTIONS(91),
        [sym_comment] = ACTIONS(37),
    },
    [20] = {
        [sym_type_parameter_list] = STATE(23),
        [anon_sym_LBRACE] = ACTIONS(93),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [21] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(31),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [22] = {
        [sym_type_parameter] = STATE(52),
        [sym_identifier_name] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
    },
    [23] = {
        [anon_sym_LBRACE] = ACTIONS(101),
        [sym_comment] = ACTIONS(37),
    },
    [24] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(27),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [25] = {
        [ts_builtin_sym_end] = ACTIONS(105),
        [anon_sym_namespace] = ACTIONS(105),
        [anon_sym_RBRACE] = ACTIONS(105),
        [anon_sym_class] = ACTIONS(105),
        [anon_sym_struct] = ACTIONS(105),
        [anon_sym_new] = ACTIONS(105),
        [anon_sym_public] = ACTIONS(105),
        [anon_sym_protected] = ACTIONS(105),
        [anon_sym_internal] = ACTIONS(105),
        [anon_sym_private] = ACTIONS(105),
        [anon_sym_abstract] = ACTIONS(105),
        [anon_sym_sealed] = ACTIONS(105),
        [anon_sym_static] = ACTIONS(105),
        [anon_sym_unsafe] = ACTIONS(105),
        [sym_comment] = ACTIONS(37),
    },
    [26] = {
        [anon_sym_RBRACE] = ACTIONS(107),
        [anon_sym_class] = ACTIONS(107),
        [anon_sym_struct] = ACTIONS(107),
        [anon_sym_new] = ACTIONS(107),
        [anon_sym_public] = ACTIONS(107),
        [anon_sym_protected] = ACTIONS(107),
        [anon_sym_internal] = ACTIONS(107),
        [anon_sym_private] = ACTIONS(107),
        [anon_sym_abstract] = ACTIONS(107),
        [anon_sym_sealed] = ACTIONS(107),
        [anon_sym_static] = ACTIONS(107),
        [anon_sym_unsafe] = ACTIONS(107),
        [sym_comment] = ACTIONS(37),
    },
    [27] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_namespace] = ACTIONS(111),
        [anon_sym_RBRACE] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(111),
        [anon_sym_struct] = ACTIONS(111),
        [anon_sym_new] = ACTIONS(111),
        [anon_sym_public] = ACTIONS(111),
        [anon_sym_protected] = ACTIONS(111),
        [anon_sym_internal] = ACTIONS(111),
        [anon_sym_private] = ACTIONS(111),
        [anon_sym_abstract] = ACTIONS(111),
        [anon_sym_sealed] = ACTIONS(111),
        [anon_sym_static] = ACTIONS(111),
        [anon_sym_unsafe] = ACTIONS(111),
        [sym_comment] = ACTIONS(37),
    },
    [29] = {
        [anon_sym_RBRACE] = ACTIONS(113),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_unsafe] = ACTIONS(113),
        [sym_comment] = ACTIONS(37),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(115),
        [anon_sym_namespace] = ACTIONS(115),
        [anon_sym_RBRACE] = ACTIONS(115),
        [anon_sym_class] = ACTIONS(115),
        [anon_sym_struct] = ACTIONS(115),
        [anon_sym_new] = ACTIONS(115),
        [anon_sym_public] = ACTIONS(115),
        [anon_sym_protected] = ACTIONS(115),
        [anon_sym_internal] = ACTIONS(115),
        [anon_sym_private] = ACTIONS(115),
        [anon_sym_abstract] = ACTIONS(115),
        [anon_sym_sealed] = ACTIONS(115),
        [anon_sym_static] = ACTIONS(115),
        [anon_sym_unsafe] = ACTIONS(115),
        [sym_comment] = ACTIONS(37),
    },
    [31] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [32] = {
        [sym_type_parameter_list] = STATE(34),
        [anon_sym_LBRACE] = ACTIONS(117),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [33] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(40),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [34] = {
        [anon_sym_LBRACE] = ACTIONS(121),
        [sym_comment] = ACTIONS(37),
    },
    [35] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(37),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [36] = {
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_namespace] = ACTIONS(125),
        [anon_sym_RBRACE] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [anon_sym_struct] = ACTIONS(125),
        [anon_sym_new] = ACTIONS(125),
        [anon_sym_public] = ACTIONS(125),
        [anon_sym_protected] = ACTIONS(125),
        [anon_sym_internal] = ACTIONS(125),
        [anon_sym_private] = ACTIONS(125),
        [anon_sym_abstract] = ACTIONS(125),
        [anon_sym_sealed] = ACTIONS(125),
        [anon_sym_static] = ACTIONS(125),
        [anon_sym_unsafe] = ACTIONS(125),
        [sym_comment] = ACTIONS(37),
    },
    [37] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_namespace] = ACTIONS(129),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(129),
        [anon_sym_struct] = ACTIONS(129),
        [anon_sym_new] = ACTIONS(129),
        [anon_sym_public] = ACTIONS(129),
        [anon_sym_protected] = ACTIONS(129),
        [anon_sym_internal] = ACTIONS(129),
        [anon_sym_private] = ACTIONS(129),
        [anon_sym_abstract] = ACTIONS(129),
        [anon_sym_sealed] = ACTIONS(129),
        [anon_sym_static] = ACTIONS(129),
        [anon_sym_unsafe] = ACTIONS(129),
        [sym_comment] = ACTIONS(37),
    },
    [39] = {
        [ts_builtin_sym_end] = ACTIONS(131),
        [anon_sym_namespace] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(131),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(131),
        [anon_sym_new] = ACTIONS(131),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_protected] = ACTIONS(131),
        [anon_sym_internal] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_abstract] = ACTIONS(131),
        [anon_sym_sealed] = ACTIONS(131),
        [anon_sym_static] = ACTIONS(131),
        [anon_sym_unsafe] = ACTIONS(131),
        [sym_comment] = ACTIONS(37),
    },
    [40] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [41] = {
        [sym_type_parameter_list] = STATE(43),
        [anon_sym_LBRACE] = ACTIONS(133),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [42] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(45),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(135),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [43] = {
        [anon_sym_LBRACE] = ACTIONS(93),
        [sym_comment] = ACTIONS(37),
    },
    [44] = {
        [ts_builtin_sym_end] = ACTIONS(137),
        [anon_sym_namespace] = ACTIONS(137),
        [anon_sym_RBRACE] = ACTIONS(137),
        [anon_sym_class] = ACTIONS(137),
        [anon_sym_struct] = ACTIONS(137),
        [anon_sym_new] = ACTIONS(137),
        [anon_sym_public] = ACTIONS(137),
        [anon_sym_protected] = ACTIONS(137),
        [anon_sym_internal] = ACTIONS(137),
        [anon_sym_private] = ACTIONS(137),
        [anon_sym_abstract] = ACTIONS(137),
        [anon_sym_sealed] = ACTIONS(137),
        [anon_sym_static] = ACTIONS(137),
        [anon_sym_unsafe] = ACTIONS(137),
        [sym_comment] = ACTIONS(37),
    },
    [45] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [46] = {
        [sym_type_parameter_list] = STATE(48),
        [anon_sym_LBRACE] = ACTIONS(139),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [47] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(50),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [48] = {
        [anon_sym_LBRACE] = ACTIONS(117),
        [sym_comment] = ACTIONS(37),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(143),
        [anon_sym_namespace] = ACTIONS(143),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_class] = ACTIONS(143),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(143),
        [anon_sym_public] = ACTIONS(143),
        [anon_sym_protected] = ACTIONS(143),
        [anon_sym_internal] = ACTIONS(143),
        [anon_sym_private] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(143),
        [anon_sym_sealed] = ACTIONS(143),
        [anon_sym_static] = ACTIONS(143),
        [anon_sym_unsafe] = ACTIONS(143),
        [sym_comment] = ACTIONS(37),
    },
    [50] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [51] = {
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [sym_comment] = ACTIONS(37),
    },
    [52] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(147),
        [anon_sym_GT] = ACTIONS(149),
        [sym_comment] = ACTIONS(37),
    },
    [53] = {
        [sym_type_parameter] = STATE(59),
        [sym_identifier_name] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
    },
    [54] = {
        [anon_sym_LBRACE] = ACTIONS(151),
        [sym_comment] = ACTIONS(37),
    },
    [55] = {
        [anon_sym_COMMA] = ACTIONS(153),
        [anon_sym_GT] = ACTIONS(155),
        [sym_comment] = ACTIONS(37),
    },
    [56] = {
        [sym_type_parameter] = STATE(58),
        [sym_identifier_name] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
    },
    [57] = {
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_comment] = ACTIONS(37),
    },
    [58] = {
        [anon_sym_COMMA] = ACTIONS(159),
        [anon_sym_GT] = ACTIONS(159),
        [sym_comment] = ACTIONS(37),
    },
    [59] = {
        [anon_sym_COMMA] = ACTIONS(161),
        [anon_sym_GT] = ACTIONS(161),
        [sym_comment] = ACTIONS(37),
    },
    [60] = {
        [anon_sym_COLON_COLON] = ACTIONS(163),
        [sym_comment] = ACTIONS(37),
    },
    [61] = {
        [anon_sym_LBRACE] = ACTIONS(165),
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
    },
    [62] = {
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
    },
    [63] = {
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(37),
    },
    [64] = {
        [anon_sym_SEMI] = ACTIONS(171),
        [anon_sym_LBRACE] = ACTIONS(171),
        [anon_sym_DOT] = ACTIONS(171),
        [sym_comment] = ACTIONS(37),
    },
    [65] = {
        [sym_namespace_declaration] = STATE(9),
        [sym_class_declaration] = STATE(9),
        [sym_struct_declaration] = STATE(9),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_compilation_unit_repeat2] = STATE(67),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(173),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [66] = {
        [ts_builtin_sym_end] = ACTIONS(175),
        [anon_sym_namespace] = ACTIONS(175),
        [anon_sym_RBRACE] = ACTIONS(175),
        [anon_sym_class] = ACTIONS(175),
        [anon_sym_struct] = ACTIONS(175),
        [anon_sym_new] = ACTIONS(175),
        [anon_sym_public] = ACTIONS(175),
        [anon_sym_protected] = ACTIONS(175),
        [anon_sym_internal] = ACTIONS(175),
        [anon_sym_private] = ACTIONS(175),
        [anon_sym_abstract] = ACTIONS(175),
        [anon_sym_sealed] = ACTIONS(175),
        [anon_sym_static] = ACTIONS(175),
        [anon_sym_unsafe] = ACTIONS(175),
        [sym_comment] = ACTIONS(37),
    },
    [67] = {
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(15),
        [sym_struct_declaration] = STATE(15),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [68] = {
        [ts_builtin_sym_end] = ACTIONS(179),
        [anon_sym_namespace] = ACTIONS(179),
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(179),
        [anon_sym_struct] = ACTIONS(179),
        [anon_sym_new] = ACTIONS(179),
        [anon_sym_public] = ACTIONS(179),
        [anon_sym_protected] = ACTIONS(179),
        [anon_sym_internal] = ACTIONS(179),
        [anon_sym_private] = ACTIONS(179),
        [anon_sym_abstract] = ACTIONS(179),
        [anon_sym_sealed] = ACTIONS(179),
        [anon_sym_static] = ACTIONS(179),
        [anon_sym_unsafe] = ACTIONS(179),
        [sym_comment] = ACTIONS(37),
    },
    [69] = {
        [sym_identifier_name] = ACTIONS(181),
        [sym_comment] = ACTIONS(37),
    },
    [70] = {
        [anon_sym_DOT] = ACTIONS(183),
        [sym_comment] = ACTIONS(37),
    },
    [71] = {
        [sym_global] = ACTIONS(185),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(37),
    },
    [72] = {
        [anon_sym_SEMI] = ACTIONS(189),
        [anon_sym_DOT] = ACTIONS(167),
        [anon_sym_EQ] = ACTIONS(191),
        [sym_comment] = ACTIONS(37),
    },
    [73] = {
        [anon_sym_SEMI] = ACTIONS(189),
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
    },
    [74] = {
        [sym_qualified_name] = STATE(75),
        [sym_alias_qualified_name] = STATE(62),
        [sym_global] = ACTIONS(53),
        [sym_identifier_name] = ACTIONS(193),
        [sym_comment] = ACTIONS(37),
    },
    [75] = {
        [anon_sym_SEMI] = ACTIONS(195),
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
    },
    [76] = {
        [ts_builtin_sym_end] = ACTIONS(197),
        [anon_sym_using] = ACTIONS(197),
        [anon_sym_namespace] = ACTIONS(197),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_new] = ACTIONS(197),
        [anon_sym_public] = ACTIONS(197),
        [anon_sym_protected] = ACTIONS(197),
        [anon_sym_internal] = ACTIONS(197),
        [anon_sym_private] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(197),
        [anon_sym_sealed] = ACTIONS(197),
        [anon_sym_static] = ACTIONS(197),
        [anon_sym_unsafe] = ACTIONS(197),
        [sym_comment] = ACTIONS(37),
    },
    [77] = {
        [ts_builtin_sym_end] = ACTIONS(199),
        [anon_sym_using] = ACTIONS(199),
        [anon_sym_namespace] = ACTIONS(199),
        [anon_sym_class] = ACTIONS(199),
        [anon_sym_struct] = ACTIONS(199),
        [anon_sym_new] = ACTIONS(199),
        [anon_sym_public] = ACTIONS(199),
        [anon_sym_protected] = ACTIONS(199),
        [anon_sym_internal] = ACTIONS(199),
        [anon_sym_private] = ACTIONS(199),
        [anon_sym_abstract] = ACTIONS(199),
        [anon_sym_sealed] = ACTIONS(199),
        [anon_sym_static] = ACTIONS(199),
        [anon_sym_unsafe] = ACTIONS(199),
        [sym_comment] = ACTIONS(37),
    },
    [78] = {
        [sym_global] = ACTIONS(201),
        [sym_identifier_name] = ACTIONS(203),
        [sym_comment] = ACTIONS(37),
    },
    [79] = {
        [ts_builtin_sym_end] = ACTIONS(205),
        [anon_sym_using] = ACTIONS(205),
        [anon_sym_namespace] = ACTIONS(205),
        [anon_sym_class] = ACTIONS(205),
        [anon_sym_struct] = ACTIONS(205),
        [anon_sym_new] = ACTIONS(205),
        [anon_sym_public] = ACTIONS(205),
        [anon_sym_protected] = ACTIONS(205),
        [anon_sym_internal] = ACTIONS(205),
        [anon_sym_private] = ACTIONS(205),
        [anon_sym_abstract] = ACTIONS(205),
        [anon_sym_sealed] = ACTIONS(205),
        [anon_sym_static] = ACTIONS(205),
        [anon_sym_unsafe] = ACTIONS(205),
        [sym_comment] = ACTIONS(37),
    },
    [80] = {
        [sym_namespace_declaration] = STATE(9),
        [sym_class_declaration] = STATE(104),
        [sym_struct_declaration] = STATE(104),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_compilation_unit_repeat2] = STATE(67),
        [aux_sym_class_declaration_repeat1] = STATE(96),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(208),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [81] = {
        [ts_builtin_sym_end] = ACTIONS(210),
        [anon_sym_namespace] = ACTIONS(210),
        [anon_sym_RBRACE] = ACTIONS(210),
        [anon_sym_class] = ACTIONS(210),
        [anon_sym_struct] = ACTIONS(210),
        [anon_sym_new] = ACTIONS(210),
        [anon_sym_public] = ACTIONS(210),
        [anon_sym_protected] = ACTIONS(210),
        [anon_sym_internal] = ACTIONS(210),
        [anon_sym_private] = ACTIONS(210),
        [anon_sym_abstract] = ACTIONS(210),
        [anon_sym_sealed] = ACTIONS(210),
        [anon_sym_static] = ACTIONS(210),
        [anon_sym_unsafe] = ACTIONS(210),
        [sym_comment] = ACTIONS(37),
    },
    [82] = {
        [sym_identifier_name] = ACTIONS(221),
        [sym_comment] = ACTIONS(37),
    },
    [83] = {
        [sym_identifier_name] = ACTIONS(223),
        [sym_comment] = ACTIONS(37),
    },
    [84] = {
        [anon_sym_class] = ACTIONS(225),
        [anon_sym_struct] = ACTIONS(225),
        [anon_sym_new] = ACTIONS(225),
        [anon_sym_public] = ACTIONS(225),
        [anon_sym_protected] = ACTIONS(225),
        [anon_sym_internal] = ACTIONS(225),
        [anon_sym_private] = ACTIONS(225),
        [anon_sym_abstract] = ACTIONS(225),
        [anon_sym_sealed] = ACTIONS(225),
        [anon_sym_static] = ACTIONS(225),
        [anon_sym_unsafe] = ACTIONS(225),
        [sym_comment] = ACTIONS(37),
    },
    [85] = {
        [anon_sym_class] = ACTIONS(228),
        [anon_sym_struct] = ACTIONS(228),
        [anon_sym_new] = ACTIONS(228),
        [anon_sym_public] = ACTIONS(228),
        [anon_sym_protected] = ACTIONS(228),
        [anon_sym_internal] = ACTIONS(228),
        [anon_sym_private] = ACTIONS(228),
        [anon_sym_abstract] = ACTIONS(228),
        [anon_sym_sealed] = ACTIONS(228),
        [anon_sym_static] = ACTIONS(228),
        [anon_sym_unsafe] = ACTIONS(228),
        [sym_global] = ACTIONS(185),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(37),
    },
    [86] = {
        [sym_type_parameter] = STATE(106),
        [sym_identifier_name] = ACTIONS(99),
        [sym_comment] = ACTIONS(37),
    },
    [87] = {
        [anon_sym_LBRACE] = ACTIONS(231),
        [sym_comment] = ACTIONS(37),
    },
    [88] = {
        [sym_type_parameter_list] = STATE(92),
        [anon_sym_SEMI] = ACTIONS(234),
        [anon_sym_LBRACE] = ACTIONS(237),
        [anon_sym_LT] = ACTIONS(95),
        [anon_sym_COMMA] = ACTIONS(145),
        [anon_sym_GT] = ACTIONS(145),
        [anon_sym_DOT] = ACTIONS(240),
        [anon_sym_EQ] = ACTIONS(191),
        [sym_comment] = ACTIONS(37),
    },
    [89] = {
        [ts_builtin_sym_end] = ACTIONS(244),
        [anon_sym_using] = ACTIONS(244),
        [anon_sym_namespace] = ACTIONS(244),
        [anon_sym_class] = ACTIONS(244),
        [anon_sym_struct] = ACTIONS(244),
        [anon_sym_new] = ACTIONS(244),
        [anon_sym_public] = ACTIONS(244),
        [anon_sym_protected] = ACTIONS(244),
        [anon_sym_internal] = ACTIONS(244),
        [anon_sym_private] = ACTIONS(244),
        [anon_sym_abstract] = ACTIONS(244),
        [anon_sym_sealed] = ACTIONS(244),
        [anon_sym_static] = ACTIONS(244),
        [anon_sym_unsafe] = ACTIONS(244),
        [sym_comment] = ACTIONS(37),
    },
    [90] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(247),
        [anon_sym_class] = ACTIONS(247),
        [anon_sym_struct] = ACTIONS(247),
        [anon_sym_new] = ACTIONS(247),
        [anon_sym_public] = ACTIONS(247),
        [anon_sym_protected] = ACTIONS(247),
        [anon_sym_internal] = ACTIONS(247),
        [anon_sym_private] = ACTIONS(247),
        [anon_sym_abstract] = ACTIONS(247),
        [anon_sym_sealed] = ACTIONS(247),
        [anon_sym_static] = ACTIONS(247),
        [anon_sym_unsafe] = ACTIONS(247),
        [sym_comment] = ACTIONS(37),
    },
    [91] = {
        [ts_builtin_sym_end] = ACTIONS(247),
        [anon_sym_namespace] = ACTIONS(247),
        [anon_sym_RBRACE] = ACTIONS(250),
        [anon_sym_class] = ACTIONS(250),
        [anon_sym_struct] = ACTIONS(250),
        [anon_sym_new] = ACTIONS(250),
        [anon_sym_public] = ACTIONS(250),
        [anon_sym_protected] = ACTIONS(250),
        [anon_sym_internal] = ACTIONS(250),
        [anon_sym_private] = ACTIONS(250),
        [anon_sym_abstract] = ACTIONS(250),
        [anon_sym_sealed] = ACTIONS(250),
        [anon_sym_static] = ACTIONS(250),
        [anon_sym_unsafe] = ACTIONS(250),
        [sym_comment] = ACTIONS(37),
    },
    [92] = {
        [anon_sym_LBRACE] = ACTIONS(255),
        [sym_comment] = ACTIONS(37),
    },
    [93] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(55),
        [anon_sym_COMMA] = ACTIONS(257),
        [anon_sym_GT] = ACTIONS(261),
        [sym_comment] = ACTIONS(37),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(265),
        [anon_sym_LBRACE] = ACTIONS(165),
        [anon_sym_DOT] = ACTIONS(167),
        [sym_comment] = ACTIONS(37),
    },
    [95] = {
        [sym_namespace_declaration] = STATE(15),
        [sym_class_declaration] = STATE(15),
        [sym_struct_declaration] = STATE(15),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [ts_builtin_sym_end] = ACTIONS(267),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(177),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [96] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(270),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [97] = {
        [ts_builtin_sym_end] = ACTIONS(272),
        [anon_sym_namespace] = ACTIONS(272),
        [anon_sym_RBRACE] = ACTIONS(272),
        [anon_sym_class] = ACTIONS(272),
        [anon_sym_struct] = ACTIONS(272),
        [anon_sym_new] = ACTIONS(272),
        [anon_sym_public] = ACTIONS(272),
        [anon_sym_protected] = ACTIONS(272),
        [anon_sym_internal] = ACTIONS(272),
        [anon_sym_private] = ACTIONS(272),
        [anon_sym_abstract] = ACTIONS(272),
        [anon_sym_sealed] = ACTIONS(272),
        [anon_sym_static] = ACTIONS(272),
        [anon_sym_unsafe] = ACTIONS(272),
        [sym_comment] = ACTIONS(37),
    },
    [98] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(100),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [99] = {
        [ts_builtin_sym_end] = ACTIONS(281),
        [anon_sym_namespace] = ACTIONS(281),
        [anon_sym_RBRACE] = ACTIONS(281),
        [anon_sym_class] = ACTIONS(281),
        [anon_sym_struct] = ACTIONS(281),
        [anon_sym_new] = ACTIONS(281),
        [anon_sym_public] = ACTIONS(281),
        [anon_sym_protected] = ACTIONS(281),
        [anon_sym_internal] = ACTIONS(281),
        [anon_sym_private] = ACTIONS(281),
        [anon_sym_abstract] = ACTIONS(281),
        [anon_sym_sealed] = ACTIONS(281),
        [anon_sym_static] = ACTIONS(281),
        [anon_sym_unsafe] = ACTIONS(281),
        [sym_comment] = ACTIONS(37),
    },
    [100] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(286),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [101] = {
        [ts_builtin_sym_end] = ACTIONS(288),
        [anon_sym_namespace] = ACTIONS(288),
        [anon_sym_RBRACE] = ACTIONS(288),
        [anon_sym_class] = ACTIONS(288),
        [anon_sym_struct] = ACTIONS(288),
        [anon_sym_new] = ACTIONS(288),
        [anon_sym_public] = ACTIONS(288),
        [anon_sym_protected] = ACTIONS(288),
        [anon_sym_internal] = ACTIONS(288),
        [anon_sym_private] = ACTIONS(288),
        [anon_sym_abstract] = ACTIONS(288),
        [anon_sym_sealed] = ACTIONS(288),
        [anon_sym_static] = ACTIONS(288),
        [anon_sym_unsafe] = ACTIONS(288),
        [sym_comment] = ACTIONS(37),
    },
    [102] = {
        [sym_namespace_declaration] = STATE(9),
        [sym_class_declaration] = STATE(104),
        [sym_struct_declaration] = STATE(104),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_compilation_unit_repeat2] = STATE(67),
        [aux_sym_class_declaration_repeat1] = STATE(105),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_namespace] = ACTIONS(43),
        [anon_sym_RBRACE] = ACTIONS(293),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [103] = {
        [ts_builtin_sym_end] = ACTIONS(295),
        [anon_sym_namespace] = ACTIONS(295),
        [anon_sym_RBRACE] = ACTIONS(295),
        [anon_sym_class] = ACTIONS(295),
        [anon_sym_struct] = ACTIONS(295),
        [anon_sym_new] = ACTIONS(295),
        [anon_sym_public] = ACTIONS(295),
        [anon_sym_protected] = ACTIONS(295),
        [anon_sym_internal] = ACTIONS(295),
        [anon_sym_private] = ACTIONS(295),
        [anon_sym_abstract] = ACTIONS(295),
        [anon_sym_sealed] = ACTIONS(295),
        [anon_sym_static] = ACTIONS(295),
        [anon_sym_unsafe] = ACTIONS(295),
        [sym_comment] = ACTIONS(37),
    },
    [104] = {
        [anon_sym_namespace] = ACTIONS(69),
        [anon_sym_RBRACE] = ACTIONS(301),
        [anon_sym_class] = ACTIONS(301),
        [anon_sym_struct] = ACTIONS(301),
        [anon_sym_new] = ACTIONS(301),
        [anon_sym_public] = ACTIONS(301),
        [anon_sym_protected] = ACTIONS(301),
        [anon_sym_internal] = ACTIONS(301),
        [anon_sym_private] = ACTIONS(301),
        [anon_sym_abstract] = ACTIONS(301),
        [anon_sym_sealed] = ACTIONS(301),
        [anon_sym_static] = ACTIONS(301),
        [anon_sym_unsafe] = ACTIONS(301),
        [sym_comment] = ACTIONS(37),
    },
    [105] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(279),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [106] = {
        [anon_sym_COMMA] = ACTIONS(304),
        [anon_sym_GT] = ACTIONS(304),
        [sym_comment] = ACTIONS(37),
    },
    [107] = {
        [sym_type_parameter_list] = STATE(109),
        [anon_sym_LBRACE] = ACTIONS(307),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [108] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(115),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(309),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [109] = {
        [anon_sym_LBRACE] = ACTIONS(311),
        [sym_comment] = ACTIONS(37),
    },
    [110] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(112),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(315),
        [anon_sym_namespace] = ACTIONS(315),
        [anon_sym_RBRACE] = ACTIONS(315),
        [anon_sym_class] = ACTIONS(315),
        [anon_sym_struct] = ACTIONS(315),
        [anon_sym_new] = ACTIONS(315),
        [anon_sym_public] = ACTIONS(315),
        [anon_sym_protected] = ACTIONS(315),
        [anon_sym_internal] = ACTIONS(315),
        [anon_sym_private] = ACTIONS(315),
        [anon_sym_abstract] = ACTIONS(315),
        [anon_sym_sealed] = ACTIONS(315),
        [anon_sym_static] = ACTIONS(315),
        [anon_sym_unsafe] = ACTIONS(315),
        [sym_comment] = ACTIONS(37),
    },
    [112] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(318),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [113] = {
        [ts_builtin_sym_end] = ACTIONS(320),
        [anon_sym_namespace] = ACTIONS(320),
        [anon_sym_RBRACE] = ACTIONS(320),
        [anon_sym_class] = ACTIONS(320),
        [anon_sym_struct] = ACTIONS(320),
        [anon_sym_new] = ACTIONS(320),
        [anon_sym_public] = ACTIONS(320),
        [anon_sym_protected] = ACTIONS(320),
        [anon_sym_internal] = ACTIONS(320),
        [anon_sym_private] = ACTIONS(320),
        [anon_sym_abstract] = ACTIONS(320),
        [anon_sym_sealed] = ACTIONS(320),
        [anon_sym_static] = ACTIONS(320),
        [anon_sym_unsafe] = ACTIONS(320),
        [sym_comment] = ACTIONS(37),
    },
    [114] = {
        [ts_builtin_sym_end] = ACTIONS(323),
        [anon_sym_namespace] = ACTIONS(323),
        [anon_sym_RBRACE] = ACTIONS(323),
        [anon_sym_class] = ACTIONS(323),
        [anon_sym_struct] = ACTIONS(323),
        [anon_sym_new] = ACTIONS(323),
        [anon_sym_public] = ACTIONS(323),
        [anon_sym_protected] = ACTIONS(323),
        [anon_sym_internal] = ACTIONS(323),
        [anon_sym_private] = ACTIONS(323),
        [anon_sym_abstract] = ACTIONS(323),
        [anon_sym_sealed] = ACTIONS(323),
        [anon_sym_static] = ACTIONS(323),
        [anon_sym_unsafe] = ACTIONS(323),
        [sym_comment] = ACTIONS(37),
    },
    [115] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [116] = {
        [sym_type_parameter_list] = STATE(118),
        [anon_sym_LBRACE] = ACTIONS(326),
        [anon_sym_LT] = ACTIONS(95),
        [sym_comment] = ACTIONS(37),
    },
    [117] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(124),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(328),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [118] = {
        [anon_sym_LBRACE] = ACTIONS(330),
        [sym_comment] = ACTIONS(37),
    },
    [119] = {
        [sym_class_declaration] = STATE(26),
        [sym_struct_declaration] = STATE(26),
        [sym__type_modifiers] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(121),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(332),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [120] = {
        [ts_builtin_sym_end] = ACTIONS(334),
        [anon_sym_namespace] = ACTIONS(334),
        [anon_sym_RBRACE] = ACTIONS(334),
        [anon_sym_class] = ACTIONS(334),
        [anon_sym_struct] = ACTIONS(334),
        [anon_sym_new] = ACTIONS(334),
        [anon_sym_public] = ACTIONS(334),
        [anon_sym_protected] = ACTIONS(334),
        [anon_sym_internal] = ACTIONS(334),
        [anon_sym_private] = ACTIONS(334),
        [anon_sym_abstract] = ACTIONS(334),
        [anon_sym_sealed] = ACTIONS(334),
        [anon_sym_static] = ACTIONS(334),
        [anon_sym_unsafe] = ACTIONS(334),
        [sym_comment] = ACTIONS(37),
    },
    [121] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(337),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [122] = {
        [ts_builtin_sym_end] = ACTIONS(339),
        [anon_sym_namespace] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(339),
        [anon_sym_class] = ACTIONS(339),
        [anon_sym_struct] = ACTIONS(339),
        [anon_sym_new] = ACTIONS(339),
        [anon_sym_public] = ACTIONS(339),
        [anon_sym_protected] = ACTIONS(339),
        [anon_sym_internal] = ACTIONS(339),
        [anon_sym_private] = ACTIONS(339),
        [anon_sym_abstract] = ACTIONS(339),
        [anon_sym_sealed] = ACTIONS(339),
        [anon_sym_static] = ACTIONS(339),
        [anon_sym_unsafe] = ACTIONS(339),
        [sym_comment] = ACTIONS(37),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(342),
        [anon_sym_namespace] = ACTIONS(342),
        [anon_sym_RBRACE] = ACTIONS(342),
        [anon_sym_class] = ACTIONS(342),
        [anon_sym_struct] = ACTIONS(342),
        [anon_sym_new] = ACTIONS(342),
        [anon_sym_public] = ACTIONS(342),
        [anon_sym_protected] = ACTIONS(342),
        [anon_sym_internal] = ACTIONS(342),
        [anon_sym_private] = ACTIONS(342),
        [anon_sym_abstract] = ACTIONS(342),
        [anon_sym_sealed] = ACTIONS(342),
        [anon_sym_static] = ACTIONS(342),
        [anon_sym_unsafe] = ACTIONS(342),
        [sym_comment] = ACTIONS(37),
    },
    [124] = {
        [sym_class_declaration] = STATE(29),
        [sym_struct_declaration] = STATE(29),
        [sym__type_modifiers] = STATE(10),
        [aux_sym__type_modifiers_repeat1] = STATE(13),
        [anon_sym_RBRACE] = ACTIONS(332),
        [anon_sym_class] = ACTIONS(45),
        [anon_sym_struct] = ACTIONS(47),
        [anon_sym_new] = ACTIONS(49),
        [anon_sym_public] = ACTIONS(49),
        [anon_sym_protected] = ACTIONS(49),
        [anon_sym_internal] = ACTIONS(49),
        [anon_sym_private] = ACTIONS(49),
        [anon_sym_abstract] = ACTIONS(49),
        [anon_sym_sealed] = ACTIONS(49),
        [anon_sym_static] = ACTIONS(49),
        [anon_sym_unsafe] = ACTIONS(49),
        [sym_comment] = ACTIONS(37),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(345),
        [anon_sym_namespace] = ACTIONS(345),
        [anon_sym_RBRACE] = ACTIONS(345),
        [anon_sym_class] = ACTIONS(345),
        [anon_sym_struct] = ACTIONS(345),
        [anon_sym_new] = ACTIONS(345),
        [anon_sym_public] = ACTIONS(345),
        [anon_sym_protected] = ACTIONS(345),
        [anon_sym_internal] = ACTIONS(345),
        [anon_sym_private] = ACTIONS(345),
        [anon_sym_abstract] = ACTIONS(345),
        [anon_sym_sealed] = ACTIONS(345),
        [anon_sym_static] = ACTIONS(345),
        [anon_sym_unsafe] = ACTIONS(345),
        [sym_comment] = ACTIONS(37),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(79),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(80),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(81),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(82),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(83),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(84),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(85),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(22),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(86),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(87),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(63),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(69),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(78),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(60),
    [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(88),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
    [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
    [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_modifiers_repeat1, 1),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_modifiers, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_modifiers_repeat1, 2),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
    [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(66),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
    [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [187] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [205] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [210] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
    [225] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__type_modifiers_repeat1, 1), REDUCE(aux_sym__type_modifiers_repeat1, 2),
    [228] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__type_modifiers_repeat1, 1), REDUCE(aux_sym__type_modifiers_repeat1, 2),
    [231] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [234] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(79),
    [237] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(102),
    [240] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(63),
    [244] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [247] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [250] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [257] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(53),
    [261] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(54),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [267] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [272] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [281] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
    [288] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
    [295] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [301] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1),
    [304] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [307] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(108),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(110),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(111),
    [315] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(113),
    [320] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [323] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
    [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(119),
    [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
    [334] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(122),
    [339] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [342] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [345] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
