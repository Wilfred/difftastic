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
    MINUS_WITHOUT_TRAILING_WHITESPACE
};

enum ClosingToken
{
    END_DECL = 1 << 0,
    END_SECTION = 1 << 1,
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

        vector<uint16_t>::iterator
            iter = indent_length_stack.begin() + 1,
            end = indent_length_stack.end();

        for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter)
        {
            buffer[i++] = *iter;
        }

        buffer[i++] = indent_length;

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
            for (; i < length; i++)
            {
                indent_length_stack.push_back(buffer[i]);
            }
            i++;
            indent_length = buffer[i];
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

    bool scan(TSLexer *lexer, const bool *valid_symbols)
    {
        if (!runback.empty() && runback.back() == END_DECL && valid_symbols[VIRTUAL_END_DECL])
        {
            runback.pop_back();
            lexer->result_symbol = VIRTUAL_END_DECL;
            return true;
        }
        if (!runback.empty() && runback.back() == END_SECTION && valid_symbols[VIRTUAL_END_SECTION])
        {
            runback.pop_back();
            lexer->result_symbol = VIRTUAL_END_SECTION;
            return true;
        }

        bool has_newline = false;
        uint32_t previous_indent_length = indent_length;

        for (;;)
        {
            if (lexer->lookahead == '\n')
            {
                has_newline = true;
                indent_length = 0;
                skip(lexer);
                for (;;)
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

            // else if (!has_let && lexer->lookahead == 'l')
            // {
            //     skip(lexer);
            //     if (lexer->lookahead == 'e')
            //     {
            //         skip(lexer);
            //         if (lexer->lookahead == 't')
            //         {
            //             skip(lexer);
            //             if (lexer->lookahead == ' ')
            //             {
            //                 has_let == true;
            //                 skip(lexer);
            //             }
            //         }
            //     }
            // }
            // else if (lexer->lookahead == ' ')
            // {
            //     indent_length++;
            //     skip(lexer);
            // }
            else if (lexer->lookahead == '\r')
            {
                indent_length = 0;
                has_newline = true;
                skip(lexer);
            }
            else if (lexer->lookahead == 0)
            {
                // if (valid_symbols[VIRTUAL_END_SECTION] && indent_length_stack.size() > 1)
                // {
                //     indent_length_stack.pop_back();
                //     lexer->result_symbol = VIRTUAL_END_SECTION;
                //     return true;
                // }

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

        if (valid_symbols[VIRTUAL_OPEN_SECTION])
        {
            if(indent_length != indent_length_stack.back())
            {
                indent_length_stack.push_back(indent_length);
            }
            lexer->result_symbol = VIRTUAL_OPEN_SECTION;
            return true;
        }

        else if (has_newline)
        {
            while (indent_length <= indent_length_stack.back())
            {
                if (indent_length == 0) // No idea why
                {
                    runback.push_back(END_DECL);
                    break;
                }
                else if (indent_length == indent_length_stack.back())
                {
                    runback.push_back(END_DECL);
                    break;
                }
                else if (indent_length < indent_length_stack.back())
                {
                    runback.push_back(END_SECTION);
                    indent_length_stack.pop_back();
                }
            }

            std::reverse(runback.begin(), runback.end());

            if (runback.back() == END_DECL && valid_symbols[VIRTUAL_END_DECL])
            {
                runback.pop_back();
                lexer->result_symbol = VIRTUAL_END_DECL;
                return true;
            }
            else if (runback.back() == END_SECTION && valid_symbols[VIRTUAL_END_SECTION])
            {
                runback.pop_back();
                lexer->result_symbol = VIRTUAL_END_SECTION;
                return true;
            }
        }

        if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] && lexer->lookahead == ' ')
        {
            skip(lexer);
            if (lexer->lookahead == '-')
            {
                skip(lexer);
                auto lookahead = lexer->lookahead;
                if (lookahead == 'a' ||
                    lookahead == 'b' ||
                    lookahead == 'c' ||
                    lookahead == 'd' ||
                    lookahead == 'e' ||
                    lookahead == 'f' ||
                    lookahead == 'g' ||
                    lookahead == 'h' ||
                    lookahead == 'i' ||
                    lookahead == 'j' ||
                    lookahead == 'k' ||
                    lookahead == 'l' ||
                    lookahead == 'm' ||
                    lookahead == 'n' ||
                    lookahead == 'o' ||
                    lookahead == 'p' ||
                    lookahead == 'q' ||
                    lookahead == 'r' ||
                    lookahead == 's' ||
                    lookahead == 't' ||
                    lookahead == 'u' ||
                    lookahead == 'v' ||
                    lookahead == 'w' ||
                    lookahead == 'x' ||
                    lookahead == 'y' ||
                    lookahead == 'z')
                {
                    lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                    return true;
                }
            }
        }
        else if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] && lexer->lookahead == '-')
        {
            skip(lexer);
            auto lookahead = lexer->lookahead;
            if (lookahead == 'a' ||
                lookahead == 'b' ||
                lookahead == 'c' ||
                lookahead == 'd' ||
                lookahead == 'e' ||
                lookahead == 'f' ||
                lookahead == 'g' ||
                lookahead == 'h' ||
                lookahead == 'i' ||
                lookahead == 'j' ||
                lookahead == 'k' ||
                lookahead == 'l' ||
                lookahead == 'm' ||
                lookahead == 'n' ||
                lookahead == 'o' ||
                lookahead == 'p' ||
                lookahead == 'q' ||
                lookahead == 'r' ||
                lookahead == 's' ||
                lookahead == 't' ||
                lookahead == 'u' ||
                lookahead == 'v' ||
                lookahead == 'w' ||
                lookahead == 'x' ||
                lookahead == 'y' ||
                lookahead == 'z')
            {
                lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                return true;
            }
        }

        if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ' ')
        {
            lexer->mark_end(lexer);
            skip(lexer);
            if (lexer->lookahead == 'i')
            {
                skip(lexer);

                if (lexer->lookahead == 'n')
                {
                    skip(lexer);
                    if (lexer->lookahead == ' ' || lexer->lookahead == '\r' || lexer->lookahead == '\n')
                    {
                        lexer->result_symbol = VIRTUAL_END_SECTION;
                        return true;
                    }
                }
            }
        }

        return false;
    }

    uint32_t indent_length = 0;
    vector<uint16_t> indent_length_stack;
    vector<ClosingToken> runback;
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
