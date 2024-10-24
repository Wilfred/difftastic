#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <wctype.h>

#include "tree_sitter/parser.h"

/**
 * This enum is mapped to the `externals` list in the grammar according to how
 * they are ordered (the names are abitrary).
 *
 * When the `scan` function is called, the parameter `syms` contains a bool for
 * each enum attribute indicating whether the parse tree at the current position
 * can accept the corresponding symbol.
 *
 * The attribute `fail` is not part of the parse tree, it is used to indicate
 * that no matching symbol was found.
 *
 * The meanings are:
 *   - identifier: OpenFOAM identifiers (keyword names)
 */
enum TokenType {
    IDENTIFIER,
    BOOLEAN,
    END_OF_FILE,
};

const char *const boolean_values[] = {"on", "off", "true", "false"};

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static bool non_identifier_char(const uint32_t chr) {
    switch (chr) {
        case '"':
        case '\'':
        case ';':
        case '$':
        case '#':
        case ' ':
        case '{':
        case '}':
        case '[':
        case ']':
        case '\t':
        case '\n':
        case '\r':
        case '\f':
        case '\v':
        case '\0':
            return true;
        default:
            return false;
    }
}

void *tree_sitter_foam_external_scanner_create() { return NULL; }

/**
 * Main logic entry point.
 * Since the state is a singular vector, it can just be cast and used directly.
 */
bool tree_sitter_foam_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    int32_t nesting_level = 0;
    char current_ident[6] = {0};

    while (iswspace(lexer->lookahead) && lexer->lookahead != '\0') {
        skip(lexer);
    }

    if (!isalpha(lexer->lookahead) && lexer->lookahead != '_') {
        if (lexer->eof(lexer)) {
            lexer->result_symbol = END_OF_FILE;
            return true;
        }
        return false;
    }

    current_ident[0] = (char)lexer->lookahead;
    advance(lexer);

    int idx = 1;
    while (true) {
        if (lexer->eof(lexer)) {
            break;
        }

        // Stop if:
        //   Not an identifier char and nesting level is 0,
        //   or if nesting level falls under 0 (There is an extra ")")
        if (non_identifier_char(lexer->lookahead) && nesting_level == 0) {
            lexer->mark_end(lexer);
            break;
        }
        if (lexer->lookahead == '(') {
            ++nesting_level;
        } else if (lexer->lookahead == ')') {
            --nesting_level;
            if (nesting_level == -1) {
                lexer->mark_end(lexer);
                break;
            }
        }

        if (idx < 5) {
            current_ident[idx++] = (char)lexer->lookahead;
            for (int j = 0; j < 4; j++) {
                if (strcmp(current_ident, boolean_values[j]) == 0) {
                    advance(lexer);
                    lexer->result_symbol = BOOLEAN;
                    return true;
                }
            }
        }
        advance(lexer);
    }

    if (valid_symbols[IDENTIFIER]) {
        lexer->result_symbol = IDENTIFIER;
        return true;
    }
    return false;
}

unsigned tree_sitter_foam_external_scanner_serialize(void *payload,
                                                     char *buffer) {
    return 0;
}

void tree_sitter_foam_external_scanner_deserialize(void *payload, char *buffer,
                                                   unsigned length) {}

void tree_sitter_foam_external_scanner_destroy(void *payload) {}
