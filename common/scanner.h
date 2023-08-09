#include <ctype.h>
#include <tree_sitter/parser.h>

enum TokenType {
    PITarget,
    PIContent,
    CharData,
};

static bool in_dtd_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent];
}

static bool in_xml_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent] &&
           valid_symbols[CharData];
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static bool scan_pi_target(TSLexer *lexer) {
    bool advanced_once = false;
    bool found_x_first = false;
    if (isalpha(lexer->lookahead) || lexer->lookahead == '_') {
        if (lexer->lookahead == 'x' || lexer->lookahead == 'X') {
            found_x_first = true;
            lexer->mark_end(lexer);
        }
        advanced_once = true;
        advance(lexer);
    }

    if (advanced_once) {
        while (isalnum(lexer->lookahead) || lexer->lookahead == '_' ||
               lexer->lookahead == ':' || lexer->lookahead == '.' ||
               lexer->lookahead == L'·' || lexer->lookahead == '-') {
            if (lexer->lookahead == 'x' || lexer->lookahead == 'X') {
                lexer->mark_end(lexer);
                advance(lexer);
                if (lexer->lookahead == 'm' || lexer->lookahead == 'M') {
                    advance(lexer);
                    if (lexer->lookahead == 'l' || lexer->lookahead == 'L') {
                        advance(lexer);
                        return false;
                    }
                }
            }

            if (found_x_first &&
                (lexer->lookahead == 'm' || lexer->lookahead == 'M')) {
                advance(lexer);
                if (lexer->lookahead == 'l' || lexer->lookahead == 'L') {
                    advance(lexer);
                    return false;
                }
            }

            found_x_first = false;
            advance(lexer);
        }

        lexer->mark_end(lexer);
        lexer->result_symbol = PITarget;
        return true;
    }

    return false;
}

static bool scan_pi_content(TSLexer *lexer) {
    bool advanced_once = false;
    while (lexer->lookahead != '\n' && lexer->lookahead != '?' &&
           !lexer->eof(lexer)) {
        advanced_once = true;
        advance(lexer);
    }

    if (lexer->lookahead == '?') {
        lexer->mark_end(lexer);
        advance(lexer);
        if (lexer->lookahead == '>') {
            advance(lexer);
            return false;
        }
    }

    if (advanced_once) {
        lexer->mark_end(lexer);
        lexer->result_symbol = PIContent;
        return true;
    }

    return false;
}

static bool scan_char_data(TSLexer *lexer) {
    bool advanced_once = false;
    while (lexer->lookahead != '<' && lexer->lookahead != '&' &&
           !lexer->eof(lexer)) {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>') {
                    advance(lexer);
                    if (advanced_once) {
                        lexer->result_symbol = CharData;
                        return false;
                    }
                }
            }
        }
        advanced_once = true;
        advance(lexer);
    }

    if (advanced_once) {
        lexer->mark_end(lexer);
        lexer->result_symbol = CharData;
        return true;
    }
    return false;
}
