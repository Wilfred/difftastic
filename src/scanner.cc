#include <tree_sitter/parser.h>
#include <cassert>
#include <cstring>
#include <queue>
#include <regex>
#include <vector>

namespace {

  using std::vector;
  using std::memcpy;
  using std::regex;

  enum TokenType {
    START_DELIMITER,
    END_DELIMITER,
    STRING_CONTENT,
    STRING_SINGLE_QUOTED_CONTENT,
    STRING_QQ_QUOTED_CONTENT,
    STRING_DOUBLE_QUOTED_CONTENT,
    START_DELIMITER_QW,
    ELEMENT_IN_QW,
    END_DELIMITER_QW,
    START_DELIMITER_REGEX,
    REGEX_PATTERN,
    END_DELIMITER_REGEX,
    START_DELIMITER_SEARCH_REPLACE,
    SEARCH_REPLACE_CONTENT,
    SEPARATOR_DELIMITER_SEARCH_REPLACE,
    END_DELIMITER_SEARCH_REPLACE,
    START_DELIMITER_TRANSLITERATION,
    TRANSLITERATION_CONTENT,
    SEPARATOR_DELIMITER_TRANSLITERATION,
    END_DELIMITER_TRANSLITERATION,
    IMAGINARY_HEREDOC_START,
    HEREDOC_START_IDENTIFIER,
    HEREDOC_CONTENT,
    HEREDOC_END_IDENTIFIER,
    POD_CONTENT,
  };

  struct Delimiter {

    int32_t get_end_delimiter() {
      return end_delimiter;
    }

    int32_t end_delimiter;
  };

  struct Scanner {
    Scanner() {
      // assert(sizeof(Delimiter) == sizeof(char));
      deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
      size_t no_of_bytes = 0;

      // size_t delimiter_count = delimiter_stack.size();
      // if (delimiter_count > UINT8_MAX) delimiter_count = UINT8_MAX;
      // buffer[no_of_bytes++] = delimiter_count;

      // if (delimiter_count > 0) {
      //   memcpy(&buffer[no_of_bytes], delimiter_stack.data(), delimiter_count);
      // }
      // no_of_bytes += delimiter_count;

      return no_of_bytes;
    }

    void deserialize(const char *buffer, unsigned length) {
      // delimiter_stack.clear();

      // if (length > 0) {
      //   size_t no_of_bytes = 0;

      //   size_t delimiter_count = (uint8_t)buffer[no_of_bytes++];
      //   delimiter_stack.resize(delimiter_count);
      //   if (delimiter_count > 0) {
      //     memcpy(delimiter_stack.data(), &buffer[no_of_bytes], delimiter_count);
      //   }
      //   no_of_bytes += delimiter_count;
      // }
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {
      // on ERROR, external scanner is called with all valid_symbols to be true.
      // so for our usecase we need this logic.
      // ref - https://github.com/tree-sitter/tree-sitter/issues/1128
      if (
        valid_symbols[START_DELIMITER]
        && valid_symbols[END_DELIMITER]
        && valid_symbols[STRING_CONTENT]
        && valid_symbols[STRING_SINGLE_QUOTED_CONTENT]
        && valid_symbols[STRING_QQ_QUOTED_CONTENT]
        && valid_symbols[STRING_DOUBLE_QUOTED_CONTENT]
        && valid_symbols[START_DELIMITER_QW]
        && valid_symbols[END_DELIMITER_QW]
        && valid_symbols[START_DELIMITER_REGEX]
        && valid_symbols[REGEX_PATTERN]
        && valid_symbols[END_DELIMITER_REGEX]
        && valid_symbols[START_DELIMITER_SEARCH_REPLACE]
        && valid_symbols[SEARCH_REPLACE_CONTENT]
        && valid_symbols[SEPARATOR_DELIMITER_SEARCH_REPLACE]
        && valid_symbols[END_DELIMITER_SEARCH_REPLACE]
        && valid_symbols[START_DELIMITER_TRANSLITERATION]
        && valid_symbols[TRANSLITERATION_CONTENT]
        && valid_symbols[SEPARATOR_DELIMITER_TRANSLITERATION]
        && valid_symbols[END_DELIMITER_TRANSLITERATION]
        && valid_symbols[IMAGINARY_HEREDOC_START]
        && valid_symbols[HEREDOC_START_IDENTIFIER]
        && valid_symbols[HEREDOC_CONTENT]
        && valid_symbols[HEREDOC_END_IDENTIFIER]
        && valid_symbols[POD_CONTENT]
      ) {
        return false;
      }

      if (valid_symbols[STRING_SINGLE_QUOTED_CONTENT]) {

        // end when you reach the final single quote '
        if (lexer->lookahead == '\'') {
          lexer->mark_end(lexer);
          advance(lexer);
          return false;
        }
        // check for escaped single quote \'
        else if (lexer->lookahead == '\\') {
          lexer->result_symbol = STRING_SINGLE_QUOTED_CONTENT;
          advance(lexer);

          if (lexer->lookahead == '\'') {
            advance(lexer);
          }
          lexer->mark_end(lexer);
          return true;
        }

        // some exit conditions
        if (!lexer->lookahead) {
          lexer->mark_end(lexer);
          return false;
        }

        lexer->result_symbol = STRING_SINGLE_QUOTED_CONTENT;
        advance(lexer);
        lexer->mark_end(lexer);

        return true;
      }
      
      // TODO: handle qqqSTRINGq; - this should throw error
      if (valid_symbols[START_DELIMITER]) {
        return parse_start_delimiter(lexer, START_DELIMITER);
      }
      
      if (valid_symbols[STRING_QQ_QUOTED_CONTENT]) {
        return parse_delimited_and_interpolated_content(lexer, STRING_QQ_QUOTED_CONTENT, END_DELIMITER);
      }

      if (valid_symbols[STRING_DOUBLE_QUOTED_CONTENT]) {
        if (lexer->lookahead == '"') {
          lexer->mark_end(lexer);
          advance(lexer);
          return false;
        }

        // oh boy! the interpolation
        if (lexer->lookahead == '$') {
          return handle_interpolation(lexer, STRING_DOUBLE_QUOTED_CONTENT);
        }
        // escape sequences, only basic support as of now
        if (lexer->lookahead == '\\') {
          return handle_escape_sequence(lexer, STRING_DOUBLE_QUOTED_CONTENT);
        }

        // some exit conditions
        if (!lexer->lookahead) {
          lexer->mark_end(lexer);
          return false;
        }

        lexer->result_symbol = STRING_DOUBLE_QUOTED_CONTENT;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }

      if (valid_symbols[START_DELIMITER_QW]) {
        return parse_start_delimiter(lexer, START_DELIMITER_QW);
      }

      if (valid_symbols[ELEMENT_IN_QW]) {
        run_over_spaces(lexer);

        if (lexer->lookahead == get_end_delimiter()) {
          lexer->result_symbol = END_DELIMITER_QW;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }

        // exit condition
        if (!lexer->lookahead) {
          lexer->mark_end(lexer);
          return false;
        }

        while (
          lexer->lookahead // exit condition
          && lexer->lookahead != ' '
          && lexer->lookahead != '\t'
          && lexer->lookahead != '\r'
          && lexer->lookahead != '\n'
          && lexer->lookahead != get_end_delimiter()
        ) {
          lexer->result_symbol = ELEMENT_IN_QW;
          advance(lexer);
        }

        lexer->mark_end(lexer);
        return true;
      }

      if (valid_symbols[START_DELIMITER_REGEX]) {
        return parse_start_delimiter(lexer, START_DELIMITER_REGEX);
      }
      if (valid_symbols[REGEX_PATTERN]) {
        return parse_delimited_and_interpolated_content(lexer, REGEX_PATTERN, END_DELIMITER_REGEX);
      }

      if (valid_symbols[START_DELIMITER_SEARCH_REPLACE]) {
        return parse_start_delimiter(lexer, START_DELIMITER_SEARCH_REPLACE);
      }

      if (valid_symbols[SEARCH_REPLACE_CONTENT]) {
        if (lexer->lookahead == get_end_delimiter()) {
          return process_separator_delimiter(lexer, SEPARATOR_DELIMITER_SEARCH_REPLACE, END_DELIMITER_SEARCH_REPLACE);
        }
        else {
          // oh boy! the interpolation
          if (lexer->lookahead == '$') {
            return handle_interpolation(lexer, SEARCH_REPLACE_CONTENT);
          }
          // escape sequences, only basic support as of now
          if (lexer->lookahead == '\\') {
            return handle_escape_sequence(lexer, SEARCH_REPLACE_CONTENT);
          }

          // some exit conditions
          if (!lexer->lookahead) {
            lexer->mark_end(lexer);
            return false;
          }

          // handling nested delimiters qq { hello { from { the}}};
          if (lexer->lookahead == start_delimiter_char) {
            lexer->result_symbol = SEARCH_REPLACE_CONTENT;
            advance(lexer);
            return scan_nested_delimiters(lexer, SEARCH_REPLACE_CONTENT);
          }

          lexer->result_symbol = SEARCH_REPLACE_CONTENT;
          advance(lexer);
          return true;
        }
      }

      if (valid_symbols[START_DELIMITER_TRANSLITERATION]) {
        return parse_start_delimiter(lexer, START_DELIMITER_TRANSLITERATION);
      }
      if (valid_symbols[TRANSLITERATION_CONTENT]) {
        if (lexer->lookahead == get_end_delimiter()) {
          return process_separator_delimiter(lexer, SEPARATOR_DELIMITER_TRANSLITERATION, END_DELIMITER_TRANSLITERATION);
        }

        // exit condition
        if (!lexer->lookahead) {
          lexer->mark_end(lexer);
          return false;
        }

        // escape sequence
        if (lexer->lookahead == '\\') {
          lexer->result_symbol = TRANSLITERATION_CONTENT;
          advance(lexer);
          // self end delimiter
          if (lexer->lookahead == get_end_delimiter()) {
            advance(lexer);
          }

          lexer->mark_end(lexer);
          return true;
        }

        // handling nested delimiters qq { hello { from { the}}};
        if (lexer->lookahead == start_delimiter_char) {
          lexer->result_symbol = TRANSLITERATION_CONTENT;
          advance(lexer);
          return scan_nested_delimiters(lexer, TRANSLITERATION_CONTENT);
        }

        lexer->result_symbol = TRANSLITERATION_CONTENT;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }

      if (valid_symbols[HEREDOC_START_IDENTIFIER]) {
        // for, <<   "EOF"
        run_over_spaces(lexer);

        // for, <<EOF
        // heredoc_is_raw = lexer->lookahead == '\'';

        lexer->result_symbol = HEREDOC_START_IDENTIFIER;

        std::string delimiter;
        bool allows_interpolation;
        bool found_delimiter = advance_word(lexer, delimiter, allows_interpolation);
        if (found_delimiter) {
          heredoc_identifier_queue.push(delimiter);
          heredoc_allows_interpolation.push(allows_interpolation);

          started_heredoc = true;
        }

        return found_delimiter;
      }

      if (
        (valid_symbols[HEREDOC_CONTENT] || valid_symbols[IMAGINARY_HEREDOC_START])
        && !heredoc_identifier_queue.empty()
      ) {
        // another exit condition
        if (!lexer->lookahead && !started_heredoc_body) {
          return false;
        }

        if (lexer->lookahead == '\n' && !started_heredoc_body) {
          started_heredoc_body = true;

          lexer->result_symbol = IMAGINARY_HEREDOC_START;
          // advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }

        if (started_heredoc_body) {
          // while(lexer->lookahead) {
            switch (lexer->lookahead) {
              case '\\': {
                if (heredoc_allows_interpolation.front()) {
                  return handle_escape_sequence(lexer, HEREDOC_CONTENT);
                }
              }

              case '$': {
                if (heredoc_allows_interpolation.front()) {
                  return false;
                }
              }

              case '\n': {
                skip(lexer);
                lexer->mark_end(lexer);
                // if (heredoc_allows_indent) {
                //   while (iswspace(lexer->lookahead)) {
                //     advance(lexer);
                //   }
                // }
                return exit_if_heredoc_end_delimiter(lexer);
              }

              // exit condition
              case NULL: {
                started_heredoc_body = false;
                lexer->mark_end(lexer);
                return false;
              }

              default: {
                lexer->result_symbol = HEREDOC_CONTENT;
                advance(lexer);
                return true;
              }
            }
          // }
        }
        else {
          return false;
        }
      }

      if (valid_symbols[POD_CONTENT]) {

        while (lexer->lookahead) {
          lexer->result_symbol = POD_CONTENT;

          // if it is =cut that marks the end of pod content
          if (lexer->lookahead == '=') {
            lexer->advance(lexer, false);
            if (lexer->lookahead == 'c') {
              lexer->advance(lexer, false);
                if (lexer->lookahead == 'u') {
                lexer->advance(lexer, false);
                  if (lexer->lookahead == 't') {
                    lexer->advance(lexer, false);
                    lexer->mark_end(lexer);
                    return true;
                  }
              }
            }
          }
          else {
            lexer->advance(lexer, false);
          }
        }

        // or if it end of the file also, mark the end of pod content
        lexer->mark_end(lexer);
        return true;
      }

      return false;
    }

    bool parse_delimited_and_interpolated_content(TSLexer *lexer, TokenType token_type, TokenType ending_delimiter) {
      if (lexer->lookahead == get_end_delimiter()) {
        lexer->result_symbol = ending_delimiter;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
      else {
        // oh boy! the interpolation
        if (lexer->lookahead == '$') {
          return handle_interpolation(lexer, token_type);
        }
        // escape sequences, only basic support as of now
        if (lexer->lookahead == '\\') {
          return handle_escape_sequence(lexer, token_type);
        }
        
        if (!lexer->lookahead) {
          lexer->mark_end(lexer);
          return false;
        }

        // handling nested delimiters qq { hello { from { the}}};
        if (lexer->lookahead == start_delimiter_char) {
          lexer->result_symbol = token_type;
          advance(lexer);
          return scan_nested_delimiters(lexer, token_type);
        }

        lexer->result_symbol = token_type;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }

      // shouldn't reach here
      return false;
    }

    bool scan_nested_delimiters(TSLexer *lexer, TokenType token_type) {
      while(lexer->lookahead) {
        if (lexer->lookahead == get_end_delimiter()) {
          lexer->result_symbol = token_type;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        else if (lexer->lookahead == start_delimiter_char) {
          lexer->result_symbol = token_type;
          advance(lexer);
          scan_nested_delimiters(lexer, token_type);
        }
        else if (lexer->lookahead == '\\') {
          advance(lexer);
          advance(lexer);
        }
        else {
          advance(lexer);
        }
      }
      lexer->mark_end(lexer);
      return false;
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    void set_end_delimiter(int32_t start_delimiter) {
      // round, angle, square, curly
      is_delimiter_enclosing = true;
      if (start_delimiter == '(') {
        end_delimiter_char = ')';
      }
      else if (start_delimiter == '<') {
        end_delimiter_char = '>';
      }
      else if (start_delimiter == '[') {
        end_delimiter_char = ']';
      }
      else if (start_delimiter == '{') {
        end_delimiter_char = '}';
      }
      else {
        is_delimiter_enclosing = false;
        end_delimiter_char = start_delimiter;
      }
    }

    bool process_separator_delimiter(TSLexer *lexer, TokenType separator_token, TokenType end_token) {
      if (is_separator_delimiter_parsed) {
        lexer->result_symbol = end_token;
        advance(lexer);
        lexer->mark_end(lexer);
        return true;
      }
      else {
        lexer->result_symbol = separator_token;
        advance(lexer);
        lexer->mark_end(lexer);

        // if delimiter is {}, (), <>, []
        if (is_delimiter_enclosing) {
          run_over_spaces(lexer);

          if (lexer->lookahead == start_delimiter_char) {
            lexer->result_symbol = separator_token;
            advance(lexer);
            lexer->mark_end(lexer);

            is_separator_delimiter_parsed = true;

            return true;
          }

          return false;
        }
        else {
          is_separator_delimiter_parsed = true;

          return true;
        }

        return false;
      }
    }

    int32_t get_end_delimiter() {
      return end_delimiter_char;
    }

    // Give a token type, parses the start delimiter,
    // and keeps track of it in memory.
    bool parse_start_delimiter(TSLexer *lexer, TokenType token_type) {
      run_over_spaces(lexer);

      start_delimiter_char = lexer->lookahead;
      set_end_delimiter(start_delimiter_char);

      // for substitute and tr/y usecase
      is_separator_delimiter_parsed = false;

      lexer->result_symbol = token_type;
      advance(lexer);
      lexer->mark_end(lexer);

      return true;
    }

    // runs over spaces like a champ
    void run_over_spaces(TSLexer *lexer) {
      while (iswspace(lexer->lookahead)) skip(lexer);
    }

    // runs with the spaces using advance
    void run_with_spaces(TSLexer *lexer) {
      while (iswspace(lexer->lookahead)) advance(lexer);
    }

    bool handle_interpolation(TSLexer *lexer, TokenType surrounding_token) {
      if (lexer->lookahead == '$') {

        // allow $ to be last character in a regex
        if (surrounding_token == SEARCH_REPLACE_CONTENT || surrounding_token == REGEX_PATTERN) {
          advance(lexer);
          run_with_spaces(lexer);
          if (lexer->lookahead == get_end_delimiter()) {
            lexer->result_symbol = surrounding_token;
            lexer->mark_end(lexer);
            return true;
          }
        }
        return false;
      }

      return false;
    }

    bool handle_escape_sequence(TSLexer *lexer, TokenType surrounding_token) {
      // escape sequences, only basic support as of now
      if (lexer->lookahead == '\\') {
        advance(lexer);
        // also, self end delimiter will be treated as string
        if (
          lexer->lookahead == 't' || lexer->lookahead == 'n' || lexer->lookahead == 'r' || lexer->lookahead == 'f' || lexer->lookahead == 'b' || lexer->lookahead == 'a' || lexer->lookahead == 'e'
        ) {
          // advance(lexer);
          lexer->mark_end(lexer);
          return false;
        }
        else {
          lexer->result_symbol = surrounding_token;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        return false;
      }
      return false;
    }

    bool handle_nested_delimiters() {
      return true;
    }

    /**
   * Consume a "word" in POSIX parlance, and returns it unquoted.
   *
   * This is an approximate implementation that doesn't deal with any
   * POSIX-mandated substitution, and assumes the default value for
   * IFS.
   */
  bool advance_word(TSLexer *lexer, std::string& unquoted_word, bool& allows_interpolation) {
    bool empty = true;
    allows_interpolation = true;

    int32_t quote = 0;
    if (
      lexer->lookahead == '\''
      || lexer->lookahead == '"'
      || lexer->lookahead == '`'
    ) {
      allows_interpolation = (lexer->lookahead == '\'') ? false : true;
      quote = lexer->lookahead;
      advance(lexer);
    }

    // <<\EOF
    if (lexer->lookahead == '\\') {
      allows_interpolation = false;
      advance(lexer);
    }

    regex identifier_regex("[a-zA-Z0-9]");
    while (
      lexer->lookahead 
      && std::regex_match(std::string(1, static_cast<char>(lexer->lookahead)), identifier_regex)
      && ! (quote ? lexer->lookahead == quote : iswspace(lexer->lookahead))
    ) {
      // TODO: check this below condition
      if (lexer->lookahead == '\\') {
        advance(lexer);
        if (! lexer->lookahead) return false;
      }
      empty = false;
      unquoted_word += lexer->lookahead;
      advance(lexer);
    }

    if (quote && lexer->lookahead == quote) {
      advance(lexer);
    }

    return ! empty;
  }

  bool exit_if_heredoc_end_delimiter(TSLexer *lexer) {
    std::string word;
    // lexer->result_symbol = HEREDOC_END_IDENTIFIER;
    while (!iswspace(lexer->lookahead)) {
      // printf("string here - %c", lexer->lookahead);
      word += lexer->lookahead;
      advance(lexer);

      if (!lexer->lookahead) {
        break;
      }
    }

    if (word == heredoc_identifier_queue.front()) {
    // if (1) {
      lexer->result_symbol = HEREDOC_END_IDENTIFIER;
      lexer->mark_end(lexer);

      // unset stuffs
      started_heredoc = false;
      started_heredoc_body = false;
      heredoc_identifier_queue.pop();
      heredoc_allows_interpolation.pop();
      return true;
    }
    else {
      lexer->result_symbol = HEREDOC_CONTENT;
      return true;
    }
  }

    int32_t start_delimiter_char;
    int32_t end_delimiter_char;
    bool is_separator_delimiter_parsed;
    bool is_delimiter_enclosing; // is the delimiter {}, <> and same character not //, !!
    int delimiter_cout = 0;
    bool reached;

    // heredoc
    bool started_heredoc = false;
    bool started_heredoc_body = false;
    std::queue<std::string> heredoc_identifier_queue;
    std::queue<bool> heredoc_allows_interpolation;
    std::queue<bool> heredoc_allows_indent;

  };
  
}

extern "C" {
  void * tree_sitter_perl_external_scanner_create() {
    return new Scanner();
  }

  void tree_sitter_perl_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
  }

  unsigned tree_sitter_perl_external_scanner_serialize(
    void *payload,
    char *buffer
  ) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
  }

  void tree_sitter_perl_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
  ) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
  }

  bool tree_sitter_perl_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
  ) {

    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
  }
}
