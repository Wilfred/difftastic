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
    VIRTUAL_END_SECTION
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
        }
    }

    bool scan_virtual_end_decl(TSLexer *lexer)
    {
        lexer->advance(lexer, false);
        lexer->result_symbol = VIRTUAL_END_DECL;
        return true;
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
        uint32_t indent_length = 0;
        for (;;)
        {
            if (lexer->lookahead == '\n')
            {
                has_newline = true;
                indent_length = 0;
                skip(lexer);
            }
            else if (lexer->lookahead == ' ')
            {
                indent_length++;
                skip(lexer);
            }
            else if (lexer->lookahead == '\r')
            {
                indent_length = 0;
                skip(lexer);
            }
            else if (lexer->lookahead == 0)
            {
                if (valid_symbols[VIRTUAL_END_SECTION] && indent_length_stack.size() > 1)
                {
                    indent_length_stack.pop_back();
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

        if (has_newline)
        {
            // hold this in a variable as it will change due to the pop
            uint32_t previous_line_length = indent_length_stack.back();
            if (indent_length > previous_line_length)
            {
                indent_length_stack.push_back(indent_length);
            }
            else if (indent_length < previous_line_length)
            {
                indent_length_stack.pop_back();
            }

            if (valid_symbols[VIRTUAL_OPEN_SECTION])
            {
                lexer->result_symbol = VIRTUAL_OPEN_SECTION;
                return true;
            }

            if (valid_symbols[VIRTUAL_END_SECTION])
            {
                lexer->result_symbol = VIRTUAL_END_SECTION;
                return true;
            }

            if (valid_symbols[VIRTUAL_END_DECL])
            {
                if (indent_length < previous_line_length)
                {

                    lexer->result_symbol = VIRTUAL_END_DECL;
                    return true;
                }

                if (indent_length == previous_line_length)
                {
                    lexer->result_symbol = VIRTUAL_END_DECL;
                    return true;
                }
            }
        }

        return false;
    }

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