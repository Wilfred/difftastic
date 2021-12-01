#include <tree_sitter/parser.h>
#include <cassert>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using std::vector;
using std::memcpy;

enum TokenType {
    ERROR,
    SPLIT_TOKEN,
    LINE_ENDING,
    SOFT_LINE_BREAK_MARKER,
    BLOCK_CLOSE,
    BLOCK_CONTINUATION,
    BLOCK_QUOTE_START,
    INDENTED_CHUNK_START,
    ATX_H1_MARKER,
    ATX_H2_MARKER,
    ATX_H3_MARKER,
    ATX_H4_MARKER,
    ATX_H5_MARKER,
    ATX_H6_MARKER,
    SETEXT_H1_UNDERLINE,
    SETEXT_H2_UNDERLINE,
    THEMATIC_BREAK,
    LIST_MARKER_MINUS,
    LIST_MARKER_PLUS,
    LIST_MARKER_STAR,
    LIST_MARKER_PARENTHESIS,
    LIST_MARKER_DOT,
    LIST_MARKER_MINUS_DONT_INTERRUPT,
    LIST_MARKER_PLUS_DONT_INTERRUPT,
    LIST_MARKER_STAR_DONT_INTERRUPT,
    LIST_MARKER_PARENTHESIS_DONT_INTERRUPT,
    LIST_MARKER_DOT_DONT_INTERRUPT,
    FENCED_CODE_BLOCK_START_BACKTICK,
    FENCED_CODE_BLOCK_START_TILDE,
    FENCED_CODE_BLOCK_END_BACKTICK,
    FENCED_CODE_BLOCK_END_TILDE,
    BLANK_LINE,
    CODE_SPAN_START,
    CODE_SPAN_CLOSE,
    LAST_TOKEN_WHITESPACE,
    LAST_TOKEN_PUNCTUATION,
    EMPHASIS_OPEN_STAR,
    EMPHASIS_OPEN_UNDERSCORE,
    EMPHASIS_CLOSE_STAR,
    EMPHASIS_CLOSE_UNDERSCORE,
    OPEN_BLOCK,
    OPEN_BLOCK_DONT_INTERRUPT_PARAGRAPH,
    CLOSE_BLOCK,
    NO_INDENTED_CHUNK,
    TRIGGER_ERROR,
};

enum Block : uint8_t {
    BLOCK_QUOTE,
    INDENTED_CODE_BLOCK,
    LIST_ITEM = 2,
    LIST_ITEM_MAX_INDENTATION = 17,
    FENCED_CODE_BLOCK,
    ANONYMOUS
};

const char *BLOCK_NAME[] = {
    "block quote",
    "indented code block",
    "list item 0",
    "list item 1",
    "list item 2",
    "list item 3",
    "list item 4",
    "list item 5",
    "list item 6",
    "list item 7",
    "list item 8",
    "list item 9",
    "list item 10",
    "list item 11",
    "list item 12",
    "list item 13",
    "list item 14",
    "list item 15",
    "fenced code block tilde",
    "fenced code block backtick",
    "anonymous",
};

bool is_list_item(Block block) {
    return block >= LIST_ITEM && block <= LIST_ITEM_MAX_INDENTATION;
}

uint8_t list_item_indentation(Block block) {
    return block - LIST_ITEM + 2;
}

bool is_punctuation(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~');
}

bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

const uint16_t STATE_MATCHING = 0x1 << 0;
const uint16_t STATE_WAS_SOFT_LINE_BREAK = 0x1 << 1;
const uint16_t STATE_EMPHASIS_DELIMITER_MOD_3 = 0x3 << 2; // TODO
const uint16_t STATE_EMPHASIS_DELIMITER_IS_OPEN = 0x1 << 4;
const uint16_t STATE_SPLIT_TOKEN_COUNT = 0x3 << 5;
const uint16_t STATE_CLOSE_BLOCK = 0x1 << 7;
const uint16_t STATE_NEED_OPEN_BLOCK = 0x1 << 8;
const uint16_t STATE_JUST_CLOSED = 0x1 << 9;

struct Scanner {

    vector<Block> open_blocks;
    uint16_t state;
    uint8_t matched;
    uint8_t indentation; // TODO size_t
    uint8_t column;
    uint8_t code_span_delimiter_length;
    uint8_t num_emphasis_delimiters_left;

    Scanner() {
        assert(sizeof(Block) == sizeof(char));
        assert(ATX_H6_MARKER == ATX_H1_MARKER + 5);
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;
        buffer[i++] = state;
        memcpy(&buffer[i], &state, sizeof(uint16_t));
        i += sizeof(uint16_t);
        buffer[i++] = matched;
        buffer[i++] = indentation;
        buffer[i++] = column;
        buffer[i++] = code_span_delimiter_length;
        buffer[i++] = num_emphasis_delimiters_left;
        size_t blocks_count = open_blocks.size();
        if (blocks_count > UINT8_MAX - i) blocks_count = UINT8_MAX - i;
        if (blocks_count > 0) {
            memcpy(&buffer[i], open_blocks.data(), blocks_count);
            i += blocks_count;
        }
        return i;
    }

    void deserialize(const char *buffer, unsigned length) {
        open_blocks.clear();
        state = 0;
        matched = 0;
        indentation = 0;
        column = 0;
        code_span_delimiter_length = 0;
        num_emphasis_delimiters_left = 0;
        if (length > 0) {
            size_t i = 0;
            state = buffer[i++];
            memcpy(&state, &buffer[i], sizeof(uint16_t));
            i += sizeof(uint16_t);
            matched = buffer[i++];
            indentation = buffer[i++];
            column = buffer[i++];
            code_span_delimiter_length = buffer[i++];
            num_emphasis_delimiters_left = buffer[i++];
            size_t blocks_count = length - i;
            open_blocks.resize(blocks_count);
            if (blocks_count > 0) {
                memcpy(open_blocks.data(), &buffer[i], blocks_count);
            }
        }
    }

    size_t advance(TSLexer *lexer, bool skip) {
        size_t size = 1;
        if (lexer->lookahead == '\t') {
            size = (column % 4 == 0) ? 4 : (4 - column % 4);
        }
        column += size;
        lexer->advance(lexer, skip);
        return size;
    }

    bool match(TSLexer *lexer, Block block) {
        switch (block) {
            case INDENTED_CODE_BLOCK:
                if (indentation >= 4 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                    indentation -= 4;
                    return true;
                }
                break;
            case LIST_ITEM:
            case LIST_ITEM + 1:
            case LIST_ITEM + 2:
            case LIST_ITEM + 3:
            case LIST_ITEM + 4:
            case LIST_ITEM + 5:
            case LIST_ITEM + 6:
            case LIST_ITEM + 7:
            case LIST_ITEM + 8:
            case LIST_ITEM + 9:
            case LIST_ITEM + 10:
            case LIST_ITEM + 11:
            case LIST_ITEM + 12:
            case LIST_ITEM + 13:
            case LIST_ITEM + 14:
            case LIST_ITEM + 15:
                if (indentation >= list_item_indentation(open_blocks[matched])) {
                    indentation -= list_item_indentation(open_blocks[matched]);
                    return true;
                }
                if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                    indentation = 0;
                    return true;
                }
                break;
            case BLOCK_QUOTE:
                if (lexer->lookahead == '>') {
                    advance(lexer, false);
                    indentation = 0;
                    if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                        indentation += advance(lexer, false) - 1;
                    }
                    return true;
                }
                break;
            case FENCED_CODE_BLOCK:
            case ANONYMOUS:
                return true;
        }
        return false;
    }

    bool error(TSLexer *lexer) {
        lexer->result_symbol = ERROR;
        return true;
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {

        /* std::cerr << "state " << unsigned(state) << std::endl; */
        /* std::cerr << "matched " << unsigned(matched) << std::endl; */
        /* std::cerr << "indentation " << unsigned(indentation) << std::endl; */
        /* std::cerr << "num_emphasis_delimiters_left " << unsigned(num_emphasis_delimiters_left) << std::endl; */
        /* for (size_t i = 0; i < open_blocks.size(); i++) { */
        /*     std::cerr << BLOCK_NAME[open_blocks[i]] << std::endl; */
        /* } */

        if (valid_symbols[TRIGGER_ERROR]) {
            lexer->result_symbol = ERROR;
            return true;
        }

        uint8_t split_token_count = (state & STATE_SPLIT_TOKEN_COUNT) >> 5;
        if (split_token_count == 2 && !valid_symbols[SOFT_LINE_BREAK_MARKER] && matched == open_blocks.size()) {
            state &= ~STATE_MATCHING;
        }

        if (valid_symbols[LINE_ENDING]) {
            if (state & STATE_NEED_OPEN_BLOCK) return error(lexer);
            matched = 0;
            if (valid_symbols[SOFT_LINE_BREAK_MARKER] || open_blocks.size() > 0) {
                state |= STATE_MATCHING;
            } else {
                state &= (~STATE_MATCHING);
            }
            state &= (~STATE_WAS_SOFT_LINE_BREAK) & (~STATE_SPLIT_TOKEN_COUNT) & (~STATE_NEED_OPEN_BLOCK) & (~STATE_JUST_CLOSED);
            indentation = 0;
            column = 0;
            lexer->result_symbol = LINE_ENDING;
            return true;
        }

        if (valid_symbols[OPEN_BLOCK] || valid_symbols[OPEN_BLOCK_DONT_INTERRUPT_PARAGRAPH]) {
            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
            if (valid_symbols[OPEN_BLOCK]) state &= ~STATE_NEED_OPEN_BLOCK;
            open_blocks.push_back(ANONYMOUS);
            lexer->result_symbol = valid_symbols[OPEN_BLOCK] ? OPEN_BLOCK : OPEN_BLOCK_DONT_INTERRUPT_PARAGRAPH;
            return true;
        }

        if (valid_symbols[CLOSE_BLOCK]) {
            state |= STATE_CLOSE_BLOCK;
            lexer->result_symbol = CLOSE_BLOCK;
            return true;
        }

        bool parsed_indentation = false;
        for (;;) {
            if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                indentation += advance(lexer, false);
                parsed_indentation = true;
            } else {
                break;
            }
        }
        // if we are at the end of the file and there are still open blocks close them all
        if (lexer->eof(lexer)) {
            if (open_blocks.size() > 0) {
                Block block = open_blocks[open_blocks.size() - 1];
                lexer->result_symbol = BLOCK_CLOSE;
                open_blocks.pop_back();
                return true;
            }
            return false;
        }
        if (!(state & STATE_MATCHING)) {
            if (valid_symbols[INDENTED_CHUNK_START] && !valid_symbols[NO_INDENTED_CHUNK]) {
                if (indentation >= 4 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                    lexer->result_symbol = INDENTED_CHUNK_START;
                    open_blocks.push_back(INDENTED_CODE_BLOCK);
                    indentation -= 4;
                    return true;
                }
            }
            switch (lexer->lookahead) {
                case '\r':
                case '\n':
                    if (valid_symbols[BLANK_LINE]) {
                        if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                        state &= ~STATE_NEED_OPEN_BLOCK;
                        lexer->result_symbol = BLANK_LINE;
                        return true;
                    }
                    break;
                case '`':
                    if (valid_symbols[CODE_SPAN_START] || valid_symbols[CODE_SPAN_CLOSE] || valid_symbols[FENCED_CODE_BLOCK_START_BACKTICK] || valid_symbols[FENCED_CODE_BLOCK_END_BACKTICK]) {
                        size_t level = 0;
                        while (lexer->lookahead == '`') {
                            advance(lexer, false);
                            level++;
                        }
                        lexer->mark_end(lexer);
                        if (valid_symbols[FENCED_CODE_BLOCK_END_BACKTICK] && indentation < 4 && level >= code_span_delimiter_length && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            lexer->result_symbol = FENCED_CODE_BLOCK_END_BACKTICK;
                            return true;
                        }
                        if (level >= 3) {
                            bool info_string_has_backtick = false;
                            while (lexer->lookahead != '\n' && lexer->lookahead != '\r' && !lexer->eof(lexer)) {
                                if (lexer->lookahead == '`') {
                                    info_string_has_backtick = true;
                                    break;
                                }
                                advance(lexer, false);
                            }
                            if (!info_string_has_backtick && valid_symbols[FENCED_CODE_BLOCK]) {
                                lexer->result_symbol = FENCED_CODE_BLOCK_START_BACKTICK;
                                if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                                state &= ~STATE_NEED_OPEN_BLOCK;
                                open_blocks.push_back(FENCED_CODE_BLOCK);
                                code_span_delimiter_length = level;
                                indentation = 0;
                                return true;
                            }
                        }
                        if (indentation == 0) {
                            if (level == code_span_delimiter_length && valid_symbols[CODE_SPAN_CLOSE]) {
                                lexer->result_symbol = CODE_SPAN_CLOSE;
                                return true;
                            } else if (valid_symbols[CODE_SPAN_START]) {
                                code_span_delimiter_length = level;
                                lexer->result_symbol = CODE_SPAN_START;
                                return true;
                            }
                        }
                    }
                    break;
                case '*':
                    {
                        if (num_emphasis_delimiters_left > 0) {
                            if ((state & STATE_EMPHASIS_DELIMITER_IS_OPEN) && valid_symbols[EMPHASIS_OPEN_STAR]) {
                                advance(lexer, false);
                                lexer->result_symbol = EMPHASIS_OPEN_STAR;
                                num_emphasis_delimiters_left--;
                                return true;
                            } else if (valid_symbols[EMPHASIS_CLOSE_STAR]) {
                                advance(lexer, false);
                                lexer->result_symbol = EMPHASIS_CLOSE_STAR;
                                num_emphasis_delimiters_left--;
                                return true;
                            }
                        }
                        advance(lexer, false);
                        lexer->mark_end(lexer);
                        size_t star_count = 1;
                        size_t star_count_before_whitespace = 1;
                        size_t extra_indentation = 0;

                        for (;;) {
                            if (lexer->lookahead == '*') {
                                if (star_count == 1 && extra_indentation >= 1 && valid_symbols[LIST_MARKER_STAR]) {
                                    lexer->mark_end(lexer);
                                }
                                if (extra_indentation == 0) {
                                    star_count_before_whitespace++;
                                }
                                star_count++;
                                advance(lexer, false);
                            } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                                if (star_count == 1) {
                                    extra_indentation += advance(lexer, false);
                                } else {
                                    advance(lexer, false);
                                }
                            } else {
                                break;
                            }
                        }
                        bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r';
                        bool dont_interrupt = false;
                        if (star_count == 1 && line_end) {
                            extra_indentation = 1;
                            dont_interrupt = true; // line is empty so don't interrupt paragraphs
                        }
                        bool thematic_break = star_count >= 3 && line_end;
                        bool list_marker_star = star_count >= 1 && extra_indentation >= 1;
                        dont_interrupt = dont_interrupt && !(state & STATE_JUST_CLOSED) && matched == open_blocks.size();
                        if (valid_symbols[THEMATIC_BREAK] && thematic_break && indentation < 4) { // underline is false if list_marker_minus is true
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            return true;
                        } else if ((dont_interrupt ? valid_symbols[LIST_MARKER_STAR_DONT_INTERRUPT] : valid_symbols[LIST_MARKER_STAR]) && list_marker_star) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            if (!dont_interrupt) state &= ~STATE_NEED_OPEN_BLOCK;
                            if (dont_interrupt && (state & STATE_NEED_OPEN_BLOCK)) return error(lexer);
                            if (star_count == 1) {
                                lexer->mark_end(lexer);
                            }
                            extra_indentation--;
                            if (extra_indentation <= 3) {
                                extra_indentation += indentation;
                                indentation = 0;
                            } else {
                                size_t temp = indentation;
                                indentation = extra_indentation;
                                extra_indentation = temp;
                            }
                            open_blocks.push_back(Block(LIST_ITEM + extra_indentation));
                            lexer->result_symbol = dont_interrupt ? LIST_MARKER_STAR_DONT_INTERRUPT : LIST_MARKER_STAR;
                            return true;
                        }
                        if (valid_symbols[EMPHASIS_OPEN_STAR] || valid_symbols[EMPHASIS_CLOSE_STAR]) {
                            if (indentation > 0) return false;
                            num_emphasis_delimiters_left = star_count - 1;
                            bool next_symbol_whitespace = extra_indentation > 0 || line_end;
                            bool next_symbol_punctuation = extra_indentation == 0 && is_punctuation(lexer->lookahead);
                            if (valid_symbols[EMPHASIS_CLOSE_STAR] && !valid_symbols[LAST_TOKEN_WHITESPACE] &&
                                (!valid_symbols[LAST_TOKEN_PUNCTUATION] || next_symbol_punctuation || next_symbol_whitespace)) {
                                state &= ~STATE_EMPHASIS_DELIMITER_IS_OPEN;
                                lexer->result_symbol = EMPHASIS_CLOSE_STAR;
                                return true;
                            } else if (!next_symbol_whitespace &&
                                (!next_symbol_punctuation || valid_symbols[LAST_TOKEN_PUNCTUATION] || valid_symbols[LAST_TOKEN_WHITESPACE])) {
                                state |= STATE_EMPHASIS_DELIMITER_IS_OPEN;
                                lexer->result_symbol = EMPHASIS_OPEN_STAR;
                                return true;
                            }
                        }
                    }
                    break;
                case '_':
                    {
                        if (num_emphasis_delimiters_left > 0) {
                            if ((state & STATE_EMPHASIS_DELIMITER_IS_OPEN) && valid_symbols[EMPHASIS_OPEN_UNDERSCORE]) {
                                advance(lexer, false);
                                lexer->result_symbol = EMPHASIS_OPEN_UNDERSCORE;
                                num_emphasis_delimiters_left--;
                                return true;
                            } else if (valid_symbols[EMPHASIS_CLOSE_UNDERSCORE]) {
                                advance(lexer, false);
                                lexer->result_symbol = EMPHASIS_CLOSE_UNDERSCORE;
                                num_emphasis_delimiters_left--;
                                return true;
                            }
                        }
                        advance(lexer, false);
                        lexer->mark_end(lexer);
                        size_t underscore_count = 1;
                        size_t underscore_count_before_whitespace = 1;
                        bool encountered_whitespace = false;
                        for (;;) {
                            if (lexer->lookahead == '_') {
                                underscore_count++;
                                if (!encountered_whitespace) underscore_count_before_whitespace++;
                                advance(lexer, false);
                            } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                                if (!encountered_whitespace) {
                                    encountered_whitespace = true;
                                }
                                advance(lexer, false);
                            } else {
                                break;
                            }
                        }
                        bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r';
                        if (underscore_count >= 3 && line_end && valid_symbols[THEMATIC_BREAK]) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            return true;
                        }
                        if (valid_symbols[EMPHASIS_OPEN_UNDERSCORE] || valid_symbols[EMPHASIS_CLOSE_UNDERSCORE]) {
                            num_emphasis_delimiters_left = underscore_count_before_whitespace - 1;
                            bool next_symbol_whitespace = encountered_whitespace || line_end;
                            bool next_symbol_punctuation = !encountered_whitespace && is_punctuation(lexer->lookahead);
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
                    }
                    break;
                case '>':
                    if (valid_symbols[BLOCK_QUOTE_START]) {
                        if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                        state &= ~STATE_NEED_OPEN_BLOCK;
                        advance(lexer, false);
                        indentation = 0;
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            indentation += advance(lexer, false) - 1;
                        }
                        lexer->result_symbol = BLOCK_QUOTE_START;
                        open_blocks.push_back(BLOCK_QUOTE);
                        return true;
                    }
                    break;
                case '~':
                    if (valid_symbols[FENCED_CODE_BLOCK_START_TILDE] || valid_symbols[FENCED_CODE_BLOCK_END_TILDE]) {
                        size_t level = 0;
                        while (lexer->lookahead == '~') {
                            advance(lexer, false);
                            level++;
                        }
                        if (valid_symbols[FENCED_CODE_BLOCK_END_TILDE] && indentation < 4 && level >= code_span_delimiter_length && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            lexer->result_symbol = FENCED_CODE_BLOCK_END_TILDE;
                            return true;
                        }
                        if (valid_symbols[FENCED_CODE_BLOCK_START_TILDE] && level >= 3) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = FENCED_CODE_BLOCK_START_TILDE;
                            open_blocks.push_back(FENCED_CODE_BLOCK);
                            code_span_delimiter_length = level;
                            indentation = 0;
                            return true;
                        }
                    }
                    break;
                case '#':
                    if (valid_symbols[ATX_H1_MARKER] && indentation <= 3) {
                        lexer->mark_end(lexer);
                        size_t level = 0;
                        while (lexer->lookahead == '#' && level <= 6) {
                            advance(lexer, false);
                            level++;
                        }
                        if (level <= 6 && (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = ATX_H1_MARKER + (level - 1);
                            indentation = 0;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '=':
                    if (valid_symbols[SETEXT_H1_UNDERLINE] && matched == open_blocks.size()) {
                        lexer->mark_end(lexer);
                        while (lexer->lookahead == '=') {
                            advance(lexer, false);
                        }
                        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            advance(lexer, false);
                        }
                        if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = SETEXT_H1_UNDERLINE;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '+':
                    if (indentation <= 3 && (valid_symbols[LIST_MARKER_PLUS] || valid_symbols[LIST_MARKER_PLUS_DONT_INTERRUPT])) {
                        advance(lexer, false);
                        size_t extra_indentation = 0;
                        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            extra_indentation += advance(lexer, false);
                        }
                        bool dont_interrupt = false;
                        if (lexer->lookahead == '\r' || lexer->lookahead == '\n') {
                            extra_indentation = 1;
                            dont_interrupt = true;
                        }
                        dont_interrupt = dont_interrupt && !(state & STATE_JUST_CLOSED) && matched == open_blocks.size();
                        if (extra_indentation >= 1 && (dont_interrupt ? valid_symbols[LIST_MARKER_PLUS_DONT_INTERRUPT] : valid_symbols[LIST_MARKER_PLUS])) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            if (!dont_interrupt) state &= ~STATE_NEED_OPEN_BLOCK;
                            if (dont_interrupt && (state & STATE_NEED_OPEN_BLOCK)) return error(lexer);
                            lexer->result_symbol = dont_interrupt ? LIST_MARKER_PLUS_DONT_INTERRUPT : LIST_MARKER_PLUS;
                            extra_indentation--;
                            if (extra_indentation <= 3) {
                                extra_indentation += indentation;
                                indentation = 0;
                            } else {
                                size_t temp = indentation;
                                indentation = extra_indentation;
                                extra_indentation = temp;
                            }
                            open_blocks.push_back(Block(LIST_ITEM + extra_indentation));
                            return true;
                        }
                    }
                    break;
                case '0':
                case '1':
                case '2':
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    if (indentation <= 3 && (valid_symbols[LIST_MARKER_PARENTHESIS] || valid_symbols[LIST_MARKER_DOT])) {
                        size_t digits = 1;
                        bool dont_interrupt = lexer->lookahead != '1';
                        advance(lexer, false);
                        while (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
                            dont_interrupt = true;
                            digits++;
                            advance(lexer, false);
                        }
                        if (digits >= 1 && digits <= 9) {
                            bool success = false;
                            bool dot = false;
                            bool parenthesis = false;
                            if (lexer->lookahead == '.') {
                                advance(lexer, false);
                                dot = true;
                            } else if (lexer->lookahead == ')') {
                                advance(lexer, false);
                                parenthesis = true;
                            }
                            if (dot || parenthesis) {
                                size_t extra_indentation = 0;
                                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                                    extra_indentation += advance(lexer, false);
                                }
                                bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r';
                                if (line_end) {
                                    extra_indentation = 1;
                                    dont_interrupt = true;
                                }
                                dont_interrupt = dont_interrupt && !(state & STATE_JUST_CLOSED) && matched == open_blocks.size();
                                if (extra_indentation >= 1 && (dot ? (dont_interrupt ? valid_symbols[LIST_MARKER_DOT_DONT_INTERRUPT] : valid_symbols[LIST_MARKER_DOT]) : (dont_interrupt ? valid_symbols[LIST_MARKER_PARENTHESIS_DONT_INTERRUPT] : valid_symbols[LIST_MARKER_PARENTHESIS]))) {
                                    if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                                    if (!dont_interrupt) state &= ~STATE_NEED_OPEN_BLOCK;
                                    if (dont_interrupt && (state & STATE_NEED_OPEN_BLOCK)) return error(lexer);
                                    lexer->result_symbol = dot ? LIST_MARKER_DOT : LIST_MARKER_PARENTHESIS;
                                    extra_indentation--;
                                    if (extra_indentation <= 3) {
                                        extra_indentation += indentation;
                                        indentation = 0;
                                    } else {
                                        size_t temp = indentation;
                                        indentation = extra_indentation;
                                        extra_indentation = temp;
                                    }
                                    open_blocks.push_back(Block(LIST_ITEM + extra_indentation + digits));
                                    return true;
                                }
                            }
                        }
                    }
                    break;
                case '-':
                    if (indentation <= 3 && (valid_symbols[LIST_MARKER_MINUS] || valid_symbols[LIST_MARKER_MINUS_DONT_INTERRUPT] || valid_symbols[SETEXT_H2_UNDERLINE] || valid_symbols[THEMATIC_BREAK])) {
                        lexer->mark_end(lexer);
                        bool whitespace_after_minus = false;
                        bool minus_after_whitespace = false;
                        size_t minus_count = 0;
                        size_t extra_indentation = 0;

                        for (;;) {
                            if (lexer->lookahead == '-') {
                                if (minus_count == 1 && extra_indentation >= 1) {
                                    lexer->mark_end(lexer);
                                }
                                minus_count++;
                                advance(lexer, false);
                                minus_after_whitespace = whitespace_after_minus;
                            } else if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                                if (minus_count == 1) {
                                    extra_indentation += advance(lexer, false);
                                } else {
                                    advance(lexer, false);
                                }
                                whitespace_after_minus = true;
                            } else {
                                break;
                            }
                        }
                        bool line_end = lexer->lookahead == '\n' || lexer->lookahead == '\r';
                        bool dont_interrupt = false;
                        if (minus_count == 1 && line_end) {
                            extra_indentation = 1;
                            dont_interrupt = true;
                        }
                        dont_interrupt = dont_interrupt && !(state & STATE_JUST_CLOSED) && matched == open_blocks.size();
                        bool thematic_break = minus_count >= 3 && line_end;
                        bool underline = minus_count >= 1 && !minus_after_whitespace && line_end && matched == open_blocks.size(); // setext heading can not break lazy continuation
                        bool list_marker_minus = minus_count >= 1 && extra_indentation >= 1;
                        if (valid_symbols[SETEXT_H2_UNDERLINE] && underline) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = SETEXT_H2_UNDERLINE;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            return true;
                        } else if (valid_symbols[THEMATIC_BREAK] && thematic_break) { // underline is false if list_marker_minus is true
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            state &= ~STATE_NEED_OPEN_BLOCK;
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            return true;
                        } else if ((dont_interrupt ? valid_symbols[LIST_MARKER_MINUS_DONT_INTERRUPT] : valid_symbols[LIST_MARKER_MINUS]) && list_marker_minus) {
                            if (state & STATE_WAS_SOFT_LINE_BREAK) return error(lexer);
                            if (!dont_interrupt) state &= ~STATE_NEED_OPEN_BLOCK;
                            if (dont_interrupt && (state & STATE_NEED_OPEN_BLOCK)) return error(lexer);
                            if (minus_count == 1) {
                                lexer->mark_end(lexer);
                            }
                            extra_indentation--;
                            if (extra_indentation <= 3) {
                                extra_indentation += indentation;
                                indentation = 0;
                            } else {
                                size_t temp = indentation;
                                indentation = extra_indentation;
                                extra_indentation = temp;
                            }
                            open_blocks.push_back(Block(LIST_ITEM + extra_indentation));
                            lexer->result_symbol = dont_interrupt ? LIST_MARKER_MINUS_DONT_INTERRUPT : LIST_MARKER_MINUS;
                            return true;
                        }
                    }
                    break;
            }
        } else {
            bool partial_success = false;
            while (matched < open_blocks.size()) {
                if (matched == open_blocks.size() - 1 && (state & STATE_CLOSE_BLOCK)) {
                    if (!partial_success) state &= ~STATE_CLOSE_BLOCK;
                    break;
                }
                if (match(lexer, open_blocks[matched])) {
                    partial_success = true;
                    matched++;
                } else {
                    break;
                }
            }
            if (partial_success) {
                /* assert(valid_symbols[BLOCK_CONTINUATION]); */
                if (!valid_symbols[SOFT_LINE_BREAK_MARKER] && matched == open_blocks.size()) {
                    state &= (~STATE_MATCHING);
                }
                lexer->result_symbol = BLOCK_CONTINUATION;
                return true;
            }

            uint8_t split_token_count = (state & STATE_SPLIT_TOKEN_COUNT) >> 5;
            if (valid_symbols[SPLIT_TOKEN] && split_token_count < 2) {
                split_token_count++;
                state &= ~STATE_SPLIT_TOKEN_COUNT;
                state |= split_token_count << 5;
                state |= STATE_NEED_OPEN_BLOCK;
                lexer->result_symbol = SPLIT_TOKEN;
                return true;
            }
            if (!valid_symbols[SOFT_LINE_BREAK_MARKER]) {
                Block block = open_blocks[open_blocks.size() - 1];
                lexer->result_symbol = BLOCK_CLOSE;
                if (block == FENCED_CODE_BLOCK) {
                    lexer->mark_end(lexer);
                    indentation = 0;
                }
                open_blocks.pop_back();
                if (matched == open_blocks.size()) {
                    state &= (~STATE_MATCHING);
                }
                state |= STATE_JUST_CLOSED;
                return true;
            } else {
                state &= (~STATE_MATCHING) & (~STATE_NEED_OPEN_BLOCK);
                state |= STATE_WAS_SOFT_LINE_BREAK;
                lexer->result_symbol = SOFT_LINE_BREAK_MARKER;
                return true;
            }
        }
        return false;
    }
};

extern "C" {
    void *tree_sitter_markdown_external_scanner_create() {
        return new Scanner();
    }

    bool tree_sitter_markdown_external_scanner_scan(
        void *payload,
        TSLexer *lexer,
        const bool *valid_symbols
    ) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_markdown_external_scanner_serialize(
        void *payload,
        char* buffer
    ) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->serialize(buffer);
    }

    void tree_sitter_markdown_external_scanner_deserialize(
        void *payload,
        char* buffer,
        unsigned length
    ) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        scanner->deserialize(buffer, length);
    }

    void tree_sitter_markdown_external_scanner_destroy(void *payload) {
        Scanner *scanner = static_cast<Scanner *>(payload);
        delete scanner;
    }
}
