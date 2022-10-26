#include <tree_sitter/parser.h>
#include <cassert>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using std::vector;
using std::memcpy;

namespace TreeSitterMarkdownInline {
    // For explanation of the tokens see grammar.js
    enum TokenType {
        ERROR,
        TRIGGER_ERROR,
        CODE_SPAN_START,
        CODE_SPAN_CLOSE,
        EMPHASIS_OPEN_STAR,
        EMPHASIS_OPEN_UNDERSCORE,
        EMPHASIS_CLOSE_STAR,
        EMPHASIS_CLOSE_UNDERSCORE,
        LAST_TOKEN_WHITESPACE,
        LAST_TOKEN_PUNCTUATION,
        STRIKETHROUGH_OPEN,
        STRIKETHROUGH_CLOSE,
    };

    // Determines if a character is punctuation as defined by the markdown spec.
    bool is_punctuation(char c) {
        return
            (c >= '!' && c <= '/') ||
            (c >= ':' && c <= '@') ||
            (c >= '[' && c <= '`') ||
            (c >= '{' && c <= '~');
    }

    // Determines if a character is ascii whitespace as defined by the markdown spec.
    bool is_whitespace(char c) {
        return c == ' ' || c == '\t' || c == '\n' || c == '\r';
    }

    // State bitflags used with `Scanner.state`

    // TODO
    const uint8_t STATE_EMPHASIS_DELIMITER_MOD_3 = 0x3;
    // Current delimiter run is opening
    const uint8_t STATE_EMPHASIS_DELIMITER_IS_OPEN = 0x1 << 2;

    struct Scanner {

        // Parser state flags
        uint8_t state;
        uint8_t code_span_delimiter_length;
        // The number of characters remaining in the currrent emphasis delimiter run.
        uint8_t num_emphasis_delimiters_left;

        Scanner() {
            deserialize(NULL, 0);
        }

        // Write the whole state of a Scanner to a byte buffer
        unsigned serialize(char *buffer) {
            size_t i = 0;
            buffer[i++] = state;
            buffer[i++] = code_span_delimiter_length;
            buffer[i++] = num_emphasis_delimiters_left;
            return i;
        }

        // Read the whole state of a Scanner from a byte buffer
        // `serizalize` and `deserialize` should be fully symmetric.
        void deserialize(const char *buffer, unsigned length) {
            state = 0;
            code_span_delimiter_length = 0;
            num_emphasis_delimiters_left = 0;
            if (length > 0) {
                size_t i = 0;
                state = buffer[i++];
                code_span_delimiter_length = buffer[i++];
                num_emphasis_delimiters_left = buffer[i++];
            }
        }

        // Convenience function to emit the error token. This is done to stop invalid parse branches.
        // Specifically:
        // 1. When encountering a newline after a line break that ended a paragraph, and no new block
        //    has been opened.
        // 2. When encountering a new block after a soft line break.
        // 3. When a `$._trigger_error` token is valid, which is used to stop parse branches through
        //    normal tree-sitter grammar rules.
        //
        // See also the `$._soft_line_break` and `$._paragraph_end_newline` tokens in grammar.js
        bool error(TSLexer *lexer) {
            lexer->result_symbol = ERROR;
            return true;
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols) {
            // A normal tree-sitter rule decided that the current branch is invalid and now "requests"
            // an error to stop the branch
            if (valid_symbols[TRIGGER_ERROR]) {
                return error(lexer);
            }

            // Decide which tokens to consider based on the first non-whitespace character
            switch (lexer->lookahead) {
                case '`':
                    // A backtick could mark the beginning or ending of a code span or a fenced
                    // code block.
                    return parse_backtick(lexer, valid_symbols);
                    break;
                case '*':
                    // A star could either mark the beginning or ending of emphasis, a list item or
                    // thematic break.
                    // This code is similar to the code for '_' and '+'.
                    return parse_star(lexer, valid_symbols);
                    break;
                case '_':
                    return parse_underscore(lexer, valid_symbols);
                    break;
                case '~':
                    return parse_tilde(lexer, valid_symbols);
                    break;
            }
            return false;
        }

        bool parse_backtick(TSLexer *lexer, const bool *valid_symbols) {
            size_t level = 0;
            while (lexer->lookahead == '`') {
                lexer->advance(lexer, false);
                level++;
            }
            lexer->mark_end(lexer);
            if (level == code_span_delimiter_length && valid_symbols[CODE_SPAN_CLOSE]) {
                code_span_delimiter_length = 0;
                lexer->result_symbol = CODE_SPAN_CLOSE;
                return true;
            } else if (valid_symbols[CODE_SPAN_START]) {
                code_span_delimiter_length = level;
                lexer->result_symbol = CODE_SPAN_START;
                return true;
            }
            return false;
        }

        bool parse_star(TSLexer *lexer, const bool *valid_symbols) {
            lexer->advance(lexer, false);
            // If `num_emphasis_delimiters_left` is not zero then we already decided that this should be
            // part of an emphasis delimiter run, so interpret it as such.
            if (num_emphasis_delimiters_left > 0) {
                // The `STATE_EMPHASIS_DELIMITER_IS_OPEN` state flag tells us wether it should be open
                // or close.
                if ((state & STATE_EMPHASIS_DELIMITER_IS_OPEN) && valid_symbols[EMPHASIS_OPEN_STAR]) {
                    state &= (~STATE_EMPHASIS_DELIMITER_IS_OPEN);
                    lexer->result_symbol = EMPHASIS_OPEN_STAR;
                    num_emphasis_delimiters_left--;
                    return true;
                } else if (valid_symbols[EMPHASIS_CLOSE_STAR]) {
                    lexer->result_symbol = EMPHASIS_CLOSE_STAR;
                    num_emphasis_delimiters_left--;
                    return true;
                }
            }
            lexer->mark_end(lexer);
            // Otherwise count the number of stars
            size_t star_count = 1;
            while (lexer->lookahead == '*') {
                star_count++;
                lexer->advance(lexer, false);
            }
            bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->eof(lexer);
            if (valid_symbols[EMPHASIS_OPEN_STAR] || valid_symbols[EMPHASIS_CLOSE_STAR]) {
                // The desicion made for the first star also counts for all the following stars in the
                // delimiter run. Rembemer how many there are.
                num_emphasis_delimiters_left = star_count - 1;
                // Look ahead to the next symbol (after the last star) to find out if it is whitespace
                // punctuation or other.
                bool next_symbol_whitespace = line_end || lexer->lookahead == ' ' || lexer->lookahead == '\t';
                bool next_symbol_punctuation = is_punctuation(lexer->lookahead);
                // Information about the last token is in valid_symbols. See grammar.js for these
                // tokens for how this is done.
                if (
                    valid_symbols[EMPHASIS_CLOSE_STAR] &&
                    !valid_symbols[LAST_TOKEN_WHITESPACE] && (
                        !valid_symbols[LAST_TOKEN_PUNCTUATION] ||
                        next_symbol_punctuation ||
                        next_symbol_whitespace
                    )
                ) {
                    // Closing delimiters take precedence
                    state &= ~STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = EMPHASIS_CLOSE_STAR;
                    return true;
                } else if (
                    !next_symbol_whitespace && (
                        !next_symbol_punctuation ||
                        valid_symbols[LAST_TOKEN_PUNCTUATION] ||
                        valid_symbols[LAST_TOKEN_WHITESPACE]
                    )
                ) {
                    state |= STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = EMPHASIS_OPEN_STAR;
                    return true;
                }
            }
            return false;
        }

        bool parse_tilde(TSLexer *lexer, const bool *valid_symbols) {
            lexer->advance(lexer, false);
            // If `num_emphasis_delimiters_left` is not zero then we already decided that this should be
            // part of an emphasis delimiter run, so interpret it as such.
            if (num_emphasis_delimiters_left > 0) {
                // The `STATE_EMPHASIS_DELIMITER_IS_OPEN` state flag tells us wether it should be open
                // or close.
                if ((state & STATE_EMPHASIS_DELIMITER_IS_OPEN) && valid_symbols[STRIKETHROUGH_OPEN]) {
                    state &= (~STATE_EMPHASIS_DELIMITER_IS_OPEN);
                    lexer->result_symbol = STRIKETHROUGH_OPEN;
                    num_emphasis_delimiters_left--;
                    return true;
                } else if (valid_symbols[STRIKETHROUGH_CLOSE]) {
                    lexer->result_symbol = STRIKETHROUGH_CLOSE;
                    num_emphasis_delimiters_left--;
                    return true;
                }
            }
            lexer->mark_end(lexer);
            // Otherwise count the number of tildes
            size_t star_count = 1;
            while (lexer->lookahead == '~') {
                star_count++;
                lexer->advance(lexer, false);
            }
            bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->eof(lexer);
            if (valid_symbols[STRIKETHROUGH_OPEN] || valid_symbols[STRIKETHROUGH_CLOSE]) {
                // The desicion made for the first star also counts for all the following stars in the
                // delimiter run. Rembemer how many there are.
                num_emphasis_delimiters_left = star_count - 1;
                // Look ahead to the next symbol (after the last star) to find out if it is whitespace
                // punctuation or other.
                bool next_symbol_whitespace = line_end || lexer->lookahead == ' ' || lexer->lookahead == '\t';
                bool next_symbol_punctuation = is_punctuation(lexer->lookahead);
                // Information about the last token is in valid_symbols. See grammar.js for these
                // tokens for how this is done.
                if (
                    valid_symbols[STRIKETHROUGH_CLOSE] &&
                    !valid_symbols[LAST_TOKEN_WHITESPACE] && (
                        !valid_symbols[LAST_TOKEN_PUNCTUATION] ||
                        next_symbol_punctuation ||
                        next_symbol_whitespace
                    )
                ) {
                    // Closing delimiters take precedence
                    state &= ~STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = STRIKETHROUGH_CLOSE;
                    return true;
                } else if (
                    !next_symbol_whitespace && (
                        !next_symbol_punctuation ||
                        valid_symbols[LAST_TOKEN_PUNCTUATION] ||
                        valid_symbols[LAST_TOKEN_WHITESPACE]
                    )
                ) {
                    state |= STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = STRIKETHROUGH_OPEN;
                    return true;
                }
            }
            return false;
        }


        bool parse_underscore(TSLexer *lexer, const bool *valid_symbols) {
            lexer->advance(lexer, false);
            // If `num_emphasis_delimiters_left` is not zero then we already decided that this should be
            // part of an emphasis delimiter run, so interpret it as such.
            if (num_emphasis_delimiters_left > 0) {
                // The `STATE_EMPHASIS_DELIMITER_IS_OPEN` state flag tells us wether it should be open
                // or close.
                if ((state & STATE_EMPHASIS_DELIMITER_IS_OPEN) && valid_symbols[EMPHASIS_OPEN_UNDERSCORE]) {
                    lexer->result_symbol = EMPHASIS_OPEN_UNDERSCORE;
                    num_emphasis_delimiters_left--;
                    return true;
                } else if (valid_symbols[EMPHASIS_CLOSE_UNDERSCORE]) {
                    lexer->result_symbol = EMPHASIS_CLOSE_UNDERSCORE;
                    num_emphasis_delimiters_left--;
                    return true;
                }
            }
            lexer->mark_end(lexer);
            // Otherwise count the number of stars
            size_t underscore_count = 1;
            while (lexer->lookahead == '_') {
                underscore_count++;
                lexer->advance(lexer, false);
            }
            bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r' || lexer->eof(lexer);
            if (valid_symbols[EMPHASIS_OPEN_UNDERSCORE] || valid_symbols[EMPHASIS_CLOSE_UNDERSCORE]) {
                num_emphasis_delimiters_left = underscore_count - 1;
                bool next_symbol_whitespace = line_end || lexer->lookahead == ' ' || lexer->lookahead == '\t';
                bool next_symbol_punctuation = is_punctuation(lexer->lookahead);
                bool right_flanking = !valid_symbols[LAST_TOKEN_WHITESPACE] &&
                    (!valid_symbols[LAST_TOKEN_PUNCTUATION] || next_symbol_punctuation || next_symbol_whitespace);
                bool left_flanking = !next_symbol_whitespace &&
                    (!next_symbol_punctuation || valid_symbols[LAST_TOKEN_PUNCTUATION] || valid_symbols[LAST_TOKEN_WHITESPACE]);
                if (valid_symbols[EMPHASIS_CLOSE_UNDERSCORE] && right_flanking && (!left_flanking || next_symbol_punctuation)) {
                    state &= ~STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = EMPHASIS_CLOSE_UNDERSCORE;
                    return true;
                } else if (left_flanking && (!right_flanking || valid_symbols[LAST_TOKEN_PUNCTUATION])) {
                    state |= STATE_EMPHASIS_DELIMITER_IS_OPEN;
                    lexer->result_symbol = EMPHASIS_OPEN_UNDERSCORE;
                    return true;
                }
            }
            return false;
        }
    };
}

extern "C" {
    void *tree_sitter_markdown_inline_external_scanner_create() {
        return new TreeSitterMarkdownInline::Scanner();
    }

    bool tree_sitter_markdown_inline_external_scanner_scan(
        void *payload,
        TSLexer *lexer,
        const bool *valid_symbols
    ) {
        TreeSitterMarkdownInline::Scanner *scanner = static_cast<TreeSitterMarkdownInline::Scanner *>(payload);
        return scanner->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_markdown_inline_external_scanner_serialize(
        void *payload,
        char* buffer
    ) {
        TreeSitterMarkdownInline::Scanner *scanner = static_cast<TreeSitterMarkdownInline::Scanner *>(payload);
        return scanner->serialize(buffer);
    }

    void tree_sitter_markdown_inline_external_scanner_deserialize(
        void *payload,
        char* buffer,
        unsigned length
    ) {
        TreeSitterMarkdownInline::Scanner *scanner = static_cast<TreeSitterMarkdownInline::Scanner *>(payload);
        scanner->deserialize(buffer, length);
    }

    void tree_sitter_markdown_inline_external_scanner_destroy(void *payload) {
        TreeSitterMarkdownInline::Scanner *scanner = static_cast<TreeSitterMarkdownInline::Scanner *>(payload);
        delete scanner;
    }
}
