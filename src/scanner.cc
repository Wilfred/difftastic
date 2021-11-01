#include <tree_sitter/parser.h>
#include <vector>
#include <cassert>
#include <cstring>

namespace {

  using std::vector;
  using std::memcpy;

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
    POD_CONTENT,
  };

  struct Delimiter {

    int32_t get_end_delimiter() {
      return end_delimiter;
    }

    void set_end_delimiter(int32_t start_delimiter) {
      // round, angle, square, curly
      if (start_delimiter == '{') {
        end_delimiter = '}';
      }
      else {
        end_delimiter = start_delimiter;
      }

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
        if (lexer->lookahead == get_end_delimiter()) {
          lexer->result_symbol = END_DELIMITER;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        else {
          // oh boy! the interpolation
          if (lexer->lookahead == '$') {
            advance(lexer);
            if (lexer->lookahead != ' ') {
              advance(lexer);
              while(lexer->lookahead) {
                // hash ref access: $hashref->{key}
                if (lexer->lookahead == '-') {
                  advance(lexer);
                  if (lexer->lookahead == '>') {
                    advance(lexer);
                    if (lexer->lookahead == '{') {
                      while(lexer->lookahead) {
                        if (lexer->lookahead == '}') {
                          advance(lexer);
                          lexer->mark_end(lexer);
                          return false;
                        }
                        advance(lexer);
                      }
                    }
                  }
                }
                // hash access: $hash{someKey}
                else if (lexer->lookahead == '{') {
                  while(lexer->lookahead) {
                    if (lexer->lookahead == '}') {
                      advance(lexer);
                      lexer->mark_end(lexer);
                      return false;
                    }
                    advance(lexer);
                  }
                }
                // scalar variable: $i_am_groot
                else if (lexer->lookahead == ' ') {
                  advance(lexer);
                  lexer->mark_end(lexer);
                  return false;
                }
                advance(lexer);
              }
            }
          }
          // escape sequences, only basic support as of now
          if (lexer->lookahead == '\\') {
            advance(lexer);
            // also, self end delimiter will be treated as string
            if (
              lexer->lookahead == 't' || lexer->lookahead == 'n' || lexer->lookahead == 'r' || lexer->lookahead == 'f' || lexer->lookahead == 'b' || lexer->lookahead == 'a' || lexer->lookahead == 'e'
            ) {
              advance(lexer);
              lexer->mark_end(lexer);
              return false;
            }
            else {
              // dont return, below logic will take care
            }
          }
          
          if (!lexer->lookahead) {
            lexer->mark_end(lexer);
            return false;
          }

          // handling nested delimiters qq { hello { from { the}}};
          if (lexer->lookahead == start_delimiter_char) {
            lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
            advance(lexer);
            return scan_nested_delimiters(lexer, valid_symbols);
          }

          lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
      }

      // if (valid_symbols[])

      if (valid_symbols[STRING_DOUBLE_QUOTED_CONTENT]) {
        if (lexer->lookahead == '"') {
          lexer->mark_end(lexer);
          advance(lexer);
          return false;
        }

        // oh boy! the interpolation
        if (lexer->lookahead == '$') {
          advance(lexer);
          if (lexer->lookahead != ' ') {
            advance(lexer);
            while(lexer->lookahead) {
              // hash ref access: $hashref->{key}
              if (lexer->lookahead == '-') {
                advance(lexer);
                if (lexer->lookahead == '>') {
                  advance(lexer);
                  if (lexer->lookahead == '{') {
                    while(lexer->lookahead) {
                      if (lexer->lookahead == '}') {
                        advance(lexer);
                        lexer->mark_end(lexer);
                        return false;
                      }
                      advance(lexer);
                    }
                  }
                }
              }
              // hash access: $hash{someKey}
              else if (lexer->lookahead == '{') {
                while(lexer->lookahead) {
                  if (lexer->lookahead == '}') {
                    advance(lexer);
                    lexer->mark_end(lexer);
                    return false;
                  }
                  advance(lexer);
                }
              }
              // scalar variable: $i_am_groot
              else if (lexer->lookahead == ' ') {
                advance(lexer);
                lexer->mark_end(lexer);
                return false;
              }
              // if we have come across a end of string
              else if (lexer->lookahead == '"') {
                advance(lexer);
                lexer->mark_end(lexer);
                return false;
              }
              advance(lexer);
            }
          }
        }
        // escape sequences, only basic support as of now
        if (lexer->lookahead == '\\') {
          advance(lexer);
          if (
            lexer->lookahead == 't' || lexer->lookahead == 'n' || lexer->lookahead == 'r' || lexer->lookahead == 'f' || lexer->lookahead == 'b' || lexer->lookahead == 'a' || lexer->lookahead == 'e'
            || lexer->lookahead == '"'
          ) {
            advance(lexer);
            lexer->mark_end(lexer);
            return false;
          }
          else {
            // dont return, below logic will take care
          }
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
          lexer->lookahead != ' '
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

    bool scan_nested_delimiters(TSLexer *lexer, const bool *valid_symbols) {
      while(lexer->lookahead) {
        if (lexer->lookahead == get_end_delimiter()) {
          lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        else if (lexer->lookahead == start_delimiter_char) {
          lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
          advance(lexer);
          scan_nested_delimiters(lexer, valid_symbols);
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
        end_delimiter_char = start_delimiter;
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

      lexer->result_symbol = token_type;
      advance(lexer);
      lexer->mark_end(lexer);

      return true;
    }

    // runs over spaces like a champ
    void run_over_spaces(TSLexer *lexer) {
      while (lexer->lookahead == ' ' || lexer->lookahead == '\t' || lexer->lookahead == '\r' || lexer->lookahead == '\n') {
        skip(lexer);
      }
    }

    int32_t start_delimiter_char;
    int32_t end_delimiter_char;
    int delimiter_cout = 0;
    bool reached;

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
