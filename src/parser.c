#include "tree_sitter/parser.h"

#define STATE_COUNT 93
#define SYMBOL_COUNT 39
#define TOKEN_COUNT 24

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_new = 6,
    anon_sym_public = 7,
    anon_sym_protected = 8,
    anon_sym_internal = 9,
    anon_sym_private = 10,
    anon_sym_abstract = 11,
    anon_sym_sealed = 12,
    anon_sym_static = 13,
    anon_sym_class = 14,
    anon_sym_LT = 15,
    anon_sym_COMMA = 16,
    anon_sym_GT = 17,
    anon_sym_DOT = 18,
    anon_sym_COLON_COLON = 19,
    anon_sym_EQ = 20,
    sym_global = 21,
    sym_identifier_name = 22,
    sym_comment = 23,
    sym_compilation_unit = 24,
    sym_using_directive = 25,
    sym_namespace_declaration = 26,
    sym_class_declaration = 27,
    sym_type_parameter_list = 28,
    sym_type_parameter = 29,
    sym_qualified_name = 30,
    sym_alias_qualified_name = 31,
    sym_name_equals = 32,
    sym_static = 33,
    aux_sym_compilation_unit_repeat1 = 34,
    aux_sym_compilation_unit_repeat2 = 35,
    aux_sym_class_declaration_repeat1 = 36,
    aux_sym_class_declaration_repeat2 = 37,
    aux_sym_type_parameter_list_repeat1 = 38,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_using] = "using",
    [anon_sym_SEMI] = ";",
    [anon_sym_namespace] = "namespace",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_class] = "class",
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
    [sym_type_parameter_list] = "type_parameter_list",
    [sym_type_parameter] = "type_parameter",
    [sym_qualified_name] = "qualified_name",
    [sym_alias_qualified_name] = "alias_qualified_name",
    [sym_name_equals] = "name_equals",
    [sym_static] = "static",
    [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
    [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym_class_declaration_repeat2] = "class_declaration_repeat2",
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
    [anon_sym_class] = {
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
    [aux_sym_class_declaration_repeat2] = {
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
                ADVANCE(84);
            if (lookahead == '{')
                ADVANCE(89);
            if (lookahead == '}')
                ADVANCE(90);
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
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(80);
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(85);
            ACCEPT_TOKEN(sym_identifier_name);
        case 85:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_using);
        case 89:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 90:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 91:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(91);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            if (lookahead == 'u')
                ADVANCE(154);
            LEX_ERROR();
        case 92:
            if (lookahead == 'b')
                ADVANCE(93);
            LEX_ERROR();
        case 93:
            if (lookahead == 's')
                ADVANCE(94);
            LEX_ERROR();
        case 94:
            if (lookahead == 't')
                ADVANCE(95);
            LEX_ERROR();
        case 95:
            if (lookahead == 'r')
                ADVANCE(96);
            LEX_ERROR();
        case 96:
            if (lookahead == 'a')
                ADVANCE(97);
            LEX_ERROR();
        case 97:
            if (lookahead == 'c')
                ADVANCE(98);
            LEX_ERROR();
        case 98:
            if (lookahead == 't')
                ADVANCE(99);
            LEX_ERROR();
        case 99:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 100:
            if (lookahead == 'l')
                ADVANCE(101);
            LEX_ERROR();
        case 101:
            if (lookahead == 'a')
                ADVANCE(102);
            LEX_ERROR();
        case 102:
            if (lookahead == 's')
                ADVANCE(103);
            LEX_ERROR();
        case 103:
            if (lookahead == 's')
                ADVANCE(104);
            LEX_ERROR();
        case 104:
            ACCEPT_TOKEN(anon_sym_class);
        case 105:
            if (lookahead == 'n')
                ADVANCE(106);
            LEX_ERROR();
        case 106:
            if (lookahead == 't')
                ADVANCE(107);
            LEX_ERROR();
        case 107:
            if (lookahead == 'e')
                ADVANCE(108);
            LEX_ERROR();
        case 108:
            if (lookahead == 'r')
                ADVANCE(109);
            LEX_ERROR();
        case 109:
            if (lookahead == 'n')
                ADVANCE(110);
            LEX_ERROR();
        case 110:
            if (lookahead == 'a')
                ADVANCE(111);
            LEX_ERROR();
        case 111:
            if (lookahead == 'l')
                ADVANCE(112);
            LEX_ERROR();
        case 112:
            ACCEPT_TOKEN(anon_sym_internal);
        case 113:
            if (lookahead == 'a')
                ADVANCE(114);
            if (lookahead == 'e')
                ADVANCE(122);
            LEX_ERROR();
        case 114:
            if (lookahead == 'm')
                ADVANCE(115);
            LEX_ERROR();
        case 115:
            if (lookahead == 'e')
                ADVANCE(116);
            LEX_ERROR();
        case 116:
            if (lookahead == 's')
                ADVANCE(117);
            LEX_ERROR();
        case 117:
            if (lookahead == 'p')
                ADVANCE(118);
            LEX_ERROR();
        case 118:
            if (lookahead == 'a')
                ADVANCE(119);
            LEX_ERROR();
        case 119:
            if (lookahead == 'c')
                ADVANCE(120);
            LEX_ERROR();
        case 120:
            if (lookahead == 'e')
                ADVANCE(121);
            LEX_ERROR();
        case 121:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 122:
            if (lookahead == 'w')
                ADVANCE(123);
            LEX_ERROR();
        case 123:
            ACCEPT_TOKEN(anon_sym_new);
        case 124:
            if (lookahead == 'r')
                ADVANCE(125);
            if (lookahead == 'u')
                ADVANCE(138);
            LEX_ERROR();
        case 125:
            if (lookahead == 'i')
                ADVANCE(126);
            if (lookahead == 'o')
                ADVANCE(131);
            LEX_ERROR();
        case 126:
            if (lookahead == 'v')
                ADVANCE(127);
            LEX_ERROR();
        case 127:
            if (lookahead == 'a')
                ADVANCE(128);
            LEX_ERROR();
        case 128:
            if (lookahead == 't')
                ADVANCE(129);
            LEX_ERROR();
        case 129:
            if (lookahead == 'e')
                ADVANCE(130);
            LEX_ERROR();
        case 130:
            ACCEPT_TOKEN(anon_sym_private);
        case 131:
            if (lookahead == 't')
                ADVANCE(132);
            LEX_ERROR();
        case 132:
            if (lookahead == 'e')
                ADVANCE(133);
            LEX_ERROR();
        case 133:
            if (lookahead == 'c')
                ADVANCE(134);
            LEX_ERROR();
        case 134:
            if (lookahead == 't')
                ADVANCE(135);
            LEX_ERROR();
        case 135:
            if (lookahead == 'e')
                ADVANCE(136);
            LEX_ERROR();
        case 136:
            if (lookahead == 'd')
                ADVANCE(137);
            LEX_ERROR();
        case 137:
            ACCEPT_TOKEN(anon_sym_protected);
        case 138:
            if (lookahead == 'b')
                ADVANCE(139);
            LEX_ERROR();
        case 139:
            if (lookahead == 'l')
                ADVANCE(140);
            LEX_ERROR();
        case 140:
            if (lookahead == 'i')
                ADVANCE(141);
            LEX_ERROR();
        case 141:
            if (lookahead == 'c')
                ADVANCE(142);
            LEX_ERROR();
        case 142:
            ACCEPT_TOKEN(anon_sym_public);
        case 143:
            if (lookahead == 'e')
                ADVANCE(144);
            if (lookahead == 't')
                ADVANCE(149);
            LEX_ERROR();
        case 144:
            if (lookahead == 'a')
                ADVANCE(145);
            LEX_ERROR();
        case 145:
            if (lookahead == 'l')
                ADVANCE(146);
            LEX_ERROR();
        case 146:
            if (lookahead == 'e')
                ADVANCE(147);
            LEX_ERROR();
        case 147:
            if (lookahead == 'd')
                ADVANCE(148);
            LEX_ERROR();
        case 148:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 149:
            if (lookahead == 'a')
                ADVANCE(150);
            LEX_ERROR();
        case 150:
            if (lookahead == 't')
                ADVANCE(151);
            LEX_ERROR();
        case 151:
            if (lookahead == 'i')
                ADVANCE(152);
            LEX_ERROR();
        case 152:
            if (lookahead == 'c')
                ADVANCE(153);
            LEX_ERROR();
        case 153:
            ACCEPT_TOKEN(anon_sym_static);
        case 154:
            if (lookahead == 's')
                ADVANCE(155);
            LEX_ERROR();
        case 155:
            if (lookahead == 'i')
                ADVANCE(156);
            LEX_ERROR();
        case 156:
            if (lookahead == 'n')
                ADVANCE(157);
            LEX_ERROR();
        case 157:
            if (lookahead == 'g')
                ADVANCE(158);
            LEX_ERROR();
        case 158:
            ACCEPT_TOKEN(anon_sym_using);
        case 159:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(159);
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
                ADVANCE(160);
            LEX_ERROR();
        case 160:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(161);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(29);
            LEX_ERROR();
        case 162:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(162);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(163);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            LEX_ERROR();
        case 163:
            if (lookahead == 'e')
                ADVANCE(122);
            LEX_ERROR();
        case 164:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(164);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 165:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(165);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 166:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(166);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            if (lookahead == '}')
                ADVANCE(90);
            LEX_ERROR();
        case 167:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(167);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            LEX_ERROR();
        case 168:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(168);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(89);
            LEX_ERROR();
        case 169:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(169);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(163);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            if (lookahead == '}')
                ADVANCE(90);
            LEX_ERROR();
        case 170:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(170);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(89);
            LEX_ERROR();
        case 171:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(171);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        case 172:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(172);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 173:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(173);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(89);
            LEX_ERROR();
        case 174:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(174);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 175:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(89);
            LEX_ERROR();
        case 176:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(176);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(92);
            if (lookahead == 'c')
                ADVANCE(100);
            if (lookahead == 'i')
                ADVANCE(105);
            if (lookahead == 'n')
                ADVANCE(113);
            if (lookahead == 'p')
                ADVANCE(124);
            if (lookahead == 's')
                ADVANCE(143);
            if (lookahead == '}')
                ADVANCE(90);
            LEX_ERROR();
        case 177:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(177);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 178:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(178);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 179:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(179);
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
                ('t' <= lookahead && lookahead <= 'z'))
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
                ADVANCE(180);
            if (lookahead == 'p')
                ADVANCE(54);
            if (lookahead == 's')
                ADVANCE(73);
            LEX_ERROR();
        case 180:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 181:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(181);
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
                ADVANCE(89);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 91,
    [2] = 159,
    [3] = 161,
    [4] = 162,
    [5] = 164,
    [6] = 165,
    [7] = 91,
    [8] = 166,
    [9] = 91,
    [10] = 167,
    [11] = 162,
    [12] = 162,
    [13] = 164,
    [14] = 168,
    [15] = 169,
    [16] = 164,
    [17] = 170,
    [18] = 169,
    [19] = 166,
    [20] = 169,
    [21] = 169,
    [22] = 166,
    [23] = 169,
    [24] = 166,
    [25] = 169,
    [26] = 168,
    [27] = 169,
    [28] = 170,
    [29] = 166,
    [30] = 169,
    [31] = 171,
    [32] = 171,
    [33] = 164,
    [34] = 170,
    [35] = 171,
    [36] = 164,
    [37] = 170,
    [38] = 171,
    [39] = 171,
    [40] = 166,
    [41] = 91,
    [42] = 167,
    [43] = 172,
    [44] = 173,
    [45] = 174,
    [46] = 164,
    [47] = 175,
    [48] = 176,
    [49] = 166,
    [50] = 176,
    [51] = 166,
    [52] = 164,
    [53] = 174,
    [54] = 161,
    [55] = 177,
    [56] = 178,
    [57] = 161,
    [58] = 178,
    [59] = 91,
    [60] = 91,
    [61] = 161,
    [62] = 91,
    [63] = 176,
    [64] = 166,
    [65] = 162,
    [66] = 179,
    [67] = 164,
    [68] = 164,
    [69] = 170,
    [70] = 181,
    [71] = 91,
    [72] = 166,
    [73] = 166,
    [74] = 170,
    [75] = 171,
    [76] = 175,
    [77] = 166,
    [78] = 169,
    [79] = 166,
    [80] = 169,
    [81] = 166,
    [82] = 169,
    [83] = 166,
    [84] = 176,
    [85] = 166,
    [86] = 176,
    [87] = 169,
    [88] = 171,
    [89] = 168,
    [90] = 169,
    [91] = 166,
    [92] = 166,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(6),
        [sym_using_directive] = STATE(71),
        [sym_namespace_declaration] = STATE(72),
        [sym_class_declaration] = STATE(73),
        [sym_type_parameter_list] = STATE(74),
        [sym_type_parameter] = STATE(75),
        [sym_qualified_name] = STATE(76),
        [sym_alias_qualified_name] = STATE(45),
        [sym_name_equals] = STATE(57),
        [sym_static] = STATE(57),
        [aux_sym_compilation_unit_repeat1] = STATE(9),
        [aux_sym_compilation_unit_repeat2] = STATE(77),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(78),
        [aux_sym_type_parameter_list_repeat1] = STATE(35),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_new] = ACTIONS(13),
        [anon_sym_public] = ACTIONS(13),
        [anon_sym_protected] = ACTIONS(13),
        [anon_sym_internal] = ACTIONS(13),
        [anon_sym_private] = ACTIONS(13),
        [anon_sym_abstract] = ACTIONS(13),
        [anon_sym_sealed] = ACTIONS(13),
        [anon_sym_static] = ACTIONS(15),
        [anon_sym_class] = ACTIONS(17),
        [anon_sym_LT] = ACTIONS(19),
        [anon_sym_COMMA] = ACTIONS(21),
        [anon_sym_GT] = ACTIONS(23),
        [anon_sym_DOT] = ACTIONS(25),
        [anon_sym_COLON_COLON] = ACTIONS(27),
        [anon_sym_EQ] = ACTIONS(29),
        [sym_global] = ACTIONS(31),
        [sym_identifier_name] = ACTIONS(33),
        [sym_comment] = ACTIONS(35),
    },
    [1] = {
        [sym_compilation_unit] = STATE(6),
        [sym_using_directive] = STATE(7),
        [sym_namespace_declaration] = STATE(8),
        [sym_class_declaration] = STATE(8),
        [aux_sym_compilation_unit_repeat1] = STATE(9),
        [aux_sym_compilation_unit_repeat2] = STATE(10),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(37),
        [anon_sym_using] = ACTIONS(39),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [2] = {
        [sym_qualified_name] = STATE(56),
        [sym_alias_qualified_name] = STATE(45),
        [sym_name_equals] = STATE(57),
        [sym_static] = STATE(57),
        [anon_sym_static] = ACTIONS(47),
        [sym_global] = ACTIONS(49),
        [sym_identifier_name] = ACTIONS(51),
        [sym_comment] = ACTIONS(35),
    },
    [3] = {
        [sym_qualified_name] = STATE(44),
        [sym_alias_qualified_name] = STATE(45),
        [sym_global] = ACTIONS(49),
        [sym_identifier_name] = ACTIONS(53),
        [sym_comment] = ACTIONS(35),
    },
    [4] = {
        [anon_sym_new] = ACTIONS(55),
        [anon_sym_public] = ACTIONS(55),
        [anon_sym_protected] = ACTIONS(55),
        [anon_sym_internal] = ACTIONS(55),
        [anon_sym_private] = ACTIONS(55),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_class] = ACTIONS(55),
        [sym_comment] = ACTIONS(35),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(57),
        [sym_comment] = ACTIONS(35),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(59),
        [sym_comment] = ACTIONS(35),
    },
    [7] = {
        [ts_builtin_sym_end] = ACTIONS(61),
        [anon_sym_using] = ACTIONS(61),
        [anon_sym_namespace] = ACTIONS(61),
        [anon_sym_new] = ACTIONS(61),
        [anon_sym_public] = ACTIONS(61),
        [anon_sym_protected] = ACTIONS(61),
        [anon_sym_internal] = ACTIONS(61),
        [anon_sym_private] = ACTIONS(61),
        [anon_sym_abstract] = ACTIONS(61),
        [anon_sym_sealed] = ACTIONS(61),
        [anon_sym_static] = ACTIONS(61),
        [anon_sym_class] = ACTIONS(61),
        [sym_comment] = ACTIONS(35),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(63),
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(63),
        [anon_sym_new] = ACTIONS(63),
        [anon_sym_public] = ACTIONS(63),
        [anon_sym_protected] = ACTIONS(63),
        [anon_sym_internal] = ACTIONS(63),
        [anon_sym_private] = ACTIONS(63),
        [anon_sym_abstract] = ACTIONS(63),
        [anon_sym_sealed] = ACTIONS(63),
        [anon_sym_static] = ACTIONS(63),
        [anon_sym_class] = ACTIONS(63),
        [sym_comment] = ACTIONS(35),
    },
    [9] = {
        [sym_using_directive] = STATE(41),
        [sym_namespace_declaration] = STATE(8),
        [sym_class_declaration] = STATE(8),
        [aux_sym_compilation_unit_repeat2] = STATE(42),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(65),
        [anon_sym_using] = ACTIONS(39),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [10] = {
        [sym_namespace_declaration] = STATE(40),
        [sym_class_declaration] = STATE(40),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(65),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [11] = {
        [anon_sym_new] = ACTIONS(67),
        [anon_sym_public] = ACTIONS(67),
        [anon_sym_protected] = ACTIONS(67),
        [anon_sym_internal] = ACTIONS(67),
        [anon_sym_private] = ACTIONS(67),
        [anon_sym_abstract] = ACTIONS(67),
        [anon_sym_sealed] = ACTIONS(67),
        [anon_sym_static] = ACTIONS(67),
        [anon_sym_class] = ACTIONS(69),
        [sym_comment] = ACTIONS(35),
    },
    [12] = {
        [anon_sym_new] = ACTIONS(71),
        [anon_sym_public] = ACTIONS(71),
        [anon_sym_protected] = ACTIONS(71),
        [anon_sym_internal] = ACTIONS(71),
        [anon_sym_private] = ACTIONS(71),
        [anon_sym_abstract] = ACTIONS(71),
        [anon_sym_sealed] = ACTIONS(71),
        [anon_sym_static] = ACTIONS(71),
        [anon_sym_class] = ACTIONS(71),
        [sym_comment] = ACTIONS(35),
    },
    [13] = {
        [sym_identifier_name] = ACTIONS(73),
        [sym_comment] = ACTIONS(35),
    },
    [14] = {
        [sym_type_parameter_list] = STATE(17),
        [anon_sym_LBRACE] = ACTIONS(75),
        [anon_sym_LT] = ACTIONS(77),
        [sym_comment] = ACTIONS(35),
    },
    [15] = {
        [sym_class_declaration] = STATE(20),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(25),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [16] = {
        [sym_type_parameter] = STATE(32),
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(35),
    },
    [17] = {
        [anon_sym_LBRACE] = ACTIONS(83),
        [sym_comment] = ACTIONS(35),
    },
    [18] = {
        [sym_class_declaration] = STATE(20),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(21),
        [anon_sym_RBRACE] = ACTIONS(85),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [19] = {
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_namespace] = ACTIONS(87),
        [anon_sym_RBRACE] = ACTIONS(87),
        [anon_sym_new] = ACTIONS(87),
        [anon_sym_public] = ACTIONS(87),
        [anon_sym_protected] = ACTIONS(87),
        [anon_sym_internal] = ACTIONS(87),
        [anon_sym_private] = ACTIONS(87),
        [anon_sym_abstract] = ACTIONS(87),
        [anon_sym_sealed] = ACTIONS(87),
        [anon_sym_static] = ACTIONS(87),
        [anon_sym_class] = ACTIONS(87),
        [sym_comment] = ACTIONS(35),
    },
    [20] = {
        [anon_sym_RBRACE] = ACTIONS(89),
        [anon_sym_new] = ACTIONS(89),
        [anon_sym_public] = ACTIONS(89),
        [anon_sym_protected] = ACTIONS(89),
        [anon_sym_internal] = ACTIONS(89),
        [anon_sym_private] = ACTIONS(89),
        [anon_sym_abstract] = ACTIONS(89),
        [anon_sym_sealed] = ACTIONS(89),
        [anon_sym_static] = ACTIONS(89),
        [anon_sym_class] = ACTIONS(89),
        [sym_comment] = ACTIONS(35),
    },
    [21] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(91),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [22] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_RBRACE] = ACTIONS(93),
        [anon_sym_new] = ACTIONS(93),
        [anon_sym_public] = ACTIONS(93),
        [anon_sym_protected] = ACTIONS(93),
        [anon_sym_internal] = ACTIONS(93),
        [anon_sym_private] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(93),
        [anon_sym_sealed] = ACTIONS(93),
        [anon_sym_static] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(93),
        [sym_comment] = ACTIONS(35),
    },
    [23] = {
        [anon_sym_RBRACE] = ACTIONS(95),
        [anon_sym_new] = ACTIONS(95),
        [anon_sym_public] = ACTIONS(95),
        [anon_sym_protected] = ACTIONS(95),
        [anon_sym_internal] = ACTIONS(95),
        [anon_sym_private] = ACTIONS(95),
        [anon_sym_abstract] = ACTIONS(95),
        [anon_sym_sealed] = ACTIONS(95),
        [anon_sym_static] = ACTIONS(95),
        [anon_sym_class] = ACTIONS(95),
        [sym_comment] = ACTIONS(35),
    },
    [24] = {
        [ts_builtin_sym_end] = ACTIONS(97),
        [anon_sym_namespace] = ACTIONS(97),
        [anon_sym_RBRACE] = ACTIONS(97),
        [anon_sym_new] = ACTIONS(97),
        [anon_sym_public] = ACTIONS(97),
        [anon_sym_protected] = ACTIONS(97),
        [anon_sym_internal] = ACTIONS(97),
        [anon_sym_private] = ACTIONS(97),
        [anon_sym_abstract] = ACTIONS(97),
        [anon_sym_sealed] = ACTIONS(97),
        [anon_sym_static] = ACTIONS(97),
        [anon_sym_class] = ACTIONS(97),
        [sym_comment] = ACTIONS(35),
    },
    [25] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(85),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [26] = {
        [sym_type_parameter_list] = STATE(28),
        [anon_sym_LBRACE] = ACTIONS(99),
        [anon_sym_LT] = ACTIONS(77),
        [sym_comment] = ACTIONS(35),
    },
    [27] = {
        [sym_class_declaration] = STATE(20),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(30),
        [anon_sym_RBRACE] = ACTIONS(101),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [28] = {
        [anon_sym_LBRACE] = ACTIONS(75),
        [sym_comment] = ACTIONS(35),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(103),
        [anon_sym_namespace] = ACTIONS(103),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_new] = ACTIONS(103),
        [anon_sym_public] = ACTIONS(103),
        [anon_sym_protected] = ACTIONS(103),
        [anon_sym_internal] = ACTIONS(103),
        [anon_sym_private] = ACTIONS(103),
        [anon_sym_abstract] = ACTIONS(103),
        [anon_sym_sealed] = ACTIONS(103),
        [anon_sym_static] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(103),
        [sym_comment] = ACTIONS(35),
    },
    [30] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [31] = {
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(105),
        [sym_comment] = ACTIONS(35),
    },
    [32] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(35),
        [anon_sym_COMMA] = ACTIONS(107),
        [anon_sym_GT] = ACTIONS(109),
        [sym_comment] = ACTIONS(35),
    },
    [33] = {
        [sym_type_parameter] = STATE(39),
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(35),
    },
    [34] = {
        [anon_sym_LBRACE] = ACTIONS(111),
        [sym_comment] = ACTIONS(35),
    },
    [35] = {
        [anon_sym_COMMA] = ACTIONS(113),
        [anon_sym_GT] = ACTIONS(115),
        [sym_comment] = ACTIONS(35),
    },
    [36] = {
        [sym_type_parameter] = STATE(38),
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(35),
    },
    [37] = {
        [anon_sym_LBRACE] = ACTIONS(117),
        [sym_comment] = ACTIONS(35),
    },
    [38] = {
        [anon_sym_COMMA] = ACTIONS(119),
        [anon_sym_GT] = ACTIONS(119),
        [sym_comment] = ACTIONS(35),
    },
    [39] = {
        [anon_sym_COMMA] = ACTIONS(121),
        [anon_sym_GT] = ACTIONS(121),
        [sym_comment] = ACTIONS(35),
    },
    [40] = {
        [ts_builtin_sym_end] = ACTIONS(123),
        [anon_sym_namespace] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(123),
        [anon_sym_new] = ACTIONS(123),
        [anon_sym_public] = ACTIONS(123),
        [anon_sym_protected] = ACTIONS(123),
        [anon_sym_internal] = ACTIONS(123),
        [anon_sym_private] = ACTIONS(123),
        [anon_sym_abstract] = ACTIONS(123),
        [anon_sym_sealed] = ACTIONS(123),
        [anon_sym_static] = ACTIONS(123),
        [anon_sym_class] = ACTIONS(123),
        [sym_comment] = ACTIONS(35),
    },
    [41] = {
        [ts_builtin_sym_end] = ACTIONS(125),
        [anon_sym_using] = ACTIONS(125),
        [anon_sym_namespace] = ACTIONS(125),
        [anon_sym_new] = ACTIONS(125),
        [anon_sym_public] = ACTIONS(125),
        [anon_sym_protected] = ACTIONS(125),
        [anon_sym_internal] = ACTIONS(125),
        [anon_sym_private] = ACTIONS(125),
        [anon_sym_abstract] = ACTIONS(125),
        [anon_sym_sealed] = ACTIONS(125),
        [anon_sym_static] = ACTIONS(125),
        [anon_sym_class] = ACTIONS(125),
        [sym_comment] = ACTIONS(35),
    },
    [42] = {
        [sym_namespace_declaration] = STATE(40),
        [sym_class_declaration] = STATE(40),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(127),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [43] = {
        [anon_sym_COLON_COLON] = ACTIONS(129),
        [sym_comment] = ACTIONS(35),
    },
    [44] = {
        [anon_sym_LBRACE] = ACTIONS(131),
        [anon_sym_DOT] = ACTIONS(133),
        [sym_comment] = ACTIONS(35),
    },
    [45] = {
        [anon_sym_DOT] = ACTIONS(133),
        [sym_comment] = ACTIONS(35),
    },
    [46] = {
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(35),
    },
    [47] = {
        [anon_sym_SEMI] = ACTIONS(137),
        [anon_sym_LBRACE] = ACTIONS(137),
        [anon_sym_DOT] = ACTIONS(137),
        [sym_comment] = ACTIONS(35),
    },
    [48] = {
        [sym_namespace_declaration] = STATE(8),
        [sym_class_declaration] = STATE(8),
        [aux_sym_compilation_unit_repeat2] = STATE(50),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [49] = {
        [ts_builtin_sym_end] = ACTIONS(141),
        [anon_sym_namespace] = ACTIONS(141),
        [anon_sym_RBRACE] = ACTIONS(141),
        [anon_sym_new] = ACTIONS(141),
        [anon_sym_public] = ACTIONS(141),
        [anon_sym_protected] = ACTIONS(141),
        [anon_sym_internal] = ACTIONS(141),
        [anon_sym_private] = ACTIONS(141),
        [anon_sym_abstract] = ACTIONS(141),
        [anon_sym_sealed] = ACTIONS(141),
        [anon_sym_static] = ACTIONS(141),
        [anon_sym_class] = ACTIONS(141),
        [sym_comment] = ACTIONS(35),
    },
    [50] = {
        [sym_namespace_declaration] = STATE(40),
        [sym_class_declaration] = STATE(40),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [51] = {
        [ts_builtin_sym_end] = ACTIONS(145),
        [anon_sym_namespace] = ACTIONS(145),
        [anon_sym_RBRACE] = ACTIONS(145),
        [anon_sym_new] = ACTIONS(145),
        [anon_sym_public] = ACTIONS(145),
        [anon_sym_protected] = ACTIONS(145),
        [anon_sym_internal] = ACTIONS(145),
        [anon_sym_private] = ACTIONS(145),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(145),
        [anon_sym_class] = ACTIONS(145),
        [sym_comment] = ACTIONS(35),
    },
    [52] = {
        [sym_identifier_name] = ACTIONS(147),
        [sym_comment] = ACTIONS(35),
    },
    [53] = {
        [anon_sym_DOT] = ACTIONS(149),
        [sym_comment] = ACTIONS(35),
    },
    [54] = {
        [sym_global] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(35),
    },
    [55] = {
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_DOT] = ACTIONS(133),
        [anon_sym_EQ] = ACTIONS(157),
        [sym_comment] = ACTIONS(35),
    },
    [56] = {
        [anon_sym_SEMI] = ACTIONS(155),
        [anon_sym_DOT] = ACTIONS(133),
        [sym_comment] = ACTIONS(35),
    },
    [57] = {
        [sym_qualified_name] = STATE(58),
        [sym_alias_qualified_name] = STATE(45),
        [sym_global] = ACTIONS(49),
        [sym_identifier_name] = ACTIONS(159),
        [sym_comment] = ACTIONS(35),
    },
    [58] = {
        [anon_sym_SEMI] = ACTIONS(161),
        [anon_sym_DOT] = ACTIONS(133),
        [sym_comment] = ACTIONS(35),
    },
    [59] = {
        [ts_builtin_sym_end] = ACTIONS(163),
        [anon_sym_using] = ACTIONS(163),
        [anon_sym_namespace] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_class] = ACTIONS(163),
        [sym_comment] = ACTIONS(35),
    },
    [60] = {
        [ts_builtin_sym_end] = ACTIONS(165),
        [anon_sym_using] = ACTIONS(165),
        [anon_sym_namespace] = ACTIONS(165),
        [anon_sym_new] = ACTIONS(165),
        [anon_sym_public] = ACTIONS(165),
        [anon_sym_protected] = ACTIONS(165),
        [anon_sym_internal] = ACTIONS(165),
        [anon_sym_private] = ACTIONS(165),
        [anon_sym_abstract] = ACTIONS(165),
        [anon_sym_sealed] = ACTIONS(165),
        [anon_sym_static] = ACTIONS(165),
        [anon_sym_class] = ACTIONS(165),
        [sym_comment] = ACTIONS(35),
    },
    [61] = {
        [sym_global] = ACTIONS(167),
        [sym_identifier_name] = ACTIONS(169),
        [sym_comment] = ACTIONS(35),
    },
    [62] = {
        [ts_builtin_sym_end] = ACTIONS(171),
        [anon_sym_using] = ACTIONS(171),
        [anon_sym_namespace] = ACTIONS(171),
        [anon_sym_new] = ACTIONS(171),
        [anon_sym_public] = ACTIONS(171),
        [anon_sym_protected] = ACTIONS(171),
        [anon_sym_internal] = ACTIONS(171),
        [anon_sym_private] = ACTIONS(171),
        [anon_sym_abstract] = ACTIONS(171),
        [anon_sym_sealed] = ACTIONS(171),
        [anon_sym_static] = ACTIONS(171),
        [anon_sym_class] = ACTIONS(171),
        [sym_comment] = ACTIONS(35),
    },
    [63] = {
        [sym_namespace_declaration] = STATE(8),
        [sym_class_declaration] = STATE(86),
        [aux_sym_compilation_unit_repeat2] = STATE(50),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(78),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(174),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [64] = {
        [ts_builtin_sym_end] = ACTIONS(176),
        [anon_sym_namespace] = ACTIONS(176),
        [anon_sym_RBRACE] = ACTIONS(176),
        [anon_sym_new] = ACTIONS(176),
        [anon_sym_public] = ACTIONS(176),
        [anon_sym_protected] = ACTIONS(176),
        [anon_sym_internal] = ACTIONS(176),
        [anon_sym_private] = ACTIONS(176),
        [anon_sym_abstract] = ACTIONS(176),
        [anon_sym_sealed] = ACTIONS(176),
        [anon_sym_static] = ACTIONS(176),
        [anon_sym_class] = ACTIONS(176),
        [sym_comment] = ACTIONS(35),
    },
    [65] = {
        [anon_sym_new] = ACTIONS(183),
        [anon_sym_public] = ACTIONS(183),
        [anon_sym_protected] = ACTIONS(183),
        [anon_sym_internal] = ACTIONS(183),
        [anon_sym_private] = ACTIONS(183),
        [anon_sym_abstract] = ACTIONS(183),
        [anon_sym_sealed] = ACTIONS(183),
        [anon_sym_static] = ACTIONS(183),
        [anon_sym_class] = ACTIONS(183),
        [sym_comment] = ACTIONS(35),
    },
    [66] = {
        [anon_sym_new] = ACTIONS(186),
        [anon_sym_public] = ACTIONS(186),
        [anon_sym_protected] = ACTIONS(186),
        [anon_sym_internal] = ACTIONS(186),
        [anon_sym_private] = ACTIONS(186),
        [anon_sym_abstract] = ACTIONS(186),
        [anon_sym_sealed] = ACTIONS(186),
        [anon_sym_static] = ACTIONS(186),
        [anon_sym_class] = ACTIONS(186),
        [sym_global] = ACTIONS(151),
        [sym_identifier_name] = ACTIONS(153),
        [sym_comment] = ACTIONS(35),
    },
    [67] = {
        [sym_identifier_name] = ACTIONS(189),
        [sym_comment] = ACTIONS(35),
    },
    [68] = {
        [sym_type_parameter] = STATE(88),
        [sym_identifier_name] = ACTIONS(81),
        [sym_comment] = ACTIONS(35),
    },
    [69] = {
        [anon_sym_LBRACE] = ACTIONS(191),
        [sym_comment] = ACTIONS(35),
    },
    [70] = {
        [sym_type_parameter_list] = STATE(74),
        [anon_sym_SEMI] = ACTIONS(194),
        [anon_sym_LBRACE] = ACTIONS(197),
        [anon_sym_LT] = ACTIONS(77),
        [anon_sym_COMMA] = ACTIONS(105),
        [anon_sym_GT] = ACTIONS(105),
        [anon_sym_DOT] = ACTIONS(200),
        [anon_sym_EQ] = ACTIONS(157),
        [sym_comment] = ACTIONS(35),
    },
    [71] = {
        [ts_builtin_sym_end] = ACTIONS(204),
        [anon_sym_using] = ACTIONS(204),
        [anon_sym_namespace] = ACTIONS(204),
        [anon_sym_new] = ACTIONS(204),
        [anon_sym_public] = ACTIONS(204),
        [anon_sym_protected] = ACTIONS(204),
        [anon_sym_internal] = ACTIONS(204),
        [anon_sym_private] = ACTIONS(204),
        [anon_sym_abstract] = ACTIONS(204),
        [anon_sym_sealed] = ACTIONS(204),
        [anon_sym_static] = ACTIONS(204),
        [anon_sym_class] = ACTIONS(204),
        [sym_comment] = ACTIONS(35),
    },
    [72] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_namespace] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(207),
        [anon_sym_new] = ACTIONS(207),
        [anon_sym_public] = ACTIONS(207),
        [anon_sym_protected] = ACTIONS(207),
        [anon_sym_internal] = ACTIONS(207),
        [anon_sym_private] = ACTIONS(207),
        [anon_sym_abstract] = ACTIONS(207),
        [anon_sym_sealed] = ACTIONS(207),
        [anon_sym_static] = ACTIONS(207),
        [anon_sym_class] = ACTIONS(207),
        [sym_comment] = ACTIONS(35),
    },
    [73] = {
        [ts_builtin_sym_end] = ACTIONS(207),
        [anon_sym_namespace] = ACTIONS(207),
        [anon_sym_RBRACE] = ACTIONS(210),
        [anon_sym_new] = ACTIONS(210),
        [anon_sym_public] = ACTIONS(210),
        [anon_sym_protected] = ACTIONS(210),
        [anon_sym_internal] = ACTIONS(210),
        [anon_sym_private] = ACTIONS(210),
        [anon_sym_abstract] = ACTIONS(210),
        [anon_sym_sealed] = ACTIONS(210),
        [anon_sym_static] = ACTIONS(210),
        [anon_sym_class] = ACTIONS(210),
        [sym_comment] = ACTIONS(35),
    },
    [74] = {
        [anon_sym_LBRACE] = ACTIONS(215),
        [sym_comment] = ACTIONS(35),
    },
    [75] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(35),
        [anon_sym_COMMA] = ACTIONS(217),
        [anon_sym_GT] = ACTIONS(221),
        [sym_comment] = ACTIONS(35),
    },
    [76] = {
        [anon_sym_SEMI] = ACTIONS(225),
        [anon_sym_LBRACE] = ACTIONS(131),
        [anon_sym_DOT] = ACTIONS(133),
        [sym_comment] = ACTIONS(35),
    },
    [77] = {
        [sym_namespace_declaration] = STATE(40),
        [sym_class_declaration] = STATE(40),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(227),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(143),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [78] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(230),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [79] = {
        [ts_builtin_sym_end] = ACTIONS(232),
        [anon_sym_namespace] = ACTIONS(232),
        [anon_sym_RBRACE] = ACTIONS(232),
        [anon_sym_new] = ACTIONS(232),
        [anon_sym_public] = ACTIONS(232),
        [anon_sym_protected] = ACTIONS(232),
        [anon_sym_internal] = ACTIONS(232),
        [anon_sym_private] = ACTIONS(232),
        [anon_sym_abstract] = ACTIONS(232),
        [anon_sym_sealed] = ACTIONS(232),
        [anon_sym_static] = ACTIONS(232),
        [anon_sym_class] = ACTIONS(232),
        [sym_comment] = ACTIONS(35),
    },
    [80] = {
        [sym_class_declaration] = STATE(20),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(82),
        [anon_sym_RBRACE] = ACTIONS(236),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [81] = {
        [ts_builtin_sym_end] = ACTIONS(238),
        [anon_sym_namespace] = ACTIONS(238),
        [anon_sym_RBRACE] = ACTIONS(238),
        [anon_sym_new] = ACTIONS(238),
        [anon_sym_public] = ACTIONS(238),
        [anon_sym_protected] = ACTIONS(238),
        [anon_sym_internal] = ACTIONS(238),
        [anon_sym_private] = ACTIONS(238),
        [anon_sym_abstract] = ACTIONS(238),
        [anon_sym_sealed] = ACTIONS(238),
        [anon_sym_static] = ACTIONS(238),
        [anon_sym_class] = ACTIONS(238),
        [sym_comment] = ACTIONS(35),
    },
    [82] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(241),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [83] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(243),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_new] = ACTIONS(243),
        [anon_sym_public] = ACTIONS(243),
        [anon_sym_protected] = ACTIONS(243),
        [anon_sym_internal] = ACTIONS(243),
        [anon_sym_private] = ACTIONS(243),
        [anon_sym_abstract] = ACTIONS(243),
        [anon_sym_sealed] = ACTIONS(243),
        [anon_sym_static] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(243),
        [sym_comment] = ACTIONS(35),
    },
    [84] = {
        [sym_namespace_declaration] = STATE(8),
        [sym_class_declaration] = STATE(86),
        [aux_sym_compilation_unit_repeat2] = STATE(50),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(87),
        [anon_sym_namespace] = ACTIONS(41),
        [anon_sym_RBRACE] = ACTIONS(246),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [85] = {
        [ts_builtin_sym_end] = ACTIONS(248),
        [anon_sym_namespace] = ACTIONS(248),
        [anon_sym_RBRACE] = ACTIONS(248),
        [anon_sym_new] = ACTIONS(248),
        [anon_sym_public] = ACTIONS(248),
        [anon_sym_protected] = ACTIONS(248),
        [anon_sym_internal] = ACTIONS(248),
        [anon_sym_private] = ACTIONS(248),
        [anon_sym_abstract] = ACTIONS(248),
        [anon_sym_sealed] = ACTIONS(248),
        [anon_sym_static] = ACTIONS(248),
        [anon_sym_class] = ACTIONS(248),
        [sym_comment] = ACTIONS(35),
    },
    [86] = {
        [anon_sym_namespace] = ACTIONS(63),
        [anon_sym_RBRACE] = ACTIONS(252),
        [anon_sym_new] = ACTIONS(252),
        [anon_sym_public] = ACTIONS(252),
        [anon_sym_protected] = ACTIONS(252),
        [anon_sym_internal] = ACTIONS(252),
        [anon_sym_private] = ACTIONS(252),
        [anon_sym_abstract] = ACTIONS(252),
        [anon_sym_sealed] = ACTIONS(252),
        [anon_sym_static] = ACTIONS(252),
        [anon_sym_class] = ACTIONS(252),
        [sym_comment] = ACTIONS(35),
    },
    [87] = {
        [sym_class_declaration] = STATE(23),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [anon_sym_RBRACE] = ACTIONS(236),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [88] = {
        [anon_sym_COMMA] = ACTIONS(255),
        [anon_sym_GT] = ACTIONS(255),
        [sym_comment] = ACTIONS(35),
    },
    [89] = {
        [sym_type_parameter_list] = STATE(74),
        [anon_sym_LBRACE] = ACTIONS(258),
        [anon_sym_LT] = ACTIONS(77),
        [sym_comment] = ACTIONS(35),
    },
    [90] = {
        [sym_class_declaration] = STATE(20),
        [aux_sym_class_declaration_repeat1] = STATE(11),
        [aux_sym_class_declaration_repeat2] = STATE(87),
        [anon_sym_RBRACE] = ACTIONS(260),
        [anon_sym_new] = ACTIONS(43),
        [anon_sym_public] = ACTIONS(43),
        [anon_sym_protected] = ACTIONS(43),
        [anon_sym_internal] = ACTIONS(43),
        [anon_sym_private] = ACTIONS(43),
        [anon_sym_abstract] = ACTIONS(43),
        [anon_sym_sealed] = ACTIONS(43),
        [anon_sym_static] = ACTIONS(43),
        [anon_sym_class] = ACTIONS(45),
        [sym_comment] = ACTIONS(35),
    },
    [91] = {
        [ts_builtin_sym_end] = ACTIONS(262),
        [anon_sym_namespace] = ACTIONS(262),
        [anon_sym_RBRACE] = ACTIONS(262),
        [anon_sym_new] = ACTIONS(262),
        [anon_sym_public] = ACTIONS(262),
        [anon_sym_protected] = ACTIONS(262),
        [anon_sym_internal] = ACTIONS(262),
        [anon_sym_private] = ACTIONS(262),
        [anon_sym_abstract] = ACTIONS(262),
        [anon_sym_sealed] = ACTIONS(262),
        [anon_sym_static] = ACTIONS(262),
        [anon_sym_class] = ACTIONS(262),
        [sym_comment] = ACTIONS(35),
    },
    [92] = {
        [ts_builtin_sym_end] = ACTIONS(265),
        [anon_sym_namespace] = ACTIONS(265),
        [anon_sym_RBRACE] = ACTIONS(265),
        [anon_sym_new] = ACTIONS(265),
        [anon_sym_public] = ACTIONS(265),
        [anon_sym_protected] = ACTIONS(265),
        [anon_sym_internal] = ACTIONS(265),
        [anon_sym_private] = ACTIONS(265),
        [anon_sym_abstract] = ACTIONS(265),
        [anon_sym_sealed] = ACTIONS(265),
        [anon_sym_static] = ACTIONS(265),
        [anon_sym_class] = ACTIONS(265),
        [sym_comment] = ACTIONS(35),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(62),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(63),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(64),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(65),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(66),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(67),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(16),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(68),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(69),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(46),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(52),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(61),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(43),
    [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(70),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
    [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
    [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(19),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat2, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat2, 2),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(36),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(52),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
    [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [155] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
    [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [171] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
    [176] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [183] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [186] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
    [191] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [194] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(62),
    [197] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(84),
    [200] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(46),
    [204] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [207] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [210] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat2, 2),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
    [217] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(33),
    [221] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(34),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
    [227] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
    [232] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
    [238] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
    [243] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
    [248] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [252] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat2, 1),
    [255] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
    [262] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [265] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
