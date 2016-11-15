#include "tree_sitter/parser.h"

#define STATE_COUNT 37
#define SYMBOL_COUNT 21
#define TOKEN_COUNT 13

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_DOT = 6,
    anon_sym_COLON_COLON = 7,
    anon_sym_EQ = 8,
    sym_global = 9,
    sym_static = 10,
    sym_identifier_name = 11,
    sym_comment = 12,
    sym_compilation_unit = 13,
    sym_using_directive = 14,
    sym_namespace_declaration = 15,
    sym_qualified_name = 16,
    sym_alias_qualified_name = 17,
    sym_name_equals = 18,
    aux_sym_compilation_unit_repeat1 = 19,
    aux_sym_compilation_unit_repeat2 = 20,
};

static const char *ts_symbol_names[] = {
    [ts_builtin_sym_end] = "END",
    [anon_sym_using] = "using",
    [anon_sym_SEMI] = ";",
    [anon_sym_namespace] = "namespace",
    [anon_sym_LBRACE] = "{",
    [anon_sym_RBRACE] = "}",
    [anon_sym_DOT] = ".",
    [anon_sym_COLON_COLON] = "::",
    [anon_sym_EQ] = "=",
    [sym_global] = "global",
    [sym_static] = "static",
    [sym_identifier_name] = "identifier_name",
    [sym_comment] = "comment",
    [sym_compilation_unit] = "compilation_unit",
    [sym_using_directive] = "using_directive",
    [sym_namespace_declaration] = "namespace_declaration",
    [sym_qualified_name] = "qualified_name",
    [sym_alias_qualified_name] = "alias_qualified_name",
    [sym_name_equals] = "name_equals",
    [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
    [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
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
    [sym_static] = {
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
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(8);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(13);
            if (lookahead == 'n')
                ADVANCE(19);
            if (lookahead == 's')
                ADVANCE(28);
            if (lookahead == 'u')
                ADVANCE(34);
            if (lookahead == '{')
                ADVANCE(39);
            if (lookahead == '}')
                ADVANCE(40);
            LEX_ERROR();
        case 1:
            ACCEPT_TOKEN(ts_builtin_sym_end);
        case 2:
            ACCEPT_TOKEN(anon_sym_DOT);
        case 3:
            if (lookahead == '*')
                ADVANCE(4);
            if (lookahead == '/')
                ADVANCE(7);
            LEX_ERROR();
        case 4:
            if (lookahead == '*')
                ADVANCE(5);
            if (!((lookahead == 0) ||
                (lookahead == '*')))
                ADVANCE(4);
            LEX_ERROR();
        case 5:
            if (lookahead == '/')
                ADVANCE(6);
            if (!((lookahead == 0) ||
                (lookahead == '/')))
                ADVANCE(4);
            LEX_ERROR();
        case 6:
            ACCEPT_TOKEN(sym_comment);
        case 7:
            if (!((lookahead == 0) ||
                (lookahead == '\n')))
                ADVANCE(7);
            ACCEPT_TOKEN(sym_comment);
        case 8:
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 9:
            ACCEPT_TOKEN(anon_sym_COLON_COLON);
        case 10:
            ACCEPT_TOKEN(anon_sym_SEMI);
        case 11:
            ACCEPT_TOKEN(anon_sym_EQ);
        case 12:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            ACCEPT_TOKEN(sym_identifier_name);
        case 13:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'l')
                ADVANCE(14);
            ACCEPT_TOKEN(sym_identifier_name);
        case 14:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'o')
                ADVANCE(15);
            ACCEPT_TOKEN(sym_identifier_name);
        case 15:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'b')
                ADVANCE(16);
            ACCEPT_TOKEN(sym_identifier_name);
        case 16:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(17);
            ACCEPT_TOKEN(sym_identifier_name);
        case 17:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'l')
                ADVANCE(18);
            ACCEPT_TOKEN(sym_identifier_name);
        case 18:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            ACCEPT_TOKEN(sym_global);
        case 19:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(20);
            ACCEPT_TOKEN(sym_identifier_name);
        case 20:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'm')
                ADVANCE(21);
            ACCEPT_TOKEN(sym_identifier_name);
        case 21:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'e')
                ADVANCE(22);
            ACCEPT_TOKEN(sym_identifier_name);
        case 22:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 's')
                ADVANCE(23);
            ACCEPT_TOKEN(sym_identifier_name);
        case 23:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'p')
                ADVANCE(24);
            ACCEPT_TOKEN(sym_identifier_name);
        case 24:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(25);
            ACCEPT_TOKEN(sym_identifier_name);
        case 25:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'e')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier_name);
        case 27:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 28:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 't')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier_name);
        case 29:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'a')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier_name);
        case 30:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 't')
                ADVANCE(31);
            ACCEPT_TOKEN(sym_identifier_name);
        case 31:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'i')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 32:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'c')
                ADVANCE(33);
            ACCEPT_TOKEN(sym_identifier_name);
        case 33:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            ACCEPT_TOKEN(sym_static);
        case 34:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 's')
                ADVANCE(35);
            ACCEPT_TOKEN(sym_identifier_name);
        case 35:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'i')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 36:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'n')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier_name);
        case 37:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier_name);
        case 38:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            ACCEPT_TOKEN(anon_sym_using);
        case 39:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 40:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 41:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(41);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(42);
            if (lookahead == 'u')
                ADVANCE(51);
            LEX_ERROR();
        case 42:
            if (lookahead == 'a')
                ADVANCE(43);
            LEX_ERROR();
        case 43:
            if (lookahead == 'm')
                ADVANCE(44);
            LEX_ERROR();
        case 44:
            if (lookahead == 'e')
                ADVANCE(45);
            LEX_ERROR();
        case 45:
            if (lookahead == 's')
                ADVANCE(46);
            LEX_ERROR();
        case 46:
            if (lookahead == 'p')
                ADVANCE(47);
            LEX_ERROR();
        case 47:
            if (lookahead == 'a')
                ADVANCE(48);
            LEX_ERROR();
        case 48:
            if (lookahead == 'c')
                ADVANCE(49);
            LEX_ERROR();
        case 49:
            if (lookahead == 'e')
                ADVANCE(50);
            LEX_ERROR();
        case 50:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 51:
            if (lookahead == 's')
                ADVANCE(52);
            LEX_ERROR();
        case 52:
            if (lookahead == 'i')
                ADVANCE(53);
            LEX_ERROR();
        case 53:
            if (lookahead == 'n')
                ADVANCE(54);
            LEX_ERROR();
        case 54:
            if (lookahead == 'g')
                ADVANCE(55);
            LEX_ERROR();
        case 55:
            ACCEPT_TOKEN(anon_sym_using);
        case 56:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(56);
            if (lookahead == '/')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(13);
            if (lookahead == 's')
                ADVANCE(28);
            LEX_ERROR();
        case 57:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(57);
            if (lookahead == '/')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            if (lookahead == 'g')
                ADVANCE(13);
            LEX_ERROR();
        case 58:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(58);
            if (lookahead == '/')
                ADVANCE(3);
            LEX_ERROR();
        case 59:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(59);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(40);
            LEX_ERROR();
        case 60:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(60);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(42);
            LEX_ERROR();
        case 61:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(61);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ':')
                ADVANCE(8);
            LEX_ERROR();
        case 62:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(62);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == '{')
                ADVANCE(39);
            LEX_ERROR();
        case 63:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(63);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            LEX_ERROR();
        case 64:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(64);
            if (lookahead == '/')
                ADVANCE(3);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(12);
            LEX_ERROR();
        case 65:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(65);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '{')
                ADVANCE(39);
            LEX_ERROR();
        case 66:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(66);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == 'n')
                ADVANCE(42);
            if (lookahead == '}')
                ADVANCE(40);
            LEX_ERROR();
        case 67:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(67);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            LEX_ERROR();
        case 68:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(68);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(10);
            LEX_ERROR();
        case 69:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(69);
            if (lookahead == '.')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(3);
            if (lookahead == ';')
                ADVANCE(10);
            if (lookahead == '=')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(39);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 41,
    [2] = 56,
    [3] = 57,
    [4] = 58,
    [5] = 41,
    [6] = 59,
    [7] = 41,
    [8] = 60,
    [9] = 59,
    [10] = 41,
    [11] = 60,
    [12] = 61,
    [13] = 62,
    [14] = 63,
    [15] = 64,
    [16] = 65,
    [17] = 66,
    [18] = 59,
    [19] = 66,
    [20] = 59,
    [21] = 64,
    [22] = 63,
    [23] = 57,
    [24] = 67,
    [25] = 68,
    [26] = 68,
    [27] = 41,
    [28] = 41,
    [29] = 57,
    [30] = 41,
    [31] = 59,
    [32] = 69,
    [33] = 41,
    [34] = 59,
    [35] = 65,
    [36] = 59,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(4),
        [sym_using_directive] = STATE(33),
        [sym_namespace_declaration] = STATE(34),
        [sym_qualified_name] = STATE(35),
        [sym_alias_qualified_name] = STATE(14),
        [sym_name_equals] = STATE(23),
        [aux_sym_compilation_unit_repeat1] = STATE(7),
        [aux_sym_compilation_unit_repeat2] = STATE(36),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_DOT] = ACTIONS(13),
        [anon_sym_COLON_COLON] = ACTIONS(15),
        [anon_sym_EQ] = ACTIONS(17),
        [sym_global] = ACTIONS(19),
        [sym_static] = ACTIONS(21),
        [sym_identifier_name] = ACTIONS(23),
        [sym_comment] = ACTIONS(25),
    },
    [1] = {
        [sym_compilation_unit] = STATE(4),
        [sym_using_directive] = STATE(5),
        [sym_namespace_declaration] = STATE(6),
        [aux_sym_compilation_unit_repeat1] = STATE(7),
        [aux_sym_compilation_unit_repeat2] = STATE(8),
        [ts_builtin_sym_end] = ACTIONS(27),
        [anon_sym_using] = ACTIONS(29),
        [anon_sym_namespace] = ACTIONS(31),
        [sym_comment] = ACTIONS(25),
    },
    [2] = {
        [sym_qualified_name] = STATE(25),
        [sym_alias_qualified_name] = STATE(14),
        [sym_name_equals] = STATE(23),
        [sym_global] = ACTIONS(33),
        [sym_static] = ACTIONS(35),
        [sym_identifier_name] = ACTIONS(37),
        [sym_comment] = ACTIONS(25),
    },
    [3] = {
        [sym_qualified_name] = STATE(13),
        [sym_alias_qualified_name] = STATE(14),
        [sym_global] = ACTIONS(33),
        [sym_identifier_name] = ACTIONS(39),
        [sym_comment] = ACTIONS(25),
    },
    [4] = {
        [ts_builtin_sym_end] = ACTIONS(41),
        [sym_comment] = ACTIONS(25),
    },
    [5] = {
        [ts_builtin_sym_end] = ACTIONS(43),
        [anon_sym_using] = ACTIONS(43),
        [anon_sym_namespace] = ACTIONS(43),
        [sym_comment] = ACTIONS(25),
    },
    [6] = {
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_namespace] = ACTIONS(45),
        [anon_sym_RBRACE] = ACTIONS(45),
        [sym_comment] = ACTIONS(25),
    },
    [7] = {
        [sym_using_directive] = STATE(10),
        [sym_namespace_declaration] = STATE(6),
        [aux_sym_compilation_unit_repeat2] = STATE(11),
        [ts_builtin_sym_end] = ACTIONS(47),
        [anon_sym_using] = ACTIONS(29),
        [anon_sym_namespace] = ACTIONS(31),
        [sym_comment] = ACTIONS(25),
    },
    [8] = {
        [sym_namespace_declaration] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(47),
        [anon_sym_namespace] = ACTIONS(31),
        [sym_comment] = ACTIONS(25),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(49),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(49),
        [sym_comment] = ACTIONS(25),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(51),
        [anon_sym_using] = ACTIONS(51),
        [anon_sym_namespace] = ACTIONS(51),
        [sym_comment] = ACTIONS(25),
    },
    [11] = {
        [sym_namespace_declaration] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(53),
        [anon_sym_namespace] = ACTIONS(31),
        [sym_comment] = ACTIONS(25),
    },
    [12] = {
        [anon_sym_COLON_COLON] = ACTIONS(55),
        [sym_comment] = ACTIONS(25),
    },
    [13] = {
        [anon_sym_LBRACE] = ACTIONS(57),
        [anon_sym_DOT] = ACTIONS(59),
        [sym_comment] = ACTIONS(25),
    },
    [14] = {
        [anon_sym_DOT] = ACTIONS(59),
        [sym_comment] = ACTIONS(25),
    },
    [15] = {
        [sym_identifier_name] = ACTIONS(61),
        [sym_comment] = ACTIONS(25),
    },
    [16] = {
        [anon_sym_SEMI] = ACTIONS(63),
        [anon_sym_LBRACE] = ACTIONS(63),
        [anon_sym_DOT] = ACTIONS(63),
        [sym_comment] = ACTIONS(25),
    },
    [17] = {
        [sym_namespace_declaration] = STATE(6),
        [aux_sym_compilation_unit_repeat2] = STATE(19),
        [anon_sym_namespace] = ACTIONS(31),
        [anon_sym_RBRACE] = ACTIONS(65),
        [sym_comment] = ACTIONS(25),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(67),
        [anon_sym_namespace] = ACTIONS(67),
        [anon_sym_RBRACE] = ACTIONS(67),
        [sym_comment] = ACTIONS(25),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(9),
        [anon_sym_namespace] = ACTIONS(31),
        [anon_sym_RBRACE] = ACTIONS(69),
        [sym_comment] = ACTIONS(25),
    },
    [20] = {
        [ts_builtin_sym_end] = ACTIONS(71),
        [anon_sym_namespace] = ACTIONS(71),
        [anon_sym_RBRACE] = ACTIONS(71),
        [sym_comment] = ACTIONS(25),
    },
    [21] = {
        [sym_identifier_name] = ACTIONS(73),
        [sym_comment] = ACTIONS(25),
    },
    [22] = {
        [anon_sym_DOT] = ACTIONS(75),
        [sym_comment] = ACTIONS(25),
    },
    [23] = {
        [sym_qualified_name] = STATE(26),
        [sym_alias_qualified_name] = STATE(14),
        [sym_global] = ACTIONS(33),
        [sym_identifier_name] = ACTIONS(77),
        [sym_comment] = ACTIONS(25),
    },
    [24] = {
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_DOT] = ACTIONS(59),
        [anon_sym_EQ] = ACTIONS(81),
        [sym_comment] = ACTIONS(25),
    },
    [25] = {
        [anon_sym_SEMI] = ACTIONS(79),
        [anon_sym_DOT] = ACTIONS(59),
        [sym_comment] = ACTIONS(25),
    },
    [26] = {
        [anon_sym_SEMI] = ACTIONS(83),
        [anon_sym_DOT] = ACTIONS(59),
        [sym_comment] = ACTIONS(25),
    },
    [27] = {
        [ts_builtin_sym_end] = ACTIONS(85),
        [anon_sym_using] = ACTIONS(85),
        [anon_sym_namespace] = ACTIONS(85),
        [sym_comment] = ACTIONS(25),
    },
    [28] = {
        [ts_builtin_sym_end] = ACTIONS(87),
        [anon_sym_using] = ACTIONS(87),
        [anon_sym_namespace] = ACTIONS(87),
        [sym_comment] = ACTIONS(25),
    },
    [29] = {
        [sym_global] = ACTIONS(89),
        [sym_identifier_name] = ACTIONS(91),
        [sym_comment] = ACTIONS(25),
    },
    [30] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_using] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [sym_comment] = ACTIONS(25),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(96),
        [anon_sym_namespace] = ACTIONS(96),
        [anon_sym_RBRACE] = ACTIONS(96),
        [sym_comment] = ACTIONS(25),
    },
    [32] = {
        [anon_sym_SEMI] = ACTIONS(99),
        [anon_sym_LBRACE] = ACTIONS(102),
        [anon_sym_DOT] = ACTIONS(105),
        [anon_sym_EQ] = ACTIONS(81),
        [sym_comment] = ACTIONS(25),
    },
    [33] = {
        [ts_builtin_sym_end] = ACTIONS(109),
        [anon_sym_using] = ACTIONS(109),
        [anon_sym_namespace] = ACTIONS(109),
        [sym_comment] = ACTIONS(25),
    },
    [34] = {
        [ts_builtin_sym_end] = ACTIONS(112),
        [anon_sym_namespace] = ACTIONS(112),
        [anon_sym_RBRACE] = ACTIONS(112),
        [sym_comment] = ACTIONS(25),
    },
    [35] = {
        [anon_sym_SEMI] = ACTIONS(115),
        [anon_sym_LBRACE] = ACTIONS(57),
        [anon_sym_DOT] = ACTIONS(59),
        [sym_comment] = ACTIONS(25),
    },
    [36] = {
        [sym_namespace_declaration] = STATE(9),
        [ts_builtin_sym_end] = ACTIONS(117),
        [anon_sym_namespace] = ACTIONS(31),
        [anon_sym_RBRACE] = ACTIONS(69),
        [sym_comment] = ACTIONS(25),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(30),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(17),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(31),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(15),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(21),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(29),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(12),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(23),
    [23] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(32),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(23),
    [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
    [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
    [41] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
    [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [93] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [96] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_namespace_declaration, 5),
    [99] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(30),
    [102] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(17),
    [105] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(15),
    [109] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [112] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
    [117] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
