#include <string>

#include "tree_sitter/parser.h"

namespace {

using std::u32string;

enum TokenType {
    HERE_STRING_BODY,
};

class optional_str {
    bool valid;
    u32string str;

   public:
    optional_str() : valid(true) {}

    static optional_str empty() {
        optional_str emp;
        emp.valid = false;
        return emp;
    }

    bool has_value() const { return valid; }

    bool operator==(const optional_str &rhs) const {
        if (!this->valid) {
            return !rhs.valid;
        } else {
            return rhs.valid && this->str == rhs.str;
        }
    }

    u32string *operator->() { return &this->str; }
};

inline bool isnewline(int32_t c) {
    return c == '\n' || c == '\r' || c == 0x85 || c == 0x2028 || c == 0x2029;
}

inline optional_str readline(TSLexer *lexer) {
    optional_str line;

    while (!isnewline(lexer->lookahead)) {
        if (lexer->eof(lexer)) {
            return optional_str::empty();
        }
        line->push_back(lexer->lookahead);
        lexer->advance(lexer, false);
    }
    lexer->advance(lexer, false);
    return line;
}

bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[HERE_STRING_BODY]) {
        return false;
    }

    const optional_str terminator = readline(lexer);

    if (!terminator.has_value()) {
        return false;
    }

    while (true) {
        const optional_str line = readline(lexer);
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
