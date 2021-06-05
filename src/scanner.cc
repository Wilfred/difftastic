#include "tree_sitter/parser.h"
#include <vector>
#include <cstdio>
#include <iostream>
#include <functional>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

/**
 * The scanner is abstracted for compositionality as functions of the type:
 *
 * typedef function<Result(State&)> Parser;
 *
 * A simple parser can look like this:
 *
 * Result layout_start_brace(State & state) {
 *   if (next_char(state) == '{') return result::finish(Sym::start);
 *   else return result::cont;
 * }
 *
 * With the provided combinators in `namespace `parser`, this can be rewritten as:
 *
 * Parser layout_start_brace = peek('{')(finish(Sym::start));
 *
 * In the API function `scan`, this parser can be executed:
 *
 * parser::eval(layout_start_brace, state);
 *
 * This will set the `lexer-result_symbol` accordingly and return a bool indicating success.
 *
 * Multiple parsers can be executed in succession with the plus operator:
 *
 * peek('w')(handle_w) + peek('i')(handle_i)
 *
 * If `handle_w` terminates with `result::finish` or `result::fail` instead of `result::cont`, `handle_i` is not
 * executed.
 */

// --------------------------------------------------------------------------------------------------------
// Utilities
// --------------------------------------------------------------------------------------------------------

/**
 * Print input and result information.
 */
bool debug = false;

/**
 * Print the upcoming token after parsing finished.
 * Note: May change parser behaviour.
 */
bool debug_next_token = false;

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

template<class A, class B, class C> function<C(A)> operator*(function<C(B)> f, function<B(A)> g) {
  return [=](A a) { return f(g(a)); };
}

template<class A, class B, class C> function<C(A)> operator*(function<C(B)> f, B (&g)(A)) {
  return [=](A a) { return f(g(a)); };
}

template<class A, class B, class C> function<C(A)> operator*(C (&f)(B), function<B(A)> g) {
  return [=](A a) { return f(g(a)); };
}

template<class A, class B> function<B(A)> const_(B b) { return [=](auto _) { return b; }; }

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
 *   - strict: Disambiguate strictness annotation `!` from symbolic operators
 *   - unboxed_tuple_close: Disambiguate the closing parens for unboxed tuples `#)` from symbolic operators
 *   - bar: The vertical bar `|`, used for guards and list comprehension
 *   - in: Closes the layout of a `let` and consumes the token `in`
 *   - indent: Used as a dummy symbol for initialization; uses newline in the grammar to ensure the scanner is called
 *     for each token
 *   - empty: The empty file
 *   - fail: special indicator of failure
 */
enum Sym: uint16_t {
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
  strict,
  unboxed_tuple_close,
  bar,
  in,
  indent,
  empty,
  fail,
};

vector<string> names = {
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
  "strict",
  "unboxed_tuple_close",
  "bar",
  "in",
  "indent",
  "empty",
};

string name(Sym t) { return t < names.size() ? names[t] : "unknown"; }

/**
 * The parser appears to call `scan` with all symbols declared as valid directly after it encountered an error, so
 * this function is used to detect them.
 */
bool all(const bool *syms) { return std::all_of(syms, syms + empty, [](bool a) { return a; }); }

/**
 * Append a symbol's string representation to the string `s` if it is valid.
 */
void add(string & s, const bool *syms, Sym t) {
  if (syms[t]) {
    if (!s.empty()) s += ",";
    s += name(t);
  }
}

/**
 * Produce a comma-separated string of valid symbols.
 */
string valid(const bool *syms) {
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

const string format_indents(State & state) {
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

bool eof(State & state) { return state.lexer->eof(state.lexer); }

/**
 * The parser's position in the current line.
 */
uint32_t column(State & state) {
  return eof(state) ? 0 : state.lexer->get_column(state.lexer);
}

/**
 * The next character that would be parsed.
 * Does not advance the parser position (consume the character).
 */
uint32_t next_char(State & state) { return state.lexer->lookahead; }

/**
 * Move the parser position one character to the right, treating the consumed character as part of the parsed token.
 */
void advance(State & state) { state.lexer->advance(state.lexer, false); }

/**
 * Move the parser position one character to the right, treating the consumed character as whitespace.
 */
void skip(State & state) { state.lexer->advance(state.lexer, true); }

function<void(State&)> mark(string marked_by) {
  return [=](State & state) {
    if (debug) {
      state.marked = column(state);
      state.marked_by = marked_by;
    }
    state.lexer->mark_end(state.lexer);
  };
}

}

// --------------------------------------------------------------------------------------------------------
// Condition
// --------------------------------------------------------------------------------------------------------

/**
 * A predicate for the next character.
 *
 * With the provided operator overloads, conditions can be logically combined without having to write lambdas for
 * passing along the character.
 */
typedef function<bool(uint32_t)> Peek;

Peek operator&(const Peek & l, const Peek & r) { return [=](uint32_t c) { return l(c) && r(c); }; }
Peek operator|(const Peek & l, const Peek & r) { return [=](uint32_t c) { return l(c) || r(c); }; }
Peek not_(Peek con) { return [=](uint32_t c) { return !con(c); }; }

/**
 * This type abstracts over a boolean predicate of the current state.
 * It is used whenever a condition should guard a nested parser.
 *
 * With the provided operator overloads, conditions can be logically combined without having to write lambdas for
 * passing along the `State`.
 */
typedef function<bool(State&)> Condition;

Condition operator&(const Condition & l, const Condition & r) { return [=](auto s) { return l(s) && r(s); }; }
Condition operator|(const Condition & l, const Condition & r) { return [=](auto s) { return l(s) || r(s); }; }
Condition not_(const Condition & c) { return [=](State & state) { return !c(state); }; }

/**
 * Peeking the next character uses the `State` to access the lexer and returns the predicate success as well as the
 * character itself.
 *
 * TODO change to uint32_t
 */
typedef function<pair<bool, uint32_t>(State &)> PeekResult;

/**
 * The set of conditions used in the parser implementation.
 */
namespace cond {

Condition pure(bool c) { return const_<State&>(c); }

Peek eq(uint32_t target) { return [=](uint32_t c) { return target == static_cast<uint32_t>(c); }; }

bool varid_start_char(const uint32_t c) { return eq('_')(c) || iswlower(c); }

bool varid_char(const uint32_t c) { return eq('_')(c) || eq('\'')(c) || iswalnum(c); };

/**
 * Require that the next character matches a predicate, without advancing the parser.
 * Returns the next uint32_t as well.
 */
function<std::pair<bool, uint32_t>(State &)> peeks(Peek pred) {
  return [=](State & state) {
    auto c = state::next_char(state);
    auto res = pred(c);
    return std::make_pair(res, c);
  };
}

Condition peek_with(Peek pred) { return fst<bool, uint32_t> * peeks(pred); }

Condition varid = cond::peek_with(cond::varid_start_char);

/**
 * Require that the next character equals a concrete `c`, without advancing the parser.
 */
Condition peek(uint32_t c) { return fst<bool, uint32_t> * peeks(eq(c)); }

/**
 * Require that the next character matches a predicate, advancing the parser on success.
 */
PeekResult consume_if(Peek pred) {
  return [=](State & state) {
    auto res = peeks(pred)(state);
    if (res.first) { state::advance(state); }
    return res;
  };
}

/**
 * Like `consume_if`, but only return the boo result.
 */
Condition consumes(Peek pred) { return fst<bool, uint32_t> * consume_if(pred); }

/**
 * Require that the next character equals a concrete `c`, advancing the parser on success.
 */
Condition consume(uint32_t c) { return consumes(eq(c)); }

/**
 * Require that the argument string follows the current position, consuming all characters.
 * Note: This leaves characters from a partial match consumed, there is no way to backtrack the parser.
 */
Condition seq(const string & s) {
  return [=](State & state) { return all_of(s.begin(), s.end(), [&](auto a) { return consume(a)(state); }); };
}

function<void(State &)> read_while(Peek pred) {
  return [=](State & state) {
    while (true) {
      if (state::eof(state)) break;
      uint32_t c = state::next_char(state);
      if (!pred(c)) break;
      state::advance(state);
    }
  };
}

function<void(State &)> consume_while(Peek pred) { return read_while(pred); }

// TODO this breaks if the target sequence has a repetition of its prefix
function<void(State &)> consume_until(string target) {
  if (target.empty()) return [=](auto) {};
  uint32_t first = target[0];
  return [=](State & state) {
    Peek check = [&](uint32_t c) {
      if (eq(first)(c)) {
        state::mark("consume_until " + target)(state);
        return !seq(target)(state);
      }
      else return true;
    };
    return read_while(check)(state);
  };
}

function<u32string(State &)> read_string(Peek pred) {
  return [=](State & state) {
    u32string s;
    read_while([&](uint32_t c) {
        auto res = pred(c);
        if (res) s += static_cast<uint32_t>(c);
        return res;
    })(state);
    return s;
  };
}

/**
 * Require that the argument symbol is valid for the current parse tree state.
 */
Condition sym(Sym t) { return [=](State & state) { return state.symbols[t]; }; }

/**
 * Require that the next character is whitespace (space or newline) without advancing the parser.
 */
Condition peekws = [](State & state) { return iswspace(state::next_char(state)); };

/**
 * Require that the next character is end-of-file.
 */
Condition peekeof = peek(0);

/**
 * A token like a varsym can be terminated by whitespace of brackets.
 */
Condition token_end =
  peekeof | peekws | peek(')') | peek(']') | peek('[') | peek('(');

/**
 * Require that the argument string follows the current position and is followed by whitespace.
 * See `seq`
 */
Condition token(const string & s) { return seq(s) & token_end; }

/**
 * Require that the stack of layout indentations is not empty.
 * This is mostly used for safety.
 */
const bool indent_exists(State & state) { return !state.indents.empty(); };

/**
 * Helper function for executing a condition callback with the current indentation.
 */
Condition check_indent(function<bool(uint16_t)> f) {
  return [=](State & state) { return indent_exists(state) && f(state.indents.back()); };
}

/**
 * Require that the current line's indent is greater or equal than the containing layout's, so the current layout is
 * continued.
 */
Condition keep_layout(uint16_t indent) { return check_indent([=](auto i) { return indent >= i; }); }

/**
 * Require that the current line's indent is equal to the containing layout's, so the line may start a new `decl`.
 */
Condition same_indent(uint32_t indent) { return check_indent([=](auto i) { return indent == i; }); }

/**
 * Require that the current line's indent is smaller than the containing layout's, so the layout may be ended.
 */
Condition smaller_indent(uint32_t indent) { return check_indent([=](auto i) { return indent < i; }); }

Condition indent_lesseq(uint32_t indent) { return check_indent([=](auto i) { return indent <= i; }); }

/**
 * Composite condition examining whether the current layout can be terminated if the line after the position where the
 * scan started begins with a `where`.
 *
 * This is needed because `where` can appear on the same indent as, for example, a `do` statement in a `decl`, while
 * being part of the latter and therefore having to end the `do`'s layout before parsing the `where`.
 *
 * This does only check whether the line begins with a `w`, the entire `where` is consumed by the calling parser below.
 */
Condition is_newline_where(uint32_t indent) {
  return keep_layout(indent) & (sym(Sym::semicolon) | sym(Sym::end)) & (not_(sym(Sym::where))) & peek('w');
}

Peek newline = eq('\n') | eq('\r') | eq('\f');

Peek ticked = eq('`');

/**
 * Require that the state has not been initialized after parsing has started.
 *
 * This is necessary to handle a nonexistent `module` declaration.
 */
bool uninitialized(State & state) { return !indent_exists(state); }

Condition column(uint32_t col) {
  return [=](State & state) { return state::column(state) == col; };
}

/**
 * Require that the parser determined an error in the previous step (see `syms::all`).
 */
bool after_error(State & state) { return syms::all(state.symbols); }

bool symbolic(uint32_t c) {
  switch (c) {
    case '!':
    case '#':
    case '$':
    case '%':
    case '&':
    case '*':
    case '+':
    case '.':
    case '/':
    case '<':
    case '>':
    case '?':
    case '^':
    case ':':
    case '=':
    case '|':
    case '-':
    case '~':
    case '@':
    case '\\':
      return true;
    default:
      return false;
  }
}

bool valid_varsym_one_char(uint32_t c) {
  switch (c) {
    case '!':
    case '#':
    case '$':
    case '%':
    case '&':
    case '*':
    case '+':
    case '.':
    case '/':
    case '<':
    case '>':
    case '?':
    case '^':
      return true;
    default:
      return false;
  }
}

Peek valid_first_varsym = not_(eq(':')) & symbolic;

bool valid_tyconsym_one_char(uint32_t c) {
  switch (c) {
    case '*':
      return false;
    case '~':
    case ':':
    case '-':
      return true;
    default:
      return valid_varsym_one_char(c);
  }
}

/**
 * Test for reserved operators of two characters.
 */
bool valid_symop_two_chars(uint32_t first_char, uint32_t second_char) {
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

/**
 * Single-uint32_t operators that change meaning if they are followed by a varid without space.
 */
bool symop_needs_token_end(uint32_t c) {
  switch (c) {
    case '$':
    case '?':
    case '!':
      return true;
    default:
      return false;
  }
}

Condition valid_splice = peek_with(cond::varid_start_char) | peek('(');

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
  minus,
  unboxed_tuple_close,
  bar,
  comment,
  invalid,
};

bool success(Symbolic type) { return type == Symbolic::con || type == Symbolic::op; }

Symbolic con_or_var(uint32_t c) { return c == ':' ? Symbolic::con : Symbolic::op; }

bool single(uint32_t c) {
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
bool expression_op(Symbolic type) {
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
 * Hashes followed by a varid start uint32_t `#foo` are labels.
 */
function<Symbolic(State &)> symop(u32string s) {
  return [=](State & state) {
    if (s.empty()) return Symbolic::invalid;
    uint32_t c = s[0];
    if (s.size() == 1) {
      if (c == '!' && !(cond::peekws(state) || cond::peek(')')(state))) return Symbolic::strict;
      if (c == '#' && cond::peek(')')(state)) return Symbolic::unboxed_tuple_close;
      if (c == '#' && cond::peek_with(cond::varid_start_char)(state)) return Symbolic::invalid;
      if (c == '$' && cond::valid_splice(state)) return Symbolic::splice;
      if (c == '?' && cond::varid(state)) return Symbolic::implicit;
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
      if (all_of(s.begin(), s.end(), cond::eq('-'))) return Symbolic::comment;
      if (s.size() == 2) {
        if (s[0] == '$' && s[1] == '$' && cond::valid_splice(state)) return Symbolic::splice;
        if (!cond::valid_symop_two_chars(s[0], s[1])) return Symbolic::invalid;
      }
    }
    return con_or_var(c);
  };
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

Result cont = Result(Sym::fail, false);
Result finish(Sym t) { return Result(t, true); }
Result fail = finish(Sym::fail);

}

// --------------------------------------------------------------------------------------------------------
// Parser
// --------------------------------------------------------------------------------------------------------

namespace parser {

/**
 * The main function shape for all parser combinators.
 */
typedef function<Result(State&)> Parser;

/**
 * Parsers that depend on the next character.
 */
typedef function<Parser(uint32_t)> CharParser;

/**
 * Convenience alias for a function that attaches conditions to a parser.
 */
typedef function<Parser(Parser)> Modifier;

/**
 * Combinators that manipulate the state without producing a value or parse result.
 */
typedef function<void(State&)> Effect;

/**
 * Monadic bind for `Parser`. (>>=)
 */
template<class A> function<Parser(function<Parser(A)>)> with(A (&fa)(State &)) {
  return [&](function<Parser(A)> f) {
    return [=](State & state) {
      return f(fa(state))(state);
    };
  };
}

template<class A> function<Parser(function<Parser(A)>)> with(function<A(State &)> fa) {
  return [&](function<Parser(A)> f) {
    return [=](State & state) {
      return f(fa(state))(state);
    };
  };
}

/**
 * Variant of `with` that discards the left operand's result. (>>)
 *
 * Semantics are "execute the right parser if the left parser doesn't fail".
 */
Parser operator+(Parser fa, Parser fb) {
  return [=](State & state) {
    auto res = fa(state);
    return res.finished ? res : fb(state);
  };
}

/**
 * Depending on the result of a condition, execute one of the supplied parsers.
 */
Parser either(Condition c, Parser match, Parser nomatch) {
  return [=](State & state) { return c(state) ? match(state) : nomatch(state); };
}

/**
 * Depending on the result of a condition, execute one of the supplied parsers.
 */
Parser either(bool c, Parser match, Parser nomatch) { return either(const_<State &>(c), match, nomatch); }

/**
 * Lazy evaluation for recursion.
 */
Parser lazy(function<Parser()> p) {
  return [=](State & state) { return p()(state); };
}

/**
 * Execute an `Effect`, then continue.
 */
Parser effect(Effect eff) {
  return [=](State & state) {
    eff(state);
    return result::cont;
  };
}

/**
 * Parser that terminates the execution with the successful detection of the given symbol.
 */
Parser finish(const Sym s, string desc) {
  return [=](auto _) {
    logger << "finish: " << desc << nl;
    return result::finish(s);
  };
}

/**
 * Parser that terminates the execution unsuccessfully;
 */
Parser fail = ::const_<State>(result::fail);

CharParser as_char_parser(CharParser p) { return p; }
CharParser as_char_parser(Parser p) { return ::const_<uint32_t>(p); }
CharParser as_char_parser(Result r) { return ::const_<uint32_t>(::const_<State>(r)); }

/**
 * Require a condition to be true for the next parser to be executed.
 *
 * If the condition is false, parsing continues after the skipped parser.
 *
 * This function returns a function, so it is applied with two parameter lists:
 *
 * iff(cond::after_error)(fail)
 */
Modifier iff(Condition c) { return [=](Parser next) { return either(c, next, const_<State>(result::cont)); }; }

/**
 * Require a plain `bool` to be true for the next parser to be executed.
 */
Modifier when(const bool c) { return iff(::const_<State>(c)); }

/**
 * Require the given symbol to be valid for the next parser to be executed.
 */
Modifier sym(const Sym s) { return iff(cond::sym(s)); }

/**
 * Parser that terminates the execution with the successful detection of the given symbol, but only if it is expected.
 */
Parser finish_if_valid(const Sym s, string desc) { return sym(s)(finish(s, desc)); }

/**
 * :: (State -> (bool, uint32_t)) -> (uint32_t -> Parser) -> (uint32_t -> Parser) -> Parser
 *
 * If the predicate is true, pass the character to the `match` parser, otherwise the `nomatch`
 * parser.
 *
 * The template allows passing in `Parser` or `Result` for the `(uint32_t -> Parser)` parameters.
 */
template<class A, class B> Parser either(function<pair<bool, uint32_t>(State &)> con, A match, B nomatch) {
  return [=](State & state) {
    auto res = con(state);
    return res.first ? as_char_parser(match)(res.second)(state) : as_char_parser(nomatch)(res.second)(state);
  };
}

/**
 * :: (uint32_t -> bool) -> (uint32_t -> Parser) -> (uint32_t -> Parser) -> Parser
 *
 * If the predicate for the next character is true, pass the character to the `match` parser, otherwise the `nomatch`
 * parser.
 *
 * The template allows passing in `Parser` or `Result` for the `(uint32_t -> Parser)` parameters.
 */
template<class A, class B> Parser peeks(Peek pred, A match, B nomatch) {
  return either(cond::peeks(pred), match, nomatch);
}

/**
 * :: (uint32_t -> bool) -> Parser -> Parser
 *
 * Specialization for a conditional parser that's executed in the success case.
 */
Modifier peeks(Peek pred) { return [=](Parser next) { return peeks(pred, next, result::cont); }; }

/**
 * Requires the next character to be `c` for the next parser to be executed.
 */
Modifier peek(uint32_t c) { return peeks(cond::eq(c)); }

/**
 * :: (uint32_t -> bool) -> (uint32_t -> Parser) -> Parser
 *
 * If the predicate for the next character is true, advance the lexer and pass the consumed character to the next
 * parser.
 */
function<Parser(CharParser)> consume_if(Peek pred) {
  return [=](const CharParser & next) { return either(cond::consume_if(pred), next, result::cont); };
}

/**
 * Require the next character to be `c` for the next parser to be executed, advancing the lexer in the success case.
 */
Modifier consume(uint32_t c) { return [=](Parser next) { return consume_if(cond::eq(c))(as_char_parser(next)); }; }

/**
 * Consume all characters while the predicate holds.
 */
Parser consume_while(Peek pred) { return effect(cond::consume_while(pred)); }

/**
 * Consume all characters until the given sequence is encountered.
 */
Parser consume_until(string s) { return effect(cond::consume_until(s)); }

/**
 * Advance the lexer.
 */
Parser advance = effect(state::advance);

/**
 * Skip whitespace.
 */
Parser skip_ws = effect([](State & state) { while (cond::peekws(state)) state::skip(state); });

Modifier seq(string s) { return iff(cond::seq(s)); }

/**
 * Require the next characters to be equal to `s` for the next parser to be executed, advancing the lexer as far as the
 * characters match, even if not all of them match.
 */
Modifier token(string s) { return iff(cond::token(s)); }

/**
 * Instruct the lexer that the current position is the end of the potentially detected symbol, causing the next run to
 * be started after this character in the success case.
 *
 * This is useful if the validity of the detected symbol depends on what follows, e.g. in the case of a layout end
 * before a `where` token.
 */
Parser mark(string target) { return effect(state::mark(target)); }

/**
 * If the parser returns `cont`, fail.
 */
Parser or_fail(Parser chk) { return chk + fail; }

/**
 * Require the next character to be whitespace for the next parser to be executed, not advancing the lexer.
 */
Modifier peekws = iff(cond::peekws);

/**
 * Add one level of indentation to the stack, caused by starting a layout.
 */
Parser push(uint16_t ind) { return effect([=](State & state) {
  logger << "push: " << ind << nl;
  state.indents.push_back(ind);
}); }

/**
 * Remove one level of indentation from the stack, caused by the end of a layout.
 */
Parser pop =
  iff(cond::indent_exists)(effect([](State & state) {
    logger("pop");
    if(cond::indent_exists(state)) state.indents.pop_back();
  }));

/**
 * Advance the lexer until the following character is neither space nor tab.
 */
Parser skipspace =
  effect([](State & state) { while (cond::peek(' ')(state) || cond::peek('\t')(state)) state::skip(state); });

/**
 * If a layout end is valid at this position, remove one indentation layer and succeed with layout end.
 */
Parser layout_end(string desc) { return sym(Sym::end)(effect(pop) + finish(Sym::end, desc)); }

/**
 * Convenience parser, since those two are often used together.
 */
Parser end_or_semicolon(string desc) { return layout_end(desc) + finish_if_valid(Sym::semicolon, desc); }

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
uint32_t count_indent(State & state) {
  uint32_t indent = 0;
  for (;;) {
    if (cond::consumes(cond::newline)(state)) {
      indent = 0;
    } else if (cond::consume(' ')(state)) {
      indent++;
    } else if (cond::consume('\t')(state)) {
      indent += 8;
    } else break;
  }
  return indent;
}

/**
 * End-of-file check.
 *
 * If EOF has been reched, two scenarios are valid:
 *  - The file is empty, in which case the parser is still at the root rule, where `Sym::empty` is valid.
 *  - The current layout can be ended. This may happen multiple times, since the parser will restart until the last
 *    layout end rule has been parsed.
 *
 * If those cases do not apply, parsing fails.
 */
Parser eof = peek(0)(sym(Sym::empty)(finish(Sym::empty, "eof")) + end_or_semicolon("eof") + fail);

/**
 * Set the initial indentation at the beginning of the file or module decl to the column of first nonwhite character,
 * then succeed with the dummy symbol `Sym::indent`.
 *
 * If there is a `module` declaration, this will be handled by the grammar.
 */
Parser initialize(uint32_t column) {
  return
    iff(cond::uninitialized)(
        mark("initialize") + token("module")(fail) + push(column) + finish(Sym::indent, "init")
    );
}

Parser initialize_init =
  iff(cond::uninitialized)(with(state::column)([](auto col) { return when(col == 0)(initialize(col)); }));

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
Parser dot =
  sym(Sym::dot)(consume('.')(peekws(finish_if_valid(Sym::varsym, "dot")) + mark("dot") + finish(Sym::dot, "dot")));

/**
 * Consume the body of a cpp directive.
 *
 * Since they can contain escaped newlines, they have to be consumed, after which the parser recurses.
 */
Parser cpp_consume =
  [](State & state) {
    auto p =
      consume_while(not_(cond::newline) & not_(cond::eq('\\'))) +
      consume('\\')(parser::advance + cpp_consume);
    return p(state);
  };

/**
 * Parse a cpp directive.
 *
 * This is a workaround for the problem described in `cpp`. It will simply consume all code between `#else` or `#elif`
 * and `#endif`.
 */
Parser cpp_workaround =
  consume('#')(seq("el")(consume_until("#endif") + finish(Sym::cpp, "cpp-else")) +
    cpp_consume +
    mark("cpp_workaround") +
    finish(Sym::cpp, "cpp")
  );

/**
 * If the current column i 0, a cpp directive may begin.
 */
Parser cpp_init = iff(cond::column(0))(cpp_workaround);

/**
 * End a layout by removing an indentation from the stack, but only if the current column (which should be in the next
 * line after skipping whitespace) is smaller than the layout indent.
 */
Parser dedent(uint32_t indent) { return iff(cond::smaller_indent(indent))(layout_end("dedent")); }

/**
 * Succeed if a `where` on a newline can end a statement or layout (see `is_newline_where`).
 *
 * This is the case after `do` or `of`, where the `where` can be on the same indent.
 */
Parser newline_where(uint32_t indent) {
  return iff(cond::is_newline_where(indent))(
    mark("newline_where") + token("where")(end_or_semicolon("newline_where")) + fail
  );
}

/**
 * Succeed for `Sym::semicolon` if the indent of the next line is equal to the current layout's.
 */
Parser newline_semicolon(uint32_t indent) {
  return sym(Sym::semicolon)(iff(cond::same_indent(indent))(finish(Sym::semicolon, "newline_semicolon")));
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
Condition end_on_infix(uint32_t indent, Symbolic type) {
  return cond::indent_lesseq(indent) & (
    cond::pure(symbolic::expression_op(type)) | cond::peek_with(cond::ticked));
}

/**
 * End a layout if the next token is an infix operator and the indent is equal to or less than the current layout.
 */
function<Parser(Symbolic)> newline_infix(uint32_t indent) {
  return [=](auto type) { return iff(end_on_infix(indent, type))(layout_end("newline_infix")); };
}

/**
 * Parse an inline `where` token.
 *
 * Necessary because `is_newline_where` needs to know that no `where` may follow.
 */
Parser where = token("where")(sym(Sym::where)(mark("where") + finish(Sym::where, "where")) + layout_end("where"));

/**
 * An `in` token ends the layout openend by a `let` and its nested layouts.
 */
Parser in = sym(Sym::in)(token("in")(mark("in") + effect(pop) + finish(Sym::in, "in")));

/**
 * An `else` token may end a layout opened in the body of a `then`.
 */
Parser else_ = token("else")(end_or_semicolon("else"));

/**
 * Detect the start of a quasiquote: An opening bracket followed by an optional varid and a vertical bar, all without
 * whitespace in between.
 */
Parser qq_start =
  parser::advance +
  mark("qq_start") +
  consume_while(cond::varid_start_char) +
  consume_while(cond::varid_char) +
  peek('|')(finish(Sym::qq_start, "qq_start"))
  ;

/**
 * When a dollar is followed by a varid or opening paren, parse a splice.
 */
Parser splice =
  iff(cond::peek_with(cond::varid_start_char) | cond::peek('('))(
    mark("splice") + finish_if_valid(Sym::splice, "splice") + fail
  );

Parser unboxed_tuple_close =
  sym(Sym::unboxed_tuple_close)(consume(')')(
    mark("unboxed_tuple_close") + finish(Sym::unboxed_tuple_close, "unboxed_tuple_close")
  ));

/**
 * Consume all characters up to the end of line and succeed with `Sym::commment`.
 */
Parser inline_comment =
  consume_while(not_(cond::newline)) + mark("inline_comment") + finish(Sym::comment, "inline_comment");

/**
 * Parse a sequence of symbolic characters and convert it into the enum `Symbolic`.
 * This decides whether the sequence is an operator or a special case.
 */
Symbolic read_symop(State & state) { return symbolic::symop(cond::read_string(cond::symbolic)(state))(state); }

/**
 * Map a `Symbolic` variant to the appropriate symbol, focusing on operators and their edge cases.
 *
 *  - Star, tilde and minus are only valid as type operators
 *  - Implicit `?` with immediate varid is always invalid, to be parsed by the grammar
 *  - `$` with immediate varid or parens is a splice
 *  - `!` can be a strictness annotation
 *  - /--+/ is a comment
 *  - `#)` is an unboxed tuple terminator
 *  - Leadering `:` is a `Sym::consym`
 *
 * Otherwise succeed with `Sym::tyconsym` or `Sym::varsym` if they are valid.
 */
Parser symop(Symbolic type) {
  return
    when(type == Symbolic::bar)(
      sym(Sym::bar)(mark("bar") + finish(Sym::bar, "bar")) +
      layout_end("bar") +
      fail
    ) +
    mark("symop") +
    when(type == Symbolic::invalid)(fail) +
    sym(Sym::tyconsym)(
      when(type == Symbolic::star)(fail) +
      when(type == Symbolic::tilde || type == Symbolic::minus)(finish(Sym::tyconsym, "symop"))
    ) +
    when(type == Symbolic::minus || type == Symbolic::implicit || type == Symbolic::tilde)(fail) +
    when(type == Symbolic::splice)(splice) +
    when(type == Symbolic::strict)(finish_if_valid(Sym::strict, "strict")) +
    when(type == Symbolic::comment)(inline_comment) +
    when(type == Symbolic::con)(finish_if_valid(Sym::consym, "symop") + fail) +
    when(type == Symbolic::unboxed_tuple_close)(unboxed_tuple_close) +
    finish_if_valid(Sym::tyconsym, "symop") +
    finish_if_valid(Sym::varsym, "symop") +
    fail
    ;
}

/**
 * Parse an inline comment if the next chars are two or more minuses and the uint32_t after the last minus is not symbolic.
 *
 * To be called when it is certain that two minuses cannot succeed as a symbolic operator.
 * Those cases are:
 *   - `Sym::start` is valid
 *   - Operator matching was done already
 */
Parser minus = seq("--")(consume_while(cond::eq('-')) + peeks(cond::symbolic)(fail) + inline_comment);

/**
 * Succeed for a comment.
 */
Parser multiline_comment_success = mark("multiline_comment") + finish(Sym::comment, "multiline_comment");

Parser multiline_comment(uint16_t);

/**
 * Mutually recursive with `multiline_comment`.
 *
 * Since {- -} comments can be nested arbitrarily, this has to keep track of how many have been openend, so that the
 * outermost comment isn't closed prematurely.
 *
 * This part looks for the comment markers at the current position and recurses with an adjusted nesting level.
 */
Parser nested_comment(uint16_t level) {
  return [=](State & state) {
    auto p =
      eof +
      seq("{-")(multiline_comment(level + 1) + fail) +
      seq("-}")(when(level <= 1)(multiline_comment_success) + multiline_comment(level - 1) + fail) +
      parser::advance +
      multiline_comment(level)
      ;
    return p(state);
  };
}

/**
 * See `nested_comment`.
 *
 * This part consumes all characters until the next potential comment marker to call `nested_comment`, or eof.
 */
Parser multiline_comment(uint16_t level) {
  return consume_while(not_(cond::eq('{')) & not_(cond::eq('-')) & not_(cond::eq(0))) + nested_comment(level) + fail;
}

/**
 * When a brace is encountered, it can be an explicitly started layout, a pragma, or a comment. In the latter case, the
 * comment is parsed, otherwise parsing fails to delegate to the corresponding grammar rule.
 */
Parser brace = seq("{-")(peeks(not_(cond::eq('#')))(multiline_comment(1))) + fail;

/**
 * Parse either inline or block comments.
 */
Parser comment = peek('-')(minus + fail) + peek('{')(brace);

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
Parser close_layout_in_list =
  peek(']')(layout_end("bracket")) +
  consume(',')(
    sym(Sym::comma)(mark("comma") + finish(Sym::comma, "comma")) +
    layout_end("comma") +
    fail
  );

/**
 * Parse special tokens before the first newline that can't be reliably detected by tree-sitter:
 *
 *   - `where` here is just for the actual valid token
 *   - `in` closes a layout when inline
 *   - `)` can end the layout of an `of`
 *   - symbolic operators are complicated to implement with regex
 *   - `$` can be a splice if not followed by whitespace
 *   - '[' can be a list or a quasiquote
 */
Parser inline_tokens =
  peek('w')(where + fail) +
  peek('i')(in + fail) +
  peek('e')(else_ + fail) +
  peek(')')(layout_end(")") + fail) +
  sym(Sym::qq_start)(peek('[')(qq_start + fail)) +
  peeks(cond::symbolic)(with(read_symop)(symop)) +
  comment +
  close_layout_in_list
  ;

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
Parser layout_start(uint32_t column) {
  return sym(Sym::start)(
    peek('{')(brace) +
    peek('-')(minus) +
    push(column) +
    finish(Sym::start, "layout_start")
  );
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
Parser post_end_semicolon(uint32_t column) {
  return sym(Sym::semicolon)(iff(cond::indent_lesseq(column))(finish(Sym::semicolon, "post_end_semicolon")));
}

/**
 * Like `post_end_semicolon`, but for layout end.
 */
Parser repeat_end(uint32_t column) {
  return sym(Sym::end)(iff(cond::smaller_indent(column))(layout_end("repeat_end")));
}

/**
 * Rules that decide based on the indent of the next line.
 */
Parser newline_indent(uint32_t indent) {
  return
    dedent(indent) +
    close_layout_in_list +
    newline_semicolon(indent);
}

/**
 * Rules that decide based on the first token on the next line.
 */
Parser newline_token(uint32_t indent) {
  return
    peeks(cond::symbolic | cond::ticked)(with(read_symop)(newline_infix(indent)) + fail) +
    newline_where(indent) +
    peek('i')(in)
    ;
}

/**
 * To be called after parsing a newline, with the indent of the next line as argument.
 */
Parser newline(uint32_t indent) {
  return
    eof +
    initialize(indent) +
    cpp_workaround +
    comment +
    mark("newline") +
    newline_token(indent) +
    newline_indent(indent)
    ;
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
Parser immediate(uint32_t column) {
  return
    layout_start(column) +
    post_end_semicolon(column) +
    repeat_end(column) +
    inline_tokens
    ;
}

/**
 * Parsers that have to run _before_ parsing whitespace:
 *
 *   - Error check
 *   - Indent stack initialization
 *   - Qualified module dot (leading whitespace would mean it would be `(.)`)
 *   - cpp
 */
Parser init = eof + iff(cond::after_error)(fail) + initialize_init + dot + cpp_init;

/**
 * The main parser checks whether the first non-space character is a newline and delegates accordingly.
 */
Parser main =
  skipspace +
  eof +
  mark("main") +
  either(
    cond::consumes(cond::newline),
    with(count_indent)(newline),
    with(state::column)(immediate)
  );

/**
 * The entry point to the parser.
 */
Parser all = init + main;

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
void debug_lookahead(State & state) {
  string s = "";
  for (;;) {
    if (cond::peekws(state) || cond::peekeof(state)) break;
    else {
      s += state::next_char(state);
      state::advance(state);
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
bool eval(logic::Parser chk, State & state) {
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
