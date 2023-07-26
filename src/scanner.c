#include "tree_sitter/parser.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));           \
    assert(tmp != NULL);                                                       \
    (vec).data = tmp;                                                          \
    assert((vec).data != NULL);                                                \
    (vec).cap = (_cap);

#define VEC_GROW(vec, _cap)                                                    \
    if ((vec).cap < (_cap)) {                                                  \
        VEC_RESIZE((vec), (_cap));                                             \
    }

#define VEC_PUSH(vec, el)                                                      \
    if ((vec).cap == (vec).len) {                                              \
        VEC_RESIZE((vec), MAX(16, (vec).len * 2));                             \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define VEC_POP(vec) (vec).len--;

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                          \
    {                                                                          \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
    }

#define VEC_CLEAR(vec) (vec).len = 0;

#define VEC_REVERSE(vec)                                                       \
    do {                                                                       \
        if ((vec).len > 1) {                                                   \
            for (size_t i = 0, j = (vec).len - 1; i < j; i++, j--) {           \
                uint8_t tmp = (vec).data[i];                                   \
                (vec).data[i] = (vec).data[j];                                 \
                (vec).data[j] = tmp;                                           \
            }                                                                  \
        }                                                                      \
    } while (0)

enum TokenType {
    VIRTUAL_END_DECL,
    VIRTUAL_OPEN_SECTION,
    VIRTUAL_END_SECTION,
    MINUS_WITHOUT_TRAILING_WHITESPACE,
    GLSL_CONTENT,
    BLOCK_COMMENT_CONTENT,
};

typedef struct {
    uint32_t len;
    uint32_t cap;
    uint8_t *data;
} vec;

typedef struct {
    uint32_t indent_length;
    vec indents;
    vec runback;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// > You can detect error recovery in the external scanner by the fact that
// > _all_ tokens are considered valid at once.
// https://github.com/tree-sitter/tree-sitter/pull/1783#issuecomment-1181011411
static bool in_error_recovery(const bool *valid_symbols) {
    return (valid_symbols[VIRTUAL_END_DECL] &&
            valid_symbols[VIRTUAL_OPEN_SECTION] &&
            valid_symbols[VIRTUAL_END_SECTION] &&
            valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] &&
            valid_symbols[GLSL_CONTENT] &&
            valid_symbols[BLOCK_COMMENT_CONTENT]);
}

static bool is_elm_space(TSLexer *lexer) {
    return lexer->lookahead == ' ' || lexer->lookahead == '\r' ||
           lexer->lookahead == '\n';
}

static int checkForIn(TSLexer *lexer, const bool *valid_symbols) {
    // Are we at the end of a let (in) declaration
    if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == 'i') {
        skip(lexer);

        if (lexer->lookahead == 'n') {
            skip(lexer);
            if (is_elm_space(lexer) || lexer->eof(lexer)) {
                return 2; // Success
            }
            return 1; // Partial
        }
        return 1; // Partial
    }
    return 0;
}

static bool scan_block_comment(TSLexer *lexer) {
    lexer->mark_end(lexer);
    if (lexer->lookahead != '{') {
        return false;
    }

    advance(lexer);
    if (lexer->lookahead != '-') {
        return false;
    }

    advance(lexer);

    while (true) {
        switch (lexer->lookahead) {
            case '{':
                scan_block_comment(lexer);
                break;
            case '-':
                advance(lexer);
                if (lexer->lookahead == '}') {
                    advance(lexer);
                    return true;
                }
                break;
            case '\0':
                return true;
            default:
                advance(lexer);
        }
    }
}

static void advance_to_line_end(TSLexer *lexer) {
    while (true) {
        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            break;
        }
        advance(lexer);
    }
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols)) {
        return false;
    }

    // First handle eventual runback tokens, we saved on a previous scan op
    if (scanner->runback.len > 0 && VEC_BACK(scanner->runback) == 0 &&
        valid_symbols[VIRTUAL_END_DECL]) {
        VEC_POP(scanner->runback);
        lexer->result_symbol = VIRTUAL_END_DECL;
        return true;
    }
    if (scanner->runback.len > 0 && VEC_BACK(scanner->runback) == 1 &&
        valid_symbols[VIRTUAL_END_SECTION]) {
        VEC_POP(scanner->runback);
        lexer->result_symbol = VIRTUAL_END_SECTION;
        return true;
    }
    VEC_CLEAR(scanner->runback);

    // Check if we have newlines and how much indentation
    bool has_newline = false;
    bool found_in = false;
    bool can_call_mark_end = true;
    lexer->mark_end(lexer);
    while (true) {
        if (lexer->lookahead == ' ' || lexer->lookahead == '\r') {
            skip(lexer);
        } else if (lexer->lookahead == '\n') {
            skip(lexer);
            has_newline = true;
            while (true) {
                if (lexer->lookahead == ' ') {
                    skip(lexer);
                } else {
                    scanner->indent_length = lexer->get_column(lexer);
                    break;
                }
            }
        } else if (!valid_symbols[BLOCK_COMMENT_CONTENT] &&
                   lexer->lookahead == '-') {
            advance(lexer);
            int32_t lookahead = lexer->lookahead;

            // Handle minus without a whitespace for negate
            if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] &&
                ((lookahead >= 'a' && lookahead <= 'z') ||
                 (lookahead >= 'A' && lookahead <= 'Z') || lookahead == '(')) {
                if (can_call_mark_end) {
                    lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                    lexer->mark_end(lexer);
                    return true;
                }
                return false;
            }
            // Scan past line comments. As far as the special token
            // types we're scanning for here are concerned line comments
            // are like whitespace. There is nothing useful to be
            // learned from, say, their indentation. So we advance past
            // them here.
            //
            // The one thing we need to keep in mind is that we should
            // not call `lexer->mark_end(lexer)` after this point, or
            // the comment will be lost.
            if (lookahead == '-' && has_newline) {
                can_call_mark_end = false;
                advance(lexer);
                advance_to_line_end(lexer);
            } else if (valid_symbols[BLOCK_COMMENT_CONTENT] &&
                       lexer->lookahead == '}') {
                lexer->result_symbol = BLOCK_COMMENT_CONTENT;
                return true;
            } else {
                return false;
            }
        } else if (lexer->eof(lexer)) {
            if (valid_symbols[VIRTUAL_END_SECTION]) {
                lexer->result_symbol = VIRTUAL_END_SECTION;
                return true;
            }
            if (valid_symbols[VIRTUAL_END_DECL]) {
                lexer->result_symbol = VIRTUAL_END_DECL;
                return true;
            }

            break;
        } else {
            break;
        }
    }

    if (checkForIn(lexer, valid_symbols) == 2) {
        if (has_newline) {
            found_in = true;
        } else {
            lexer->result_symbol = VIRTUAL_END_SECTION;
            VEC_POP(scanner->indents);
            return true;
        }
    }

    // Open section if the grammar lets us but only push to indent stack if
    // we go further down in the stack
    if (valid_symbols[VIRTUAL_OPEN_SECTION] && !lexer->eof(lexer)) {
        VEC_PUSH(scanner->indents, lexer->get_column(lexer));
        lexer->result_symbol = VIRTUAL_OPEN_SECTION;
        return true;
    }
    if (valid_symbols[BLOCK_COMMENT_CONTENT]) {
        if (!can_call_mark_end) {
            return false;
        }
        lexer->mark_end(lexer);
        while (true) {
            if (lexer->lookahead == '\0') {
                break;
            }
            if (lexer->lookahead != '{' && lexer->lookahead != '-') {
                advance(lexer);
            } else if (lexer->lookahead == '-') {
                lexer->mark_end(lexer);
                advance(lexer);
                if (lexer->lookahead == '}') {
                    break;
                }
            } else if (scan_block_comment(lexer)) {
                lexer->mark_end(lexer);
                advance(lexer);
                if (lexer->lookahead == '-') {
                    break;
                }
            }
        }

        lexer->result_symbol = BLOCK_COMMENT_CONTENT;
        return true;
    }
    if (has_newline) {
        // We had a newline now it's time to check if we need to add
        // multiple tokens to get back up to the right level
        VEC_CLEAR(scanner->runback);

        while (scanner->indent_length <= VEC_BACK(scanner->indents)) {
            if (scanner->indent_length == VEC_BACK(scanner->indents)) {
                if (found_in) {
                    VEC_PUSH(scanner->runback, 1);
                    found_in = false;
                    break;
                }
                // Don't insert VIRTUAL_END_DECL when there is a line
                // comment incoming

                if (lexer->lookahead == '-') {
                    skip(lexer);
                    if (lexer->lookahead == '-') {
                        break;
                    }
                }
                // Don't insert VIRTUAL_END_DECL when there is a block
                // comment incoming
                if (lexer->lookahead == '{') {
                    skip(lexer);
                    if (lexer->lookahead == '-') {
                        break;
                    }
                }
                VEC_PUSH(scanner->runback, 0);
                break;
            }
            if (scanner->indent_length < VEC_BACK(scanner->indents)) {
                VEC_POP(scanner->indents);
                VEC_PUSH(scanner->runback, 1);
                found_in = false;
            }
        }

        // Needed for some of the more weird cases where let is in the same
        // line as everything before the in in the next line
        if (found_in) {
            VEC_PUSH(scanner->runback, 1);
            found_in = false;
        }

        // Our list is the wrong way around, reverse it
        VEC_REVERSE(scanner->runback);
        // Handle the first runback token if we have them, if there are more
        // they will be handled on the next scan operation
        if (scanner->runback.len > 0 && VEC_BACK(scanner->runback) == 0 &&
            valid_symbols[VIRTUAL_END_DECL]) {
            VEC_POP(scanner->runback);
            lexer->result_symbol = VIRTUAL_END_DECL;
            return true;
        }
        if (scanner->runback.len > 0 && VEC_BACK(scanner->runback) == 1 &&
            valid_symbols[VIRTUAL_END_SECTION]) {
            VEC_POP(scanner->runback);
            lexer->result_symbol = VIRTUAL_END_SECTION;
            return true;
        }
        if (lexer->eof(lexer) && valid_symbols[VIRTUAL_END_SECTION]) {
            lexer->result_symbol = VIRTUAL_END_SECTION;
            return true;
        }
    }

    if (valid_symbols[GLSL_CONTENT]) {
        if (!can_call_mark_end) {
            return false;
        }
        lexer->result_symbol = GLSL_CONTENT;
        while (true) {
            switch (lexer->lookahead) {
                case '|':
                    lexer->mark_end(lexer);
                    advance(lexer);
                    if (lexer->lookahead == ']') {
                        advance(lexer);
                        return true;
                    }
                    break;
                case '\0':
                    lexer->mark_end(lexer);
                    return true;
                default:
                    advance(lexer);
            }
        }
    }

    return false;
}

// --------------------------------------------------------------------------------------------------------
// API
// --------------------------------------------------------------------------------------------------------

/**
 * This function allocates the persistent state of the parser that is passed
 * into the other API functions.
 */
void *tree_sitter_elm_external_scanner_create() {
    Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
    return scanner;
}

/**
 * Main logic entry point.
 * Since the state is a singular vector, it can just be cast and used directly.
 */
bool tree_sitter_elm_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    return scan(scanner, lexer, valid_symbols);
}

/**
 * Copy the current state to another location for later reuse.
 * This is normally more complex, but since this parser's state constists solely
 * of a vector of integers, it can just be copied.
 */
unsigned tree_sitter_elm_external_scanner_serialize(void *payload,
                                                    char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    size_t size = 0;

    if (3 + scanner->indents.len + scanner->runback.len >=
        TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
        return 0;
    }

    size_t runback_count = scanner->runback.len;
    if (runback_count > UINT8_MAX) {
        runback_count = UINT8_MAX;
    }
    buffer[size++] = (char)runback_count;

    if (runback_count > 0) {
        memcpy(&buffer[size], scanner->runback.data, runback_count);
    }
    size += runback_count;

    size_t indent_length_length = sizeof(scanner->indent_length);
    buffer[size++] = (char)indent_length_length;
    if (indent_length_length > 0) {
        memcpy(&buffer[size], &scanner->indent_length, indent_length_length);
    }
    size += indent_length_length;

    int iter = 1;
    for (; iter != scanner->indents.len &&
           size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        buffer[size++] = (char)scanner->indents.data[iter];
    }

    return size;
}

/**
 * Load another parser state into the currently active state.
 * `payload` is the state of the previous parser execution, while `buffer` is
 * the saved state of a different position (e.g. when doing incremental
 * parsing).
 */
void tree_sitter_elm_external_scanner_deserialize(void *payload,
                                                  const char *buffer,
                                                  unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    VEC_CLEAR(scanner->runback);
    VEC_CLEAR(scanner->indents);
    VEC_PUSH(scanner->indents, 0);

    if (length == 0) {
        return;
    }

    size_t size = 0;
    size_t runback_count = (unsigned char)buffer[size++];
    VEC_GROW(scanner->runback, runback_count)
    if (runback_count > 0) {
        memcpy(scanner->runback.data, &buffer[size], runback_count);
        scanner->runback.len = runback_count;
        size += runback_count;
    }

    size_t indent_length_length = (unsigned char)buffer[size++];
    if (indent_length_length > 0) {
        memcpy(&scanner->indent_length, &buffer[size], indent_length_length);
        size += indent_length_length;
    }

    for (; size < length; size++) {
        VEC_PUSH(scanner->indents, (unsigned char)buffer[size]);
    }
    assert(size == length);
}

/**
 * Destroy the state.
 */
void tree_sitter_elm_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    VEC_FREE(scanner->indents);
    VEC_FREE(scanner->runback);
    free(scanner);
}
