#include "../../common/scanner.h"

/// Check if the lexer is in error recovery mode
static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PI_TARGET] && valid_symbols[PI_CONTENT] && valid_symbols[COMMENT];
}

bool tree_sitter_dtd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols)) return false;

    if (valid_symbols[PI_TARGET]) return scan_pi_target(lexer, valid_symbols);

    if (valid_symbols[PI_CONTENT]) return scan_pi_content(lexer);

    if (valid_symbols[COMMENT]) return scan_comment(lexer);

    return false;
}

SCANNER_BOILERPLATE(dtd)
