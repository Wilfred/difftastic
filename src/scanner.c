#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

enum TokenType {
    HERE_STRING_BODY,
};

typedef struct {
    size_t len;
    size_t cap;
    char *data;
} String;

static String string_new() {
    void *tmp = calloc(1, sizeof(char) * 17);
    if (tmp == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return (String){
        .cap = 16, .len = 0, .data = tmp};  // 17 for null terminator
}

static void string_resize(String *vec, uint32_t cap) {
    void *block = realloc(vec->data, (cap + 1) * sizeof(vec->data[0]));
    if (block == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    vec->data = block;
    memset(
        vec->data + vec->len, 0, ((cap + 1) - vec->len) * sizeof(vec->data[0]));
    vec->cap = cap;
}

static void string_grow(String *vec, uint32_t cap) {
    if (vec->cap < cap) {
        string_resize(vec, cap);
    }
}

static void string_push(String *vec, int32_t elem) {
    if (vec->len + sizeof(elem) >= vec->cap) {
        string_resize(vec, MAX(16, vec->len * 2));
    }
    memcpy(vec->data + vec->len, &elem, sizeof(elem));
    vec->len += sizeof(elem);
}

static void string_free(String *vec) {
    if (vec->data != NULL) {
        free(vec->data);
    }
    vec->data = NULL;
    vec->len = 0;
    vec->cap = 0;
}

static void string_clear(String *vec) {
    vec->len = 0;
    memset(vec->data, 0, (vec->len + 1) * sizeof(char));
}

typedef struct {
    bool valid;
    String terminator_str;
    String current_line;
} Scanner;

static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

static void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
}

// NOTE: only "\n" is allowed as newline here,
// It implies that "\r" can also be terminator.
static bool isnewline(int32_t chr) {
    return chr == '\n';
}

static void read_terminator(Scanner *scanner, TSLexer *lexer) {
    while (true) {
        if (isnewline(lexer->lookahead)) {
            return;
        }
        if (lexer->eof(lexer)) {
            scanner->valid = false;
            return;
        }
        string_push(&scanner->terminator_str, lexer->lookahead);
        advance(lexer);
    }
}

// `read_line` read strings until a newline or EOF
static void read_line(Scanner *scanner, TSLexer *lexer) {
    while (!isnewline(lexer->lookahead) && !lexer->eof(lexer)) {
        string_push(&scanner->current_line, lexer->lookahead);
        advance(lexer);
    }
}

// Suppose terminator is `T`, newline (\n) is `$`,
// It should accept "#<<T$T" or "#<<T$...$T", where `...`
// is the string content.
bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    if (!valid_symbols[HERE_STRING_BODY]) {
        return false;
    }

    string_clear(&scanner->terminator_str);
    read_terminator(scanner, lexer);

    if (!scanner->valid) {
        return false;
    }

    // skip `\n`
    skip(lexer);
    while (true) {
        string_clear(&scanner->current_line);
        read_line(scanner, lexer);
        if (strcmp(scanner->terminator_str.data, scanner->current_line.data) ==
            0) {
            lexer->result_symbol = HERE_STRING_BODY;
            return true;
        }
        if (lexer->eof(lexer)) {
            return false;
        }
        // skip `\n`
        skip(lexer);
    }
}

void *tree_sitter_racket_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->valid = true;
    scanner->terminator_str = string_new();
    scanner->current_line = string_new();
    return scanner;
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
    Scanner *scanner = (Scanner *)payload;
    return scan(scanner, lexer, valid_symbols);
}

void tree_sitter_racket_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    string_free(&scanner->terminator_str);
    string_free(&scanner->current_line);
    free(scanner);
}
