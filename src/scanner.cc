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
        BLOCK_COMMENT,
        LINE_COMMENT,
        OPEN_QUOTE,
        CLOSE_QUOTE,
        OPEN_QUOTE_MULTILINE,
        CLOSE_QUOTE_MULTILINE,
        GLSL_CONTENT
    };

    struct Scanner
    {
        Scanner() {}

        unsigned serialize(char *buffer)
        {
            size_t i = 0;

            size_t stack_size = runback.size();
            if (stack_size > UINT8_MAX)
                stack_size = UINT8_MAX;
            buffer[i++] = stack_size;

            memcpy(&buffer[i], runback.data(), stack_size);
            i += stack_size;

            buffer[i++] = indent_length;
            buffer[i++] = in_string;

            vector<uint16_t>::iterator
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
                memcpy(runback.data(), &buffer[i], runback_count);
                i += runback_count;
                indent_length = buffer[i++];
                in_string = buffer[i++];
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

        bool scan_comment(TSLexer *lexer)
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
                    scan_comment(lexer);
                    break;
                case '-':
                    advance(lexer);
                    if (lexer->lookahead == '}')
                    {
                        advance(lexer);
                        runback.clear();
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

        bool scan_quote(TSLexer *lexer, TokenType quoteToken, TokenType quoteTokenMultiline, bool closingQuote)
        {
            uint8_t newInString = closingQuote ? 0 : 1;
            uint8_t newInStringMultiline = closingQuote ? 0 : 2;

            if (lexer->lookahead == '"')
            {
                advance(lexer);
                lexer->mark_end(lexer);
                if (lexer->lookahead == '"')
                {
                    advance(lexer);

                    if (lexer->lookahead == '"')
                    {
                        advance(lexer);
                        lexer->result_symbol = quoteTokenMultiline;
                        in_string = newInStringMultiline;
                        lexer->mark_end(lexer);
                        return true;
                    }
                    else if (in_string != 2)
                    {
                        lexer->result_symbol = quoteToken;
                        in_string = newInString;
                        return true;
                    }
                }
                else if (in_string != 2)
                {

                    lexer->result_symbol = quoteToken;
                    in_string = newInString;
                    lexer->mark_end(lexer);
                    return true;
                }
            }

            return false;
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
                    if (isElmSpace(lexer) || lexer->lookahead == 0)
                    {
                        return 2; // Success
                    }
                    return 1; //Partial
                }
                return 1; //Partial
            }
            return 0;
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
                    indent_length = 0;
                    while (true)
                    {
                        if (lexer->lookahead == ' ')
                        {
                            indent_length++;
                            skip(lexer);
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else if (lexer->lookahead == '\r')
                {
                    skip(lexer);
                }
                else if (lexer->lookahead == 0)
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

            while (isElmSpace(lexer))
            {
                skip(lexer);
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
                    return true;
                }
            }

            // Handle minus without a whitespace for negate and line comments as both start with '-'
            if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] || valid_symbols[LINE_COMMENT])
            {
                if (in_string == 0 && lexer->lookahead == '-')
                {
                    advance(lexer);
                    auto lookahead = lexer->lookahead;
                    if ((lookahead >= 'a' && lookahead <= 'z') || (lookahead >= 'A' && lookahead <= 'Z') || lookahead == '(')
                    {
                        lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                        lexer->mark_end(lexer);

                        return true;
                    }
                    else if (in_string == 0 && lexer->lookahead == '-') // Handle line comment if we're not in a string
                    {
                        advance(lexer);
                        lexer->result_symbol = LINE_COMMENT;
                        // Take everything until the line or the file ends
                        while (lexer->lookahead != '\n' && lexer->lookahead != '\0')
                        {
                            advance(lexer);
                        }
                        runback.clear();
                        lexer->mark_end(lexer);
                        return true;
                    }
                }
            }

            // Open section if the grammar lets us but only push to indent stack if we go further down in the stack
            if (valid_symbols[VIRTUAL_OPEN_SECTION])
            {
                if (indent_length > indent_length_stack.back())
                {
                    // lexer->mark_end(lexer); // We might want this, but this is changing error behavior as well
                    indent_length_stack.push_back(lexer->get_column(lexer));
                }
                lexer->result_symbol = VIRTUAL_OPEN_SECTION;
                return true;
            }
            else if (has_newline && !in_string)
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

            // Handle block comments if we're not in a string
            if (in_string == 0 && valid_symbols[BLOCK_COMMENT] && scan_comment(lexer))
            {
                lexer->mark_end(lexer);
                lexer->result_symbol = BLOCK_COMMENT;
                return true;
            }

            // Handle string quotes for multiline and normal strings
            if (in_string == 0 && (valid_symbols[OPEN_QUOTE] || valid_symbols[OPEN_QUOTE_MULTILINE]))
            {
                return scan_quote(lexer, OPEN_QUOTE, OPEN_QUOTE_MULTILINE, false);
            }
            if (in_string != 0 && (valid_symbols[CLOSE_QUOTE] || valid_symbols[CLOSE_QUOTE_MULTILINE]))
            {
                return scan_quote(lexer, CLOSE_QUOTE, CLOSE_QUOTE_MULTILINE, true);
            }

            if (in_string == 0 && valid_symbols[GLSL_CONTENT])
            {
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
        vector<uint16_t> indent_length_stack;
        // Stack of 0 - for possible VIRTUAL_END_DECL or 1 - for possible VIRTUAL_END_SECTION
        vector<uint8_t> runback;
        // 0 - Not in a string | 1 - in a normal string | 2 - in a multiline string
        uint8_t in_string = 0;
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
