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

    static optional_str none() {
        optional_str emp;
        emp.valid = false;
        return emp;
    }

    bool is_none() const { return !this->valid; }
    const u32string &content() const { return this->str; }
    u32string &content() { return this->str; }
};

// NOTE: only "\n" is allowed as newline here,
// It implies that "\r" can also be terminator.
inline bool isnewline(int32_t c) {
    return c == '\n';
}

inline optional_str read_terminator(TSLexer *lexer) {
    optional_str line;

    while (true) {
        if (isnewline(lexer->lookahead)) {
            return line;
        } else if (lexer->eof(lexer)) {
            return optional_str::none();
        } else {
            line.content().push_back(lexer->lookahead);
            lexer->advance(lexer, false);
        }
    }
}

// `read_line` read strings until a newline or EOF
inline u32string read_line(TSLexer *lexer) {
    u32string line;

    while (!isnewline(lexer->lookahead) && !lexer->eof(lexer)) {
        line.push_back(lexer->lookahead);
        lexer->advance(lexer, false);
    }
    return line;
}

// Suppose terminator is `T`, newline (\n) is `$`,
// It should accept "#<<T$T" or "#<<T$...$T", where `...`
// is the string content.
bool scan(TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[HERE_STRING_BODY]) {
        return false;
    }

    const optional_str terminator = read_terminator(lexer);

    if (terminator.is_none()) {
        return false;
    }

    // skip `\n`
    lexer->advance(lexer, false);
    while (true) {
        const u32string line = read_line(lexer);
        if (line == terminator.content()) {
            lexer->result_symbol = HERE_STRING_BODY;
            return true;
        }
        if (lexer->eof(lexer)) {
            return false;
        }
        // skip `\n`
        lexer->advance(lexer, false);
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
