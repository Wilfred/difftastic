#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
    CONTINUATION_SEPARATOR,
};

void *tree_sitter_class_list_external_scanner_create() { return NULL; }

void tree_sitter_class_list_external_scanner_destroy(void *payload) {}

void tree_sitter_class_list_external_scanner_reset(void *payload) {}

unsigned tree_sitter_class_list_external_scanner_serialize(void *payload,
                                                             char *buffer) {
    return 0;
}

void tree_sitter_class_list_external_scanner_deserialize(void       *payload,
                                                           const char *buffer,
                                                           unsigned    length) {}

static bool is_separator_char(int32_t c) {
    return c == '-' || c == ':' || c == '/';
}

static bool is_segment_start_char(int32_t c) {
    return c != 0 && !iswspace(c) && !is_separator_char(c);
}

// Only accept a continuation separator (e.g. the "-" in "tw-px-4")
// when it is immediately adjacent to the previous token (checked by
// requiring the very first character to already be a separator,
// since the scanner runs before whitespace extras are skipped) *and*
// immediately followed by a segment character. A plain regex can't
// express that trailing condition (it would need arbitrary
// lookahead), so a dangling separator like the trailing ":" in
// "hover: foo" is left unmatched here and falls through to normal
// error recovery instead of being greedily (and unrecoverably)
// shifted into an incomplete continuation.
bool tree_sitter_class_list_external_scanner_scan(void          *payload,
                                                   TSLexer       *lexer,
                                                   const bool    *valid_symbols) {
    if (!valid_symbols[CONTINUATION_SEPARATOR]) {
        return false;
    }

    if (!is_separator_char(lexer->lookahead)) {
        return false;
    }

    while (is_separator_char(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }

    lexer->mark_end(lexer);

    if (!is_segment_start_char(lexer->lookahead)) {
        return false;
    }

    lexer->result_symbol = CONTINUATION_SEPARATOR;
    return true;
}
