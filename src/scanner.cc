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

struct Scanner
{
    Scanner() {}

    unsigned serialize(char *buffer)
    {
        size_t i = 0;

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
        indent_length_stack.clear();
        indent_length_stack.push_back(0);

        if (length > 0)
        {
            size_t i = 0;

            for (; i < length; i++)
            {
                indent_length_stack.push_back(buffer[i]);
            }
            i++;
            indent_length = buffer[i];
            i++;
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
            else if (valid_symbols[VIRTUAL_END_SECTION] && lexer->lookahead == ' ')
            {
                lexer->mark_end(lexer);
                skip(lexer);
                if (lexer->lookahead == 'i')
                {
                    skip(lexer);

                    if (lexer->lookahead == 'n')
                    {
                        lexer->result_symbol = VIRTUAL_END_SECTION;
                        return true;
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

        // hold this in a variable as it will change due to the pop
        uint32_t previous_line_length = indent_length_stack.back();

        if (valid_symbols[VIRTUAL_OPEN_SECTION])
        {
            indent_length_stack.push_back(previous_indent_length);
            lexer->result_symbol = VIRTUAL_OPEN_SECTION;
            return true;
        }

        else if (has_newline)
        {
            if ((indent_length == previous_line_length || indent_length == 0) && valid_symbols[VIRTUAL_END_DECL])
            {
                lexer->result_symbol = VIRTUAL_END_DECL;
                return true;
            }
            if (indent_length < previous_line_length && valid_symbols[VIRTUAL_END_SECTION])
            {
                indent_length_stack.pop_back();
                lexer->result_symbol = VIRTUAL_END_SECTION;
                return true;
            }
        }

        if (valid_symbols[MINUS_WITHOUT_TRAILING_WHITESPACE] && lexer->lookahead == '-')
        {
            skip(lexer);
            if (lexer->lookahead != ' ' &&
                lexer->lookahead != '0' &&
                lexer->lookahead != '1' &&
                lexer->lookahead != '2' &&
                lexer->lookahead != '3' &&
                lexer->lookahead != '4' &&
                lexer->lookahead != '5' &&
                lexer->lookahead != '6' &&
                lexer->lookahead != '7' &&
                lexer->lookahead != '8' &&
                lexer->lookahead != '9' &&
                lexer->lookahead != '-' &&
                lexer->lookahead != '>')
            {
                lexer->result_symbol = MINUS_WITHOUT_TRAILING_WHITESPACE;
                return true;
            }
        }

        return false;
    }

    uint32_t indent_length = 0;
    vector<uint16_t> indent_length_stack;
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