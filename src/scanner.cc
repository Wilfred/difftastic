#include <tree_sitter/parser.h>
#include <cassert>
#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using std::vector;
using std::memcpy;

enum TokenType {
    LINE_ENDING,
    LAZY_CONTINUATION,
    BLOCK_CLOSE,
    BLOCK_CLOSE_LOOSE,
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
    SETEXT_H2_UNDERLINE_OR_THEMATIC_BREAK,
    THEMATIC_BREAK,
    LIST_MARKER_MINUS,
    LIST_MARKER_PLUS,
    LIST_MARKER_STAR,
    LIST_MARKER_PARENTHETHIS,
    LIST_MARKER_DOT,
    FENCED_CODE_BLOCK_START_BACKTICK,
    FENCED_CODE_BLOCK_START_TILDE,
    BLANK_LINE,
    CODE_SPAN_START,
    CODE_SPAN_CLOSE,
    LAST_TOKEN_WHITESPACE,
    LAST_TOKEN_PUNCTUATION,
    EMPHASIS_OPEN_STAR,
    EMPHASIS_OPEN_UNDERSCORE,
    EMPHASIS_CLOSE_STAR,
    EMPHASIS_CLOSE_UNDERSCORE,
};

enum Block : char {
    BLOCK_QUOTE,
    INDENTED_CODE_BLOCK,
    TIGHT_LIST_ITEM = 2,
    TIGHT_LIST_ITEM_MAX_INDENTATION = 8,
    LOOSE_LIST_ITEM = 9,
    LOOSE_LIST_ITEM_MAX_INDENTATION = 15,
    FENCED_CODE_BLOCK_TILDE,
    FENCED_CODE_BLOCK_BACKTICK,
};

const char *BLOCK_NAME[] = {
    "block quote",
    "indented code block",
    "tight list item 0",
    "tight list item 1",
    "tight list item 2",
    "tight list item 3",
    "tight list item 4",
    "tight list item 5",
    "tight list item 6",
    "loose list item 0",
    "loose list item 1",
    "loose list item 2",
    "loose list item 3",
    "loose list item 4",
    "loose list item 5",
    "loose list item 6",
    "fenced code block tilde",
    "fenced code block backtick",
};

bool is_list_item(Block block) {
    return block >= TIGHT_LIST_ITEM && block <= LOOSE_LIST_ITEM_MAX_INDENTATION;
}

uint8_t list_item_indentation(Block block) {
    if (block <= TIGHT_LIST_ITEM_MAX_INDENTATION) {
        return block - TIGHT_LIST_ITEM + 2;
    } else {
        return block - LOOSE_LIST_ITEM + 2;
    }
}

bool is_punctuation(char c) {
    return (c >= '!' && c <= '/') || (c >= ':' && c <= '@') || (c >= '[' && c <= '`') || (c >= '{' && c <= '~'); // TODO: unicode support
}

bool is_whitespace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r'; // TODO: unicode support
}

struct Scanner {

    vector<Block> open_blocks;
    uint8_t matched; // TODO size_t
    uint8_t indentation; // TODO size_t
    uint8_t column;
    uint8_t code_span_delimiter_length; // TODO size_t
    uint8_t num_emphasis_delimiters;
    uint8_t num_emphasis_delimiters_left;
    uint8_t emphasis_delimiters_is_open;

    Scanner() {
        assert(sizeof(Block) == sizeof(char));
        assert(ATX_H6_MARKER == ATX_H1_MARKER + 5);
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;
        buffer[i++] = matched;
        buffer[i++] = indentation;
        buffer[i++] = column;
        buffer[i++] = code_span_delimiter_length;
        buffer[i++] = num_emphasis_delimiters;
        buffer[i++] = num_emphasis_delimiters_left;
        buffer[i++] = emphasis_delimiters_is_open;
        size_t blocks_count = open_blocks.size();
        if (blocks_count > UINT8_MAX - i) blocks_count = UINT8_MAX - i;
        memcpy(&buffer[i], open_blocks.data(), blocks_count);
        i += blocks_count;
        return i;
    }

    void deserialize(const char *buffer, unsigned length) {
        open_blocks.clear();
        matched = 0;
        indentation = 0;
        column = 0;
        code_span_delimiter_length = 0;
        num_emphasis_delimiters = 0;
        num_emphasis_delimiters_left = 0;
        emphasis_delimiters_is_open = 0;
        if (length > 0) {
            size_t i = 0;
            matched = buffer[i++];
            indentation = buffer[i++];
            column = buffer[i++];
            code_span_delimiter_length = buffer[i++];
            num_emphasis_delimiters = buffer[i++];
            num_emphasis_delimiters_left = buffer[i++];
            emphasis_delimiters_is_open = buffer[i++];
            size_t blocks_count = length - i;
            open_blocks.resize(blocks_count);
            memcpy(open_blocks.data(), &buffer[i], blocks_count);
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

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
        bool parsed_indentation = false;
        for (;;) {
            if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                indentation += advance(lexer, true);
                parsed_indentation = true;
            } else {
                break;
            }
        }
        // if we are at the end of the file and there are still open blocks close them all
        if (lexer->eof(lexer)) {
            if (open_blocks.size() > 0) {
                Block block = open_blocks[open_blocks.size() - 1];
                if (block >= LOOSE_LIST_ITEM && block <= LOOSE_LIST_ITEM_MAX_INDENTATION) {
                    lexer->result_symbol = BLOCK_CLOSE_LOOSE;
                } else {
                    lexer->result_symbol = BLOCK_CLOSE;
                }
                open_blocks.pop_back();
                return true;
            }
            return false;
        }

        std::cerr << "matched " << unsigned(matched) << std::endl;
        std::cerr << "indentation " << unsigned(indentation) << std::endl;
        for (size_t i = 0; i < open_blocks.size(); i++) {
            std::cerr << BLOCK_NAME[open_blocks[i]] << std::endl;
        }

        bool matching = matched < open_blocks.size();
        if (!matching) {
            if (valid_symbols[INDENTED_CHUNK_START]) {
                if (!valid_symbols[LAZY_CONTINUATION] && indentation >= 4 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                    // TODO: indented code block can not interrupt paragraph
                    lexer->result_symbol = INDENTED_CHUNK_START;
                    open_blocks.push_back(INDENTED_CODE_BLOCK);
                    indentation -= 4;
                    matched += 2;
                    return true;
                }
            }
            switch (lexer->lookahead) {
                case '\r':
                    if (valid_symbols[BLANK_LINE]) {
                        lexer->result_symbol = BLANK_LINE;
                        matched++;
                        for (size_t i = 0; i < open_blocks.size(); i++) {
                            if (open_blocks[i] >= TIGHT_LIST_ITEM && open_blocks[i] <= TIGHT_LIST_ITEM_MAX_INDENTATION) {
                                open_blocks[i] = Block(open_blocks[i] + (LOOSE_LIST_ITEM - TIGHT_LIST_ITEM));
                            }
                        }
                        return true;
                    }
                    if (valid_symbols[LINE_ENDING]) {
                        advance(lexer, true);
                        if (lexer->lookahead == '\n') {
                            advance(lexer, true);
                        }
                        advance(lexer, true);
                        matched = 0;
                        indentation = 0;
                        column = 0;
                        lexer->result_symbol = LINE_ENDING;
                        return true;
                    }
                    break;
                case '\n':
                    if (valid_symbols[BLANK_LINE]) {
                        lexer->result_symbol = BLANK_LINE;
                        matched++;
                        for (size_t i = 0; i < open_blocks.size(); i++) {
                            if (open_blocks[i] >= TIGHT_LIST_ITEM && open_blocks[i] <= TIGHT_LIST_ITEM_MAX_INDENTATION) {
                                open_blocks[i] = Block(open_blocks[i] + (LOOSE_LIST_ITEM - TIGHT_LIST_ITEM));
                            }
                        }
                        return true;
                    }
                    if (valid_symbols[LINE_ENDING]) {
                        advance(lexer, true);
                        matched = 0;
                        indentation = 0;
                        column = 0;
                        lexer->result_symbol = LINE_ENDING;
                        return true;
                    }
                    break;
                case '`':
                    if (valid_symbols[CODE_SPAN_START] || valid_symbols[CODE_SPAN_CLOSE] || valid_symbols[FENCED_CODE_BLOCK_START_BACKTICK]) {
                        size_t level = 0;
                        while (lexer->lookahead == '`') {
                            advance(lexer, false);
                            level++;
                        }
                        lexer->mark_end(lexer);
                        if (level >= 3) {
                            bool info_string_has_backtick = false;
                            while (lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                                if (lexer->lookahead == '`') {
                                    info_string_has_backtick = true;
                                    break;
                                }
                                advance(lexer, true);
                            }
                            if (!info_string_has_backtick) {
                                lexer->result_symbol = FENCED_CODE_BLOCK_START_BACKTICK;
                                open_blocks.push_back(FENCED_CODE_BLOCK_BACKTICK);
                                code_span_delimiter_length = level;
                                matched += 2;
                                indentation = 0;
                                return true;
                            }
                        }
                        if (level == code_span_delimiter_length && valid_symbols[CODE_SPAN_CLOSE]) {
                            lexer->result_symbol = CODE_SPAN_CLOSE;
                            return true;
                        } else if (valid_symbols[CODE_SPAN_START]) {
                            code_span_delimiter_length = level;
                            lexer->result_symbol = CODE_SPAN_START;
                            return true;
                        }
                    }
                    break;
                case '*':
                    {
                        if (num_emphasis_delimiters_left > 0) {
                            if (emphasis_delimiters_is_open && valid_symbols[EMPHASIS_OPEN_STAR]) {
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
                        if (star_count == 1 && line_end) {
                            extra_indentation = 1;
                        }
                        bool thematic_break = star_count >= 3 && line_end;
                        bool list_marker_star = star_count >= 1 && extra_indentation >= 1;
                        if (valid_symbols[THEMATIC_BREAK] && thematic_break && indentation < 4) { // underline is false if list_marker_minus is true
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            matched++;
                            return true;
                        } else if (valid_symbols[LIST_MARKER_STAR] && list_marker_star) {
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
                            open_blocks.push_back(Block(TIGHT_LIST_ITEM + extra_indentation));
                            matched++;
                            lexer->result_symbol = LIST_MARKER_STAR;
                            return true;
                        }
                        if (valid_symbols[EMPHASIS_OPEN_STAR] || valid_symbols[EMPHASIS_CLOSE_STAR]) {
                            num_emphasis_delimiters = star_count;
                            num_emphasis_delimiters_left = star_count - 1;
                            bool next_symbol_whitespace = extra_indentation > 0 || line_end;
                            bool next_symbol_punctuation = extra_indentation == 0 && is_punctuation(lexer->lookahead);
                            if (valid_symbols[EMPHASIS_CLOSE_STAR] && !valid_symbols[LAST_TOKEN_WHITESPACE] &&
                                (!valid_symbols[LAST_TOKEN_PUNCTUATION] || next_symbol_punctuation || next_symbol_whitespace)) {
                                emphasis_delimiters_is_open = 0;
                                lexer->result_symbol = EMPHASIS_CLOSE_STAR;
                                return true;
                            } else if (!next_symbol_whitespace &&
                                (!next_symbol_punctuation || valid_symbols[LAST_TOKEN_PUNCTUATION] || valid_symbols[LAST_TOKEN_WHITESPACE])) {
                                emphasis_delimiters_is_open = 1;
                                lexer->result_symbol = EMPHASIS_OPEN_STAR;
                                return true;
                            }
                        }
                    }
                    break;
                case '_':
                    {
                        if (num_emphasis_delimiters_left > 0) {
                            if (emphasis_delimiters_is_open && valid_symbols[EMPHASIS_OPEN_UNDERSCORE]) {
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
                        if (underscore_count >= 3 && line_end) {
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            matched++;
                            return true;
                        }
                        if (valid_symbols[EMPHASIS_OPEN_UNDERSCORE] || valid_symbols[EMPHASIS_CLOSE_UNDERSCORE]) {
                            num_emphasis_delimiters = underscore_count_before_whitespace;
                            num_emphasis_delimiters_left = underscore_count_before_whitespace - 1;
                            bool next_symbol_whitespace = encountered_whitespace || line_end;
                            bool next_symbol_punctuation = !encountered_whitespace && is_punctuation(lexer->lookahead);
                            bool right_flanking = !valid_symbols[LAST_TOKEN_WHITESPACE] &&
                                (!valid_symbols[LAST_TOKEN_PUNCTUATION] || next_symbol_punctuation || next_symbol_whitespace);
                            bool left_flanking = !next_symbol_whitespace &&
                                (!next_symbol_punctuation || valid_symbols[LAST_TOKEN_PUNCTUATION] || valid_symbols[LAST_TOKEN_WHITESPACE]);
                            if (valid_symbols[EMPHASIS_CLOSE_UNDERSCORE] && right_flanking && (!left_flanking || next_symbol_punctuation)) {
                                emphasis_delimiters_is_open = 0;
                                lexer->result_symbol = EMPHASIS_CLOSE_UNDERSCORE;
                                return true;
                            } else if (left_flanking && (!right_flanking || valid_symbols[LAST_TOKEN_PUNCTUATION])) {
                                emphasis_delimiters_is_open = 1;
                                lexer->result_symbol = EMPHASIS_OPEN_UNDERSCORE;
                                return true;
                            }
                        }
                    }
                    break;
                case '>':
                    if (valid_symbols[BLOCK_QUOTE_START]) {
                        advance(lexer, false);
                        indentation = 0;
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            indentation += advance(lexer, true) - 1;
                        }
                        lexer->result_symbol = BLOCK_QUOTE_START;
                        open_blocks.push_back(BLOCK_QUOTE);
                        matched++;
                        return true;
                    }
                    break;
                case '~':
                    if (valid_symbols[FENCED_CODE_BLOCK_START_TILDE]) {
                        lexer->mark_end(lexer);
                        size_t level = 0;
                        while (lexer->lookahead == '~') {
                            advance(lexer, false);
                            level++;
                        }
                        if (level >= 3) {
                            lexer->result_symbol = FENCED_CODE_BLOCK_START_TILDE;
                            open_blocks.push_back(FENCED_CODE_BLOCK_TILDE);
                            code_span_delimiter_length = level;
                            matched += 2;
                            indentation = 0;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '#':
                    if (valid_symbols[ATX_H1_MARKER] && indentation <= 3) {
                        // TODO: assert other atx markers also valid
                        lexer->mark_end(lexer);
                        size_t level = 0;
                        while (lexer->lookahead == '#' && level <= 6) {
                            advance(lexer, false);
                            level++;
                        }
                        if (level <= 6 && (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            lexer->result_symbol = ATX_H1_MARKER + (level - 1);
                            matched++;
                            indentation = 0;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '=':
                    if (valid_symbols[SETEXT_H1_UNDERLINE]) {
                        lexer->mark_end(lexer);
                        while (lexer->lookahead == '=') {
                            advance(lexer, false);
                        }
                        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            advance(lexer, true);
                        }
                        if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                            lexer->result_symbol = SETEXT_H1_UNDERLINE;
                            matched++;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '+':
                    if (indentation <= 3 && valid_symbols[LIST_MARKER_PLUS]) {
                        lexer->mark_end(lexer);
                        advance(lexer, false);
                        size_t extra_indentation = 0;
                        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            extra_indentation += advance(lexer, false);
                        }
                        if (extra_indentation >= 1) {
                            lexer->result_symbol = LIST_MARKER_PLUS;
                            extra_indentation--;
                            if (extra_indentation <= 3) {
                                extra_indentation += indentation;
                                indentation = 0;
                            } else {
                                size_t temp = indentation;
                                indentation = extra_indentation;
                                extra_indentation = temp;
                            }
                            open_blocks.push_back(Block(TIGHT_LIST_ITEM + extra_indentation));
                            matched++;
                            lexer->mark_end(lexer);
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
                    if (indentation <= 3 && (valid_symbols[LIST_MARKER_PLUS] || valid_symbols[LIST_MARKER_PARENTHETHIS] || valid_symbols[LIST_MARKER_DOT])) {
                        lexer->mark_end(lexer);
                        size_t digits = 0;
                        while (lexer->lookahead >= '0' && lexer->lookahead <= '9') {
                            digits++;
                            advance(lexer, false);
                        }
                        if (digits >= 1 && digits <= 9) {
                            bool success = false;
                            if (lexer->lookahead == '.') {
                                advance(lexer, false);
                                success = true;
                                lexer->result_symbol = LIST_MARKER_DOT;
                            } else if (lexer->lookahead == ')') {
                                advance(lexer, false);
                                success = true;
                                lexer->result_symbol = LIST_MARKER_PARENTHETHIS;
                            }
                            if (success) {
                                size_t extra_indentation = 0;
                                while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                                    extra_indentation += advance(lexer, false);
                                }
                                if (extra_indentation >= 1) {
                                    extra_indentation--;
                                    if (extra_indentation <= 3) {
                                        extra_indentation += indentation;
                                        indentation = 0;
                                    } else {
                                        size_t temp = indentation;
                                        indentation = extra_indentation;
                                        extra_indentation = temp;
                                    }
                                    open_blocks.push_back(Block(TIGHT_LIST_ITEM + extra_indentation));
                                    matched++;
                                    lexer->mark_end(lexer);
                                    return true;
                                }
                            }
                        }
                    }
                    break;
                case '-':
                    if (indentation <= 3 && (valid_symbols[LIST_MARKER_MINUS] || valid_symbols[SETEXT_H2_UNDERLINE] || valid_symbols[SETEXT_H2_UNDERLINE_OR_THEMATIC_BREAK] || valid_symbols[THEMATIC_BREAK])) { // TODO: thematic_break takes precedence
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
                        if (minus_count == 1 && line_end) {
                            extra_indentation = 1;
                        }
                        bool thematic_break = minus_count >= 3 && line_end;
                        bool underline = minus_count >= 1 && !minus_after_whitespace && line_end;
                        bool list_marker_minus = minus_count >= 1 && extra_indentation >= 1;
                        if (valid_symbols[THEMATIC_BREAK] && thematic_break && !underline) { // underline is false if list_marker_minus is true
                            lexer->result_symbol = THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            matched++;
                            return true;
                        } else if (valid_symbols[LIST_MARKER_MINUS] && list_marker_minus) {
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
                            open_blocks.push_back(Block(TIGHT_LIST_ITEM + extra_indentation));
                            matched++;
                            lexer->result_symbol = LIST_MARKER_MINUS;
                            return true;
                        } else if (valid_symbols[SETEXT_H2_UNDERLINE_OR_THEMATIC_BREAK] && thematic_break && underline) {
                            lexer->result_symbol = SETEXT_H2_UNDERLINE_OR_THEMATIC_BREAK;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            matched++;
                            return true;
                        } else if (valid_symbols[SETEXT_H2_UNDERLINE] && underline) {
                            lexer->result_symbol = SETEXT_H2_UNDERLINE;
                            lexer->mark_end(lexer);
                            indentation = 0;
                            matched++;
                            return true;
                        }
                    }
                    break;
            }
        } else {
            if (valid_symbols[BLOCK_CONTINUATION] && open_blocks[matched] == INDENTED_CODE_BLOCK) {
                if (indentation >= 4 && lexer->lookahead != '\n' && lexer->lookahead != '\r') {
                    lexer->result_symbol = BLOCK_CONTINUATION;
                    indentation -= 4;
                    matched += 2;
                    return true;
                }
            }
            if (valid_symbols[BLOCK_CONTINUATION] && is_list_item(open_blocks[matched])) {
                if (indentation >= list_item_indentation(open_blocks[matched])) {
                    indentation -= list_item_indentation(open_blocks[matched]);
                    lexer->result_symbol = BLOCK_CONTINUATION;
                    matched++;
                    return true;
                }
                if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
                    indentation = 0;
                    lexer->result_symbol = BLOCK_CONTINUATION;
                    matched++;
                    return true;
                }
            }
            switch (lexer->lookahead) {
                case '>':
                    if (valid_symbols[BLOCK_CONTINUATION] && open_blocks[matched] == BLOCK_QUOTE) {
                        advance(lexer, false);
                        indentation = 0;
                        if (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                            indentation += advance(lexer, true) - 1;
                        }
                        lexer->result_symbol = BLOCK_CONTINUATION;
                        matched++;
                        return true;
                    }
                    break;
                case '~':
                    if (valid_symbols[BLOCK_CLOSE] && open_blocks[matched] == FENCED_CODE_BLOCK_TILDE) {
                        lexer->mark_end(lexer);
                        size_t level = 0;
                        while (lexer->lookahead == '~') {
                            advance(lexer, false);
                            level++;
                        }
                        if (indentation < 4 && level >= code_span_delimiter_length && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            open_blocks.pop_back();
                            lexer->result_symbol = BLOCK_CLOSE;
                            matched++;
                            indentation = 0;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
                case '`':
                    if (valid_symbols[BLOCK_CLOSE] && open_blocks[matched] == FENCED_CODE_BLOCK_BACKTICK) {
                        lexer->mark_end(lexer);
                        size_t level = 0;
                        while (lexer->lookahead == '`') {
                            advance(lexer, false);
                            level++;
                        }
                        if (indentation < 4 && level >= code_span_delimiter_length && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
                            open_blocks.pop_back();
                            lexer->result_symbol = BLOCK_CLOSE;
                            matched++;
                            indentation = 0;
                            lexer->mark_end(lexer);
                            return true;
                        }
                    }
                    break;
            }

            if (valid_symbols[BLOCK_CONTINUATION] && (open_blocks[matched] == FENCED_CODE_BLOCK_TILDE || open_blocks[matched] == FENCED_CODE_BLOCK_BACKTICK))  {
                lexer->result_symbol = BLOCK_CONTINUATION;
                matched += 2;
                indentation = 0;
                return true;
            }
            lexer->mark_end(lexer);
            // if block close is not valid then there is an error
            /* if (valid_symbols[BLOCK_CLOSE]) { */
            Block block = open_blocks[open_blocks.size() - 1];
            if (block >= LOOSE_LIST_ITEM && block <= LOOSE_LIST_ITEM_MAX_INDENTATION) {
                lexer->result_symbol = BLOCK_CLOSE_LOOSE;
            } else {
                lexer->result_symbol = BLOCK_CLOSE;
            }
            open_blocks.pop_back();
            return true;
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
