#include <optional>
#include <string>

#include "tree_sitter/parser.h"

namespace {

using std::optional;
using std::u32string;

enum TokenType {
    HERE_STRING_BODY,
};

inline bool isnewline(int32_t c) {
    return c == '\n' || c == '\r' || c == 0x85 || c == 0x2028 || c == 0x2029;
}

inline optional<u32string> readline(TSLexer *lexer) {
    u32string line;

    while (!isnewline(lexer->lookahead)) {
        if (lexer->eof(lexer)) {
            return {};
        }
        line.push_back(lexer->lookahead);
        lexer->advance(lexer, false);
    }
    lexer->advance(lexer, false);
    return line;
}

bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[HERE_STRING_BODY]) {
        return false;
    }

    optional<u32string> terminator = readline(lexer);

    if (!terminator.has_value()) {
        return false;
    }

    while (true) {
        optional<u32string> line = readline(lexer);
        if (!line.has_value()) {
            return false;
        }
        if (line == terminator) {
            lexer->result_symbol = HERE_STRING_BODY;
            return true;
        }
    }
}

}  // namespace

extern "C" {

void *tree_sitter_racket_external_scanner_create(void) {
    return NULL;
}

void tree_sitter_racket_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_racket_external_scanner_serialize(void *payload,
                                                       char *buffer) {
    return 0;
}

void tree_sitter_racket_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
}

bool tree_sitter_racket_external_scanner_scan(void *payload,
                                              TSLexer *lexer,
                                              const bool *valid_symbols) {
    return scan(lexer, valid_symbols);
}
}
