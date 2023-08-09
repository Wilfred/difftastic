#include "../../common/scanner.h"

static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent] && valid_symbols[Comment];
}

bool tree_sitter_dtd_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (in_error_recovery(valid_symbols)) return false;

    if (valid_symbols[PITarget]) return scan_pi_target(lexer);

    if (valid_symbols[PIContent]) return scan_pi_content(lexer);

    if (valid_symbols[Comment]) return scan_comment(lexer);

    return false;
}

SCANNER_BOILERPLATE(dtd)
