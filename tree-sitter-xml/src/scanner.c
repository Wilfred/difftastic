#include "../../common/scanner.h"

static inline bool in_error_recovery(const bool *valid_symbols) {
    return valid_symbols[PITarget] && valid_symbols[PIContent];
}

bool tree_sitter_xml_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
    SCAN_COMMON(lexer, valid_symbols)

    if (valid_symbols[CharData]) return scan_char_data(lexer);

    return false;
}

SCANNER_BOILERPLATE(xml)
