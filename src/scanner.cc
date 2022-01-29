#include <tree_sitter/parser.h>
#include <algorithm>
#include <vector>
#include <string>
#include <cwctype>
#include <cstring>

namespace
{

    using std::string;
    using std::vector;

    enum TokenType
    {
        VIRTUAL_END_DECL,
        VIRTUAL_OPEN_SECTION,
        VIRTUAL_END_SECTION,
        MINUS_WITHOUT_TRAILING_WHITESPACE,
        GLSL_CONTENT,
        BLOCK_COMMENT_CONTENT
    };

    struct Scanner
    {
        Scanner() {}

        unsigned serialize(char *buffer)
        {
            size_t i = 0;

            size_t runback_count = runback.size();
            if (runback_count > UINT8_MAX)
                runback_count = UINT8_MAX;
            buffer[i++] = runback_count;

            if (runback_count > 0)
            {
                memcpy(&buffer[i], runback.data(), runback_count);
            }
            i += runback_count;

            size_t indent_length_length = sizeof(indent_length);
            buffer[i++] = indent_length_length;
            if (indent_length_length > 0)
            {
                memcpy(&buffer[i], &indent_length, indent_length_length);
            }
            i += indent_length_length;

            vector<uint32_t>::iterator
                iter = indent_length_stack.begin() + 1,
                end = indent_length_stack.end();

            for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter)
            {
                buffer[i++] = *iter;
            }

            return i;
        }

        void deserialize(const char *buffer, unsigned length)
        {
            runback.clear();
            indent_length_stack.clear();
            indent_length_stack.push_back(0);

            if (length > 0)
            {
                size_t i = 0;

                size_t runback_count = (uint8_t)buffer[i++];
                runback.resize(runback_count);
                if (runback_count > 0)
                {
                    memcpy(runback.data(), &buffer[i], runback_count);
                }
                i += runback_count;

                size_t indent_length_length = buffer[i++];
                if (indent_length_length > 0)
                {
                    memcpy(&indent_length, &buffer[i], indent_length_length);
                }
                i += indent_length_length;

                for (; i < length; i++)
                {
                    indent_length_stack.push_back(buffer[i]);
                }
            }
        }

        void advance(TSLexer *lexer)
        {
            lexer->advance(lexer, false);
        }

        void skip(TSLexer *lexer)
        {
            lexer->advance(lexer, true);
        }

        bool isElmSpace(TSLexer *lexer)
        {
            return lexer->lookahead == ' ' || lexer->lookahead == '\r' || lexer->lookahead == '\n';
        }

        int checkForIn(TSLexer *lexer, const bool *valid_symbols)
        {
            // Are we at the end of a let (in) declaration
            if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == 'i')
            {
                skip(lexer);

                if (lexer->lookahead == 'n')
                {
                    skip(lexer);
                    if (isElmSpace(lexer) || lexer->eof(lexer))
                    {
                        return 2; // Success
                    }
                    return 1; // Partial
                }
                return 1; // Partial
            }
            return 0;
        }

        bool scan_block_comment(TSLexer *lexer)
        {
            lexer->mark_end(lexer);
            if (lexer->lookahead != '{')
                return false;

            advance(lexer);
            if (lexer->lookahead != '-')
                return false;

            advance(lexer);

            while (true)
            {
                switch (lexer->lookahead)
                {
                case '{':
                    scan_block_comment(lexer);
                    break;
                case '-':
                    advance(lexer);
                    if (lexer->lookahead == '}')
                    {
                        advance(lexer);
                        return true;
                    }
                    break;
                case '\0':
                    return true;
                default:
                    advance(lexer);
                }
            }
        }

        void advance_to_line_end(TSLexer *lexer)
        {
            while(true)
            {
                if (lexer->lookahead == '\n') {
                    break;
                }
                else if (lexer->eof(lexer)) {
                    break;
                } else {
                    advance(lexer);
                }
            }
        }

        bool scan(TSLexer *lexer, const bool *valid_symbols)
        {
            // First handle eventual runback tokens, we saved on a previous scan op
            if (!runback.empty() && runback.back() == 0 && valid_symbols[VIRTUAL_END_DECL])
            {
                runback.pop_back();
                lexer->result_symbol = VIRTUAL_END_DECL;
                return true;
            }
            if (!runback.empty() && runback.back() == 1 && valid_symbols[VIRTUAL_END_SECTION])
            {
                runback.pop_back();
                lexer->result_symbol = VIRTUAL_END_SECTION;
                return true;
            }
            runback.clear();

            // Check if we have newlines and how much indentation
            bool has_newline = false;
            bool found_in = false;
            bool can_call_mark_end = true;
            lexer->mark_end(lexer);
            while (true)
            {
                if (lexer->lookahead == ' ')
                {
                    skip(lexer);
                }
                else if (lexer->lookahead == '\n')
                {
                    skip(lexer);
                    has_newline = true;
                    while (true)
                    {
                        if (lexer->lookahead == ' ')
                        {
                            skip(lexer);
                        }
                        else
                        {
                            indent_length = lexer->get_column(lexer);
                            break;
                        }
                    }
                }
                else if (!valid_symbols[BLOCK_COMMENT_CONTENT] && lexer->lookahead == '-')
                {

                    advance(lexer);
                    auto lookahead = lexer->lookahead;

                    // Handle minus without a whitespace for negate
                    if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE]
                        && ((lookahead >= 'a' && lookahead <= 'z')
                            || (lookahead >= 'A' && lookahead <= 'Z')
                            || lookahead == '('))
                    {
                        if (can_call_mark_end)
                        {
                            lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                            lexer->mark_end(lexer);
                            return true;
                        }
                        else {
                            return false;
                        }
                    }
                    // Scan past line comments. As far as the special token
                    // types we're scanning for here are concerned line comments
                    // are like whitespace. There is nothing useful to be
                    // learned from, say, their indentation. So we advance past
                    // them here.
                    //
                    // The one thing we need to keep in mind is that we should
                    // not call `lexer->mark_end(lexer)` after this point, or
                    // the comment will be lost.
                    else if (lookahead == '-' && has_newline)
                    {
                        can_call_mark_end = false;
                        advance(lexer);
                        advance_to_line_end(lexer);
                    }
                    else if (valid_symbols[BLOCK_COMMENT_CONTENT] && lexer->lookahead == '}')
                    {
                        lexer->result_symbol = BLOCK_COMMENT_CONTENT;
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (lexer->lookahead == '\r')
                {
                    skip(lexer);
                }
                else if (lexer->eof(lexer))
                {
                    if (valid_symbols[VIRTUAL_END_SECTION])
                    {
                        lexer->result_symbol = VIRTUAL_END_SECTION;
                        return true;
                    }
                    if (valid_symbols[VIRTUAL_END_DECL])
                    {
                        lexer->result_symbol = VIRTUAL_END_DECL;
                        return true;
                    }

                    break;
                }
                else
                {
                    break;
                }
            }

            if (checkForIn(lexer, valid_symbols) == 2)
            {
                if (has_newline)
                {
                    found_in = true;
                }
                else
                {
                    lexer->result_symbol = VIRTUAL_END_SECTION;
                    indent_length_stack.pop_back();
                    return true;
                }
            }

            // Open section if the grammar lets us but only push to indent stack if we go further down in the stack
            if (valid_symbols[VIRTUAL_OPEN_SECTION] && !lexer->eof(lexer))
            {
                indent_length_stack.push_back(lexer->get_column(lexer));
                lexer->result_symbol = VIRTUAL_OPEN_SECTION;
                return true;
            }
            else if (valid_symbols[BLOCK_COMMENT_CONTENT])
            {
                if (!can_call_mark_end)
                {
                    return false;
                }
                lexer->mark_end(lexer);
                while (true)
                {
                    if (lexer->lookahead == '\0')
                    {
                        break;
                    }
                    if (lexer->lookahead != '{' && lexer->lookahead != '-')
                    {
                        advance(lexer);
                    }
                    else if (lexer->lookahead == '-')
                    {
                        lexer->mark_end(lexer);
                        advance(lexer);
                        if (lexer->lookahead == '}')
                        {
                            break;
                        }
                    }
                    else if (scan_block_comment(lexer))
                    {
                        lexer->mark_end(lexer);
                        advance(lexer);
                        if (lexer->lookahead == '-')
                        {
                            break;
                        }
                    }
                }

                lexer->result_symbol = BLOCK_COMMENT_CONTENT;
                return true;
            }
            else if (has_newline)
            {
                // We had a newline now it's time to check if we need to add multiple tokens to get back up to the right level
                runback.clear();

                while (indent_length <= indent_length_stack.back())
                {
                    if (indent_length == indent_length_stack.back())
                    {
                        if (found_in)
                        {
                            runback.push_back(1);
                            found_in = false;
                            break;
                        }
                        // Don't insert VIRTUAL_END_DECL when there is a line comment incoming

                        if (lexer->lookahead == '-')
                        {
                            skip(lexer);
                            if (lexer->lookahead == '-')
                            {
                                break;
                            }
                        }
                        // Don't insert VIRTUAL_END_DECL when there is a block comment incoming
                        if (lexer->lookahead == '{')
                        {
                            skip(lexer);
                            if (lexer->lookahead == '-')
                            {
                                break;
                            }
                        }
                        runback.push_back(0);
                        break;
                    }
                    else if (indent_length < indent_length_stack.back())
                    {
                        indent_length_stack.pop_back();
                        runback.push_back(1);
                        found_in = false;
                    }
                }

                // Needed for some of the more weird cases where let is in the same line as everything before the in in the next line
                if (found_in)
                {
                    runback.push_back(1);
                    found_in = false;
                }

                // Our list is the wrong way around, reverse it
                std::reverse(runback.begin(), runback.end());
                // Handle the first runback token if we have them, if there are more they will be handled on the next scan operation
                if (!runback.empty() && runback.back() == 0 && valid_symbols[VIRTUAL_END_DECL])
                {
                    runback.pop_back();
                    lexer->result_symbol = VIRTUAL_END_DECL;
                    return true;
                }
                else if (!runback.empty() && runback.back() == 1 && valid_symbols[VIRTUAL_END_SECTION])
                {
                    runback.pop_back();
                    lexer->result_symbol = VIRTUAL_END_SECTION;
                    return true;
                }
                else if (lexer->eof(lexer) && valid_symbols[VIRTUAL_END_SECTION])
                {
                    lexer->result_symbol = VIRTUAL_END_SECTION;
                    return true;
                }
            }

            if (valid_symbols[GLSL_CONTENT])
            {
                if (!can_call_mark_end)
                {
                    return false;
                }
                lexer->result_symbol = GLSL_CONTENT;
                while (true)
                {
                    switch (lexer->lookahead)
                    {
                    case '|':
                        lexer->mark_end(lexer);
                        advance(lexer);
                        if (lexer->lookahead == ']')
                        {
                            advance(lexer);
                            return true;
                        }
                        break;
                    case '\0':
                        lexer->mark_end(lexer);
                        return true;
                    default:
                        advance(lexer);
                    }
                }
            }

            return false;
        }

        // The indention of the current line
        uint32_t indent_length;
        // Our indentation stack
        vector<uint32_t> indent_length_stack;
        // Stack of 0 - for possible VIRTUAL_END_DECL or 1 - for possible VIRTUAL_END_SECTION
        vector<uint8_t> runback;
    };

} // namespace

extern "C"
{

    void *tree_sitter_elm_external_scanner_create()
    {
        return new Scanner();
    }

    bool tree_sitter_elm_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->scan(lexer, valid_symbols);
    }

    unsigned tree_sitter_elm_external_scanner_serialize(void *payload, char *buffer)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        return scanner->serialize(buffer);
    }

    void tree_sitter_elm_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        scanner->deserialize(buffer, length);
    }

    void tree_sitter_elm_external_scanner_destroy(void *payload)
    {
        Scanner *scanner = static_cast<Scanner *>(payload);
        delete scanner;
    }
}
