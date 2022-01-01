#include "tree_sitter/parser.h"
#include <cassert>
#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

// short circuit
#define SHORT_SCANNER if (res.finished) return res;
#define PEEK state.lexer->lookahead
#define S_ADVANCE state.lexer->advance(state.lexer, false)
#define SYM(s) (state.symbols[s])

using namespace std;

// --------------------------------------------------------------------------------------------------------
// Utilities
// --------------------------------------------------------------------------------------------------------

/**
 * Print input and result information.
 */
static const bool debug = false;

/**
 * Print the upcoming token after parsing finished.
 * Note: May change parser behaviour.
 */
static const bool debug_next_token = false;

/**
 * Print to stderr if the `debug` flag is `true`.
 */
struct Log {
  template<class A> void operator()(A msg) { if (debug) cerr << msg << endl; }
} logger;

struct Endl {} nl;

template<class A> Log & operator<<(Log & l, const A & a) {
  if (debug) cerr << a;
  return l;
}

Log & operator<<(Log & l, Endl) {
  if (debug) cerr << endl;
  return l;
}

template<class A, class B> A fst(pair<A, B> p) { return p.first; }

// --------------------------------------------------------------------------------------------------------
// Symbols
// --------------------------------------------------------------------------------------------------------

namespace syms {

/**
 * This enum is mapped to the `externals` list in the grammar according to how they are ordered (the names are
 * abitrary).
 *
 * When the `scan` function is called, the parameter `syms` contains a bool for each enum attribute indicating whether
 * the parse tree at the current position can accept the corresponding symbol.
 *
 * The attribute `fail` is not part of the parse tree, it is used to indicate that no matching symbol was found.
 *
 * The meanings are:
 *   - semicolon: An implicit end of a decl or statement, a newline in place of a semicolon
 *   - start: Start an implicit new layout after `where`, `do`, `of` or `in`, in place of an opening brace
 *   - end: End an implicit layout, in place of a closing brace
 *   - dot: For qualified modules `Data.List.null`, which have to be disambiguated from the `(.)` operator based on
 *     surrounding whitespace.
 *   - where: Parse an inline `where` token. This is necessary because `where` tokens can end layouts and it's necesary
 *     to know whether it is valid at that position, which can mean that it belongs to the last statement of the layout
 *   - splice: A TH splice starting with a `$`, to disambiguate from the operator
 *   - varsym: A symbolic operator
 *   - consym: A symbolic constructor
 *   - tyconsym: A symbolic type operator
 *   - comment: A line or block comment, because they interfere with operators, especially in QQs
 *   - cpp: A preprocessor directive. Needs to push and pop indent stacks
 *   - comma: Needed to terminate inline layouts like `of`, `do`
 *   - qq_start: Disambiguate the opening oxford bracket from list comprehension
 *   - qq_bar: Disambiguate the vertical bar `|` after the quasiquoter from symbolic operators, which may be a problem
 *     when the quasiquote body starts with an operator character.
 *   - qq_body: Prevent extras, like comments, from breaking quasiquotes
 *   - strict: Disambiguate strictness annotation `!` from symbolic operators
 *   - unboxed_tuple_close: Disambiguate the closing parens for unboxed tuples `#)` from symbolic operators
 *   - bar: The vertical bar `|`, used for guards and list comprehension
 *   - in: Closes the layout of a `let` and consumes the token `in`
 *   - indent: Used as a dummy symbol for initialization; uses newline in the grammar to ensure the scanner is called
 *     for each token
 *   - empty: The empty file
 *   - fail: special indicator of failure
 */
enum Sym {
  semicolon,
  start,
  end,
  dot,
  where,
  splice,
  varsym,
  consym,
  tyconsym,
  comment,
  cpp,
  comma,
  qq_start,
  qq_bar,
  qq_body,
  strict,
  unboxed_tuple_close,
  bar,
  in,
  indent,
  empty,
  fail,
};

static string names[] = {
  "semicolon",
  "start",
  "end",
  "dot",
  "where",
  "splice",
  "varsym",
  "consym",
  "tyconsym",
  "comment",
  "cpp",
  "comma",
  "qq_start",
  "qq_bar",
  "qq_body",
  "strict",
  "unboxed_tuple_close",
  "bar",
  "in",
  "indent",
  "empty",
};

static const int names_size = sizeof(names) / sizeof(names[0]);

static string name(Sym t) { return t < names_size ? names[t] : "unknown"; }

/**
 * The parser appears to call `scan` with all symbols declared as valid directly after it encountered an error, so
 * this function is used to detect them.
 */
static bool all(const bool *syms) { return std::all_of(syms, syms + empty, [](bool a) { return a; }); }

/**
 * Append a symbol's string representation to the string `s` if it is valid.
 */
static void add(string & s, const bool *syms, Sym t) {
  if (syms[t]) {
    if (!s.empty()) s += ",";
    s += name(t);
  }
}

/**
 * Produce a comma-separated string of valid symbols.
 */
static string valid(const bool *syms) {
  if (syms::all(syms)) return "all";
  string result = "";
  for (Sym i = semicolon; i <= semicolon + empty; i = Sym(i + 1)) add(result, syms, i);
  return '"' + result + '"';
}

}

using syms::Sym;

// --------------------------------------------------------------------------------------------------------
// State
// --------------------------------------------------------------------------------------------------------

/**
 * This structure contains the external and internal state.
 *
 * The parser provides the lexer interface and the list of valid symbols.
 *
 * The internal state consists of a stack of indentation widths that is manipulated whenever a layout is started or
 * terminated.
 */
struct State {
  TSLexer *lexer;
  const bool *symbols;
  vector<uint16_t> & indents;
  int marked;
  string marked_by;

  State(TSLexer *l, const bool *vs, vector<uint16_t> & is):
    lexer(l),
    symbols(vs),
    indents(is),
    marked(-1),
    marked_by("")
  {}
};

static const string format_indents(State & state) {
  if (state.indents.empty()) return "empty";
  string s;
  for (auto i : state.indents) {
    if (!s.empty()) s += "-";
    s += std::to_string(i);
  }
  return s;
}

ostream & operator<<(ostream & out, State & state) {
  return out << "State { syms = " << syms::valid(state.symbols) <<
    ", indents = " << format_indents(state) <<
    " }";
}

/**
 * These functions provide the basic interface to the lexer.
 * They are not defined as members for easier composition.
 */
namespace state {

static inline bool eof(State & state) { return state.lexer->eof(state.lexer); }

/**
 * The parser's position in the current line.
 */
static inline uint32_t column(State & state) {
  return eof(state) ? 0 : state.lexer->get_column(state.lexer);
}

/**
 * Move the parser position one character to the right, treating the consumed character as whitespace.
 */
static inline void skip(State & state) { state.lexer->advance(state.lexer, true); }

/**
 * Instruct the lexer that the current position is the end of the potentially detected symbol, causing the next run to
 * be started after this character in the success case.
 *
 * This is useful if the validity of the detected symbol depends on what follows, e.g. in the case of a layout end
 * before a `where` token.
 */
static inline void mark(string marked_by, State &state) {
  if (debug) {
    state.marked = state::column(state);
    state.marked_by = marked_by;
  }
  state.lexer->mark_end(state.lexer);
}

}


// --------------------------------------------------------------------------------------------------------
// Condition
// --------------------------------------------------------------------------------------------------------

/**
 * The set of conditions used in the parser implementation.
 */
namespace cond {

static bool varid_start_char(const uint32_t c) { return c == '_' || iswlower(c); }

static bool varid_char(const uint32_t c) { 
  switch (c) {
    case '_':
    case '\'':
      return true;
    default:
      // TODO(414owen) is haskell C_LOCALE sensitive?
      return iswalnum(c);
  }
}

static bool quoter_char(const uint32_t c) { return varid_char(c) || c == '.'; };

static bool seq(const string &s, State &state) {
  for (auto &c : s) {
    uint32_t c2 = PEEK;
    if (c != c2) return false;
    S_ADVANCE;
  }
  return true;
}

static void consume_until(string target, State &state) {
  assert(!target.empty());
  uint32_t first = target[0];
  while (PEEK != 0 && !seq(target, state)) {
    while (PEEK != 0 && PEEK != first) S_ADVANCE;
    // TODO(414owen): This mimics the combinator's behaviour, but it seems a bit silly.
    // Why mark where the first char matched? Let's just not do this check.
    if (first == PEEK) {
      string mark_target = "consume_until " + target;
      state::mark(mark_target, state);
    }
  }
}

static u32string read_string(bool (*cond)(uint32_t), State &state) {
  u32string s;
  uint32_t c = PEEK;
  while (cond(c)) {
    s += static_cast<uint32_t>(c);
    S_ADVANCE;
    c = PEEK;
  }
  return s;
}

#define WS_CASES \
  case ' ': \
  case '\f': \
  case '\n': \
  case '\r': \
  case '\t': \
  case '\v'

/**
 * Require that the next character is whitespace (space or newline) without advancing the parser.
 */
static inline bool isws(uint32_t c) {
  switch (c) {
    WS_CASES: return true;
    default: return false;
  }
}

/**
 * A token like a varsym can be terminated by whitespace of brackets.
 */
static bool token_end(uint32_t c) {
  switch (c) {
    WS_CASES:
    case 0:
    case '(':
    case ')':
    case '[':
    case ']':
      return true;
    default:
      return false;
  }
}

/**
 * Require that the argument string follows the current position and is followed by whitespace.
 * See `seq`
 */
static bool token(const string & s, State &state) { 
  return seq(s, state) && token_end(PEEK);
}

/**
 * Require that the stack of layout indentations is not empty.
 * This is mostly used for safety.
 */
static inline bool indent_exists(State & state) { return !state.indents.empty(); };

/**
 * Require that the current line's indent is greater or equal than the containing layout's, so the current layout is
 * continued.
 */
static bool keep_layout(uint16_t indent, State &state) {
  return indent_exists(state) && indent >= state.indents.back();
}

/**
 * Require that the current line's indent is equal to the containing layout's, so the line may start a new `decl`.
 */
static bool same_indent(uint32_t indent, State &state) { return indent_exists(state) && indent == state.indents.back(); }

/**
 * Require that the current line's indent is smaller than the containing layout's, so the layout may be ended.
 */
static bool smaller_indent(uint32_t indent, State &state) {
  return indent_exists(state) && indent < state.indents.back();
}

static bool indent_lesseq(uint32_t indent, State &state) { return indent_exists(state) && indent <= state.indents.back(); }

/**
 * Composite condition examining whether the current layout can be terminated if the line after the position where the
 * scan started begins with a `where`.
 *
 * This is needed because `where` can appear on the same indent as, for example, a `do` statement in a `decl`, while
 * being part of the latter and therefore having to end the `do`'s layout before parsing the `where`.
 *
 * This does only check whether the line begins with a `w`, the entire `where` is consumed by the calling parser below.
 */
static bool is_newline_where(uint32_t indent, State &state) {
  return keep_layout(indent, state)
    && (SYM(Sym::semicolon) || SYM(Sym::end))
    && !SYM(Sym::where) 
    && PEEK == 'w';
}

#define NEWLINE_CASES \
  case '\n': \
  case '\r': \
  case '\f'

static bool newline(uint32_t c) {
  switch (c) {
    NEWLINE_CASES:
      return true;
    default:
      return false;
  }
}

/**
 * Require that the state has not been initialized after parsing has started.
 *
 * This is necessary to handle a nonexistent `module` declaration.
 */
static bool uninitialized(State & state) { return !indent_exists(state); }

static bool column(uint32_t col, State &state) {
  return state::column(state) == col;
}

/**
 * Require that the parser determined an error in the previous step (see `syms::all`).
 */
static bool after_error(State & state) { return syms::all(state.symbols); }

#define SYMBOLICS_WITHOUT_BAR \
    case '!': \
    case '#': \
    case '$': \
    case '%': \
    case '&': \
    case '*': \
    case '+': \
    case '.': \
    case '/': \
    case '<': \
    case '>': \
    case '?': \
    case '^': \
    case ':': \
    case '=': \
    case '-': \
    case '~': \
    case '@': \
    case '\\'

#define SYMBOLIC_CASES \
    SYMBOLICS_WITHOUT_BAR: \
    case '|'

static bool symbolic(uint32_t c) {
  switch (c) {
    SYMBOLIC_CASES:
      return true;
    default:
      return false;
  }
}

static bool valid_first_varsym(uint32_t c) {
  return c != ':' && symbolic(c);
}

/**
 * Test for reserved operators of two characters.
 */
static bool valid_symop_two_chars(uint32_t first_char, uint32_t second_char) {
  switch (first_char) {
    case '-':
      return second_char != '-' && second_char != '>';
    case '=':
      return second_char != '>';
    case '<':
      return second_char != '-';
    case '.':
      return second_char != '.';
    case ':':
      return second_char != ':';
    default:
      return true;
  }
}

static bool valid_splice(State &state) {
  return cond::varid_start_char(PEEK) || PEEK == '(';
}

}

namespace symbolic {

enum Symbolic: uint16_t {
  con,
  op,
  splice,
  strict,
  star,
  tilde,
  implicit,
  modifier,
  minus,
  unboxed_tuple_close,
  bar,
  comment,
  invalid,
};

static bool success(Symbolic type) { return type == Symbolic::con || type == Symbolic::op; }

static Symbolic con_or_var(uint32_t c) { return c == ':' ? Symbolic::con : Symbolic::op; }

static bool single(uint32_t c) {
  switch (c) {
    case '!':
    case '#':
    case '%':
    case '&':
    case '*':
    case '+':
    case '/':
    case '<':
    case '>':
    case '?':
    case '^':
    case '.':
    case '$':
      return true;
    default:
      return false;
  }
}

/**
 * Symbolic operators that are eligible to close a layout when they are on a newline with less/eq indent.
 *
 * Very crude heuristic. Layouts bad.
 */
static bool expression_op(Symbolic type) {
  switch (type) {
    case Symbolic::op:
    case Symbolic::con:
    case Symbolic::star:
      return true;
    default:
      return false;
  }
}

/**
 * Check all conditions for symbolic expression operators and return a variant of the enum `Symbolic`.
 *
 *  - The `single` predicate is used for single-character symops
 *  - does not match a reserved operator
 *  - is not a comment
 *
 * Even if one of those conditions is unmet, it might still be parsed as a varsym, e.g. if a strictness annotation is
 * not valid at the current position.
 *
 * This only explicitly excludes `(!)` from being strictness; It could test for `cond::varid` plus opening
 * parens/bracket, but strictness is only valid in patterns and that makes it ambiguous anyway.
 * Needs something better, but seems unlikely to be deterministic.
 *
 * Hashes followed by a varid start character `#foo` are labels.
 */
static Symbolic symop(u32string s, State &state) {
  if (s.empty()) return Symbolic::invalid;
  uint32_t c = s[0];
  if (s.size() == 1) {
    if (c == '!' && !(cond::isws(PEEK) || PEEK == ')')) return Symbolic::strict;
    if (c == '#' && PEEK == ')') return Symbolic::unboxed_tuple_close;
    if (c == '#' && cond::varid_start_char(PEEK)) return Symbolic::invalid;
    if (c == '$' && cond::valid_splice(state)) return Symbolic::splice;
    if (c == '?' && cond::varid_start_char(PEEK)) return Symbolic::implicit;
    if (c == '%' && !(cond::isws(PEEK) || PEEK == ')')) return Symbolic::modifier;
    if (c == '|') return Symbolic::bar;
    switch (c) {
      case '*':
        return Symbolic::star;
      case '~':
        return Symbolic::tilde;
      case '-':
        return Symbolic::minus;
      case '=':
      case '@':
      case '\\':
        return Symbolic::invalid;
      default: return con_or_var(c);
    }
  } else {
    bool is_comment = true;
    for (const uint32_t &c : s) { is_comment &= c == '-'; }
    if (is_comment) return Symbolic::comment;
    if (s.size() == 2) {
      if (s[0] == '$' && s[1] == '$' && cond::valid_splice(state)) return Symbolic::splice;
      if (!cond::valid_symop_two_chars(s[0], s[1])) return Symbolic::invalid;
    }
  }
  return con_or_var(c);
}

}

using symbolic::Symbolic;

// --------------------------------------------------------------------------------------------------------
// Result
// --------------------------------------------------------------------------------------------------------

/**
 * Returned by a parser, indicating whether to continue with the next parser (`finished`) which symbol to select when
 * successful (`sym`).
 *
 * Whether parsing was successful is indicated by which symbol is selected – `Sym::fail` signals failure.
 */
struct Result {
  Sym sym;
  bool finished;
  Result(Sym s, bool f): sym(s), finished(f) {}
};

template<class A> ostream & operator<<(ostream & out, const Result & res) {
  out << "Result { finished = " << res.finished;
  if (res.finished) out << ", " << "result = " << syms::name(res.sym);
  return out << " }";
}

/**
 * Constructors for the continue, failure and success results.
 */
namespace result {

static Result cont = Result(Sym::fail, false);
static Result finish(Sym t) { return Result(t, true); }
static Result fail = finish(Sym::fail);

}


// --------------------------------------------------------------------------------------------------------
// Parser
// --------------------------------------------------------------------------------------------------------

namespace parser {

typedef Result (*NewParser)(State&);

/**
 * Parser that terminates the execution with the successful detection of the given symbol.
 */
static Result finish(const Sym s, string desc) {
  logger << "finish: " << desc << nl;
  return result::finish(s);
}

/**
 * Parser that terminates the execution with the successful detection of the given symbol, but only if it is expected.
 */
static inline Result finish_if_valid(const Sym s, string desc, State &state) {
  return SYM(s) ? finish(s, desc) : result::cont;
}

/**
 * Add one level of indentation to the stack, caused by starting a layout.
 */
static void push(uint16_t ind, State & state) {
  logger << "push: " << ind << nl;
  state.indents.push_back(ind);
}

/**
 * Remove one level of indentation from the stack, caused by the end of a layout.
 */
static void pop(State &state) {
  if (cond::indent_exists(state)) {
    logger("pop");
    state.indents.pop_back();
  }
}

/**
 * Advance the lexer until the following character is neither space nor tab.
 */
static void skipspace(State &state) {
  for (;;) {
    switch (PEEK) {
      case ' ':
      case '\t':
        S_ADVANCE;
        break;
      default:
        return;
    }
  }

}

/**
 * If a layout end is valid at this position, remove one indentation layer and succeed with layout end.
 */
static Result layout_end(string desc, State &state) {
  if (SYM(Sym::end)) {
    pop(state);
    return finish(Sym::end, desc);
  }
  return result::cont;
}

/**
 * Convenience parser, since those two are often used together.
 */
static Result end_or_semicolon(string desc, State &state) {
  Result res = layout_end(desc, state);
  SHORT_SCANNER;
  return finish_if_valid(Sym::semicolon, desc, state);
}

}

// --------------------------------------------------------------------------------------------------------
// Logic
// --------------------------------------------------------------------------------------------------------

/**
 * These parsers constitute the higher-level logic, loosely.
 */
namespace logic {

using namespace parser;

/**
 * Advance the parser until a non-whitespace character is encountered, while counting whitespace according to the rules
 * in the syntax reference, resetting the counter on each newline.
 *
 * This advances to the first nonwhite character in the next nonempty line and determines its indentation.
 */
static uint32_t count_indent(State & state) {
  uint32_t indent = 0;
  for (;;) {
    if (cond::newline(PEEK)) {
      S_ADVANCE;
      indent = 0;
    } else if (PEEK == ' ') {
      S_ADVANCE;
      indent++;
    } else if (PEEK == '\t') {
      S_ADVANCE;
      indent += 8;
    } else break;
  }
  return indent;
}

/**
 * End-of-file check.
 *
 * If EOF has been reached, two scenarios are valid:
 *  - The file is empty, in which case the parser is still at the root rule, where `Sym::empty` is valid.
 *  - The current layout can be ended. This may happen multiple times, since the parser will restart until the last
 *    layout end rule has been parsed.
 *
 * If those cases do not apply, parsing fails.
 */

// TODO(414owen) this was a lot faster when it was inlined
// We should figure out why. Maybe insert it in hot code paths?
static Result eof(State &state) {
  if (PEEK == 0) {
    if (SYM(Sym::empty)) {
      return finish(Sym::empty, "eof");
    }
    Result res = end_or_semicolon("eof", state);
    SHORT_SCANNER;
    return result::fail;
  }
  return result::cont;
}

/**
 * Set the initial indentation at the beginning of the file or module decl to the column of first nonwhite character,
 * then succeed with the dummy symbol `Sym::indent`.
 *
 * If there is a `module` declaration, this will be handled by the grammar.
 */
static Result initialize(uint32_t column, State &state) {
  if (cond::uninitialized(state)) {
    state::mark("initialize", state);
    bool match = cond::token("module", state);
    if (match) return result::fail;
    push(column, state);
    return finish(Sym::indent, "init");
  }
  return result::cont;
}

static Result initialize_init(State &state) {
  if (cond::uninitialized(state)) {
    uint32_t col = state::column(state);
    if (col == 0) return initialize(col, state);
  };
  return result::cont;
}

/**
 * If a dot is neither preceded nor succeded by whitespace, it may be parsed as a qualified module dot.
 *
 * The preceding space is ensured by sequencing this parser before `skipspace` in `init`.
 * Since this parser cannot look back to see whether the preceding name is a conid, this has to be ensured by the
 * grammar, represented here by the requirement of a valid symbol `Sym::dot`.
 *
 * Since the dot is consumed here, the alternative interpretation, a `Sym::varsym`, has to be emitted here.
 * A `Sym::tyconsym` is invalid here, because the dot is only expected in expressions.
 */
static Result dot(State &state) {
  if (SYM(Sym::dot)) {
    if (PEEK == '.') {
      S_ADVANCE;
      if (SYM(Sym::varsym) && iswspace(PEEK)) return finish(Sym::varsym, "dot");
      state::mark("dot", state);
      return finish(Sym::dot, "dot");
    }
  }
  return result::cont;
}

/**
 * Consume the body of a cpp directive.
 *
 * Since they can contain escaped newlines, they have to be consumed, after which the parser recurses.
 */
static Result cpp_consume(State &state) {
  while (PEEK != 0 && !cond::newline(PEEK) && PEEK != '\\') S_ADVANCE;
  if (PEEK == '\\') {
    S_ADVANCE;
    S_ADVANCE;
    return cpp_consume(state);
  }
  return result::cont;
}

/**
 * Parse a cpp directive.
 *
 * This is a workaround for the problem described in `cpp`. It will simply consume all code between `#else` or `#elif`
 * and `#endif`.
 */
static Result cpp_workaround(State &state) {
  if (PEEK == '#') {
    S_ADVANCE;
    if (cond::seq("el", state)) {
      cond::consume_until("#endif", state);
      if (PEEK == 0) {
        Result res = eof(state);
        SHORT_SCANNER;
        return result::fail;
      }
      return finish(Sym::cpp, "cpp-else");
    }
    Result res = cpp_consume(state);
    SHORT_SCANNER; // TODO(414owen): this might not be needed?
    state::mark("cpp_workaround", state);
    return finish(Sym::cpp, "cpp");
  }
  return result::cont;
}

/**
 * If the current column i 0, a cpp directive may begin.
 */
static Result cpp_init(State &state) {
  if (cond::column(0, state)) {
    return cpp_workaround(state);
  }
  return result::cont;
}

/**
 * End a layout by removing an indentation from the stack, but only if the current column (which should be in the next
 * line after skipping whitespace) is smaller than the layout indent.
 */
static Result dedent(uint32_t indent, State &state) {
  if (cond::smaller_indent(indent, state)) return layout_end("dedent", state);
  return result::cont;
}

/**
 * Succeed if a `where` on a newline can end a statement or layout (see `is_newline_where`).
 *
 * This is the case after `do` or `of`, where the `where` can be on the same indent.
 */
static Result newline_where(uint32_t indent, State &state) {
  if (cond::is_newline_where(indent, state)) {
    state::mark("newline_where", state);
    if (cond::token("where", state)) {
      return end_or_semicolon("newline_where", state);
    }
    return result::fail;
  }
  return result::cont;
}

/**
 * Succeed for `Sym::semicolon` if the indent of the next line is equal to the current layout's.
 */
static Result newline_semicolon(uint32_t indent, State &state) {
  if (SYM(Sym::semicolon) && cond::same_indent(indent, state)) {
    return finish(Sym::semicolon, "newline_semicolon");
  }
  return result::cont;
}

/**
 * A layout may be closed by an infix operator on the same column as a `do` layout:
 *
 * a :: IO Int
 * a = do a <- pure 5
 *        pure a
 *        >>= pure
 *
 * In this situation, the entire `do` block is the left operand of the `>>=`.
 * The same applies for `infix` functions.
 */
static bool end_on_infix(uint32_t indent, Symbolic type, State &state) {
  return cond::indent_lesseq(indent, state)
    && (symbolic::expression_op(type)
        || PEEK == '`');
}

/**
 * End a layout if the next token is an infix operator and the indent is equal to or less than the current layout.
 */
static Result newline_infix(uint32_t indent, Symbolic type, State &state) {
  if (end_on_infix(indent, type, state)) {
    return layout_end("newline_infix", state);
  }
  return result::cont;
}

/**
 * Parse an inline `where` token.
 *
 * Necessary because `is_newline_where` needs to know that no `where` may follow.
 */
static Result where(State &state) {
  if (cond::token("where", state)) {
    if (SYM(Sym::where)) {
      state::mark("where", state);
      return finish(Sym::where, "where");
    }
    return layout_end("where", state);
  }
  return result::cont;
}

/**
 * An `in` token ends the layout openend by a `let` and its nested layouts.
 */
static Result in(State &state) {
  if (SYM(Sym::in) && cond::token("in", state)) {
    state::mark("in", state);
    pop(state);
    return finish(Sym::in, "in");
  }
  return result::cont;
}

/**
 * An `else` token may end a layout opened in the body of a `then`.
 */
static Result else_(State &state) {
  if (cond::token("else", state)) {
    return end_or_semicolon("else", state);
  }
  return result::cont;
}

/**
 * Detect the start of a quasiquote: An opening bracket followed by an optional varid and a vertical bar, all without
 * whitespace in between.
 */
static Result qq_start(State &state) {
  S_ADVANCE;
  state::mark("qq_start", state);
  while (cond::quoter_char(PEEK)) {
    S_ADVANCE;
  }
  if (PEEK == '|') {
    return finish(Sym::qq_start, "qq_start");
  }
  return result::cont;
}

static Result qq_body(State &state) {
  if (PEEK == 0) {
    Result res = eof(state);
    SHORT_SCANNER;
    return result::fail;
  }
  state::mark("qq_body", state);
  if (PEEK == '\\') {
    S_ADVANCE;
    S_ADVANCE;
  } else {
    if (PEEK == '|') {
      S_ADVANCE;
      if (PEEK == ']') {
        S_ADVANCE;
        return finish(Sym::qq_body, "qq_body");
      }
    }
    S_ADVANCE;
  }
  // TODO(414owen): make non-recursive
  return qq_body(state);
}

/**
 * When a dollar is followed by a varid or opening paren, parse a splice.
 */
static Result splice(State &state) {
  uint32_t c = PEEK;
  if ((cond::varid_start_char(c) || c == '(') && state.symbols[Sym::splice]) {
    state::mark("splice", state);
    return finish(Sym::splice, "splice");
  }
  return result::cont;
}

static Result unboxed_tuple_close(State &state) {
  if (state.symbols[Sym::unboxed_tuple_close]) {
    if (PEEK == ')') {
      S_ADVANCE;
      state::mark("unboxed_tuple_close", state);
      return finish(Sym::unboxed_tuple_close, "unboxed_tuple_close");
    }
  }
  return result::cont;
}

/**
 * Consume all characters up to the end of line and succeed with `Sym::commment`.
 */
static Result inline_comment(State &state) {
  for (;;) {
    switch (PEEK) {
      NEWLINE_CASES:
      case 0: 
        goto inline_comment_after_skip;
      default:
        S_ADVANCE;
        break;
    }
  }

inline_comment_after_skip:
  state::mark("inline_comment", state);
  return finish(Sym::comment, "inline_comment");
}

/**
 * Parse a sequence of symbolic characters and convert it into the enum `Symbolic`.
 * This decides whether the sequence is an operator or a special case.
 */
static Symbolic read_symop(State & state) { return symbolic::symop(cond::read_string(cond::symbolic, state), state); }

static Result symop_marked(Symbolic type, State &state) {
  switch (type) {
    case Symbolic::invalid:
      return result::fail;
    case Symbolic::star:
    case Symbolic::modifier:
      return SYM(Sym::tyconsym) ? result::fail : result::cont;
    case Symbolic::tilde:
    case Symbolic::minus: {
      Result res = finish_if_valid(Sym::tyconsym, "symop", state);
      SHORT_SCANNER;
      return result::fail;
    }
    case Symbolic::implicit:
      return result::fail;
    case Symbolic::splice:
      return splice(state);
    case Symbolic::strict:
      return finish_if_valid(Sym::strict, "strict", state);
    case Symbolic::comment:
      return inline_comment(state);
    case Symbolic::con: {
      Result res = finish_if_valid(Sym::consym, "symop", state);
      SHORT_SCANNER;
      return result::fail;
    }
    case Symbolic::unboxed_tuple_close:
      return unboxed_tuple_close(state);
    default:
      return result::cont;
  }
}

/**
 * Map a `Symbolic` variant to the appropriate symbol, focusing on operators and their edge cases.
 *
 *  - Star, tilde and minus are only valid as type operators
 *  - Implicit `?` with immediate varid is always invalid, to be parsed by the grammar
 *  - `$` with immediate varid or parens is a splice
 *  - `!` can be a strictness annotation
 *  - `%` can be a modifier TODO currently only checked for types
 *  - /--+/ is a comment
 *  - `#)` is an unboxed tuple terminator
 *  - Leadering `:` is a `Sym::consym`
 *
 * Otherwise succeed with `Sym::tyconsym` or `Sym::varsym` if they are valid.
 */
static Result symop(Symbolic type, State &state) {
  if (type == Symbolic::bar) {
    if (SYM(Sym::bar)) {
      state::mark("bar", state);
      return finish(Sym::bar, "bar");
    }
    Result res = layout_end("bar", state);
    SHORT_SCANNER;
    return result::fail;
  }
  state::mark("symop", state);
  Result res = symop_marked(type, state);
  SHORT_SCANNER;
  res = finish_if_valid(Sym::tyconsym, "symop", state);
  SHORT_SCANNER;
  res = finish_if_valid(Sym::varsym, "symop", state);
  SHORT_SCANNER;
  return result::fail;
}

/**
 * Parse an inline comment if the next chars are two or more minuses and the char after the last minus is not
 * symbolic.
 *
 * To be called when it is certain that two minuses cannot succeed as a symbolic operator.
 * Those cases are:
 *   - `Sym::start` is valid
 *   - Operator matching was done already
 */
static Result minus(State &state) {
  if (!cond::seq("--", state)) return result::cont;
  while (PEEK == '-') {
    S_ADVANCE;
  }
  if (cond::symbolic(PEEK)) return result::fail;
  return inline_comment(state);
}

/**
 * Succeed for a comment.
 */
static Result multiline_comment_success(State &state) {
  state::mark("multiline_comment", state);
  return finish(Sym::comment, "multiline_comment");
}

static Result multiline_comment(uint16_t, State &);

/**
 * Mutually recursive with `multiline_comment`.
 *
 * Since {- -} comments can be nested arbitrarily, this has to keep track of how many have been openend, so that the
 * outermost comment isn't closed prematurely.
 *
 * This part looks for the comment markers at the current position and recurses with an adjusted nesting level.
 */
static Result nested_comment(uint16_t level, State &state) {
  switch (PEEK) {
    case 0: {
      Result res = eof(state);
      SHORT_SCANNER;
      return result::fail;
    }
    case '{':
      S_ADVANCE;
      if (PEEK == '-') {
        S_ADVANCE;
        return multiline_comment(level + 1, state);
      }
      break;
    case '-':
      S_ADVANCE;
      if (PEEK == '}') {
        S_ADVANCE;
        if (level <= 1) return multiline_comment_success(state);
        return multiline_comment(level - 1, state);
      }
      break;
    default:
      break;
  }
  return multiline_comment(level, state);
}

/**
 * See `nested_comment`.
 *
 * This part consumes all characters until the next potential comment marker to call `nested_comment`, or eof.
 */

// TODO(414owen): this probably shouldn't be recursive, some people like putting
// lots of dashes in comments...
static Result multiline_comment(uint16_t level, State &state) {
  uint32_t next = PEEK;
  while (next != '-' && next != '{' && next != 0) {
    S_ADVANCE;
    next = PEEK;
  }
  Result res = nested_comment(level, state);
  SHORT_SCANNER;
  return result::fail;
}

/**
 * When a brace is encountered, it can be an explicitly started layout, a pragma, or a comment. In the latter case, the
 * comment is parsed, otherwise parsing fails to delegate to the corresponding grammar rule.
 */
static Result brace(State &state) {
  if (PEEK != '{') return result::fail;
  S_ADVANCE;
  if (PEEK != '-') return result::fail;
  S_ADVANCE;
  if (PEEK == '#') return result::fail;
  return multiline_comment(1, state);
}

/**
 * Parse either inline or block comments.
 */
static Result comment(State &state) {
  switch (PEEK) {
    case '-': {
      Result res = minus(state);
      SHORT_SCANNER;
      return result::fail;
    }
    case '{': {
      Result res = brace(state);
      SHORT_SCANNER;
      return result::fail;
    }
  }
  return result::cont;
}

/**
 * `case` can open a layout in a list:
 *
 * [case a of a -> a, case a of a -> a]
 * [case a of a -> a | a <- a]
 *
 * Commas, vertical bars and closing brackets are able to close those.
 *
 * Because commas can also occur in class layouts at the top level, e.g. in fixity decls, the comma rule has to be
 * parsed here as well.
 */
static Result close_layout_in_list(State &state) {
  switch (PEEK) {
    case ']': {
      if (state.symbols[Sym::end]) {
        pop(state);
        return finish(Sym::end, "bracket");
      }
      break;
    }
    case ',': {
      S_ADVANCE;
      if (state.symbols[Sym::comma]) {
        state::mark("comma", state);
        return finish(Sym::comma, "comma");
      }
      Result res = layout_end("comma", state);
      SHORT_SCANNER;
      return result::fail;
    }
  }
  return result::cont;
}


/**
 * Parse special tokens before the first newline that can't be reliably detected by tree-sitter:
 *
 *   - `where` here is just for the actual valid token
 *   - `in` closes a layout when inline
 *   - `)` can end the layout of an `of`
 *   - symbolic operators are complicated to implement with regex
 *   - `$` can be a splice if not followed by whitespace
 *   - '[' can be a list or a quasiquote
 *   - '|' in a quasiquote, since it can be followed by symbolic operator characters, which would be consumed
 */
static Result inline_tokens(State &state) {
  switch (PEEK) {
    case 'w': {
      Result res = where(state);
      SHORT_SCANNER;
      return result::fail;
    }
    case 'i': {
      Result res = in(state);
      SHORT_SCANNER;
      return result::fail;
    }
    case 'e': {
      Result res = else_(state);
      SHORT_SCANNER;
      return result::fail;
    }
    case ')': {
      Result res = layout_end(")", state);
      SHORT_SCANNER;
      return result::fail;
    }
    // TODO(414owen) does this clash with inline comments '--'?
    // I'm not sure why there's a `Symbolic::comment` and a `Sym::comment`...
    SYMBOLICS_WITHOUT_BAR: {
      Symbolic s = read_symop(state);
      return symop(s, state);
    }
    case '|': {
      if (state.symbols[Sym::qq_bar]) {
        S_ADVANCE;
        state::mark("qq_bar", state);
        return result::finish(Sym::qq_bar);
      }
      Symbolic s = read_symop(state);
      return symop(s, state);
    }
    case '[': {
      if (state.symbols[Sym::qq_start]) {
        Result res = qq_start(state);
        SHORT_SCANNER;
      }
      return result::fail;
    }
    // '-' case covered by symop
    case '{':
      Result res = comment(state);
      SHORT_SCANNER;
  }
  return close_layout_in_list(state);
}

/**
 * If the symbol `Sym::start` is valid, starting a new layout is almost always indicated.
 *
 * If the next character is a left brace, it is either a comment, pragma or an explicit layout. In the comment case, the
 * it must be parsed here.
 * If the next character is a minus, it might be a comment.
 *
 * In all of those cases, the layout can't be started now. In the comment and pragma case, it will be started in the
 * next run.
 *
 * This pushes the indentation of the first non-whitespace character onto the stack.
 */
static Result layout_start(uint32_t column, State &state) {
  if (state.symbols[Sym::start]) {
    switch (PEEK) {
      case '{': {
        Result res = brace(state);
        SHORT_SCANNER;
        break;
      }
      case '-': {
        Result res = minus(state);
        SHORT_SCANNER;
        break;
      }
      default:
        break;
    }
    push(column, state);
    return finish(Sym::start, "layout_start");
  }
  return result::cont;
}

/**
 * After a layout has ended, the originator might need to be terminated by semicolon as well, but since the layout end
 * advances until the next line, it cannot be done in the newline checks.
 *
 * This can happen, for example, with nested `do` layouts:
 *
 * f = do
 *   a <- b
 *   do c <- d
 *      e
 *   f
 *
 * Here, when the inner `do`'s  layout is ended, the next step is started at `f`, but the outer `do`'s layout expects a
 * semicolon. Since `f` is on the same indent as the outer `do`'s layout, this parser matches.
 */
static Result post_end_semicolon(uint32_t column, State &state) {
  return SYM(Sym::semicolon) && cond::indent_lesseq(column, state)
    ? finish(Sym::semicolon, "post_end_semicolon")
    : result::cont;
}

/**
 * Like `post_end_semicolon`, but for layout end.
 */
static Result repeat_end(uint32_t column, State &state) {
  if (state.symbols[Sym::end] && cond::smaller_indent(column, state)) {
    return layout_end("repeat_end", state);
  }
  return result::cont;
}

/**
 * Rules that decide based on the indent of the next line.
 */
static Result newline_indent(uint32_t indent, State &state) {
  Result res = dedent(indent, state);
  SHORT_SCANNER;
  res = close_layout_in_list(state);
  SHORT_SCANNER;
  return newline_semicolon(indent, state);
}

/**
 * Rules that decide based on the first token on the next line.
 */
static Result newline_token(uint32_t indent, State &state) {
  // TODO(414owen): fix
  // TODO Convert to switch
  if (cond::symbolic(PEEK) || PEEK == '`') {
    Symbolic s = read_symop(state);
    Result res = newline_infix(indent, s, state);
    SHORT_SCANNER;
    return result::fail;
  }
  Result res = newline_where(indent, state);
  SHORT_SCANNER;
  if (PEEK == 'i') return in(state);
  return result::cont;
}

/**
 * To be called after parsing a newline, with the indent of the next line as argument.
 */
static Result newline(uint32_t indent, State &state) {
  Result res = eof(state);
  SHORT_SCANNER;
  res = initialize(indent, state);
  SHORT_SCANNER;
  res = cpp_workaround(state);
  SHORT_SCANNER;
  res = comment(state);
  SHORT_SCANNER;
  state::mark("newline", state);
  res = newline_token(indent, state);
  SHORT_SCANNER;
  return newline_indent(indent, state);
}

/**
 * Parsers that have to run when the next non-space character is not a newline:
 *
 *   - Layout start
 *   - ending nested layouts at the same position
 *   - symbolic operators
 *   - Tokens `where`, `in`, `$`, `)`, `]`, `,`
 *   - comments
 */
static Result immediate(uint32_t column, State &state) {
  auto res = layout_start(column, state);
  SHORT_SCANNER;
  res = post_end_semicolon(column, state);
  SHORT_SCANNER;
  res = repeat_end(column, state);
  SHORT_SCANNER;
  return inline_tokens(state);
}

/**
 * Parsers that have to run _before_ parsing whitespace:
 *
 *   - Error check
 *   - Indent stack initialization
 *   - Qualified module dot (leading whitespace would mean it would be `(.)`)
 *   - cpp
 *   - quasiquote body, which overrides everything
 */
static Result init(State &state) {
  auto res =  eof(state);
  SHORT_SCANNER;
  res = cond::after_error(state) ? result::fail : result::cont;
  SHORT_SCANNER;
  res = initialize_init(state);
  SHORT_SCANNER;
  res = dot(state);
  SHORT_SCANNER;
  res = cpp_init(state);
  SHORT_SCANNER;
  if (state.symbols[Sym::qq_body]) {
    return qq_body(state);
  }
  return result::cont;
}

/**
 * The main parser checks whether the first non-space character is a newline and delegates accordingly.
 */
static Result main(State &state) {
  skipspace(state);
  Result res = eof(state);
  SHORT_SCANNER;
  state::mark("main", state);
  if (cond::newline(PEEK)) {
    S_ADVANCE;
    auto indent = count_indent(state);
    return newline(indent, state);
  }
  auto col = state::column(state);
  return immediate(col, state);
}

/**
 * The entry point to the parser.
 */
static Result all(State &state) {
  auto res = init(state);
  return res.finished ? res : main(state);
}

}

// --------------------------------------------------------------------------------------------------------
// Evaluation
// --------------------------------------------------------------------------------------------------------

namespace eval {

/**
  * Helper that consume_if all characters up to the next whitespace, for debugging after a run.
  *
  * Note: This may break the parser, since not all paths use `mark`.
  */
static void debug_lookahead(State & state) {
  string s = "";
  for (;;) {
    if (cond::isws(PEEK) || PEEK == 0) break;
    else {
      s += PEEK;
      S_ADVANCE;
    }
  }
  if (!s.empty()) logger("next: " + s);
}

/**
  * The main function of the parsing machinery, executing the parser by passing in the initial state and analyzing the
  * result.
  *
  * If the parser concluded with success, the `result_symbol` attribute of the lexer is set, by which the parsed symbol
  * is communicated to tree-sitter, and `true` is returned, indicating to tree-sitter to use the result.
  *
  * If the parser concluded with failure, no `result_symbol` is set and `false` is returned.
  *
  * If the parser did _not_ conclude, i.e. all steps finished with `cont`, a failure is reported as well.
  *
  * If the `debug_next_token` flag is set, the next token will be printed.
  */
static bool eval(parser::NewParser chk, State & state) {
  auto result = chk(state);
  if (debug_next_token) debug_lookahead(state);
  if (result.finished && result.sym != Sym::fail) {
    if (debug) {
      auto col =
        state.marked == -1 ?
        to_string(state::column(state)) :
        state.marked_by + "@" + to_string(state.marked);
      logger("result: " + syms::name(result.sym) + ", " + col);
    }
    state.lexer->result_symbol = result.sym;
    return true;
  } else return false;
}

}

// --------------------------------------------------------------------------------------------------------
// API
// --------------------------------------------------------------------------------------------------------

extern "C" {

/**
 * This function allocates the persistent state of the parser that is passed into the other API functions.
 */
void *tree_sitter_haskell_external_scanner_create() { return new vector<uint16_t>(); }

/**
 * Main logic entry point.
 * Since the state is a singular vector, it can just be cast and used directly.
 */
bool tree_sitter_haskell_external_scanner_scan(void *payload, TSLexer *lexer, const bool *syms) {
  auto *indents = static_cast<vector<uint16_t> *>(payload);
  auto state = State(lexer, syms, *indents);
  logger(state);
  return eval::eval(logic::all, state);
}

/**
 * Copy the current state to another location for later reuse.
 * This is normally more complex, but since this parser's state constists solely of a vector of integers, it can just be
 * copied.
 */
unsigned tree_sitter_haskell_external_scanner_serialize(void *payload, char *buffer) {
  auto *state = static_cast<vector<uint16_t> *>(payload);
    copy(state->begin(), state->end(), buffer);
  return state->size();
}

/**
 * Load another parser state into the currently active state.
 * `payload` is the state of the previous parser execution, while `buffer` is the saved state of a different position
 * (e.g. when doing incremental parsing).
 */
void tree_sitter_haskell_external_scanner_deserialize(void *payload, char *buffer, unsigned length) {
  auto *state = static_cast<vector<uint16_t> *>(payload);
  state->clear();
  copy(buffer, buffer + length, back_inserter(*state));
}

/**
 * Destroy the state.
 */
void tree_sitter_haskell_external_scanner_destroy(void *payload) { delete static_cast<vector<uint16_t> *>(payload); }

}
