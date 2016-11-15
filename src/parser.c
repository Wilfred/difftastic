#include "tree_sitter/parser.h"

#define STATE_COUNT 153
#define SYMBOL_COUNT 70
#define TOKEN_COUNT 43

enum {
    anon_sym_using = 1,
    anon_sym_SEMI = 2,
    anon_sym_namespace = 3,
    anon_sym_LBRACE = 4,
    anon_sym_RBRACE = 5,
    anon_sym_class = 6,
    anon_sym_struct = 7,
    anon_sym_abstract = 8,
    anon_sym_sealed = 9,
    anon_sym_static = 10,
    anon_sym_new = 11,
    anon_sym_public = 12,
    anon_sym_protected = 13,
    anon_sym_internal = 14,
    anon_sym_private = 15,
    anon_sym_unsafe = 16,
    anon_sym_readonly = 17,
    anon_sym_volatile = 18,
    anon_sym_bool = 19,
    anon_sym_byte = 20,
    anon_sym_char = 21,
    anon_sym_decimal = 22,
    anon_sym_double = 23,
    anon_sym_float = 24,
    anon_sym_int = 25,
    anon_sym_long = 26,
    anon_sym_object = 27,
    anon_sym_sbyte = 28,
    anon_sym_short = 29,
    anon_sym_string = 30,
    anon_sym_uint = 31,
    anon_sym_ulong = 32,
    anon_sym_ushort = 33,
    anon_sym_LT = 34,
    anon_sym_COMMA = 35,
    anon_sym_GT = 36,
    anon_sym_DOT = 37,
    anon_sym_COLON_COLON = 38,
    anon_sym_EQ = 39,
    sym_global = 40,
    sym_identifier_name = 41,
    sym_comment = 42,
    sym_compilation_unit = 43,
    sym_using_directive = 44,
    sym_namespace_declaration = 45,
    sym_class_declaration = 46,
    sym_struct_declaration = 47,
    sym_field_declaration = 48,
    sym_variable_declaration = 49,
    sym__type = 50,
    sym_variable_declarator = 51,
    sym_class_modifiers = 52,
    sym__class_modifiers = 53,
    sym_struct_modifiers = 54,
    sym__struct_modifiers = 55,
    sym_field_modifiers = 56,
    sym__field_modifiers = 57,
    sym_predefined_type = 58,
    sym_type_parameter_list = 59,
    sym_type_parameter = 60,
    sym_qualified_name = 61,
    sym_alias_qualified_name = 62,
    sym_name_equals = 63,
    sym_static = 64,
    aux_sym_compilation_unit_repeat1 = 65,
    aux_sym_compilation_unit_repeat2 = 66,
    aux_sym_class_declaration_repeat1 = 67,
    aux_sym_struct_declaration_repeat1 = 68,
    aux_sym_type_parameter_list_repeat1 = 69,
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
    [anon_sym_abstract] = "abstract",
    [anon_sym_sealed] = "sealed",
    [anon_sym_static] = "static",
    [anon_sym_new] = "new",
    [anon_sym_public] = "public",
    [anon_sym_protected] = "protected",
    [anon_sym_internal] = "internal",
    [anon_sym_private] = "private",
    [anon_sym_unsafe] = "unsafe",
    [anon_sym_readonly] = "readonly",
    [anon_sym_volatile] = "volatile",
    [anon_sym_bool] = "bool",
    [anon_sym_byte] = "byte",
    [anon_sym_char] = "char",
    [anon_sym_decimal] = "decimal",
    [anon_sym_double] = "double",
    [anon_sym_float] = "float",
    [anon_sym_int] = "int",
    [anon_sym_long] = "long",
    [anon_sym_object] = "object",
    [anon_sym_sbyte] = "sbyte",
    [anon_sym_short] = "short",
    [anon_sym_string] = "string",
    [anon_sym_uint] = "uint",
    [anon_sym_ulong] = "ulong",
    [anon_sym_ushort] = "ushort",
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
    [sym_field_declaration] = "field_declaration",
    [sym_variable_declaration] = "variable_declaration",
    [sym__type] = "_type",
    [sym_variable_declarator] = "variable_declarator",
    [sym_class_modifiers] = "class_modifiers",
    [sym__class_modifiers] = "_class_modifiers",
    [sym_struct_modifiers] = "struct_modifiers",
    [sym__struct_modifiers] = "_struct_modifiers",
    [sym_field_modifiers] = "field_modifiers",
    [sym__field_modifiers] = "_field_modifiers",
    [sym_predefined_type] = "predefined_type",
    [sym_type_parameter_list] = "type_parameter_list",
    [sym_type_parameter] = "type_parameter",
    [sym_qualified_name] = "qualified_name",
    [sym_alias_qualified_name] = "alias_qualified_name",
    [sym_name_equals] = "name_equals",
    [sym_static] = "static",
    [aux_sym_compilation_unit_repeat1] = "compilation_unit_repeat1",
    [aux_sym_compilation_unit_repeat2] = "compilation_unit_repeat2",
    [aux_sym_class_declaration_repeat1] = "class_declaration_repeat1",
    [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
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
    [anon_sym_unsafe] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_readonly] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_volatile] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_bool] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_byte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_char] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_decimal] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_double] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_float] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_int] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_long] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_object] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_sbyte] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_short] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_string] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_uint] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ulong] = {
        .visible = true,
        .named = false,
        .structural = true,
        .extra = false,
    },
    [anon_sym_ushort] = {
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
    [sym_field_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declaration] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__type] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_variable_declarator] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_class_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__class_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_struct_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__struct_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_field_modifiers] = {
        .visible = true,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym__field_modifiers] = {
        .visible = false,
        .named = true,
        .structural = true,
        .extra = false,
    },
    [sym_predefined_type] = {
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
    [aux_sym_struct_declaration_repeat1] = {
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
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(144);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '{')
                ADVANCE(173);
            if (lookahead == '}')
                ADVANCE(174);
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
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(25);
            if (lookahead == 'y')
                ADVANCE(28);
            ACCEPT_TOKEN(sym_identifier_name);
        case 25:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(26);
            ACCEPT_TOKEN(sym_identifier_name);
        case 26:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(27);
            ACCEPT_TOKEN(sym_identifier_name);
        case 27:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_bool);
        case 28:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(29);
            ACCEPT_TOKEN(sym_identifier_name);
        case 29:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(30);
            ACCEPT_TOKEN(sym_identifier_name);
        case 30:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_byte);
        case 31:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(32);
            if (lookahead == 'l')
                ADVANCE(35);
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
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(34);
            ACCEPT_TOKEN(sym_identifier_name);
        case 34:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_char);
        case 35:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(36);
            ACCEPT_TOKEN(sym_identifier_name);
        case 36:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(37);
            ACCEPT_TOKEN(sym_identifier_name);
        case 37:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(38);
            ACCEPT_TOKEN(sym_identifier_name);
        case 38:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_class);
        case 39:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(40);
            if (lookahead == 'o')
                ADVANCE(46);
            ACCEPT_TOKEN(sym_identifier_name);
        case 40:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(41);
            ACCEPT_TOKEN(sym_identifier_name);
        case 41:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(42);
            ACCEPT_TOKEN(sym_identifier_name);
        case 42:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'm')
                ADVANCE(43);
            ACCEPT_TOKEN(sym_identifier_name);
        case 43:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(44);
            ACCEPT_TOKEN(sym_identifier_name);
        case 44:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(45);
            ACCEPT_TOKEN(sym_identifier_name);
        case 45:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_decimal);
        case 46:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'u')
                ADVANCE(47);
            ACCEPT_TOKEN(sym_identifier_name);
        case 47:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(48);
            ACCEPT_TOKEN(sym_identifier_name);
        case 48:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(49);
            ACCEPT_TOKEN(sym_identifier_name);
        case 49:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(50);
            ACCEPT_TOKEN(sym_identifier_name);
        case 50:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_double);
        case 51:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(52);
            ACCEPT_TOKEN(sym_identifier_name);
        case 52:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(53);
            ACCEPT_TOKEN(sym_identifier_name);
        case 53:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(54);
            ACCEPT_TOKEN(sym_identifier_name);
        case 54:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(55);
            ACCEPT_TOKEN(sym_identifier_name);
        case 55:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_float);
        case 56:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(57);
            ACCEPT_TOKEN(sym_identifier_name);
        case 57:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(58);
            ACCEPT_TOKEN(sym_identifier_name);
        case 58:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(59);
            ACCEPT_TOKEN(sym_identifier_name);
        case 59:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(60);
            ACCEPT_TOKEN(sym_identifier_name);
        case 60:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(61);
            ACCEPT_TOKEN(sym_identifier_name);
        case 61:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(sym_global);
        case 62:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(63);
            ACCEPT_TOKEN(sym_identifier_name);
        case 63:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(64);
            ACCEPT_TOKEN(sym_identifier_name);
        case 64:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(65);
            ACCEPT_TOKEN(anon_sym_int);
        case 65:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(66);
            ACCEPT_TOKEN(sym_identifier_name);
        case 66:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(67);
            ACCEPT_TOKEN(sym_identifier_name);
        case 67:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(68);
            ACCEPT_TOKEN(sym_identifier_name);
        case 68:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(69);
            ACCEPT_TOKEN(sym_identifier_name);
        case 69:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_internal);
        case 70:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(71);
            ACCEPT_TOKEN(sym_identifier_name);
        case 71:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(72);
            ACCEPT_TOKEN(sym_identifier_name);
        case 72:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(73);
            ACCEPT_TOKEN(sym_identifier_name);
        case 73:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_long);
        case 74:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(75);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 75:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'l') ||
                ('n' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'm')
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
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(78);
            ACCEPT_TOKEN(sym_identifier_name);
        case 78:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'o') ||
                ('q' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'p')
                ADVANCE(79);
            ACCEPT_TOKEN(sym_identifier_name);
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
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(81);
            ACCEPT_TOKEN(sym_identifier_name);
        case 81:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(82);
            ACCEPT_TOKEN(sym_identifier_name);
        case 82:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_namespace);
        case 83:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'v') ||
                ('x' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'w')
                ADVANCE(84);
            ACCEPT_TOKEN(sym_identifier_name);
        case 84:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_new);
        case 85:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(86);
            ACCEPT_TOKEN(sym_identifier_name);
        case 86:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'i') ||
                ('k' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'j')
                ADVANCE(87);
            ACCEPT_TOKEN(sym_identifier_name);
        case 87:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(88);
            ACCEPT_TOKEN(sym_identifier_name);
        case 88:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(89);
            ACCEPT_TOKEN(sym_identifier_name);
        case 89:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(90);
            ACCEPT_TOKEN(sym_identifier_name);
        case 90:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_object);
        case 91:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                (lookahead == 's') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(92);
            if (lookahead == 'u')
                ADVANCE(105);
            ACCEPT_TOKEN(sym_identifier_name);
        case 92:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(93);
            if (lookahead == 'o')
                ADVANCE(98);
            ACCEPT_TOKEN(sym_identifier_name);
        case 93:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'u') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'v')
                ADVANCE(94);
            ACCEPT_TOKEN(sym_identifier_name);
        case 94:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(95);
            ACCEPT_TOKEN(sym_identifier_name);
        case 95:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(96);
            ACCEPT_TOKEN(sym_identifier_name);
        case 96:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(97);
            ACCEPT_TOKEN(sym_identifier_name);
        case 97:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_private);
        case 98:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(99);
            ACCEPT_TOKEN(sym_identifier_name);
        case 99:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(100);
            ACCEPT_TOKEN(sym_identifier_name);
        case 100:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(101);
            ACCEPT_TOKEN(sym_identifier_name);
        case 101:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(102);
            ACCEPT_TOKEN(sym_identifier_name);
        case 102:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(103);
            ACCEPT_TOKEN(sym_identifier_name);
        case 103:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(104);
            ACCEPT_TOKEN(sym_identifier_name);
        case 104:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_protected);
        case 105:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(106);
            ACCEPT_TOKEN(sym_identifier_name);
        case 106:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(107);
            ACCEPT_TOKEN(sym_identifier_name);
        case 107:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(108);
            ACCEPT_TOKEN(sym_identifier_name);
        case 108:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(109);
            ACCEPT_TOKEN(sym_identifier_name);
        case 109:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_public);
        case 110:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(111);
            ACCEPT_TOKEN(sym_identifier_name);
        case 111:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(112);
            ACCEPT_TOKEN(sym_identifier_name);
        case 112:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(113);
            ACCEPT_TOKEN(sym_identifier_name);
        case 113:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(114);
            ACCEPT_TOKEN(sym_identifier_name);
        case 114:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(115);
            ACCEPT_TOKEN(sym_identifier_name);
        case 115:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(116);
            ACCEPT_TOKEN(sym_identifier_name);
        case 116:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'y')
                ADVANCE(117);
            ACCEPT_TOKEN(sym_identifier_name);
        case 117:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_readonly);
        case 118:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(132);
            ACCEPT_TOKEN(sym_identifier_name);
        case 119:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'x') ||
                (lookahead == 'z'))
                ADVANCE(15);
            if (lookahead == 'y')
                ADVANCE(120);
            ACCEPT_TOKEN(sym_identifier_name);
        case 120:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(121);
            ACCEPT_TOKEN(sym_identifier_name);
        case 121:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(122);
            ACCEPT_TOKEN(sym_identifier_name);
        case 122:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_sbyte);
        case 123:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(124);
            ACCEPT_TOKEN(sym_identifier_name);
        case 124:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(125);
            ACCEPT_TOKEN(sym_identifier_name);
        case 125:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(126);
            ACCEPT_TOKEN(sym_identifier_name);
        case 126:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'c') ||
                ('e' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'd')
                ADVANCE(127);
            ACCEPT_TOKEN(sym_identifier_name);
        case 127:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_sealed);
        case 128:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(129);
            ACCEPT_TOKEN(sym_identifier_name);
        case 129:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(130);
            ACCEPT_TOKEN(sym_identifier_name);
        case 130:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(131);
            ACCEPT_TOKEN(sym_identifier_name);
        case 131:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_short);
        case 132:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'r')
                ADVANCE(137);
            ACCEPT_TOKEN(sym_identifier_name);
        case 133:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(134);
            ACCEPT_TOKEN(sym_identifier_name);
        case 134:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(135);
            ACCEPT_TOKEN(sym_identifier_name);
        case 135:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(136);
            ACCEPT_TOKEN(sym_identifier_name);
        case 136:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_static);
        case 137:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(138);
            if (lookahead == 'u')
                ADVANCE(141);
            ACCEPT_TOKEN(sym_identifier_name);
        case 138:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(139);
            ACCEPT_TOKEN(sym_identifier_name);
        case 139:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(140);
            ACCEPT_TOKEN(sym_identifier_name);
        case 140:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_string);
        case 141:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'b') ||
                ('d' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'c')
                ADVANCE(142);
            ACCEPT_TOKEN(sym_identifier_name);
        case 142:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(143);
            ACCEPT_TOKEN(sym_identifier_name);
        case 143:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_struct);
        case 144:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(152);
            if (lookahead == 's')
                ADVANCE(157);
            ACCEPT_TOKEN(sym_identifier_name);
        case 145:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(146);
            ACCEPT_TOKEN(sym_identifier_name);
        case 146:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(147);
            ACCEPT_TOKEN(sym_identifier_name);
        case 147:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_uint);
        case 148:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(149);
            ACCEPT_TOKEN(sym_identifier_name);
        case 149:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(150);
            ACCEPT_TOKEN(sym_identifier_name);
        case 150:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(151);
            ACCEPT_TOKEN(sym_identifier_name);
        case 151:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_ulong);
        case 152:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 's')
                ADVANCE(153);
            ACCEPT_TOKEN(sym_identifier_name);
        case 153:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(154);
            ACCEPT_TOKEN(sym_identifier_name);
        case 154:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'e') ||
                ('g' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'f')
                ADVANCE(155);
            ACCEPT_TOKEN(sym_identifier_name);
        case 155:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(156);
            ACCEPT_TOKEN(sym_identifier_name);
        case 156:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 157:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(158);
            if (lookahead == 'i')
                ADVANCE(162);
            ACCEPT_TOKEN(sym_identifier_name);
        case 158:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(159);
            ACCEPT_TOKEN(sym_identifier_name);
        case 159:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(160);
            ACCEPT_TOKEN(sym_identifier_name);
        case 160:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(161);
            ACCEPT_TOKEN(sym_identifier_name);
        case 161:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_ushort);
        case 162:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(163);
            ACCEPT_TOKEN(sym_identifier_name);
        case 163:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(164);
            ACCEPT_TOKEN(sym_identifier_name);
        case 164:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_using);
        case 165:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'n') ||
                ('p' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'o')
                ADVANCE(166);
            ACCEPT_TOKEN(sym_identifier_name);
        case 166:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(167);
            ACCEPT_TOKEN(sym_identifier_name);
        case 167:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(168);
            ACCEPT_TOKEN(sym_identifier_name);
        case 168:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(169);
            ACCEPT_TOKEN(sym_identifier_name);
        case 169:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(170);
            ACCEPT_TOKEN(sym_identifier_name);
        case 170:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'k') ||
                ('m' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'l')
                ADVANCE(171);
            ACCEPT_TOKEN(sym_identifier_name);
        case 171:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(172);
            ACCEPT_TOKEN(sym_identifier_name);
        case 172:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_volatile);
        case 173:
            ACCEPT_TOKEN(anon_sym_LBRACE);
        case 174:
            ACCEPT_TOKEN(anon_sym_RBRACE);
        case 175:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(175);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(242);
            LEX_ERROR();
        case 176:
            if (lookahead == 'b')
                ADVANCE(177);
            LEX_ERROR();
        case 177:
            if (lookahead == 's')
                ADVANCE(178);
            LEX_ERROR();
        case 178:
            if (lookahead == 't')
                ADVANCE(179);
            LEX_ERROR();
        case 179:
            if (lookahead == 'r')
                ADVANCE(180);
            LEX_ERROR();
        case 180:
            if (lookahead == 'a')
                ADVANCE(181);
            LEX_ERROR();
        case 181:
            if (lookahead == 'c')
                ADVANCE(182);
            LEX_ERROR();
        case 182:
            if (lookahead == 't')
                ADVANCE(183);
            LEX_ERROR();
        case 183:
            ACCEPT_TOKEN(anon_sym_abstract);
        case 184:
            if (lookahead == 'l')
                ADVANCE(185);
            LEX_ERROR();
        case 185:
            if (lookahead == 'a')
                ADVANCE(186);
            LEX_ERROR();
        case 186:
            if (lookahead == 's')
                ADVANCE(187);
            LEX_ERROR();
        case 187:
            if (lookahead == 's')
                ADVANCE(188);
            LEX_ERROR();
        case 188:
            ACCEPT_TOKEN(anon_sym_class);
        case 189:
            if (lookahead == 'n')
                ADVANCE(190);
            LEX_ERROR();
        case 190:
            if (lookahead == 't')
                ADVANCE(191);
            LEX_ERROR();
        case 191:
            if (lookahead == 'e')
                ADVANCE(192);
            LEX_ERROR();
        case 192:
            if (lookahead == 'r')
                ADVANCE(193);
            LEX_ERROR();
        case 193:
            if (lookahead == 'n')
                ADVANCE(194);
            LEX_ERROR();
        case 194:
            if (lookahead == 'a')
                ADVANCE(195);
            LEX_ERROR();
        case 195:
            if (lookahead == 'l')
                ADVANCE(196);
            LEX_ERROR();
        case 196:
            ACCEPT_TOKEN(anon_sym_internal);
        case 197:
            if (lookahead == 'a')
                ADVANCE(198);
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 198:
            if (lookahead == 'm')
                ADVANCE(199);
            LEX_ERROR();
        case 199:
            if (lookahead == 'e')
                ADVANCE(200);
            LEX_ERROR();
        case 200:
            if (lookahead == 's')
                ADVANCE(201);
            LEX_ERROR();
        case 201:
            if (lookahead == 'p')
                ADVANCE(202);
            LEX_ERROR();
        case 202:
            if (lookahead == 'a')
                ADVANCE(203);
            LEX_ERROR();
        case 203:
            if (lookahead == 'c')
                ADVANCE(204);
            LEX_ERROR();
        case 204:
            if (lookahead == 'e')
                ADVANCE(205);
            LEX_ERROR();
        case 205:
            ACCEPT_TOKEN(anon_sym_namespace);
        case 206:
            if (lookahead == 'w')
                ADVANCE(207);
            LEX_ERROR();
        case 207:
            ACCEPT_TOKEN(anon_sym_new);
        case 208:
            if (lookahead == 'r')
                ADVANCE(209);
            if (lookahead == 'u')
                ADVANCE(222);
            LEX_ERROR();
        case 209:
            if (lookahead == 'i')
                ADVANCE(210);
            if (lookahead == 'o')
                ADVANCE(215);
            LEX_ERROR();
        case 210:
            if (lookahead == 'v')
                ADVANCE(211);
            LEX_ERROR();
        case 211:
            if (lookahead == 'a')
                ADVANCE(212);
            LEX_ERROR();
        case 212:
            if (lookahead == 't')
                ADVANCE(213);
            LEX_ERROR();
        case 213:
            if (lookahead == 'e')
                ADVANCE(214);
            LEX_ERROR();
        case 214:
            ACCEPT_TOKEN(anon_sym_private);
        case 215:
            if (lookahead == 't')
                ADVANCE(216);
            LEX_ERROR();
        case 216:
            if (lookahead == 'e')
                ADVANCE(217);
            LEX_ERROR();
        case 217:
            if (lookahead == 'c')
                ADVANCE(218);
            LEX_ERROR();
        case 218:
            if (lookahead == 't')
                ADVANCE(219);
            LEX_ERROR();
        case 219:
            if (lookahead == 'e')
                ADVANCE(220);
            LEX_ERROR();
        case 220:
            if (lookahead == 'd')
                ADVANCE(221);
            LEX_ERROR();
        case 221:
            ACCEPT_TOKEN(anon_sym_protected);
        case 222:
            if (lookahead == 'b')
                ADVANCE(223);
            LEX_ERROR();
        case 223:
            if (lookahead == 'l')
                ADVANCE(224);
            LEX_ERROR();
        case 224:
            if (lookahead == 'i')
                ADVANCE(225);
            LEX_ERROR();
        case 225:
            if (lookahead == 'c')
                ADVANCE(226);
            LEX_ERROR();
        case 226:
            ACCEPT_TOKEN(anon_sym_public);
        case 227:
            if (lookahead == 'e')
                ADVANCE(228);
            if (lookahead == 't')
                ADVANCE(233);
            LEX_ERROR();
        case 228:
            if (lookahead == 'a')
                ADVANCE(229);
            LEX_ERROR();
        case 229:
            if (lookahead == 'l')
                ADVANCE(230);
            LEX_ERROR();
        case 230:
            if (lookahead == 'e')
                ADVANCE(231);
            LEX_ERROR();
        case 231:
            if (lookahead == 'd')
                ADVANCE(232);
            LEX_ERROR();
        case 232:
            ACCEPT_TOKEN(anon_sym_sealed);
        case 233:
            if (lookahead == 'a')
                ADVANCE(234);
            if (lookahead == 'r')
                ADVANCE(238);
            LEX_ERROR();
        case 234:
            if (lookahead == 't')
                ADVANCE(235);
            LEX_ERROR();
        case 235:
            if (lookahead == 'i')
                ADVANCE(236);
            LEX_ERROR();
        case 236:
            if (lookahead == 'c')
                ADVANCE(237);
            LEX_ERROR();
        case 237:
            ACCEPT_TOKEN(anon_sym_static);
        case 238:
            if (lookahead == 'u')
                ADVANCE(239);
            LEX_ERROR();
        case 239:
            if (lookahead == 'c')
                ADVANCE(240);
            LEX_ERROR();
        case 240:
            if (lookahead == 't')
                ADVANCE(241);
            LEX_ERROR();
        case 241:
            ACCEPT_TOKEN(anon_sym_struct);
        case 242:
            if (lookahead == 'n')
                ADVANCE(243);
            if (lookahead == 's')
                ADVANCE(248);
            LEX_ERROR();
        case 243:
            if (lookahead == 's')
                ADVANCE(244);
            LEX_ERROR();
        case 244:
            if (lookahead == 'a')
                ADVANCE(245);
            LEX_ERROR();
        case 245:
            if (lookahead == 'f')
                ADVANCE(246);
            LEX_ERROR();
        case 246:
            if (lookahead == 'e')
                ADVANCE(247);
            LEX_ERROR();
        case 247:
            ACCEPT_TOKEN(anon_sym_unsafe);
        case 248:
            if (lookahead == 'i')
                ADVANCE(249);
            LEX_ERROR();
        case 249:
            if (lookahead == 'n')
                ADVANCE(250);
            LEX_ERROR();
        case 250:
            if (lookahead == 'g')
                ADVANCE(251);
            LEX_ERROR();
        case 251:
            ACCEPT_TOKEN(anon_sym_using);
        case 252:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(252);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 's')
                ADVANCE(253);
            LEX_ERROR();
        case 253:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(254);
            ACCEPT_TOKEN(sym_identifier_name);
        case 254:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            ACCEPT_TOKEN(sym_identifier_name);
        case 255:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(255);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'f') ||
                ('h' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'g')
                ADVANCE(56);
            LEX_ERROR();
        case 256:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(256);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            LEX_ERROR();
        case 257:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(257);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(259);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 258:
            if (lookahead == 'e')
                ADVANCE(206);
            LEX_ERROR();
        case 259:
            if (lookahead == 'e')
                ADVANCE(228);
            if (lookahead == 't')
                ADVANCE(260);
            LEX_ERROR();
        case 260:
            if (lookahead == 'a')
                ADVANCE(234);
            LEX_ERROR();
        case 261:
            if (lookahead == 'n')
                ADVANCE(243);
            LEX_ERROR();
        case 262:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(262);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 263:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(263);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 264:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(264);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 265:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(265);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'c')
                ADVANCE(184);
            LEX_ERROR();
        case 266:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(266);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 's')
                ADVANCE(267);
            LEX_ERROR();
        case 267:
            if (lookahead == 't')
                ADVANCE(268);
            LEX_ERROR();
        case 268:
            if (lookahead == 'r')
                ADVANCE(238);
            LEX_ERROR();
        case 269:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(269);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            LEX_ERROR();
        case 270:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(270);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '<')
                ADVANCE(12);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 271:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(271);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(258);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 272:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(272);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 273:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(273);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 274:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                ('o' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 'n')
                ADVANCE(152);
            if (lookahead == 's')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 275:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(158);
            ACCEPT_TOKEN(sym_identifier_name);
        case 276:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(276);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 277:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'd') ||
                ('f' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'e')
                ADVANCE(83);
            ACCEPT_TOKEN(sym_identifier_name);
        case 278:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(278);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(279);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 279:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'c') ||
                (lookahead == 'd') ||
                (lookahead == 'f') ||
                (lookahead == 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'e')
                ADVANCE(123);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 280:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('b' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(133);
            if (lookahead == 'r')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 281:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                ('j' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(138);
            ACCEPT_TOKEN(sym_identifier_name);
        case 282:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(282);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 283:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(283);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(284);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(285);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 284:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'h')
                ADVANCE(32);
            ACCEPT_TOKEN(sym_identifier_name);
        case 285:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(280);
            ACCEPT_TOKEN(sym_identifier_name);
        case 286:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(286);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 287:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(287);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'n') ||
                ('p' <= lookahead && lookahead <= 'r') ||
                (lookahead == 't') ||
                ('v' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(284);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(288);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 's')
                ADVANCE(291);
            if (lookahead == 'u')
                ADVANCE(293);
            LEX_ERROR();
        case 288:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'm') ||
                ('o' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'n')
                ADVANCE(289);
            ACCEPT_TOKEN(sym_identifier_name);
        case 289:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 't')
                ADVANCE(290);
            ACCEPT_TOKEN(sym_identifier_name);
        case 290:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            ACCEPT_TOKEN(anon_sym_int);
        case 291:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'a') ||
                ('c' <= lookahead && lookahead <= 'g') ||
                ('i' <= lookahead && lookahead <= 's') ||
                ('u' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'b')
                ADVANCE(119);
            if (lookahead == 'h')
                ADVANCE(128);
            if (lookahead == 't')
                ADVANCE(292);
            ACCEPT_TOKEN(sym_identifier_name);
        case 292:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'q') ||
                ('s' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'r')
                ADVANCE(281);
            ACCEPT_TOKEN(sym_identifier_name);
        case 293:
            if ((lookahead == '-') ||
                ('0' <= lookahead && lookahead <= '9') ||
                ('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                ('m' <= lookahead && lookahead <= 'r') ||
                ('t' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'i')
                ADVANCE(145);
            if (lookahead == 'l')
                ADVANCE(148);
            if (lookahead == 's')
                ADVANCE(275);
            ACCEPT_TOKEN(sym_identifier_name);
        case 294:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(294);
            if (lookahead == ',')
                ADVANCE(2);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '>')
                ADVANCE(14);
            LEX_ERROR();
        case 295:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(295);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ':')
                ADVANCE(9);
            LEX_ERROR();
        case 296:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(296);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 297:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(297);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            LEX_ERROR();
        case 298:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(298);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        case 299:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(299);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == 'a')
                ADVANCE(176);
            if (lookahead == 'c')
                ADVANCE(184);
            if (lookahead == 'i')
                ADVANCE(189);
            if (lookahead == 'n')
                ADVANCE(197);
            if (lookahead == 'p')
                ADVANCE(208);
            if (lookahead == 's')
                ADVANCE(227);
            if (lookahead == 'u')
                ADVANCE(261);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 300:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(300);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            if (lookahead == '=')
                ADVANCE(13);
            LEX_ERROR();
        case 301:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(301);
            if (lookahead == '.')
                ADVANCE(3);
            if (lookahead == '/')
                ADVANCE(4);
            if (lookahead == ';')
                ADVANCE(11);
            LEX_ERROR();
        case 302:
            if (lookahead == 0)
                ADVANCE(1);
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(302);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(144);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 303:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(303);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'g') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(74);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(118);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            if (lookahead == '}')
                ADVANCE(174);
            LEX_ERROR();
        case 304:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(304);
            if (lookahead == '/')
                ADVANCE(4);
            if (('A' <= lookahead && lookahead <= 'Z') ||
                (lookahead == 'e') ||
                (lookahead == 'h') ||
                (lookahead == 'j') ||
                (lookahead == 'k') ||
                (lookahead == 'm') ||
                (lookahead == 'q') ||
                (lookahead == 't') ||
                ('w' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == 'a')
                ADVANCE(16);
            if (lookahead == 'b')
                ADVANCE(24);
            if (lookahead == 'c')
                ADVANCE(31);
            if (lookahead == 'd')
                ADVANCE(39);
            if (lookahead == 'f')
                ADVANCE(51);
            if (lookahead == 'g')
                ADVANCE(56);
            if (lookahead == 'i')
                ADVANCE(62);
            if (lookahead == 'l')
                ADVANCE(70);
            if (lookahead == 'n')
                ADVANCE(277);
            if (lookahead == 'o')
                ADVANCE(85);
            if (lookahead == 'p')
                ADVANCE(91);
            if (lookahead == 'r')
                ADVANCE(110);
            if (lookahead == 's')
                ADVANCE(279);
            if (lookahead == 'u')
                ADVANCE(274);
            if (lookahead == 'v')
                ADVANCE(165);
            LEX_ERROR();
        case 305:
            if ((lookahead == '\t') ||
                (lookahead == '\n') ||
                (lookahead == '\r') ||
                (lookahead == ' '))
                SKIP(305);
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
            if (('A' <= lookahead && lookahead <= 'Z') ||
                ('a' <= lookahead && lookahead <= 'z'))
                ADVANCE(15);
            if (lookahead == '{')
                ADVANCE(173);
            LEX_ERROR();
        default:
            LEX_ERROR();
    }
}

static TSStateId ts_lex_states[STATE_COUNT] = {
    [0] = 0,
    [1] = 175,
    [2] = 252,
    [3] = 255,
    [4] = 256,
    [5] = 256,
    [6] = 257,
    [7] = 262,
    [8] = 263,
    [9] = 175,
    [10] = 264,
    [11] = 265,
    [12] = 265,
    [13] = 266,
    [14] = 266,
    [15] = 175,
    [16] = 269,
    [17] = 264,
    [18] = 175,
    [19] = 269,
    [20] = 256,
    [21] = 270,
    [22] = 271,
    [23] = 256,
    [24] = 272,
    [25] = 271,
    [26] = 273,
    [27] = 271,
    [28] = 271,
    [29] = 273,
    [30] = 271,
    [31] = 273,
    [32] = 271,
    [33] = 256,
    [34] = 270,
    [35] = 276,
    [36] = 272,
    [37] = 276,
    [38] = 273,
    [39] = 278,
    [40] = 282,
    [41] = 283,
    [42] = 256,
    [43] = 256,
    [44] = 276,
    [45] = 286,
    [46] = 256,
    [47] = 287,
    [48] = 287,
    [49] = 276,
    [50] = 273,
    [51] = 276,
    [52] = 286,
    [53] = 276,
    [54] = 273,
    [55] = 276,
    [56] = 286,
    [57] = 286,
    [58] = 276,
    [59] = 287,
    [60] = 265,
    [61] = 266,
    [62] = 270,
    [63] = 271,
    [64] = 272,
    [65] = 273,
    [66] = 271,
    [67] = 270,
    [68] = 276,
    [69] = 272,
    [70] = 273,
    [71] = 276,
    [72] = 294,
    [73] = 294,
    [74] = 256,
    [75] = 272,
    [76] = 294,
    [77] = 256,
    [78] = 272,
    [79] = 294,
    [80] = 294,
    [81] = 295,
    [82] = 296,
    [83] = 297,
    [84] = 256,
    [85] = 298,
    [86] = 299,
    [87] = 264,
    [88] = 299,
    [89] = 264,
    [90] = 256,
    [91] = 297,
    [92] = 255,
    [93] = 300,
    [94] = 301,
    [95] = 255,
    [96] = 301,
    [97] = 175,
    [98] = 175,
    [99] = 255,
    [100] = 302,
    [101] = 303,
    [102] = 273,
    [103] = 256,
    [104] = 256,
    [105] = 304,
    [106] = 256,
    [107] = 272,
    [108] = 305,
    [109] = 175,
    [110] = 264,
    [111] = 273,
    [112] = 276,
    [113] = 286,
    [114] = 265,
    [115] = 266,
    [116] = 287,
    [117] = 272,
    [118] = 294,
    [119] = 298,
    [120] = 264,
    [121] = 276,
    [122] = 271,
    [123] = 273,
    [124] = 273,
    [125] = 175,
    [126] = 276,
    [127] = 273,
    [128] = 276,
    [129] = 276,
    [130] = 271,
    [131] = 273,
    [132] = 273,
    [133] = 276,
    [134] = 303,
    [135] = 273,
    [136] = 303,
    [137] = 276,
    [138] = 271,
    [139] = 273,
    [140] = 273,
    [141] = 294,
    [142] = 270,
    [143] = 271,
    [144] = 272,
    [145] = 271,
    [146] = 273,
    [147] = 270,
    [148] = 276,
    [149] = 272,
    [150] = 276,
    [151] = 273,
    [152] = 273,
};

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

static unsigned short ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(109),
        [sym_namespace_declaration] = STATE(110),
        [sym_class_declaration] = STATE(111),
        [sym_struct_declaration] = STATE(111),
        [sym_field_declaration] = STATE(112),
        [sym_variable_declaration] = STATE(113),
        [sym__type] = STATE(46),
        [sym_variable_declarator] = STATE(57),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(114),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(115),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(116),
        [sym_predefined_type] = STATE(43),
        [sym_type_parameter_list] = STATE(117),
        [sym_type_parameter] = STATE(118),
        [sym_qualified_name] = STATE(119),
        [sym_alias_qualified_name] = STATE(83),
        [sym_name_equals] = STATE(95),
        [sym_static] = STATE(95),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(120),
        [aux_sym_class_declaration_repeat1] = STATE(121),
        [aux_sym_struct_declaration_repeat1] = STATE(122),
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_using] = ACTIONS(3),
        [anon_sym_SEMI] = ACTIONS(5),
        [anon_sym_namespace] = ACTIONS(7),
        [anon_sym_LBRACE] = ACTIONS(9),
        [anon_sym_RBRACE] = ACTIONS(11),
        [anon_sym_class] = ACTIONS(13),
        [anon_sym_struct] = ACTIONS(15),
        [anon_sym_abstract] = ACTIONS(17),
        [anon_sym_sealed] = ACTIONS(17),
        [anon_sym_static] = ACTIONS(19),
        [anon_sym_new] = ACTIONS(21),
        [anon_sym_public] = ACTIONS(21),
        [anon_sym_protected] = ACTIONS(21),
        [anon_sym_internal] = ACTIONS(21),
        [anon_sym_private] = ACTIONS(21),
        [anon_sym_unsafe] = ACTIONS(21),
        [anon_sym_readonly] = ACTIONS(23),
        [anon_sym_volatile] = ACTIONS(23),
        [anon_sym_bool] = ACTIONS(25),
        [anon_sym_byte] = ACTIONS(25),
        [anon_sym_char] = ACTIONS(25),
        [anon_sym_decimal] = ACTIONS(25),
        [anon_sym_double] = ACTIONS(25),
        [anon_sym_float] = ACTIONS(25),
        [anon_sym_int] = ACTIONS(25),
        [anon_sym_long] = ACTIONS(25),
        [anon_sym_object] = ACTIONS(25),
        [anon_sym_sbyte] = ACTIONS(25),
        [anon_sym_short] = ACTIONS(25),
        [anon_sym_string] = ACTIONS(25),
        [anon_sym_uint] = ACTIONS(25),
        [anon_sym_ulong] = ACTIONS(25),
        [anon_sym_ushort] = ACTIONS(25),
        [anon_sym_LT] = ACTIONS(27),
        [anon_sym_COMMA] = ACTIONS(29),
        [anon_sym_GT] = ACTIONS(31),
        [anon_sym_DOT] = ACTIONS(33),
        [anon_sym_COLON_COLON] = ACTIONS(35),
        [anon_sym_EQ] = ACTIONS(37),
        [sym_global] = ACTIONS(39),
        [sym_identifier_name] = ACTIONS(41),
        [sym_comment] = ACTIONS(43),
    },
    [1] = {
        [sym_compilation_unit] = STATE(8),
        [sym_using_directive] = STATE(9),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat1] = STATE(15),
        [aux_sym_compilation_unit_repeat2] = STATE(16),
        [ts_builtin_sym_end] = ACTIONS(45),
        [anon_sym_using] = ACTIONS(47),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [2] = {
        [sym_qualified_name] = STATE(94),
        [sym_alias_qualified_name] = STATE(83),
        [sym_name_equals] = STATE(95),
        [sym_static] = STATE(95),
        [anon_sym_static] = ACTIONS(59),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(63),
        [sym_comment] = ACTIONS(43),
    },
    [3] = {
        [sym_qualified_name] = STATE(82),
        [sym_alias_qualified_name] = STATE(83),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(65),
        [sym_comment] = ACTIONS(43),
    },
    [4] = {
        [sym_identifier_name] = ACTIONS(67),
        [sym_comment] = ACTIONS(43),
    },
    [5] = {
        [sym_identifier_name] = ACTIONS(69),
        [sym_comment] = ACTIONS(43),
    },
    [6] = {
        [sym__class_modifiers] = STATE(60),
        [anon_sym_class] = ACTIONS(71),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(55),
        [anon_sym_public] = ACTIONS(55),
        [anon_sym_protected] = ACTIONS(55),
        [anon_sym_internal] = ACTIONS(55),
        [anon_sym_private] = ACTIONS(55),
        [anon_sym_unsafe] = ACTIONS(55),
        [sym_comment] = ACTIONS(43),
    },
    [7] = {
        [sym__class_modifiers] = STATE(60),
        [sym__struct_modifiers] = STATE(61),
        [anon_sym_class] = ACTIONS(71),
        [anon_sym_struct] = ACTIONS(73),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [8] = {
        [ts_builtin_sym_end] = ACTIONS(75),
        [sym_comment] = ACTIONS(43),
    },
    [9] = {
        [ts_builtin_sym_end] = ACTIONS(77),
        [anon_sym_using] = ACTIONS(77),
        [anon_sym_namespace] = ACTIONS(77),
        [anon_sym_class] = ACTIONS(77),
        [anon_sym_struct] = ACTIONS(77),
        [anon_sym_abstract] = ACTIONS(77),
        [anon_sym_sealed] = ACTIONS(77),
        [anon_sym_static] = ACTIONS(77),
        [anon_sym_new] = ACTIONS(77),
        [anon_sym_public] = ACTIONS(77),
        [anon_sym_protected] = ACTIONS(77),
        [anon_sym_internal] = ACTIONS(77),
        [anon_sym_private] = ACTIONS(77),
        [anon_sym_unsafe] = ACTIONS(77),
        [sym_comment] = ACTIONS(43),
    },
    [10] = {
        [ts_builtin_sym_end] = ACTIONS(79),
        [anon_sym_namespace] = ACTIONS(79),
        [anon_sym_RBRACE] = ACTIONS(79),
        [anon_sym_class] = ACTIONS(79),
        [anon_sym_struct] = ACTIONS(79),
        [anon_sym_abstract] = ACTIONS(79),
        [anon_sym_sealed] = ACTIONS(79),
        [anon_sym_static] = ACTIONS(79),
        [anon_sym_new] = ACTIONS(79),
        [anon_sym_public] = ACTIONS(79),
        [anon_sym_protected] = ACTIONS(79),
        [anon_sym_internal] = ACTIONS(79),
        [anon_sym_private] = ACTIONS(79),
        [anon_sym_unsafe] = ACTIONS(79),
        [sym_comment] = ACTIONS(43),
    },
    [11] = {
        [anon_sym_class] = ACTIONS(81),
        [sym_comment] = ACTIONS(43),
    },
    [12] = {
        [anon_sym_class] = ACTIONS(83),
        [sym_comment] = ACTIONS(43),
    },
    [13] = {
        [anon_sym_struct] = ACTIONS(85),
        [sym_comment] = ACTIONS(43),
    },
    [14] = {
        [anon_sym_struct] = ACTIONS(87),
        [sym_comment] = ACTIONS(43),
    },
    [15] = {
        [sym_using_directive] = STATE(18),
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(19),
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_using] = ACTIONS(47),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [16] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(89),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [17] = {
        [ts_builtin_sym_end] = ACTIONS(91),
        [anon_sym_namespace] = ACTIONS(91),
        [anon_sym_RBRACE] = ACTIONS(91),
        [anon_sym_class] = ACTIONS(91),
        [anon_sym_struct] = ACTIONS(91),
        [anon_sym_abstract] = ACTIONS(91),
        [anon_sym_sealed] = ACTIONS(91),
        [anon_sym_static] = ACTIONS(91),
        [anon_sym_new] = ACTIONS(91),
        [anon_sym_public] = ACTIONS(91),
        [anon_sym_protected] = ACTIONS(91),
        [anon_sym_internal] = ACTIONS(91),
        [anon_sym_private] = ACTIONS(91),
        [anon_sym_unsafe] = ACTIONS(91),
        [sym_comment] = ACTIONS(43),
    },
    [18] = {
        [ts_builtin_sym_end] = ACTIONS(93),
        [anon_sym_using] = ACTIONS(93),
        [anon_sym_namespace] = ACTIONS(93),
        [anon_sym_class] = ACTIONS(93),
        [anon_sym_struct] = ACTIONS(93),
        [anon_sym_abstract] = ACTIONS(93),
        [anon_sym_sealed] = ACTIONS(93),
        [anon_sym_static] = ACTIONS(93),
        [anon_sym_new] = ACTIONS(93),
        [anon_sym_public] = ACTIONS(93),
        [anon_sym_protected] = ACTIONS(93),
        [anon_sym_internal] = ACTIONS(93),
        [anon_sym_private] = ACTIONS(93),
        [anon_sym_unsafe] = ACTIONS(93),
        [sym_comment] = ACTIONS(43),
    },
    [19] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(95),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [20] = {
        [sym_identifier_name] = ACTIONS(97),
        [sym_comment] = ACTIONS(43),
    },
    [21] = {
        [sym_type_parameter_list] = STATE(24),
        [anon_sym_LBRACE] = ACTIONS(99),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [22] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(32),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [23] = {
        [sym_type_parameter] = STATE(73),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [24] = {
        [anon_sym_LBRACE] = ACTIONS(107),
        [sym_comment] = ACTIONS(43),
    },
    [25] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(28),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [26] = {
        [ts_builtin_sym_end] = ACTIONS(111),
        [anon_sym_namespace] = ACTIONS(113),
        [anon_sym_RBRACE] = ACTIONS(111),
        [anon_sym_class] = ACTIONS(113),
        [anon_sym_struct] = ACTIONS(113),
        [anon_sym_abstract] = ACTIONS(113),
        [anon_sym_sealed] = ACTIONS(113),
        [anon_sym_static] = ACTIONS(113),
        [anon_sym_new] = ACTIONS(113),
        [anon_sym_public] = ACTIONS(113),
        [anon_sym_protected] = ACTIONS(113),
        [anon_sym_internal] = ACTIONS(113),
        [anon_sym_private] = ACTIONS(113),
        [anon_sym_unsafe] = ACTIONS(113),
        [anon_sym_readonly] = ACTIONS(113),
        [anon_sym_volatile] = ACTIONS(113),
        [anon_sym_bool] = ACTIONS(113),
        [anon_sym_byte] = ACTIONS(113),
        [anon_sym_char] = ACTIONS(113),
        [anon_sym_decimal] = ACTIONS(113),
        [anon_sym_double] = ACTIONS(113),
        [anon_sym_float] = ACTIONS(113),
        [anon_sym_int] = ACTIONS(113),
        [anon_sym_long] = ACTIONS(113),
        [anon_sym_object] = ACTIONS(113),
        [anon_sym_sbyte] = ACTIONS(113),
        [anon_sym_short] = ACTIONS(113),
        [anon_sym_string] = ACTIONS(113),
        [anon_sym_uint] = ACTIONS(113),
        [anon_sym_ulong] = ACTIONS(113),
        [anon_sym_ushort] = ACTIONS(113),
        [sym_identifier_name] = ACTIONS(115),
        [sym_comment] = ACTIONS(43),
    },
    [27] = {
        [anon_sym_RBRACE] = ACTIONS(117),
        [anon_sym_class] = ACTIONS(117),
        [anon_sym_struct] = ACTIONS(117),
        [anon_sym_abstract] = ACTIONS(117),
        [anon_sym_sealed] = ACTIONS(117),
        [anon_sym_static] = ACTIONS(117),
        [anon_sym_new] = ACTIONS(117),
        [anon_sym_public] = ACTIONS(117),
        [anon_sym_protected] = ACTIONS(117),
        [anon_sym_internal] = ACTIONS(117),
        [anon_sym_private] = ACTIONS(117),
        [anon_sym_unsafe] = ACTIONS(117),
        [sym_comment] = ACTIONS(43),
    },
    [28] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(119),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [29] = {
        [ts_builtin_sym_end] = ACTIONS(121),
        [anon_sym_namespace] = ACTIONS(123),
        [anon_sym_RBRACE] = ACTIONS(121),
        [anon_sym_class] = ACTIONS(123),
        [anon_sym_struct] = ACTIONS(123),
        [anon_sym_abstract] = ACTIONS(123),
        [anon_sym_sealed] = ACTIONS(123),
        [anon_sym_static] = ACTIONS(123),
        [anon_sym_new] = ACTIONS(123),
        [anon_sym_public] = ACTIONS(123),
        [anon_sym_protected] = ACTIONS(123),
        [anon_sym_internal] = ACTIONS(123),
        [anon_sym_private] = ACTIONS(123),
        [anon_sym_unsafe] = ACTIONS(123),
        [anon_sym_readonly] = ACTIONS(123),
        [anon_sym_volatile] = ACTIONS(123),
        [anon_sym_bool] = ACTIONS(123),
        [anon_sym_byte] = ACTIONS(123),
        [anon_sym_char] = ACTIONS(123),
        [anon_sym_decimal] = ACTIONS(123),
        [anon_sym_double] = ACTIONS(123),
        [anon_sym_float] = ACTIONS(123),
        [anon_sym_int] = ACTIONS(123),
        [anon_sym_long] = ACTIONS(123),
        [anon_sym_object] = ACTIONS(123),
        [anon_sym_sbyte] = ACTIONS(123),
        [anon_sym_short] = ACTIONS(123),
        [anon_sym_string] = ACTIONS(123),
        [anon_sym_uint] = ACTIONS(123),
        [anon_sym_ulong] = ACTIONS(123),
        [anon_sym_ushort] = ACTIONS(123),
        [sym_identifier_name] = ACTIONS(125),
        [sym_comment] = ACTIONS(43),
    },
    [30] = {
        [anon_sym_RBRACE] = ACTIONS(127),
        [anon_sym_class] = ACTIONS(127),
        [anon_sym_struct] = ACTIONS(127),
        [anon_sym_abstract] = ACTIONS(127),
        [anon_sym_sealed] = ACTIONS(127),
        [anon_sym_static] = ACTIONS(127),
        [anon_sym_new] = ACTIONS(127),
        [anon_sym_public] = ACTIONS(127),
        [anon_sym_protected] = ACTIONS(127),
        [anon_sym_internal] = ACTIONS(127),
        [anon_sym_private] = ACTIONS(127),
        [anon_sym_unsafe] = ACTIONS(127),
        [sym_comment] = ACTIONS(43),
    },
    [31] = {
        [ts_builtin_sym_end] = ACTIONS(129),
        [anon_sym_namespace] = ACTIONS(131),
        [anon_sym_RBRACE] = ACTIONS(129),
        [anon_sym_class] = ACTIONS(131),
        [anon_sym_struct] = ACTIONS(131),
        [anon_sym_abstract] = ACTIONS(131),
        [anon_sym_sealed] = ACTIONS(131),
        [anon_sym_static] = ACTIONS(131),
        [anon_sym_new] = ACTIONS(131),
        [anon_sym_public] = ACTIONS(131),
        [anon_sym_protected] = ACTIONS(131),
        [anon_sym_internal] = ACTIONS(131),
        [anon_sym_private] = ACTIONS(131),
        [anon_sym_unsafe] = ACTIONS(131),
        [anon_sym_readonly] = ACTIONS(131),
        [anon_sym_volatile] = ACTIONS(131),
        [anon_sym_bool] = ACTIONS(131),
        [anon_sym_byte] = ACTIONS(131),
        [anon_sym_char] = ACTIONS(131),
        [anon_sym_decimal] = ACTIONS(131),
        [anon_sym_double] = ACTIONS(131),
        [anon_sym_float] = ACTIONS(131),
        [anon_sym_int] = ACTIONS(131),
        [anon_sym_long] = ACTIONS(131),
        [anon_sym_object] = ACTIONS(131),
        [anon_sym_sbyte] = ACTIONS(131),
        [anon_sym_short] = ACTIONS(131),
        [anon_sym_string] = ACTIONS(131),
        [anon_sym_uint] = ACTIONS(131),
        [anon_sym_ulong] = ACTIONS(131),
        [anon_sym_ushort] = ACTIONS(131),
        [sym_identifier_name] = ACTIONS(133),
        [sym_comment] = ACTIONS(43),
    },
    [32] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(109),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [33] = {
        [sym_identifier_name] = ACTIONS(135),
        [sym_comment] = ACTIONS(43),
    },
    [34] = {
        [sym_type_parameter_list] = STATE(36),
        [anon_sym_LBRACE] = ACTIONS(137),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [35] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(55),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [36] = {
        [anon_sym_LBRACE] = ACTIONS(157),
        [sym_comment] = ACTIONS(43),
    },
    [37] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(49),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [38] = {
        [ts_builtin_sym_end] = ACTIONS(161),
        [anon_sym_namespace] = ACTIONS(163),
        [anon_sym_RBRACE] = ACTIONS(161),
        [anon_sym_class] = ACTIONS(163),
        [anon_sym_struct] = ACTIONS(163),
        [anon_sym_abstract] = ACTIONS(163),
        [anon_sym_sealed] = ACTIONS(163),
        [anon_sym_static] = ACTIONS(163),
        [anon_sym_new] = ACTIONS(163),
        [anon_sym_public] = ACTIONS(163),
        [anon_sym_protected] = ACTIONS(163),
        [anon_sym_internal] = ACTIONS(163),
        [anon_sym_private] = ACTIONS(163),
        [anon_sym_unsafe] = ACTIONS(163),
        [anon_sym_readonly] = ACTIONS(163),
        [anon_sym_volatile] = ACTIONS(163),
        [anon_sym_bool] = ACTIONS(163),
        [anon_sym_byte] = ACTIONS(163),
        [anon_sym_char] = ACTIONS(163),
        [anon_sym_decimal] = ACTIONS(163),
        [anon_sym_double] = ACTIONS(163),
        [anon_sym_float] = ACTIONS(163),
        [anon_sym_int] = ACTIONS(163),
        [anon_sym_long] = ACTIONS(163),
        [anon_sym_object] = ACTIONS(163),
        [anon_sym_sbyte] = ACTIONS(163),
        [anon_sym_short] = ACTIONS(163),
        [anon_sym_string] = ACTIONS(163),
        [anon_sym_uint] = ACTIONS(163),
        [anon_sym_ulong] = ACTIONS(163),
        [anon_sym_ushort] = ACTIONS(163),
        [sym_identifier_name] = ACTIONS(165),
        [sym_comment] = ACTIONS(43),
    },
    [39] = {
        [sym__class_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(59),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [40] = {
        [sym__class_modifiers] = STATE(60),
        [sym__struct_modifiers] = STATE(61),
        [sym__field_modifiers] = STATE(59),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_struct] = ACTIONS(173),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [41] = {
        [sym__field_modifiers] = STATE(59),
        [anon_sym_static] = ACTIONS(151),
        [anon_sym_new] = ACTIONS(151),
        [anon_sym_public] = ACTIONS(151),
        [anon_sym_protected] = ACTIONS(151),
        [anon_sym_internal] = ACTIONS(151),
        [anon_sym_private] = ACTIONS(151),
        [anon_sym_unsafe] = ACTIONS(151),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_identifier_name] = ACTIONS(171),
        [sym_comment] = ACTIONS(43),
    },
    [42] = {
        [sym_identifier_name] = ACTIONS(175),
        [sym_comment] = ACTIONS(43),
    },
    [43] = {
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(43),
    },
    [44] = {
        [anon_sym_RBRACE] = ACTIONS(179),
        [anon_sym_class] = ACTIONS(181),
        [anon_sym_struct] = ACTIONS(181),
        [anon_sym_abstract] = ACTIONS(181),
        [anon_sym_sealed] = ACTIONS(181),
        [anon_sym_static] = ACTIONS(181),
        [anon_sym_new] = ACTIONS(181),
        [anon_sym_public] = ACTIONS(181),
        [anon_sym_protected] = ACTIONS(181),
        [anon_sym_internal] = ACTIONS(181),
        [anon_sym_private] = ACTIONS(181),
        [anon_sym_unsafe] = ACTIONS(181),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [45] = {
        [anon_sym_SEMI] = ACTIONS(185),
        [sym_comment] = ACTIONS(43),
    },
    [46] = {
        [sym_variable_declarator] = STATE(57),
        [sym_identifier_name] = ACTIONS(187),
        [sym_comment] = ACTIONS(43),
    },
    [47] = {
        [sym_variable_declaration] = STATE(52),
        [sym__type] = STATE(46),
        [sym_predefined_type] = STATE(43),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [48] = {
        [anon_sym_bool] = ACTIONS(189),
        [anon_sym_byte] = ACTIONS(189),
        [anon_sym_char] = ACTIONS(189),
        [anon_sym_decimal] = ACTIONS(189),
        [anon_sym_double] = ACTIONS(189),
        [anon_sym_float] = ACTIONS(189),
        [anon_sym_int] = ACTIONS(189),
        [anon_sym_long] = ACTIONS(189),
        [anon_sym_object] = ACTIONS(189),
        [anon_sym_sbyte] = ACTIONS(189),
        [anon_sym_short] = ACTIONS(189),
        [anon_sym_string] = ACTIONS(189),
        [anon_sym_uint] = ACTIONS(189),
        [anon_sym_ulong] = ACTIONS(189),
        [anon_sym_ushort] = ACTIONS(189),
        [sym_identifier_name] = ACTIONS(191),
        [sym_comment] = ACTIONS(43),
    },
    [49] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(193),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [50] = {
        [ts_builtin_sym_end] = ACTIONS(195),
        [anon_sym_namespace] = ACTIONS(197),
        [anon_sym_RBRACE] = ACTIONS(195),
        [anon_sym_class] = ACTIONS(197),
        [anon_sym_struct] = ACTIONS(197),
        [anon_sym_abstract] = ACTIONS(197),
        [anon_sym_sealed] = ACTIONS(197),
        [anon_sym_static] = ACTIONS(197),
        [anon_sym_new] = ACTIONS(197),
        [anon_sym_public] = ACTIONS(197),
        [anon_sym_protected] = ACTIONS(197),
        [anon_sym_internal] = ACTIONS(197),
        [anon_sym_private] = ACTIONS(197),
        [anon_sym_unsafe] = ACTIONS(197),
        [anon_sym_readonly] = ACTIONS(197),
        [anon_sym_volatile] = ACTIONS(197),
        [anon_sym_bool] = ACTIONS(197),
        [anon_sym_byte] = ACTIONS(197),
        [anon_sym_char] = ACTIONS(197),
        [anon_sym_decimal] = ACTIONS(197),
        [anon_sym_double] = ACTIONS(197),
        [anon_sym_float] = ACTIONS(197),
        [anon_sym_int] = ACTIONS(197),
        [anon_sym_long] = ACTIONS(197),
        [anon_sym_object] = ACTIONS(197),
        [anon_sym_sbyte] = ACTIONS(197),
        [anon_sym_short] = ACTIONS(197),
        [anon_sym_string] = ACTIONS(197),
        [anon_sym_uint] = ACTIONS(197),
        [anon_sym_ulong] = ACTIONS(197),
        [anon_sym_ushort] = ACTIONS(197),
        [sym_identifier_name] = ACTIONS(199),
        [sym_comment] = ACTIONS(43),
    },
    [51] = {
        [anon_sym_RBRACE] = ACTIONS(201),
        [anon_sym_class] = ACTIONS(203),
        [anon_sym_struct] = ACTIONS(203),
        [anon_sym_abstract] = ACTIONS(203),
        [anon_sym_sealed] = ACTIONS(203),
        [anon_sym_static] = ACTIONS(203),
        [anon_sym_new] = ACTIONS(203),
        [anon_sym_public] = ACTIONS(203),
        [anon_sym_protected] = ACTIONS(203),
        [anon_sym_internal] = ACTIONS(203),
        [anon_sym_private] = ACTIONS(203),
        [anon_sym_unsafe] = ACTIONS(203),
        [anon_sym_readonly] = ACTIONS(203),
        [anon_sym_volatile] = ACTIONS(203),
        [anon_sym_bool] = ACTIONS(203),
        [anon_sym_byte] = ACTIONS(203),
        [anon_sym_char] = ACTIONS(203),
        [anon_sym_decimal] = ACTIONS(203),
        [anon_sym_double] = ACTIONS(203),
        [anon_sym_float] = ACTIONS(203),
        [anon_sym_int] = ACTIONS(203),
        [anon_sym_long] = ACTIONS(203),
        [anon_sym_object] = ACTIONS(203),
        [anon_sym_sbyte] = ACTIONS(203),
        [anon_sym_short] = ACTIONS(203),
        [anon_sym_string] = ACTIONS(203),
        [anon_sym_uint] = ACTIONS(203),
        [anon_sym_ulong] = ACTIONS(203),
        [anon_sym_ushort] = ACTIONS(203),
        [sym_identifier_name] = ACTIONS(205),
        [sym_comment] = ACTIONS(43),
    },
    [52] = {
        [anon_sym_SEMI] = ACTIONS(207),
        [sym_comment] = ACTIONS(43),
    },
    [53] = {
        [anon_sym_RBRACE] = ACTIONS(209),
        [anon_sym_class] = ACTIONS(211),
        [anon_sym_struct] = ACTIONS(211),
        [anon_sym_abstract] = ACTIONS(211),
        [anon_sym_sealed] = ACTIONS(211),
        [anon_sym_static] = ACTIONS(211),
        [anon_sym_new] = ACTIONS(211),
        [anon_sym_public] = ACTIONS(211),
        [anon_sym_protected] = ACTIONS(211),
        [anon_sym_internal] = ACTIONS(211),
        [anon_sym_private] = ACTIONS(211),
        [anon_sym_unsafe] = ACTIONS(211),
        [anon_sym_readonly] = ACTIONS(211),
        [anon_sym_volatile] = ACTIONS(211),
        [anon_sym_bool] = ACTIONS(211),
        [anon_sym_byte] = ACTIONS(211),
        [anon_sym_char] = ACTIONS(211),
        [anon_sym_decimal] = ACTIONS(211),
        [anon_sym_double] = ACTIONS(211),
        [anon_sym_float] = ACTIONS(211),
        [anon_sym_int] = ACTIONS(211),
        [anon_sym_long] = ACTIONS(211),
        [anon_sym_object] = ACTIONS(211),
        [anon_sym_sbyte] = ACTIONS(211),
        [anon_sym_short] = ACTIONS(211),
        [anon_sym_string] = ACTIONS(211),
        [anon_sym_uint] = ACTIONS(211),
        [anon_sym_ulong] = ACTIONS(211),
        [anon_sym_ushort] = ACTIONS(211),
        [sym_identifier_name] = ACTIONS(213),
        [sym_comment] = ACTIONS(43),
    },
    [54] = {
        [ts_builtin_sym_end] = ACTIONS(215),
        [anon_sym_namespace] = ACTIONS(217),
        [anon_sym_RBRACE] = ACTIONS(215),
        [anon_sym_class] = ACTIONS(217),
        [anon_sym_struct] = ACTIONS(217),
        [anon_sym_abstract] = ACTIONS(217),
        [anon_sym_sealed] = ACTIONS(217),
        [anon_sym_static] = ACTIONS(217),
        [anon_sym_new] = ACTIONS(217),
        [anon_sym_public] = ACTIONS(217),
        [anon_sym_protected] = ACTIONS(217),
        [anon_sym_internal] = ACTIONS(217),
        [anon_sym_private] = ACTIONS(217),
        [anon_sym_unsafe] = ACTIONS(217),
        [anon_sym_readonly] = ACTIONS(217),
        [anon_sym_volatile] = ACTIONS(217),
        [anon_sym_bool] = ACTIONS(217),
        [anon_sym_byte] = ACTIONS(217),
        [anon_sym_char] = ACTIONS(217),
        [anon_sym_decimal] = ACTIONS(217),
        [anon_sym_double] = ACTIONS(217),
        [anon_sym_float] = ACTIONS(217),
        [anon_sym_int] = ACTIONS(217),
        [anon_sym_long] = ACTIONS(217),
        [anon_sym_object] = ACTIONS(217),
        [anon_sym_sbyte] = ACTIONS(217),
        [anon_sym_short] = ACTIONS(217),
        [anon_sym_string] = ACTIONS(217),
        [anon_sym_uint] = ACTIONS(217),
        [anon_sym_ulong] = ACTIONS(217),
        [anon_sym_ushort] = ACTIONS(217),
        [sym_identifier_name] = ACTIONS(219),
        [sym_comment] = ACTIONS(43),
    },
    [55] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(159),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [56] = {
        [anon_sym_SEMI] = ACTIONS(221),
        [sym_comment] = ACTIONS(43),
    },
    [57] = {
        [anon_sym_SEMI] = ACTIONS(223),
        [sym_comment] = ACTIONS(43),
    },
    [58] = {
        [anon_sym_RBRACE] = ACTIONS(225),
        [anon_sym_class] = ACTIONS(227),
        [anon_sym_struct] = ACTIONS(227),
        [anon_sym_abstract] = ACTIONS(227),
        [anon_sym_sealed] = ACTIONS(227),
        [anon_sym_static] = ACTIONS(227),
        [anon_sym_new] = ACTIONS(227),
        [anon_sym_public] = ACTIONS(227),
        [anon_sym_protected] = ACTIONS(227),
        [anon_sym_internal] = ACTIONS(227),
        [anon_sym_private] = ACTIONS(227),
        [anon_sym_unsafe] = ACTIONS(227),
        [anon_sym_readonly] = ACTIONS(227),
        [anon_sym_volatile] = ACTIONS(227),
        [anon_sym_bool] = ACTIONS(227),
        [anon_sym_byte] = ACTIONS(227),
        [anon_sym_char] = ACTIONS(227),
        [anon_sym_decimal] = ACTIONS(227),
        [anon_sym_double] = ACTIONS(227),
        [anon_sym_float] = ACTIONS(227),
        [anon_sym_int] = ACTIONS(227),
        [anon_sym_long] = ACTIONS(227),
        [anon_sym_object] = ACTIONS(227),
        [anon_sym_sbyte] = ACTIONS(227),
        [anon_sym_short] = ACTIONS(227),
        [anon_sym_string] = ACTIONS(227),
        [anon_sym_uint] = ACTIONS(227),
        [anon_sym_ulong] = ACTIONS(227),
        [anon_sym_ushort] = ACTIONS(227),
        [sym_identifier_name] = ACTIONS(229),
        [sym_comment] = ACTIONS(43),
    },
    [59] = {
        [anon_sym_bool] = ACTIONS(231),
        [anon_sym_byte] = ACTIONS(231),
        [anon_sym_char] = ACTIONS(231),
        [anon_sym_decimal] = ACTIONS(231),
        [anon_sym_double] = ACTIONS(231),
        [anon_sym_float] = ACTIONS(231),
        [anon_sym_int] = ACTIONS(231),
        [anon_sym_long] = ACTIONS(231),
        [anon_sym_object] = ACTIONS(231),
        [anon_sym_sbyte] = ACTIONS(231),
        [anon_sym_short] = ACTIONS(231),
        [anon_sym_string] = ACTIONS(231),
        [anon_sym_uint] = ACTIONS(231),
        [anon_sym_ulong] = ACTIONS(231),
        [anon_sym_ushort] = ACTIONS(231),
        [sym_identifier_name] = ACTIONS(233),
        [sym_comment] = ACTIONS(43),
    },
    [60] = {
        [anon_sym_class] = ACTIONS(235),
        [sym_comment] = ACTIONS(43),
    },
    [61] = {
        [anon_sym_struct] = ACTIONS(237),
        [sym_comment] = ACTIONS(43),
    },
    [62] = {
        [sym_type_parameter_list] = STATE(64),
        [anon_sym_LBRACE] = ACTIONS(239),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [63] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(66),
        [anon_sym_RBRACE] = ACTIONS(241),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [64] = {
        [anon_sym_LBRACE] = ACTIONS(99),
        [sym_comment] = ACTIONS(43),
    },
    [65] = {
        [ts_builtin_sym_end] = ACTIONS(243),
        [anon_sym_namespace] = ACTIONS(245),
        [anon_sym_RBRACE] = ACTIONS(243),
        [anon_sym_class] = ACTIONS(245),
        [anon_sym_struct] = ACTIONS(245),
        [anon_sym_abstract] = ACTIONS(245),
        [anon_sym_sealed] = ACTIONS(245),
        [anon_sym_static] = ACTIONS(245),
        [anon_sym_new] = ACTIONS(245),
        [anon_sym_public] = ACTIONS(245),
        [anon_sym_protected] = ACTIONS(245),
        [anon_sym_internal] = ACTIONS(245),
        [anon_sym_private] = ACTIONS(245),
        [anon_sym_unsafe] = ACTIONS(245),
        [anon_sym_readonly] = ACTIONS(245),
        [anon_sym_volatile] = ACTIONS(245),
        [anon_sym_bool] = ACTIONS(245),
        [anon_sym_byte] = ACTIONS(245),
        [anon_sym_char] = ACTIONS(245),
        [anon_sym_decimal] = ACTIONS(245),
        [anon_sym_double] = ACTIONS(245),
        [anon_sym_float] = ACTIONS(245),
        [anon_sym_int] = ACTIONS(245),
        [anon_sym_long] = ACTIONS(245),
        [anon_sym_object] = ACTIONS(245),
        [anon_sym_sbyte] = ACTIONS(245),
        [anon_sym_short] = ACTIONS(245),
        [anon_sym_string] = ACTIONS(245),
        [anon_sym_uint] = ACTIONS(245),
        [anon_sym_ulong] = ACTIONS(245),
        [anon_sym_ushort] = ACTIONS(245),
        [sym_identifier_name] = ACTIONS(247),
        [sym_comment] = ACTIONS(43),
    },
    [66] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(103),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [67] = {
        [sym_type_parameter_list] = STATE(69),
        [anon_sym_LBRACE] = ACTIONS(249),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [68] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(71),
        [anon_sym_RBRACE] = ACTIONS(251),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [69] = {
        [anon_sym_LBRACE] = ACTIONS(137),
        [sym_comment] = ACTIONS(43),
    },
    [70] = {
        [ts_builtin_sym_end] = ACTIONS(253),
        [anon_sym_namespace] = ACTIONS(255),
        [anon_sym_RBRACE] = ACTIONS(253),
        [anon_sym_class] = ACTIONS(255),
        [anon_sym_struct] = ACTIONS(255),
        [anon_sym_abstract] = ACTIONS(255),
        [anon_sym_sealed] = ACTIONS(255),
        [anon_sym_static] = ACTIONS(255),
        [anon_sym_new] = ACTIONS(255),
        [anon_sym_public] = ACTIONS(255),
        [anon_sym_protected] = ACTIONS(255),
        [anon_sym_internal] = ACTIONS(255),
        [anon_sym_private] = ACTIONS(255),
        [anon_sym_unsafe] = ACTIONS(255),
        [anon_sym_readonly] = ACTIONS(255),
        [anon_sym_volatile] = ACTIONS(255),
        [anon_sym_bool] = ACTIONS(255),
        [anon_sym_byte] = ACTIONS(255),
        [anon_sym_char] = ACTIONS(255),
        [anon_sym_decimal] = ACTIONS(255),
        [anon_sym_double] = ACTIONS(255),
        [anon_sym_float] = ACTIONS(255),
        [anon_sym_int] = ACTIONS(255),
        [anon_sym_long] = ACTIONS(255),
        [anon_sym_object] = ACTIONS(255),
        [anon_sym_sbyte] = ACTIONS(255),
        [anon_sym_short] = ACTIONS(255),
        [anon_sym_string] = ACTIONS(255),
        [anon_sym_uint] = ACTIONS(255),
        [anon_sym_ulong] = ACTIONS(255),
        [anon_sym_ushort] = ACTIONS(255),
        [sym_identifier_name] = ACTIONS(257),
        [sym_comment] = ACTIONS(43),
    },
    [71] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(139),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [72] = {
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_GT] = ACTIONS(259),
        [sym_comment] = ACTIONS(43),
    },
    [73] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(261),
        [anon_sym_GT] = ACTIONS(263),
        [sym_comment] = ACTIONS(43),
    },
    [74] = {
        [sym_type_parameter] = STATE(80),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [75] = {
        [anon_sym_LBRACE] = ACTIONS(265),
        [sym_comment] = ACTIONS(43),
    },
    [76] = {
        [anon_sym_COMMA] = ACTIONS(267),
        [anon_sym_GT] = ACTIONS(269),
        [sym_comment] = ACTIONS(43),
    },
    [77] = {
        [sym_type_parameter] = STATE(79),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [78] = {
        [anon_sym_LBRACE] = ACTIONS(271),
        [sym_comment] = ACTIONS(43),
    },
    [79] = {
        [anon_sym_COMMA] = ACTIONS(273),
        [anon_sym_GT] = ACTIONS(273),
        [sym_comment] = ACTIONS(43),
    },
    [80] = {
        [anon_sym_COMMA] = ACTIONS(275),
        [anon_sym_GT] = ACTIONS(275),
        [sym_comment] = ACTIONS(43),
    },
    [81] = {
        [anon_sym_COLON_COLON] = ACTIONS(277),
        [sym_comment] = ACTIONS(43),
    },
    [82] = {
        [anon_sym_LBRACE] = ACTIONS(279),
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [83] = {
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [84] = {
        [sym_identifier_name] = ACTIONS(283),
        [sym_comment] = ACTIONS(43),
    },
    [85] = {
        [anon_sym_SEMI] = ACTIONS(285),
        [anon_sym_LBRACE] = ACTIONS(285),
        [anon_sym_DOT] = ACTIONS(285),
        [sym_comment] = ACTIONS(43),
    },
    [86] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(10),
        [sym_struct_declaration] = STATE(10),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_compilation_unit_repeat2] = STATE(88),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(287),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [87] = {
        [ts_builtin_sym_end] = ACTIONS(289),
        [anon_sym_namespace] = ACTIONS(289),
        [anon_sym_RBRACE] = ACTIONS(289),
        [anon_sym_class] = ACTIONS(289),
        [anon_sym_struct] = ACTIONS(289),
        [anon_sym_abstract] = ACTIONS(289),
        [anon_sym_sealed] = ACTIONS(289),
        [anon_sym_static] = ACTIONS(289),
        [anon_sym_new] = ACTIONS(289),
        [anon_sym_public] = ACTIONS(289),
        [anon_sym_protected] = ACTIONS(289),
        [anon_sym_internal] = ACTIONS(289),
        [anon_sym_private] = ACTIONS(289),
        [anon_sym_unsafe] = ACTIONS(289),
        [sym_comment] = ACTIONS(43),
    },
    [88] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [89] = {
        [ts_builtin_sym_end] = ACTIONS(293),
        [anon_sym_namespace] = ACTIONS(293),
        [anon_sym_RBRACE] = ACTIONS(293),
        [anon_sym_class] = ACTIONS(293),
        [anon_sym_struct] = ACTIONS(293),
        [anon_sym_abstract] = ACTIONS(293),
        [anon_sym_sealed] = ACTIONS(293),
        [anon_sym_static] = ACTIONS(293),
        [anon_sym_new] = ACTIONS(293),
        [anon_sym_public] = ACTIONS(293),
        [anon_sym_protected] = ACTIONS(293),
        [anon_sym_internal] = ACTIONS(293),
        [anon_sym_private] = ACTIONS(293),
        [anon_sym_unsafe] = ACTIONS(293),
        [sym_comment] = ACTIONS(43),
    },
    [90] = {
        [sym_identifier_name] = ACTIONS(295),
        [sym_comment] = ACTIONS(43),
    },
    [91] = {
        [anon_sym_DOT] = ACTIONS(297),
        [sym_comment] = ACTIONS(43),
    },
    [92] = {
        [sym_global] = ACTIONS(299),
        [sym_identifier_name] = ACTIONS(301),
        [sym_comment] = ACTIONS(43),
    },
    [93] = {
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_DOT] = ACTIONS(281),
        [anon_sym_EQ] = ACTIONS(305),
        [sym_comment] = ACTIONS(43),
    },
    [94] = {
        [anon_sym_SEMI] = ACTIONS(303),
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [95] = {
        [sym_qualified_name] = STATE(96),
        [sym_alias_qualified_name] = STATE(83),
        [sym_global] = ACTIONS(61),
        [sym_identifier_name] = ACTIONS(307),
        [sym_comment] = ACTIONS(43),
    },
    [96] = {
        [anon_sym_SEMI] = ACTIONS(309),
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [97] = {
        [ts_builtin_sym_end] = ACTIONS(311),
        [anon_sym_using] = ACTIONS(311),
        [anon_sym_namespace] = ACTIONS(311),
        [anon_sym_class] = ACTIONS(311),
        [anon_sym_struct] = ACTIONS(311),
        [anon_sym_abstract] = ACTIONS(311),
        [anon_sym_sealed] = ACTIONS(311),
        [anon_sym_static] = ACTIONS(311),
        [anon_sym_new] = ACTIONS(311),
        [anon_sym_public] = ACTIONS(311),
        [anon_sym_protected] = ACTIONS(311),
        [anon_sym_internal] = ACTIONS(311),
        [anon_sym_private] = ACTIONS(311),
        [anon_sym_unsafe] = ACTIONS(311),
        [sym_comment] = ACTIONS(43),
    },
    [98] = {
        [ts_builtin_sym_end] = ACTIONS(313),
        [anon_sym_using] = ACTIONS(313),
        [anon_sym_namespace] = ACTIONS(313),
        [anon_sym_class] = ACTIONS(313),
        [anon_sym_struct] = ACTIONS(313),
        [anon_sym_abstract] = ACTIONS(313),
        [anon_sym_sealed] = ACTIONS(313),
        [anon_sym_static] = ACTIONS(313),
        [anon_sym_new] = ACTIONS(313),
        [anon_sym_public] = ACTIONS(313),
        [anon_sym_protected] = ACTIONS(313),
        [anon_sym_internal] = ACTIONS(313),
        [anon_sym_private] = ACTIONS(313),
        [anon_sym_unsafe] = ACTIONS(313),
        [sym_comment] = ACTIONS(43),
    },
    [99] = {
        [sym_global] = ACTIONS(315),
        [sym_identifier_name] = ACTIONS(317),
        [sym_comment] = ACTIONS(43),
    },
    [100] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_using] = ACTIONS(322),
        [anon_sym_namespace] = ACTIONS(322),
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(328),
        [anon_sym_struct] = ACTIONS(328),
        [anon_sym_abstract] = ACTIONS(328),
        [anon_sym_sealed] = ACTIONS(328),
        [anon_sym_static] = ACTIONS(328),
        [anon_sym_new] = ACTIONS(328),
        [anon_sym_public] = ACTIONS(328),
        [anon_sym_protected] = ACTIONS(328),
        [anon_sym_internal] = ACTIONS(328),
        [anon_sym_private] = ACTIONS(328),
        [anon_sym_unsafe] = ACTIONS(328),
        [anon_sym_readonly] = ACTIONS(333),
        [anon_sym_volatile] = ACTIONS(333),
        [anon_sym_bool] = ACTIONS(333),
        [anon_sym_byte] = ACTIONS(333),
        [anon_sym_char] = ACTIONS(333),
        [anon_sym_decimal] = ACTIONS(333),
        [anon_sym_double] = ACTIONS(333),
        [anon_sym_float] = ACTIONS(333),
        [anon_sym_int] = ACTIONS(333),
        [anon_sym_long] = ACTIONS(333),
        [anon_sym_object] = ACTIONS(333),
        [anon_sym_sbyte] = ACTIONS(333),
        [anon_sym_short] = ACTIONS(333),
        [anon_sym_string] = ACTIONS(333),
        [anon_sym_uint] = ACTIONS(333),
        [anon_sym_ulong] = ACTIONS(333),
        [anon_sym_ushort] = ACTIONS(333),
        [sym_identifier_name] = ACTIONS(336),
        [sym_comment] = ACTIONS(43),
    },
    [101] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(136),
        [sym_struct_declaration] = STATE(136),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_compilation_unit_repeat2] = STATE(88),
        [aux_sym_class_declaration_repeat1] = STATE(121),
        [aux_sym_struct_declaration_repeat1] = STATE(122),
        [anon_sym_namespace] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(341),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [102] = {
        [ts_builtin_sym_end] = ACTIONS(343),
        [anon_sym_namespace] = ACTIONS(354),
        [anon_sym_RBRACE] = ACTIONS(343),
        [anon_sym_class] = ACTIONS(354),
        [anon_sym_struct] = ACTIONS(354),
        [anon_sym_abstract] = ACTIONS(354),
        [anon_sym_sealed] = ACTIONS(354),
        [anon_sym_static] = ACTIONS(354),
        [anon_sym_new] = ACTIONS(354),
        [anon_sym_public] = ACTIONS(354),
        [anon_sym_protected] = ACTIONS(354),
        [anon_sym_internal] = ACTIONS(354),
        [anon_sym_private] = ACTIONS(354),
        [anon_sym_unsafe] = ACTIONS(354),
        [anon_sym_readonly] = ACTIONS(365),
        [anon_sym_volatile] = ACTIONS(365),
        [anon_sym_bool] = ACTIONS(365),
        [anon_sym_byte] = ACTIONS(365),
        [anon_sym_char] = ACTIONS(365),
        [anon_sym_decimal] = ACTIONS(365),
        [anon_sym_double] = ACTIONS(365),
        [anon_sym_float] = ACTIONS(365),
        [anon_sym_int] = ACTIONS(365),
        [anon_sym_long] = ACTIONS(365),
        [anon_sym_object] = ACTIONS(365),
        [anon_sym_sbyte] = ACTIONS(365),
        [anon_sym_short] = ACTIONS(365),
        [anon_sym_string] = ACTIONS(365),
        [anon_sym_uint] = ACTIONS(365),
        [anon_sym_ulong] = ACTIONS(365),
        [anon_sym_ushort] = ACTIONS(365),
        [sym_identifier_name] = ACTIONS(374),
        [sym_comment] = ACTIONS(43),
    },
    [103] = {
        [sym_identifier_name] = ACTIONS(383),
        [sym_comment] = ACTIONS(43),
    },
    [104] = {
        [sym_identifier_name] = ACTIONS(385),
        [sym_comment] = ACTIONS(43),
    },
    [105] = {
        [sym__class_modifiers] = STATE(60),
        [sym__field_modifiers] = STATE(59),
        [anon_sym_class] = ACTIONS(167),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(147),
        [anon_sym_public] = ACTIONS(147),
        [anon_sym_protected] = ACTIONS(147),
        [anon_sym_internal] = ACTIONS(147),
        [anon_sym_private] = ACTIONS(147),
        [anon_sym_unsafe] = ACTIONS(147),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(169),
        [anon_sym_byte] = ACTIONS(169),
        [anon_sym_char] = ACTIONS(169),
        [anon_sym_decimal] = ACTIONS(169),
        [anon_sym_double] = ACTIONS(169),
        [anon_sym_float] = ACTIONS(169),
        [anon_sym_int] = ACTIONS(169),
        [anon_sym_long] = ACTIONS(169),
        [anon_sym_object] = ACTIONS(169),
        [anon_sym_sbyte] = ACTIONS(169),
        [anon_sym_short] = ACTIONS(169),
        [anon_sym_string] = ACTIONS(169),
        [anon_sym_uint] = ACTIONS(169),
        [anon_sym_ulong] = ACTIONS(169),
        [anon_sym_ushort] = ACTIONS(169),
        [sym_global] = ACTIONS(299),
        [sym_identifier_name] = ACTIONS(387),
        [sym_comment] = ACTIONS(43),
    },
    [106] = {
        [sym_type_parameter] = STATE(141),
        [sym_identifier_name] = ACTIONS(105),
        [sym_comment] = ACTIONS(43),
    },
    [107] = {
        [anon_sym_LBRACE] = ACTIONS(390),
        [sym_comment] = ACTIONS(43),
    },
    [108] = {
        [sym_type_parameter_list] = STATE(117),
        [anon_sym_SEMI] = ACTIONS(393),
        [anon_sym_LBRACE] = ACTIONS(397),
        [anon_sym_LT] = ACTIONS(101),
        [anon_sym_COMMA] = ACTIONS(259),
        [anon_sym_GT] = ACTIONS(259),
        [anon_sym_DOT] = ACTIONS(400),
        [anon_sym_EQ] = ACTIONS(305),
        [sym_identifier_name] = ACTIONS(177),
        [sym_comment] = ACTIONS(43),
    },
    [109] = {
        [ts_builtin_sym_end] = ACTIONS(404),
        [anon_sym_using] = ACTIONS(404),
        [anon_sym_namespace] = ACTIONS(404),
        [anon_sym_class] = ACTIONS(404),
        [anon_sym_struct] = ACTIONS(404),
        [anon_sym_abstract] = ACTIONS(404),
        [anon_sym_sealed] = ACTIONS(404),
        [anon_sym_static] = ACTIONS(404),
        [anon_sym_new] = ACTIONS(404),
        [anon_sym_public] = ACTIONS(404),
        [anon_sym_protected] = ACTIONS(404),
        [anon_sym_internal] = ACTIONS(404),
        [anon_sym_private] = ACTIONS(404),
        [anon_sym_unsafe] = ACTIONS(404),
        [sym_comment] = ACTIONS(43),
    },
    [110] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_namespace] = ACTIONS(407),
        [anon_sym_RBRACE] = ACTIONS(407),
        [anon_sym_class] = ACTIONS(407),
        [anon_sym_struct] = ACTIONS(407),
        [anon_sym_abstract] = ACTIONS(407),
        [anon_sym_sealed] = ACTIONS(407),
        [anon_sym_static] = ACTIONS(407),
        [anon_sym_new] = ACTIONS(407),
        [anon_sym_public] = ACTIONS(407),
        [anon_sym_protected] = ACTIONS(407),
        [anon_sym_internal] = ACTIONS(407),
        [anon_sym_private] = ACTIONS(407),
        [anon_sym_unsafe] = ACTIONS(407),
        [sym_comment] = ACTIONS(43),
    },
    [111] = {
        [ts_builtin_sym_end] = ACTIONS(407),
        [anon_sym_namespace] = ACTIONS(410),
        [anon_sym_RBRACE] = ACTIONS(413),
        [anon_sym_class] = ACTIONS(420),
        [anon_sym_struct] = ACTIONS(420),
        [anon_sym_abstract] = ACTIONS(420),
        [anon_sym_sealed] = ACTIONS(420),
        [anon_sym_static] = ACTIONS(420),
        [anon_sym_new] = ACTIONS(420),
        [anon_sym_public] = ACTIONS(420),
        [anon_sym_protected] = ACTIONS(420),
        [anon_sym_internal] = ACTIONS(420),
        [anon_sym_private] = ACTIONS(420),
        [anon_sym_unsafe] = ACTIONS(420),
        [anon_sym_readonly] = ACTIONS(427),
        [anon_sym_volatile] = ACTIONS(427),
        [anon_sym_bool] = ACTIONS(427),
        [anon_sym_byte] = ACTIONS(427),
        [anon_sym_char] = ACTIONS(427),
        [anon_sym_decimal] = ACTIONS(427),
        [anon_sym_double] = ACTIONS(427),
        [anon_sym_float] = ACTIONS(427),
        [anon_sym_int] = ACTIONS(427),
        [anon_sym_long] = ACTIONS(427),
        [anon_sym_object] = ACTIONS(427),
        [anon_sym_sbyte] = ACTIONS(427),
        [anon_sym_short] = ACTIONS(427),
        [anon_sym_string] = ACTIONS(427),
        [anon_sym_uint] = ACTIONS(427),
        [anon_sym_ulong] = ACTIONS(427),
        [anon_sym_ushort] = ACTIONS(427),
        [sym_identifier_name] = ACTIONS(430),
        [sym_comment] = ACTIONS(43),
    },
    [112] = {
        [anon_sym_RBRACE] = ACTIONS(433),
        [anon_sym_class] = ACTIONS(427),
        [anon_sym_struct] = ACTIONS(427),
        [anon_sym_abstract] = ACTIONS(427),
        [anon_sym_sealed] = ACTIONS(427),
        [anon_sym_static] = ACTIONS(427),
        [anon_sym_new] = ACTIONS(427),
        [anon_sym_public] = ACTIONS(427),
        [anon_sym_protected] = ACTIONS(427),
        [anon_sym_internal] = ACTIONS(427),
        [anon_sym_private] = ACTIONS(427),
        [anon_sym_unsafe] = ACTIONS(427),
        [anon_sym_readonly] = ACTIONS(427),
        [anon_sym_volatile] = ACTIONS(427),
        [anon_sym_bool] = ACTIONS(427),
        [anon_sym_byte] = ACTIONS(427),
        [anon_sym_char] = ACTIONS(427),
        [anon_sym_decimal] = ACTIONS(427),
        [anon_sym_double] = ACTIONS(427),
        [anon_sym_float] = ACTIONS(427),
        [anon_sym_int] = ACTIONS(427),
        [anon_sym_long] = ACTIONS(427),
        [anon_sym_object] = ACTIONS(427),
        [anon_sym_sbyte] = ACTIONS(427),
        [anon_sym_short] = ACTIONS(427),
        [anon_sym_string] = ACTIONS(427),
        [anon_sym_uint] = ACTIONS(427),
        [anon_sym_ulong] = ACTIONS(427),
        [anon_sym_ushort] = ACTIONS(427),
        [sym_identifier_name] = ACTIONS(430),
        [sym_comment] = ACTIONS(43),
    },
    [113] = {
        [anon_sym_SEMI] = ACTIONS(436),
        [sym_comment] = ACTIONS(43),
    },
    [114] = {
        [anon_sym_class] = ACTIONS(438),
        [sym_comment] = ACTIONS(43),
    },
    [115] = {
        [anon_sym_struct] = ACTIONS(441),
        [sym_comment] = ACTIONS(43),
    },
    [116] = {
        [anon_sym_bool] = ACTIONS(444),
        [anon_sym_byte] = ACTIONS(444),
        [anon_sym_char] = ACTIONS(444),
        [anon_sym_decimal] = ACTIONS(444),
        [anon_sym_double] = ACTIONS(444),
        [anon_sym_float] = ACTIONS(444),
        [anon_sym_int] = ACTIONS(444),
        [anon_sym_long] = ACTIONS(444),
        [anon_sym_object] = ACTIONS(444),
        [anon_sym_sbyte] = ACTIONS(444),
        [anon_sym_short] = ACTIONS(444),
        [anon_sym_string] = ACTIONS(444),
        [anon_sym_uint] = ACTIONS(444),
        [anon_sym_ulong] = ACTIONS(444),
        [anon_sym_ushort] = ACTIONS(444),
        [sym_identifier_name] = ACTIONS(447),
        [sym_comment] = ACTIONS(43),
    },
    [117] = {
        [anon_sym_LBRACE] = ACTIONS(450),
        [sym_comment] = ACTIONS(43),
    },
    [118] = {
        [aux_sym_type_parameter_list_repeat1] = STATE(76),
        [anon_sym_COMMA] = ACTIONS(452),
        [anon_sym_GT] = ACTIONS(456),
        [sym_comment] = ACTIONS(43),
    },
    [119] = {
        [anon_sym_SEMI] = ACTIONS(460),
        [anon_sym_LBRACE] = ACTIONS(279),
        [anon_sym_DOT] = ACTIONS(281),
        [sym_comment] = ACTIONS(43),
    },
    [120] = {
        [sym_namespace_declaration] = STATE(17),
        [sym_class_declaration] = STATE(17),
        [sym_struct_declaration] = STATE(17),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [ts_builtin_sym_end] = ACTIONS(462),
        [anon_sym_namespace] = ACTIONS(49),
        [anon_sym_RBRACE] = ACTIONS(291),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [121] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(465),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [122] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(467),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [123] = {
        [ts_builtin_sym_end] = ACTIONS(469),
        [anon_sym_namespace] = ACTIONS(473),
        [anon_sym_RBRACE] = ACTIONS(469),
        [anon_sym_class] = ACTIONS(473),
        [anon_sym_struct] = ACTIONS(473),
        [anon_sym_abstract] = ACTIONS(473),
        [anon_sym_sealed] = ACTIONS(473),
        [anon_sym_static] = ACTIONS(473),
        [anon_sym_new] = ACTIONS(473),
        [anon_sym_public] = ACTIONS(473),
        [anon_sym_protected] = ACTIONS(473),
        [anon_sym_internal] = ACTIONS(473),
        [anon_sym_private] = ACTIONS(473),
        [anon_sym_unsafe] = ACTIONS(473),
        [anon_sym_readonly] = ACTIONS(473),
        [anon_sym_volatile] = ACTIONS(473),
        [anon_sym_bool] = ACTIONS(473),
        [anon_sym_byte] = ACTIONS(473),
        [anon_sym_char] = ACTIONS(473),
        [anon_sym_decimal] = ACTIONS(473),
        [anon_sym_double] = ACTIONS(473),
        [anon_sym_float] = ACTIONS(473),
        [anon_sym_int] = ACTIONS(473),
        [anon_sym_long] = ACTIONS(473),
        [anon_sym_object] = ACTIONS(473),
        [anon_sym_sbyte] = ACTIONS(473),
        [anon_sym_short] = ACTIONS(473),
        [anon_sym_string] = ACTIONS(473),
        [anon_sym_uint] = ACTIONS(473),
        [anon_sym_ulong] = ACTIONS(473),
        [anon_sym_ushort] = ACTIONS(473),
        [sym_identifier_name] = ACTIONS(477),
        [sym_comment] = ACTIONS(43),
    },
    [124] = {
        [ts_builtin_sym_end] = ACTIONS(481),
        [anon_sym_namespace] = ACTIONS(485),
        [anon_sym_RBRACE] = ACTIONS(481),
        [anon_sym_class] = ACTIONS(485),
        [anon_sym_struct] = ACTIONS(485),
        [anon_sym_abstract] = ACTIONS(485),
        [anon_sym_sealed] = ACTIONS(485),
        [anon_sym_static] = ACTIONS(485),
        [anon_sym_new] = ACTIONS(485),
        [anon_sym_public] = ACTIONS(485),
        [anon_sym_protected] = ACTIONS(485),
        [anon_sym_internal] = ACTIONS(485),
        [anon_sym_private] = ACTIONS(485),
        [anon_sym_unsafe] = ACTIONS(485),
        [anon_sym_readonly] = ACTIONS(485),
        [anon_sym_volatile] = ACTIONS(485),
        [anon_sym_bool] = ACTIONS(485),
        [anon_sym_byte] = ACTIONS(485),
        [anon_sym_char] = ACTIONS(485),
        [anon_sym_decimal] = ACTIONS(485),
        [anon_sym_double] = ACTIONS(485),
        [anon_sym_float] = ACTIONS(485),
        [anon_sym_int] = ACTIONS(485),
        [anon_sym_long] = ACTIONS(485),
        [anon_sym_object] = ACTIONS(485),
        [anon_sym_sbyte] = ACTIONS(485),
        [anon_sym_short] = ACTIONS(485),
        [anon_sym_string] = ACTIONS(485),
        [anon_sym_uint] = ACTIONS(485),
        [anon_sym_ulong] = ACTIONS(485),
        [anon_sym_ushort] = ACTIONS(485),
        [sym_identifier_name] = ACTIONS(489),
        [sym_comment] = ACTIONS(43),
    },
    [125] = {
        [ts_builtin_sym_end] = ACTIONS(319),
        [anon_sym_using] = ACTIONS(319),
        [anon_sym_namespace] = ACTIONS(319),
        [anon_sym_class] = ACTIONS(319),
        [anon_sym_struct] = ACTIONS(319),
        [anon_sym_abstract] = ACTIONS(319),
        [anon_sym_sealed] = ACTIONS(319),
        [anon_sym_static] = ACTIONS(319),
        [anon_sym_new] = ACTIONS(319),
        [anon_sym_public] = ACTIONS(319),
        [anon_sym_protected] = ACTIONS(319),
        [anon_sym_internal] = ACTIONS(319),
        [anon_sym_private] = ACTIONS(319),
        [anon_sym_unsafe] = ACTIONS(319),
        [sym_comment] = ACTIONS(43),
    },
    [126] = {
        [sym_class_declaration] = STATE(128),
        [sym_struct_declaration] = STATE(128),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(129),
        [aux_sym_struct_declaration_repeat1] = STATE(130),
        [anon_sym_RBRACE] = ACTIONS(493),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [127] = {
        [ts_builtin_sym_end] = ACTIONS(495),
        [anon_sym_namespace] = ACTIONS(500),
        [anon_sym_RBRACE] = ACTIONS(495),
        [anon_sym_class] = ACTIONS(500),
        [anon_sym_struct] = ACTIONS(500),
        [anon_sym_abstract] = ACTIONS(500),
        [anon_sym_sealed] = ACTIONS(500),
        [anon_sym_static] = ACTIONS(500),
        [anon_sym_new] = ACTIONS(500),
        [anon_sym_public] = ACTIONS(500),
        [anon_sym_protected] = ACTIONS(500),
        [anon_sym_internal] = ACTIONS(500),
        [anon_sym_private] = ACTIONS(500),
        [anon_sym_unsafe] = ACTIONS(500),
        [anon_sym_readonly] = ACTIONS(500),
        [anon_sym_volatile] = ACTIONS(500),
        [anon_sym_bool] = ACTIONS(500),
        [anon_sym_byte] = ACTIONS(500),
        [anon_sym_char] = ACTIONS(500),
        [anon_sym_decimal] = ACTIONS(500),
        [anon_sym_double] = ACTIONS(500),
        [anon_sym_float] = ACTIONS(500),
        [anon_sym_int] = ACTIONS(500),
        [anon_sym_long] = ACTIONS(500),
        [anon_sym_object] = ACTIONS(500),
        [anon_sym_sbyte] = ACTIONS(500),
        [anon_sym_short] = ACTIONS(500),
        [anon_sym_string] = ACTIONS(500),
        [anon_sym_uint] = ACTIONS(500),
        [anon_sym_ulong] = ACTIONS(500),
        [anon_sym_ushort] = ACTIONS(500),
        [sym_identifier_name] = ACTIONS(505),
        [sym_comment] = ACTIONS(43),
    },
    [128] = {
        [anon_sym_RBRACE] = ACTIONS(510),
        [anon_sym_class] = ACTIONS(513),
        [anon_sym_struct] = ACTIONS(513),
        [anon_sym_abstract] = ACTIONS(513),
        [anon_sym_sealed] = ACTIONS(513),
        [anon_sym_static] = ACTIONS(513),
        [anon_sym_new] = ACTIONS(513),
        [anon_sym_public] = ACTIONS(513),
        [anon_sym_protected] = ACTIONS(513),
        [anon_sym_internal] = ACTIONS(513),
        [anon_sym_private] = ACTIONS(513),
        [anon_sym_unsafe] = ACTIONS(513),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [129] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(516),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [130] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(518),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [131] = {
        [ts_builtin_sym_end] = ACTIONS(520),
        [anon_sym_namespace] = ACTIONS(523),
        [anon_sym_RBRACE] = ACTIONS(520),
        [anon_sym_class] = ACTIONS(523),
        [anon_sym_struct] = ACTIONS(523),
        [anon_sym_abstract] = ACTIONS(523),
        [anon_sym_sealed] = ACTIONS(523),
        [anon_sym_static] = ACTIONS(523),
        [anon_sym_new] = ACTIONS(523),
        [anon_sym_public] = ACTIONS(523),
        [anon_sym_protected] = ACTIONS(523),
        [anon_sym_internal] = ACTIONS(523),
        [anon_sym_private] = ACTIONS(523),
        [anon_sym_unsafe] = ACTIONS(523),
        [anon_sym_readonly] = ACTIONS(523),
        [anon_sym_volatile] = ACTIONS(523),
        [anon_sym_bool] = ACTIONS(523),
        [anon_sym_byte] = ACTIONS(523),
        [anon_sym_char] = ACTIONS(523),
        [anon_sym_decimal] = ACTIONS(523),
        [anon_sym_double] = ACTIONS(523),
        [anon_sym_float] = ACTIONS(523),
        [anon_sym_int] = ACTIONS(523),
        [anon_sym_long] = ACTIONS(523),
        [anon_sym_object] = ACTIONS(523),
        [anon_sym_sbyte] = ACTIONS(523),
        [anon_sym_short] = ACTIONS(523),
        [anon_sym_string] = ACTIONS(523),
        [anon_sym_uint] = ACTIONS(523),
        [anon_sym_ulong] = ACTIONS(523),
        [anon_sym_ushort] = ACTIONS(523),
        [sym_identifier_name] = ACTIONS(526),
        [sym_comment] = ACTIONS(43),
    },
    [132] = {
        [ts_builtin_sym_end] = ACTIONS(529),
        [anon_sym_namespace] = ACTIONS(532),
        [anon_sym_RBRACE] = ACTIONS(529),
        [anon_sym_class] = ACTIONS(532),
        [anon_sym_struct] = ACTIONS(532),
        [anon_sym_abstract] = ACTIONS(532),
        [anon_sym_sealed] = ACTIONS(532),
        [anon_sym_static] = ACTIONS(532),
        [anon_sym_new] = ACTIONS(532),
        [anon_sym_public] = ACTIONS(532),
        [anon_sym_protected] = ACTIONS(532),
        [anon_sym_internal] = ACTIONS(532),
        [anon_sym_private] = ACTIONS(532),
        [anon_sym_unsafe] = ACTIONS(532),
        [anon_sym_readonly] = ACTIONS(532),
        [anon_sym_volatile] = ACTIONS(532),
        [anon_sym_bool] = ACTIONS(532),
        [anon_sym_byte] = ACTIONS(532),
        [anon_sym_char] = ACTIONS(532),
        [anon_sym_decimal] = ACTIONS(532),
        [anon_sym_double] = ACTIONS(532),
        [anon_sym_float] = ACTIONS(532),
        [anon_sym_int] = ACTIONS(532),
        [anon_sym_long] = ACTIONS(532),
        [anon_sym_object] = ACTIONS(532),
        [anon_sym_sbyte] = ACTIONS(532),
        [anon_sym_short] = ACTIONS(532),
        [anon_sym_string] = ACTIONS(532),
        [anon_sym_uint] = ACTIONS(532),
        [anon_sym_ulong] = ACTIONS(532),
        [anon_sym_ushort] = ACTIONS(532),
        [sym_identifier_name] = ACTIONS(535),
        [sym_comment] = ACTIONS(43),
    },
    [133] = {
        [anon_sym_RBRACE] = ACTIONS(325),
        [anon_sym_class] = ACTIONS(333),
        [anon_sym_struct] = ACTIONS(333),
        [anon_sym_abstract] = ACTIONS(333),
        [anon_sym_sealed] = ACTIONS(333),
        [anon_sym_static] = ACTIONS(333),
        [anon_sym_new] = ACTIONS(333),
        [anon_sym_public] = ACTIONS(333),
        [anon_sym_protected] = ACTIONS(333),
        [anon_sym_internal] = ACTIONS(333),
        [anon_sym_private] = ACTIONS(333),
        [anon_sym_unsafe] = ACTIONS(333),
        [anon_sym_readonly] = ACTIONS(333),
        [anon_sym_volatile] = ACTIONS(333),
        [anon_sym_bool] = ACTIONS(333),
        [anon_sym_byte] = ACTIONS(333),
        [anon_sym_char] = ACTIONS(333),
        [anon_sym_decimal] = ACTIONS(333),
        [anon_sym_double] = ACTIONS(333),
        [anon_sym_float] = ACTIONS(333),
        [anon_sym_int] = ACTIONS(333),
        [anon_sym_long] = ACTIONS(333),
        [anon_sym_object] = ACTIONS(333),
        [anon_sym_sbyte] = ACTIONS(333),
        [anon_sym_short] = ACTIONS(333),
        [anon_sym_string] = ACTIONS(333),
        [anon_sym_uint] = ACTIONS(333),
        [anon_sym_ulong] = ACTIONS(333),
        [anon_sym_ushort] = ACTIONS(333),
        [sym_identifier_name] = ACTIONS(336),
        [sym_comment] = ACTIONS(43),
    },
    [134] = {
        [sym_namespace_declaration] = STATE(10),
        [sym_class_declaration] = STATE(136),
        [sym_struct_declaration] = STATE(136),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_compilation_unit_repeat2] = STATE(88),
        [aux_sym_class_declaration_repeat1] = STATE(137),
        [aux_sym_struct_declaration_repeat1] = STATE(138),
        [anon_sym_namespace] = ACTIONS(339),
        [anon_sym_RBRACE] = ACTIONS(538),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [135] = {
        [ts_builtin_sym_end] = ACTIONS(540),
        [anon_sym_namespace] = ACTIONS(546),
        [anon_sym_RBRACE] = ACTIONS(540),
        [anon_sym_class] = ACTIONS(546),
        [anon_sym_struct] = ACTIONS(546),
        [anon_sym_abstract] = ACTIONS(546),
        [anon_sym_sealed] = ACTIONS(546),
        [anon_sym_static] = ACTIONS(546),
        [anon_sym_new] = ACTIONS(546),
        [anon_sym_public] = ACTIONS(546),
        [anon_sym_protected] = ACTIONS(546),
        [anon_sym_internal] = ACTIONS(546),
        [anon_sym_private] = ACTIONS(546),
        [anon_sym_unsafe] = ACTIONS(546),
        [anon_sym_readonly] = ACTIONS(552),
        [anon_sym_volatile] = ACTIONS(552),
        [anon_sym_bool] = ACTIONS(552),
        [anon_sym_byte] = ACTIONS(552),
        [anon_sym_char] = ACTIONS(552),
        [anon_sym_decimal] = ACTIONS(552),
        [anon_sym_double] = ACTIONS(552),
        [anon_sym_float] = ACTIONS(552),
        [anon_sym_int] = ACTIONS(552),
        [anon_sym_long] = ACTIONS(552),
        [anon_sym_object] = ACTIONS(552),
        [anon_sym_sbyte] = ACTIONS(552),
        [anon_sym_short] = ACTIONS(552),
        [anon_sym_string] = ACTIONS(552),
        [anon_sym_uint] = ACTIONS(552),
        [anon_sym_ulong] = ACTIONS(552),
        [anon_sym_ushort] = ACTIONS(552),
        [sym_identifier_name] = ACTIONS(557),
        [sym_comment] = ACTIONS(43),
    },
    [136] = {
        [anon_sym_namespace] = ACTIONS(562),
        [anon_sym_RBRACE] = ACTIONS(564),
        [anon_sym_class] = ACTIONS(568),
        [anon_sym_struct] = ACTIONS(568),
        [anon_sym_abstract] = ACTIONS(568),
        [anon_sym_sealed] = ACTIONS(568),
        [anon_sym_static] = ACTIONS(568),
        [anon_sym_new] = ACTIONS(568),
        [anon_sym_public] = ACTIONS(568),
        [anon_sym_protected] = ACTIONS(568),
        [anon_sym_internal] = ACTIONS(568),
        [anon_sym_private] = ACTIONS(568),
        [anon_sym_unsafe] = ACTIONS(568),
        [anon_sym_readonly] = ACTIONS(181),
        [anon_sym_volatile] = ACTIONS(181),
        [anon_sym_bool] = ACTIONS(181),
        [anon_sym_byte] = ACTIONS(181),
        [anon_sym_char] = ACTIONS(181),
        [anon_sym_decimal] = ACTIONS(181),
        [anon_sym_double] = ACTIONS(181),
        [anon_sym_float] = ACTIONS(181),
        [anon_sym_int] = ACTIONS(181),
        [anon_sym_long] = ACTIONS(181),
        [anon_sym_object] = ACTIONS(181),
        [anon_sym_sbyte] = ACTIONS(181),
        [anon_sym_short] = ACTIONS(181),
        [anon_sym_string] = ACTIONS(181),
        [anon_sym_uint] = ACTIONS(181),
        [anon_sym_ulong] = ACTIONS(181),
        [anon_sym_ushort] = ACTIONS(181),
        [sym_identifier_name] = ACTIONS(183),
        [sym_comment] = ACTIONS(43),
    },
    [137] = {
        [sym_class_declaration] = STATE(51),
        [sym_struct_declaration] = STATE(51),
        [sym_field_declaration] = STATE(51),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [anon_sym_RBRACE] = ACTIONS(572),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [138] = {
        [sym_class_declaration] = STATE(30),
        [sym_struct_declaration] = STATE(30),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [anon_sym_RBRACE] = ACTIONS(574),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [139] = {
        [ts_builtin_sym_end] = ACTIONS(576),
        [anon_sym_namespace] = ACTIONS(579),
        [anon_sym_RBRACE] = ACTIONS(576),
        [anon_sym_class] = ACTIONS(579),
        [anon_sym_struct] = ACTIONS(579),
        [anon_sym_abstract] = ACTIONS(579),
        [anon_sym_sealed] = ACTIONS(579),
        [anon_sym_static] = ACTIONS(579),
        [anon_sym_new] = ACTIONS(579),
        [anon_sym_public] = ACTIONS(579),
        [anon_sym_protected] = ACTIONS(579),
        [anon_sym_internal] = ACTIONS(579),
        [anon_sym_private] = ACTIONS(579),
        [anon_sym_unsafe] = ACTIONS(579),
        [anon_sym_readonly] = ACTIONS(579),
        [anon_sym_volatile] = ACTIONS(579),
        [anon_sym_bool] = ACTIONS(579),
        [anon_sym_byte] = ACTIONS(579),
        [anon_sym_char] = ACTIONS(579),
        [anon_sym_decimal] = ACTIONS(579),
        [anon_sym_double] = ACTIONS(579),
        [anon_sym_float] = ACTIONS(579),
        [anon_sym_int] = ACTIONS(579),
        [anon_sym_long] = ACTIONS(579),
        [anon_sym_object] = ACTIONS(579),
        [anon_sym_sbyte] = ACTIONS(579),
        [anon_sym_short] = ACTIONS(579),
        [anon_sym_string] = ACTIONS(579),
        [anon_sym_uint] = ACTIONS(579),
        [anon_sym_ulong] = ACTIONS(579),
        [anon_sym_ushort] = ACTIONS(579),
        [sym_identifier_name] = ACTIONS(582),
        [sym_comment] = ACTIONS(43),
    },
    [140] = {
        [ts_builtin_sym_end] = ACTIONS(585),
        [anon_sym_namespace] = ACTIONS(588),
        [anon_sym_RBRACE] = ACTIONS(585),
        [anon_sym_class] = ACTIONS(588),
        [anon_sym_struct] = ACTIONS(588),
        [anon_sym_abstract] = ACTIONS(588),
        [anon_sym_sealed] = ACTIONS(588),
        [anon_sym_static] = ACTIONS(588),
        [anon_sym_new] = ACTIONS(588),
        [anon_sym_public] = ACTIONS(588),
        [anon_sym_protected] = ACTIONS(588),
        [anon_sym_internal] = ACTIONS(588),
        [anon_sym_private] = ACTIONS(588),
        [anon_sym_unsafe] = ACTIONS(588),
        [anon_sym_readonly] = ACTIONS(588),
        [anon_sym_volatile] = ACTIONS(588),
        [anon_sym_bool] = ACTIONS(588),
        [anon_sym_byte] = ACTIONS(588),
        [anon_sym_char] = ACTIONS(588),
        [anon_sym_decimal] = ACTIONS(588),
        [anon_sym_double] = ACTIONS(588),
        [anon_sym_float] = ACTIONS(588),
        [anon_sym_int] = ACTIONS(588),
        [anon_sym_long] = ACTIONS(588),
        [anon_sym_object] = ACTIONS(588),
        [anon_sym_sbyte] = ACTIONS(588),
        [anon_sym_short] = ACTIONS(588),
        [anon_sym_string] = ACTIONS(588),
        [anon_sym_uint] = ACTIONS(588),
        [anon_sym_ulong] = ACTIONS(588),
        [anon_sym_ushort] = ACTIONS(588),
        [sym_identifier_name] = ACTIONS(591),
        [sym_comment] = ACTIONS(43),
    },
    [141] = {
        [anon_sym_COMMA] = ACTIONS(594),
        [anon_sym_GT] = ACTIONS(594),
        [sym_comment] = ACTIONS(43),
    },
    [142] = {
        [sym_type_parameter_list] = STATE(144),
        [anon_sym_LBRACE] = ACTIONS(597),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [143] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(138),
        [anon_sym_RBRACE] = ACTIONS(599),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [144] = {
        [anon_sym_LBRACE] = ACTIONS(601),
        [sym_comment] = ACTIONS(43),
    },
    [145] = {
        [sym_class_declaration] = STATE(27),
        [sym_struct_declaration] = STATE(27),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [aux_sym_struct_declaration_repeat1] = STATE(130),
        [anon_sym_RBRACE] = ACTIONS(574),
        [anon_sym_class] = ACTIONS(51),
        [anon_sym_struct] = ACTIONS(53),
        [anon_sym_abstract] = ACTIONS(55),
        [anon_sym_sealed] = ACTIONS(55),
        [anon_sym_static] = ACTIONS(55),
        [anon_sym_new] = ACTIONS(57),
        [anon_sym_public] = ACTIONS(57),
        [anon_sym_protected] = ACTIONS(57),
        [anon_sym_internal] = ACTIONS(57),
        [anon_sym_private] = ACTIONS(57),
        [anon_sym_unsafe] = ACTIONS(57),
        [sym_comment] = ACTIONS(43),
    },
    [146] = {
        [ts_builtin_sym_end] = ACTIONS(603),
        [anon_sym_namespace] = ACTIONS(606),
        [anon_sym_RBRACE] = ACTIONS(603),
        [anon_sym_class] = ACTIONS(606),
        [anon_sym_struct] = ACTIONS(606),
        [anon_sym_abstract] = ACTIONS(606),
        [anon_sym_sealed] = ACTIONS(606),
        [anon_sym_static] = ACTIONS(606),
        [anon_sym_new] = ACTIONS(606),
        [anon_sym_public] = ACTIONS(606),
        [anon_sym_protected] = ACTIONS(606),
        [anon_sym_internal] = ACTIONS(606),
        [anon_sym_private] = ACTIONS(606),
        [anon_sym_unsafe] = ACTIONS(606),
        [anon_sym_readonly] = ACTIONS(606),
        [anon_sym_volatile] = ACTIONS(606),
        [anon_sym_bool] = ACTIONS(606),
        [anon_sym_byte] = ACTIONS(606),
        [anon_sym_char] = ACTIONS(606),
        [anon_sym_decimal] = ACTIONS(606),
        [anon_sym_double] = ACTIONS(606),
        [anon_sym_float] = ACTIONS(606),
        [anon_sym_int] = ACTIONS(606),
        [anon_sym_long] = ACTIONS(606),
        [anon_sym_object] = ACTIONS(606),
        [anon_sym_sbyte] = ACTIONS(606),
        [anon_sym_short] = ACTIONS(606),
        [anon_sym_string] = ACTIONS(606),
        [anon_sym_uint] = ACTIONS(606),
        [anon_sym_ulong] = ACTIONS(606),
        [anon_sym_ushort] = ACTIONS(606),
        [sym_identifier_name] = ACTIONS(609),
        [sym_comment] = ACTIONS(43),
    },
    [147] = {
        [sym_type_parameter_list] = STATE(149),
        [anon_sym_LBRACE] = ACTIONS(612),
        [anon_sym_LT] = ACTIONS(101),
        [sym_comment] = ACTIONS(43),
    },
    [148] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(137),
        [anon_sym_RBRACE] = ACTIONS(614),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [149] = {
        [anon_sym_LBRACE] = ACTIONS(616),
        [sym_comment] = ACTIONS(43),
    },
    [150] = {
        [sym_class_declaration] = STATE(44),
        [sym_struct_declaration] = STATE(44),
        [sym_field_declaration] = STATE(44),
        [sym_variable_declaration] = STATE(45),
        [sym__type] = STATE(46),
        [sym_class_modifiers] = STATE(11),
        [sym__class_modifiers] = STATE(12),
        [sym_struct_modifiers] = STATE(13),
        [sym__struct_modifiers] = STATE(14),
        [sym_field_modifiers] = STATE(47),
        [sym__field_modifiers] = STATE(48),
        [sym_predefined_type] = STATE(43),
        [aux_sym_class_declaration_repeat1] = STATE(129),
        [anon_sym_RBRACE] = ACTIONS(572),
        [anon_sym_class] = ACTIONS(141),
        [anon_sym_struct] = ACTIONS(143),
        [anon_sym_abstract] = ACTIONS(145),
        [anon_sym_sealed] = ACTIONS(145),
        [anon_sym_static] = ACTIONS(147),
        [anon_sym_new] = ACTIONS(149),
        [anon_sym_public] = ACTIONS(149),
        [anon_sym_protected] = ACTIONS(149),
        [anon_sym_internal] = ACTIONS(149),
        [anon_sym_private] = ACTIONS(149),
        [anon_sym_unsafe] = ACTIONS(149),
        [anon_sym_readonly] = ACTIONS(151),
        [anon_sym_volatile] = ACTIONS(151),
        [anon_sym_bool] = ACTIONS(153),
        [anon_sym_byte] = ACTIONS(153),
        [anon_sym_char] = ACTIONS(153),
        [anon_sym_decimal] = ACTIONS(153),
        [anon_sym_double] = ACTIONS(153),
        [anon_sym_float] = ACTIONS(153),
        [anon_sym_int] = ACTIONS(153),
        [anon_sym_long] = ACTIONS(153),
        [anon_sym_object] = ACTIONS(153),
        [anon_sym_sbyte] = ACTIONS(153),
        [anon_sym_short] = ACTIONS(153),
        [anon_sym_string] = ACTIONS(153),
        [anon_sym_uint] = ACTIONS(153),
        [anon_sym_ulong] = ACTIONS(153),
        [anon_sym_ushort] = ACTIONS(153),
        [sym_identifier_name] = ACTIONS(155),
        [sym_comment] = ACTIONS(43),
    },
    [151] = {
        [ts_builtin_sym_end] = ACTIONS(618),
        [anon_sym_namespace] = ACTIONS(621),
        [anon_sym_RBRACE] = ACTIONS(618),
        [anon_sym_class] = ACTIONS(621),
        [anon_sym_struct] = ACTIONS(621),
        [anon_sym_abstract] = ACTIONS(621),
        [anon_sym_sealed] = ACTIONS(621),
        [anon_sym_static] = ACTIONS(621),
        [anon_sym_new] = ACTIONS(621),
        [anon_sym_public] = ACTIONS(621),
        [anon_sym_protected] = ACTIONS(621),
        [anon_sym_internal] = ACTIONS(621),
        [anon_sym_private] = ACTIONS(621),
        [anon_sym_unsafe] = ACTIONS(621),
        [anon_sym_readonly] = ACTIONS(621),
        [anon_sym_volatile] = ACTIONS(621),
        [anon_sym_bool] = ACTIONS(621),
        [anon_sym_byte] = ACTIONS(621),
        [anon_sym_char] = ACTIONS(621),
        [anon_sym_decimal] = ACTIONS(621),
        [anon_sym_double] = ACTIONS(621),
        [anon_sym_float] = ACTIONS(621),
        [anon_sym_int] = ACTIONS(621),
        [anon_sym_long] = ACTIONS(621),
        [anon_sym_object] = ACTIONS(621),
        [anon_sym_sbyte] = ACTIONS(621),
        [anon_sym_short] = ACTIONS(621),
        [anon_sym_string] = ACTIONS(621),
        [anon_sym_uint] = ACTIONS(621),
        [anon_sym_ulong] = ACTIONS(621),
        [anon_sym_ushort] = ACTIONS(621),
        [sym_identifier_name] = ACTIONS(624),
        [sym_comment] = ACTIONS(43),
    },
    [152] = {
        [ts_builtin_sym_end] = ACTIONS(627),
        [anon_sym_namespace] = ACTIONS(635),
        [anon_sym_RBRACE] = ACTIONS(627),
        [anon_sym_class] = ACTIONS(635),
        [anon_sym_struct] = ACTIONS(635),
        [anon_sym_abstract] = ACTIONS(635),
        [anon_sym_sealed] = ACTIONS(635),
        [anon_sym_static] = ACTIONS(635),
        [anon_sym_new] = ACTIONS(635),
        [anon_sym_public] = ACTIONS(635),
        [anon_sym_protected] = ACTIONS(635),
        [anon_sym_internal] = ACTIONS(635),
        [anon_sym_private] = ACTIONS(635),
        [anon_sym_unsafe] = ACTIONS(635),
        [anon_sym_readonly] = ACTIONS(643),
        [anon_sym_volatile] = ACTIONS(643),
        [anon_sym_bool] = ACTIONS(643),
        [anon_sym_byte] = ACTIONS(643),
        [anon_sym_char] = ACTIONS(643),
        [anon_sym_decimal] = ACTIONS(643),
        [anon_sym_double] = ACTIONS(643),
        [anon_sym_float] = ACTIONS(643),
        [anon_sym_int] = ACTIONS(643),
        [anon_sym_long] = ACTIONS(643),
        [anon_sym_object] = ACTIONS(643),
        [anon_sym_sbyte] = ACTIONS(643),
        [anon_sym_short] = ACTIONS(643),
        [anon_sym_string] = ACTIONS(643),
        [anon_sym_uint] = ACTIONS(643),
        [anon_sym_ulong] = ACTIONS(643),
        [anon_sym_ushort] = ACTIONS(643),
        [sym_identifier_name] = ACTIONS(650),
        [sym_comment] = ACTIONS(43),
    },
};

static TSParseActionEntry ts_parse_actions[] = {
    [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
    [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(0),
    [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(2),
    [5] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(100),
    [7] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(3),
    [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(101),
    [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(102),
    [13] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(103),
    [15] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(104),
    [17] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(6),
    [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(105),
    [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(40),
    [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(41),
    [25] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(42),
    [27] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(23),
    [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(106),
    [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(107),
    [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(84),
    [35] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(90),
    [37] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(99),
    [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(81),
    [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(108),
    [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
    [45] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 0),
    [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
    [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
    [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
    [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
    [55] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
    [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
    [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
    [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
    [63] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(93),
    [65] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
    [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(67),
    [69] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
    [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 1),
    [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 1),
    [75] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
    [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1),
    [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
    [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1),
    [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
    [87] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1),
    [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1),
    [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 2),
    [97] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
    [99] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
    [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
    [103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
    [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
    [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
    [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
    [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6),
    [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6),
    [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
    [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 7),
    [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 7),
    [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [131] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5),
    [133] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5),
    [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
    [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
    [139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
    [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
    [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
    [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
    [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
    [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
    [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
    [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
    [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
    [157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
    [159] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
    [161] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6),
    [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6),
    [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__class_modifiers, 1),
    [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 1),
    [171] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1),
    [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__struct_modifiers, 1),
    [175] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_predefined_type, 1),
    [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type, 1),
    [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [183] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1),
    [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
    [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
    [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1),
    [191] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1),
    [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
    [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 7),
    [199] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 7),
    [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 2),
    [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
    [209] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 3),
    [213] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 3),
    [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5),
    [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5),
    [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1),
    [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
    [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2),
    [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2),
    [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__field_modifiers, 2),
    [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 2),
    [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__class_modifiers, 2),
    [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__struct_modifiers, 2),
    [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
    [241] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
    [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4),
    [247] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4),
    [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
    [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
    [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4),
    [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4),
    [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter, 1),
    [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
    [263] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
    [265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3),
    [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
    [269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
    [271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 4),
    [273] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [275] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2),
    [277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
    [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
    [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
    [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
    [285] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3),
    [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
    [289] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4),
    [291] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
    [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 5),
    [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
    [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_alias_qualified_name, 3),
    [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_static, 1),
    [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_static, 1),
    [303] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
    [305] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(99),
    [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(96),
    [309] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
    [311] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 4),
    [313] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3),
    [315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_name_equals, 2),
    [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_name_equals, 2),
    [319] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [322] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_using_directive, 3), REDUCE(sym_using_directive, 4),
    [325] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [328] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_using_directive, 3), REDUCE(sym_field_declaration, 3), REDUCE(sym_using_directive, 4),
    [333] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [336] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_declaration, 2), REDUCE(sym_field_declaration, 3),
    [339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
    [341] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
    [343] = {.count = 10, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [354] = {.count = 10, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_namespace_declaration, 5), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [365] = {.count = 8, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [374] = {.count = 8, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6), REDUCE(sym_class_declaration, 7), REDUCE(sym_struct_declaration, 7),
    [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
    [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
    [387] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__field_modifiers, 1), REDUCE(sym_static, 1),
    [390] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_parameter_list, 3), REDUCE(sym_type_parameter_list, 4),
    [393] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declarator, 1), REDUCE(sym_qualified_name, 3), SHIFT(125),
    [397] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), SHIFT(134),
    [400] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_name, 3), REDUCE(sym_alias_qualified_name, 3), SHIFT(84),
    [404] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat1, 2),
    [407] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [410] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2),
    [413] = {.count = 6, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [420] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1), REDUCE(aux_sym_compilation_unit_repeat2, 2), REDUCE(aux_sym_class_declaration_repeat1, 2), REDUCE(aux_sym_struct_declaration_repeat1, 2),
    [427] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [430] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [433] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_class_declaration_repeat1, 2),
    [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
    [438] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_modifiers, 1), REDUCE(sym__class_modifiers, 2),
    [441] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_modifiers, 1), REDUCE(sym__struct_modifiers, 2),
    [444] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [447] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_field_modifiers, 1), REDUCE(sym__field_modifiers, 2),
    [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
    [452] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(74),
    [456] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3), SHIFT(75),
    [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
    [462] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_compilation_unit, 1), REDUCE(sym_compilation_unit, 2),
    [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
    [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(123),
    [469] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [473] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [477] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [481] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [485] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [489] = {.count = 3, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
    [495] = {.count = 4, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [500] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [505] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [510] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [513] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
    [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
    [520] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [523] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [526] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 6), REDUCE(sym_struct_declaration, 7),
    [529] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [532] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [535] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 6), REDUCE(sym_class_declaration, 7),
    [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
    [540] = {.count = 5, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [546] = {.count = 5, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [552] = {.count = 4, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [557] = {.count = 4, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5),
    [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1),
    [564] = {.count = 3, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [568] = {.count = 3, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_compilation_unit_repeat2, 1), REDUCE(aux_sym_class_declaration_repeat1, 1), REDUCE(aux_sym_struct_declaration_repeat1, 1),
    [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
    [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(139),
    [576] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [579] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [582] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 5), REDUCE(sym_struct_declaration, 6),
    [585] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [588] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [591] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 5), REDUCE(sym_class_declaration, 6),
    [594] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_parameter_list_repeat1, 2), REDUCE(aux_sym_type_parameter_list_repeat1, 3),
    [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
    [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
    [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
    [603] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [606] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [609] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_struct_declaration, 4), REDUCE(sym_struct_declaration, 5),
    [612] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
    [614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
    [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
    [618] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [621] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [624] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_class_declaration, 5),
    [627] = {.count = 7, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [635] = {.count = 7, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_namespace_declaration, 4), REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [643] = {.count = 6, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
    [650] = {.count = 6, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_class_declaration, 4), REDUCE(sym_struct_declaration, 4), REDUCE(sym_class_declaration, 5), REDUCE(sym_struct_declaration, 5), REDUCE(sym_class_declaration, 6), REDUCE(sym_struct_declaration, 6),
};

#pragma GCC diagnostic pop

EXPORT_LANGUAGE(ts_language_c_sharp);
