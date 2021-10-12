#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    BLOCK_COMMENT,
    RAW_STR_PART,
    RAW_STR_CONTINUING_INDICATOR,
    RAW_STR_END_PART,
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
    RETHROWS_KEYWORD
};

#define CROSS_SEMI_OPERATOR_COUNT 10

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
    "rethrows"
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
    8
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
    RETHROWS_KEYWORD
};

struct ScannerState {
    uint32_t ongoing_raw_str_hash_count;
};

void *tree_sitter_swift_external_scanner_create() {
    return calloc(0, sizeof(struct ScannerState));
}

void tree_sitter_swift_external_scanner_destroy(void *payload) {
    free(payload);
}

void tree_sitter_swift_external_scanner_reset(void *payload) {
    struct ScannerState *state = (struct ScannerState *)payload;
    state->ongoing_raw_str_hash_count = 0;
}

unsigned tree_sitter_swift_external_scanner_serialize(void *payload, char *buffer) {
    struct ScannerState *state = (struct ScannerState *)payload;
    uint32_t hash_count = state->ongoing_raw_str_hash_count;
    buffer[0] = (hash_count >> 24) & 0xff;
    buffer[1] = (hash_count >> 16) & 0xff;
    buffer[2] = (hash_count >> 8) & 0xff;
    buffer[3] = (hash_count) & 0xff;
    return 4;
}

void tree_sitter_swift_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    if (length < 4) {
        return;
    }

    uint32_t hash_count = (
                              (((uint32_t) buffer[0]) << 24) |
                              (((uint32_t) buffer[1]) << 16) |
                              (((uint32_t) buffer[2]) << 8) |
                              (((uint32_t) buffer[3]))
                          );
    struct ScannerState *state = (struct ScannerState *)payload;
    state->ongoing_raw_str_hash_count = hash_count;
}

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

static bool eat_raw_str_part(
    struct ScannerState *state,
    TSLexer *lexer,
    const bool *valid_symbols,
    enum TokenType *symbol_result
) {
    uint32_t hash_count = state->ongoing_raw_str_hash_count;
    if (!valid_symbols[RAW_STR_PART]) {
        return false;
    } else if (hash_count == 0) {
        // If this is a raw_str_part, it's the first one - look for hashes
        while (lexer->lookahead == '#') {
            hash_count += 1;
            advance(lexer);
        }

        if (hash_count == 0) {
            return false;
        }

        if (lexer->lookahead == '"') {
            advance(lexer);
        } else {
            return false;
        }

    } else if (valid_symbols[RAW_STR_CONTINUING_INDICATOR]) {
        // This is the end of an interpolation - now it's another raw_str_part. This is a synthetic
        // marker to tell us that the grammar just consumed a `(` symbol to close a raw
        // interpolation (since we don't want to fire on every `(` in existence). We don't have
        // anything to do except continue.
    } else {
        return false;
    }

    // We're in a state where anything other than `hash_count` hash symbols in a row should be eaten
    // and is part of a string.
    // The last character _before_ the hashes will tell us what happens next.
    // Matters are also complicated by the fact that we don't want to consume every character we
    // visit; if we see a `\#(`, for instance, with the appropriate number of hash symbols, we want
    // to end our parsing _before_ that sequence. This allows highlighting tools to treat that as a
    // separate token.
    while (lexer->lookahead != '\0') {
        uint8_t last_char = '\0';
        lexer->mark_end(lexer); // We always want to parse thru the start of the string so far
        // Advance through anything that isn't a hash symbol, because we want to count those.
        while (lexer->lookahead != '#') {
            last_char = lexer->lookahead;
            advance(lexer);
            if (last_char != '\\') {
                // Mark a new end, but only if we didn't just advance past a `\` symbol, since we
                // don't want to consume that.
                lexer->mark_end(lexer);
            }
        }

        // We hit at least one hash - count them and see if they match.
        uint32_t current_hash_count = 0;
        while (lexer->lookahead == '#' && current_hash_count < hash_count) {
            current_hash_count += 1;
            advance(lexer);
        }

        // If we saw exactly the right number of hashes, one of three things is true:
        // 1. We're trying to interpolate into this string.
        // 2. The string just ended.
        // 3. This was just some hash characters doing nothing important.
        if (current_hash_count == hash_count) {
            if (last_char == '\\' && lexer->lookahead == '(') {
                // Interpolation case! Don't consume those chars; they get saved for grammar.js.
                *symbol_result = RAW_STR_PART;
                state->ongoing_raw_str_hash_count = hash_count;
                return true;
            } else if (last_char == '"') {
                // The string is finished! Mark the end here, on the very last hash symbol.
                lexer->mark_end(lexer);
                *symbol_result = RAW_STR_END_PART;
                state->ongoing_raw_str_hash_count = 0;
                return true;
            }
            // Nothing special happened - let the string continue.
        }
    }

    return false;
}

bool tree_sitter_swift_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    // Figure out our scanner state
    struct ScannerState *state = (struct ScannerState *)payload;

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

    // NOTE: this will consume any `#` characters it sees, even if it does not find a result. Keep
    // it at the end so that it doesn't interfere with special literals or selectors!
    enum TokenType raw_str_result;
    bool saw_raw_str_part = eat_raw_str_part(state, lexer, valid_symbols, &raw_str_result);
    if (saw_raw_str_part) {
        lexer->result_symbol = raw_str_result;
        return true;
    }

    return false;
}

