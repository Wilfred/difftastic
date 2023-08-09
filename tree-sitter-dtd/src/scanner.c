#include "../../common/scanner.h"

static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent] && valid_symbols[CharData];
}

bool tree_sitter_dtd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    SCAN_COMMON(lexer, valid_symbols)

    return false;
}

SCANNER_BOILERPLATE(dtd)
