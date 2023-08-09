#include "../../common/scanner.h"

/// Check if the lexer is in error recovery mode
static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PI_TARGET] && valid_symbols[PI_CONTENT] &&
           valid_symbols[COMMENT] && valid_symbols[CHAR_DATA];
}

/// Scan for a CharData node
static bool scan_char_data(TSLexer *lexer) {
    bool advanced_once = false;

    while (!lexer->eof(lexer) &&
           lexer->lookahead != '<' &&
           lexer->lookahead != '&') {
        if (lexer->lookahead == ']') {
            lexer->mark_end(lexer);
            advance(lexer);
            if (lexer->lookahead == ']') {
                advance(lexer);
                if (lexer->lookahead == '>') {
                    advance(lexer);
                    if (advanced_once) {
                        lexer->result_symbol = CHAR_DATA;
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
        lexer->result_symbol = CHAR_DATA;
        return true;
    }
    return false;
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols)) return false;

    if (valid_symbols[PI_TARGET]) return scan_pi_target(lexer, valid_symbols);

    if (valid_symbols[PI_CONTENT]) return scan_pi_content(lexer);

    if (valid_symbols[COMMENT] && lexer->lookahead == '<') return scan_comment(lexer);

    if (valid_symbols[CHAR_DATA]) return scan_char_data(lexer);

    return false;
}

SCANNER_BOILERPLATE(xml)
