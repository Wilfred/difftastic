#include <assert.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define MIN(a, b) ((a) < (b) ? (a) : (b))

#define STRING_RESIZE(vec, _cap)                                               \
    void *tmp = realloc((vec).data, ((_cap) + 1) * sizeof((vec).data[0]));     \
    assert(tmp != NULL);                                                       \
    (vec).data = tmp;                                                          \
    memset((vec).data + (vec).len, 0,                                          \
           (((_cap) + 1) - (vec).len) * sizeof((vec).data[0]));                \
    (vec).cap = (_cap);

#define STRING_GROW(vec, _cap)                                                 \
    if ((vec).cap < (_cap)) {                                                  \
        STRING_RESIZE((vec), (_cap));                                          \
    }

#define STRING_PUSH(vec, el)                                                   \
    if ((vec).cap == (vec).len) {                                              \
        STRING_RESIZE((vec), MAX(16, (vec).len * 2));                          \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define STRING_FREE(vec)                                                       \
    if ((vec).data != NULL)                                                    \
        free((vec).data);

#define STRING_CLEAR(vec)                                                      \
    {                                                                          \
        (vec).len = 0;                                                         \
        memset((vec).data, 0, (vec).cap * sizeof(char));                       \
    }

enum TokenType {
    HEREDOC_START,
    SIMPLE_HEREDOC_BODY,
    HEREDOC_BODY_BEGINNING,
    HEREDOC_BODY_MIDDLE,
    HEREDOC_BODY_END,
    FILE_DESCRIPTOR,
    EMPTY_VALUE,
    CONCAT,
    VARIABLE_NAME,
    REGEX,
    CLOSING_BRACE,
    CLOSING_BRACKET,
    HEREDOC_ARROW,
    HEREDOC_ARROW_DASH,
    NEWLINE,
};

typedef struct {
    uint32_t cap;
    uint32_t len;
    char *data;
} String;

static String string_new() {
    return (String){.cap = 16, .len = 0, .data = calloc(1, sizeof(char) * 17)};
}

typedef struct {
    bool heredoc_is_raw;
    bool started_heredoc;
    bool heredoc_allows_indent;
    String heredoc_delimiter;
    String current_leading_word;
} Scanner;

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static unsigned serialize(Scanner *scanner, char *buffer) {
    if (scanner->heredoc_delimiter.len + 3 >=
        TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
        return 0;
    }
    buffer[0] = (char)scanner->heredoc_is_raw;
    buffer[1] = (char)scanner->started_heredoc;
    buffer[2] = (char)scanner->heredoc_allows_indent;
    memcpy(&buffer[3], scanner->heredoc_delimiter.data,
           scanner->heredoc_delimiter.len);
    return scanner->heredoc_delimiter.len + 3;
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    if (length == 0) {
        scanner->heredoc_is_raw = false;
        scanner->started_heredoc = false;
        scanner->heredoc_allows_indent = false;
        STRING_CLEAR(scanner->heredoc_delimiter);
    } else {
        scanner->heredoc_is_raw = buffer[0];
        scanner->started_heredoc = buffer[1];
        scanner->heredoc_allows_indent = buffer[2];
        scanner->heredoc_delimiter.len = length - 3;
        STRING_GROW(scanner->heredoc_delimiter, scanner->heredoc_delimiter.len);
        memcpy(scanner->heredoc_delimiter.data, &buffer[3],
               scanner->heredoc_delimiter.len);
    }
}

/**
 * Consume a "word" in POSIX parlance, and returns it unquoted.
 *
 * This is an approximate implementation that doesn't deal with any
 * POSIX-mandated substitution, and assumes the default value for
 * IFS.
 */
static bool advance_word(TSLexer *lexer, String *unquoted_word) {
    bool empty = true;

    int32_t quote = 0;
    if (lexer->lookahead == '\'' || lexer->lookahead == '"') {
        quote = lexer->lookahead;
        advance(lexer);
    }

    while (lexer->lookahead &&
           !(quote ? lexer->lookahead == quote : iswspace(lexer->lookahead))) {
        if (lexer->lookahead == '\\') {
            advance(lexer);
            if (!lexer->lookahead) {
                return false;
            }
        }
        empty = false;
        STRING_PUSH(*unquoted_word, lexer->lookahead);
        advance(lexer);
    }

    if (quote && lexer->lookahead == quote) {
        advance(lexer);
    }

    return !empty;
}

static bool scan_heredoc_start(Scanner *scanner, TSLexer *lexer) {
    while (iswspace(lexer->lookahead)) {
        skip(lexer);
    }

    lexer->result_symbol = HEREDOC_START;
    scanner->heredoc_is_raw = lexer->lookahead == '\'';
    scanner->started_heredoc = false;
    STRING_CLEAR(scanner->heredoc_delimiter);

    bool found_delimiter = advance_word(lexer, &scanner->heredoc_delimiter);
    if (!found_delimiter)
        STRING_CLEAR(scanner->heredoc_delimiter);
    return found_delimiter;
}

static bool scan_heredoc_end_identifier(Scanner *scanner, TSLexer *lexer) {
    STRING_CLEAR(scanner->current_leading_word);
    // Scan the first 'n' characters on this line, to see if they match the
    // heredoc delimiter
    int32_t size = 0;
    while (lexer->lookahead != '\0' && lexer->lookahead != '\n' &&
           ((int32_t)scanner->heredoc_delimiter.data[size++]) ==
               lexer->lookahead &&
           scanner->current_leading_word.len < scanner->heredoc_delimiter.len) {
        STRING_PUSH(scanner->current_leading_word, lexer->lookahead);
        advance(lexer);
    }
    return strcmp(scanner->current_leading_word.data,
                  scanner->heredoc_delimiter.data) == 0;
}

static bool scan_heredoc_content(Scanner *scanner, TSLexer *lexer,
                                 enum TokenType middle_type,
                                 enum TokenType end_type) {
    bool did_advance = false;

    for (;;) {
        switch (lexer->lookahead) {
            case '\0': {
                if (did_advance) {
                    scanner->heredoc_is_raw = false;
                    scanner->started_heredoc = false;
                    scanner->heredoc_allows_indent = false;
                    STRING_CLEAR(scanner->heredoc_delimiter);
                    lexer->result_symbol = end_type;
                    return true;
                }
                return false;
            }

            case '\\': {
                did_advance = true;
                advance(lexer);
                advance(lexer);
                break;
            }

            case '$': {
                if (scanner->heredoc_is_raw) {
                    did_advance = true;
                    advance(lexer);
                    break;
                }
                if (did_advance) {
                    lexer->result_symbol = middle_type;
                    scanner->started_heredoc = true;
                    return true;
                }
                return false;
            }

            case '\n': {
                did_advance = true;
                advance(lexer);
                if (scanner->heredoc_allows_indent) {
                    while (iswspace(lexer->lookahead)) {
                        advance(lexer);
                    }
                }
                if (scan_heredoc_end_identifier(scanner, lexer)) {
                    scanner->heredoc_is_raw = false;
                    scanner->started_heredoc = false;
                    scanner->heredoc_allows_indent = false;
                    STRING_CLEAR(scanner->heredoc_delimiter);
                    lexer->result_symbol = end_type;
                    return true;
                }
                break;
            }

            default: {
                if (scan_heredoc_end_identifier(scanner, lexer)) {
                    scanner->heredoc_is_raw = false;
                    scanner->started_heredoc = false;
                    scanner->heredoc_allows_indent = false;
                    STRING_CLEAR(scanner->heredoc_delimiter);
                    lexer->result_symbol = end_type;
                    return true;
                }
                did_advance = true;
                advance(lexer);
                break;
            }
        }
    }
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[CONCAT]) {
        if (!(lexer->lookahead == 0 || iswspace(lexer->lookahead) ||
              lexer->lookahead == '\\' || lexer->lookahead == '>' ||
              lexer->lookahead == '<' || lexer->lookahead == ')' ||
              lexer->lookahead == '(' || lexer->lookahead == ';' ||
              lexer->lookahead == '&' || lexer->lookahead == '|' ||
              lexer->lookahead == '`' || lexer->lookahead == '#' ||
              (lexer->lookahead == '}' && valid_symbols[CLOSING_BRACE]) ||
              (lexer->lookahead == ']' && valid_symbols[CLOSING_BRACKET]))) {
            lexer->result_symbol = CONCAT;
            return true;
        }
    }

    if (valid_symbols[EMPTY_VALUE]) {
        if (iswspace(lexer->lookahead)) {
            lexer->result_symbol = EMPTY_VALUE;
            return true;
        }
    }

    if (valid_symbols[HEREDOC_BODY_BEGINNING] &&
        scanner->heredoc_delimiter.len > 0 && !scanner->started_heredoc) {
        return scan_heredoc_content(scanner, lexer, HEREDOC_BODY_BEGINNING,
                                    SIMPLE_HEREDOC_BODY);
    }

    if (valid_symbols[HEREDOC_BODY_MIDDLE] &&
        scanner->heredoc_delimiter.len > 0 && scanner->started_heredoc) {
        return scan_heredoc_content(scanner, lexer, HEREDOC_BODY_MIDDLE,
                                    HEREDOC_BODY_END);
    }

    if (valid_symbols[HEREDOC_START]) {
        return scan_heredoc_start(scanner, lexer);
    }

    if (valid_symbols[VARIABLE_NAME] || valid_symbols[FILE_DESCRIPTOR] ||
        valid_symbols[HEREDOC_ARROW]) {
        for (;;) {
            if (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
                lexer->lookahead == '\r' ||
                (lexer->lookahead == '\n' && !valid_symbols[NEWLINE])) {
                skip(lexer);
            } else if (lexer->lookahead == '\\') {
                skip(lexer);
                if (lexer->lookahead == '\r') {
                    skip(lexer);
                }
                if (lexer->lookahead == '\n') {
                    skip(lexer);
                } else {
                    return false;
                }
            } else {
                break;
            }
        }

        if (valid_symbols[HEREDOC_ARROW] && lexer->lookahead == '<') {
            advance(lexer);
            if (lexer->lookahead == '<') {
                advance(lexer);
                if (lexer->lookahead == '-') {
                    advance(lexer);
                    scanner->heredoc_allows_indent = true;
                    lexer->result_symbol = HEREDOC_ARROW_DASH;
                } else if (lexer->lookahead == '<') {
                    return false;
                } else {
                    scanner->heredoc_allows_indent = false;
                    lexer->result_symbol = HEREDOC_ARROW;
                }
                return true;
            }
            return false;
        }

        bool is_number = true;
        if (iswdigit(lexer->lookahead)) {
            advance(lexer);
        } else if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
            is_number = false;
            advance(lexer);
        } else {
            return false;
        }

        for (;;) {
            if (iswdigit(lexer->lookahead)) {
                advance(lexer);
            } else if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
                is_number = false;
                advance(lexer);
            } else {
                break;
            }
        }

        if (is_number && valid_symbols[FILE_DESCRIPTOR] &&
            (lexer->lookahead == '>' || lexer->lookahead == '<')) {
            lexer->result_symbol = FILE_DESCRIPTOR;
            return true;
        }

        if (valid_symbols[VARIABLE_NAME]) {
            if (lexer->lookahead == '+') {
                lexer->mark_end(lexer);
                advance(lexer);
                if (lexer->lookahead == '=') {
                    lexer->result_symbol = VARIABLE_NAME;
                    return true;
                }
                return false;
            }
            if (lexer->lookahead == '=' || lexer->lookahead == '[') {
                lexer->result_symbol = VARIABLE_NAME;
                return true;
            }
        }

        return false;
    }

    if (valid_symbols[REGEX]) {
        while (iswspace(lexer->lookahead)) {
            skip(lexer);
        }

        if (lexer->lookahead != '"' && lexer->lookahead != '\'' &&
            lexer->lookahead != '$') {
            typedef struct {
                bool done;
                uint32_t paren_depth;
                uint32_t bracket_depth;
                uint32_t brace_depth;
            } State;

            lexer->mark_end(lexer);

            State state = {false, 0, 0, 0};
            while (!state.done) {
                switch (lexer->lookahead) {
                    case '\0':
                        return false;
                    case '(':
                        state.paren_depth++;
                        break;
                    case '[':
                        state.bracket_depth++;
                        break;
                    case '{':
                        state.brace_depth++;
                        break;
                    case ')':
                        if (state.paren_depth == 0) {
                            state.done = true;
                        }
                        state.paren_depth--;
                        break;
                    case ']':
                        if (state.bracket_depth == 0) {
                            state.done = true;
                        }
                        state.bracket_depth--;
                        break;
                    case '}':
                        if (state.brace_depth == 0) {
                            state.done = true;
                        }
                        state.brace_depth--;
                        break;
                }

                if (!state.done) {
                    bool was_space = iswspace(lexer->lookahead);
                    advance(lexer);
                    if (!was_space) {
                        lexer->mark_end(lexer);
                    }
                }
            }

            lexer->result_symbol = REGEX;
            return true;
        }
    }

    return false;
}

void *tree_sitter_bash_external_scanner_create() {
    Scanner *scanner = calloc(1, sizeof(Scanner));
    scanner->heredoc_delimiter = string_new();
    scanner->current_leading_word = string_new();
    return scanner;
}

bool tree_sitter_bash_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    return scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_bash_external_scanner_serialize(void *payload,
                                                     char *state) {
    Scanner *scanner = (Scanner *)payload;
    return serialize(scanner, state);
}

void tree_sitter_bash_external_scanner_deserialize(void *payload,
                                                   const char *state,
                                                   unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize(scanner, state, length);
}

void tree_sitter_bash_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    STRING_FREE(scanner->heredoc_delimiter);
    STRING_FREE(scanner->current_leading_word);
    free(scanner);
}
