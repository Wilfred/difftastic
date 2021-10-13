#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    BLOCK_COMMENT,
    SEMI,
    ARROW_OPERATOR,
    DOT_OPERATOR,
    THREE_DOT_OPERATOR,
    OPEN_ENDED_RANGE_OPERATOR,
    CONJUNCTION_OPERATOR,
    DISJUNCTION_OPERATOR,
    NIL_COALESCING_OPERATOR,
    EQUAL_SIGN,
    THROWS_KEYWORD,
    RETHROWS_KEYWORD,
    DEFAULT_KEYWORD
};

#define CROSS_SEMI_OPERATOR_COUNT 11

const char* CROSS_SEMI_OPERATORS[CROSS_SEMI_OPERATOR_COUNT] = {
    "->",
    ".",
    "...",
    "..<",
    "&&",
    "||",
    "??",
    "=",
    "throws",
    "rethrows",
    "default"
};

const int32_t CROSS_SEMI_OP_LENS[CROSS_SEMI_OPERATOR_COUNT] = {
    2,
    1,
    3,
    3,
    2,
    2,
    2,
    1,
    6,
    8,
    7
};

const enum TokenType CROSS_SEMI_SYMBOLS[CROSS_SEMI_OPERATOR_COUNT] = {
    ARROW_OPERATOR,
    DOT_OPERATOR,
    THREE_DOT_OPERATOR,
    OPEN_ENDED_RANGE_OPERATOR,
    CONJUNCTION_OPERATOR,
    DISJUNCTION_OPERATOR,
    NIL_COALESCING_OPERATOR,
    EQUAL_SIGN,
    THROWS_KEYWORD,
    RETHROWS_KEYWORD,
    DEFAULT_KEYWORD
};

void *tree_sitter_swift_external_scanner_create() {
    return NULL;
}
void tree_sitter_swift_external_scanner_destroy(void *p) {}
void tree_sitter_swift_external_scanner_reset(void *p) {}
unsigned tree_sitter_swift_external_scanner_serialize(void *p, char *buffer) {
    return 0;
}
void tree_sitter_swift_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

static bool should_treat_as_wspace(int32_t character) {
    return iswspace(character) || (((int32_t) ';') == character);
}

static int32_t encountered_op_count(bool *encountered_operator) {
    int32_t encountered = 0;
    for (int op_idx = 0; op_idx < CROSS_SEMI_OPERATOR_COUNT; op_idx++) {
        if (encountered_operator[op_idx]) {
            encountered++;
        }
    }

    return encountered;
}

static bool eat_whitespace(
    TSLexer *lexer,
    const bool *valid_symbols,
    enum TokenType *symbol_result
) {
    bool saw_semi = false;
    bool semi_is_valid = valid_symbols[SEMI];
    uint32_t lookahead;
    while (should_treat_as_wspace(lookahead = lexer->lookahead)) {
        if (lookahead == ';' && !semi_is_valid) {
            break;
        }

        lexer->advance(lexer, true);
        if (lookahead == '\n' || lookahead == '\r' || lookahead == ';') {
            saw_semi = true;
        }
    }

    lexer->mark_end(lexer);
    if (saw_semi && semi_is_valid) {
        *symbol_result = SEMI;
        return true;
    }

    return false;
}

static bool eat_operators(
    TSLexer *lexer,
    const bool *valid_symbols,
    enum TokenType *symbol_result
) {
    bool possible_operators[CROSS_SEMI_OPERATOR_COUNT];
    for (int op_idx = 0; op_idx < CROSS_SEMI_OPERATOR_COUNT; op_idx++) {
        possible_operators[op_idx] = valid_symbols[CROSS_SEMI_SYMBOLS[op_idx]];
    }

    int32_t str_idx = 0;
    int32_t full_match = -1;
    int32_t encountered_count;
    while(true) {
        for (int op_idx = 0; op_idx < CROSS_SEMI_OPERATOR_COUNT; op_idx++) {
            if (!possible_operators[op_idx]) {
                continue;
            }

            if (str_idx > CROSS_SEMI_OP_LENS[op_idx]) {
                possible_operators[op_idx] = false;
                continue;
            }

            if (str_idx == CROSS_SEMI_OP_LENS[op_idx]) {
                full_match = op_idx;
                lexer->mark_end(lexer);
                continue;
            }

            if (CROSS_SEMI_OPERATORS[op_idx][str_idx] != lexer->lookahead) {
                possible_operators[op_idx] = false;
                continue;
            }
        }

        if (encountered_op_count(possible_operators) == 0) {
            break;
        }

        lexer->advance(lexer, false);
        str_idx += 1;
    }

    if (full_match != -1) {
        *symbol_result = CROSS_SEMI_SYMBOLS[full_match];
        return true;
    }

    return false;
}

static bool eat_comment(
    TSLexer *lexer,
    const bool *valid_symbols,
    enum TokenType *symbol_result
) {
    // This is from https://github.com/tree-sitter/tree-sitter-rust/blob/f1c5c4b1d7b98a0288c1e4e6094cfcc3f6213cc0/src/scanner.c
    if (lexer->lookahead == '/') {
        advance(lexer);
        if (lexer->lookahead != '*') return false;
        advance(lexer);

        bool after_star = false;
        unsigned nesting_depth = 1;
        for (;;) {
            switch (lexer->lookahead) {
            case '\0':
                return false;
            case '*':
                advance(lexer);
                after_star = true;
                break;
            case '/':
                if (after_star) {
                    advance(lexer);
                    after_star = false;
                    nesting_depth--;
                    if (nesting_depth == 0) {
                        lexer->mark_end(lexer);
                        *symbol_result = BLOCK_COMMENT;
                        return true;
                    }
                } else {
                    advance(lexer);
                    after_star = false;
                    if (lexer->lookahead == '*') {
                        nesting_depth++;
                        advance(lexer);
                    }
                }
                break;
            default:
                advance(lexer);
                after_star = false;
                break;
            }
        }
    }

    return false;
}


bool tree_sitter_swift_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    // Consume any whitespace at the start.
    enum TokenType semi_result;
    bool saw_semi = eat_whitespace(lexer, valid_symbols, &semi_result);

    // Now consume any operators that might cause our whitespace to be suppressed.
    enum TokenType operator_result;
    bool saw_operator = eat_operators(lexer, valid_symbols, &operator_result);

    if (saw_operator) {
        lexer->result_symbol = operator_result;
        return true;
    }

    if (saw_semi) {
        // Don't `mark_end`, since we may have advanced through some operators.
        lexer->result_symbol = semi_result;
        return true;
    }

    enum TokenType comment_result;
    bool saw_comment = eat_comment(lexer, valid_symbols, &comment_result);
    if (saw_comment) {
        lexer->mark_end(lexer);
        lexer->result_symbol = comment_result;
        return true;
    }

    return false;
}

