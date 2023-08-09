#include "../../common/scanner.h"

static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent] &&
           valid_symbols[Comment] && valid_symbols[CharData];
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols)) return false;

    if (valid_symbols[PITarget]) return scan_pi_target(lexer);

    if (valid_symbols[PIContent]) return scan_pi_content(lexer);

    if (valid_symbols[Comment] && lexer->lookahead == '<') return scan_comment(lexer);

    if (valid_symbols[CharData]) return scan_char_data(lexer);

    return false;
}

SCANNER_BOILERPLATE(xml)
