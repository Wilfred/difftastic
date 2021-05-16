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
      if (valid_symbols[START_DELIMITER]) {
        while (lexer->lookahead) {
          if (startd == '{') {
            lexer->mark_end(lexer);
            return false;
          }
          startd = lexer->lookahead;
          lexer->result_symbol = START_DELIMITER;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
      }
      
      if (valid_symbols[STRING_QQ_QUOTED_CONTENT]) {

        if (lexer->lookahead == '}') {
          lexer->result_symbol = END_DELIMITER;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }
        else {
          lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
          advance(lexer);
          lexer->mark_end(lexer);
          return true;
        }

        // lexer->mark_end(lexer);
        // return false;
      }


      if (valid_symbols[STRING_SINGLE_QUOTED_CONTENT]) {
        while (lexer->lookahead) {

          // end when you reach the final single quote '
          if (lexer->lookahead == '\'') {
            lexer->mark_end(lexer);
            return true;
          }
          else {
            lexer->result_symbol = STRING_SINGLE_QUOTED_CONTENT;

            // check for escaped single quote \'
            if (lexer->lookahead == '\\') {
              // lexer->mark_end(lexer);
              lexer->advance(lexer, false);

              if (lexer->lookahead == '\'') {
                lexer->advance(lexer, false);
              }
            }
          }

          lexer->advance(lexer, false);
        }

        lexer->mark_end(lexer);
        return false;
      }

      // if (valid_symbols[STRING_QQ_QUOTED_CONTENT]) {

      //   while (lexer->lookahead) {
      //     if (reached) {
      //       lexer->mark_end(lexer);
      //       return false;
      //     }
      //     if (lexer->lookahead == '}') {
      //       reached = true;
      //       lexer->mark_end(lexer);
      //       return true;
      //     }
      //     else {
      //       // if (lexer->lookahead == '\\') {
      //       //   lexer->mark_end(lexer);
      //       //   lexer->advance(lexer, false);

      //       //   // your escape characters
      //       //   if (lexer->lookahead == 'n') {
      //       //     lexer->advance(lexer, false);

      //       //     lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;
      //       //   }
      //       // }
      //       lexer->result_symbol = STRING_QQ_QUOTED_CONTENT;

      //       lexer->advance(lexer, false);
      //     }
      //   }
        
      //   lexer->mark_end(lexer);
      //   return false;
      // }
      
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
    }

    void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
    }

    int32_t startd;
    int32_t endd;
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
