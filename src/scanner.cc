﻿/* Copyright 2023 Leorize <leorize+oss@disroot.org>
 *
 * SPDX-License-Identifier: MPL-2.0
 */

#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <limits>
#include <locale>
#include <ostream>
#include <utility>
#include <vector>

#ifdef TREE_SITTER_INTERNAL_BUILD
#  include <iostream>
#endif

#include "tree_sitter/parser.h"

namespace {

using namespace std;

using IndentCount = uint8_t;
constexpr auto InvalidIndent = numeric_limits<IndentCount>::max();
constexpr auto BitsInByte = 8;

enum class TokenType : TSSymbol {
  TokenTypeStart,
  Comment = TokenTypeStart,
  ImmediateParenOpen,
  ImmediateBracketOpen,
  ImmediateCurlyOpen,
  ImmediateStringStart,
  ImmediateLongStringStart,
  StringContent,
  RawStringContent,
  LongStringContent,
  LayoutStart,
  LayoutEnd,
  LayoutTerminator,
  LayoutEmpty,
  Comma,
  ParenClose,
  BracketClose,
  CurlyClose,
  CurlyDotClose,
  Spaces,
  InvalidLayout,
  BinaryOpStart,
  BinaryOp10Left = BinaryOpStart,
  BinaryOp10Right,
  BinaryOp9,
  BinaryOp8,
  BinaryOp7,
  BinaryOp6,
  BinaryOp5,
  BinaryOp2,
  SigilOp,
  BinaryOp1,
  BinaryOp0,
  UnaryOp,
  Elif,
  Else,
  Except,
  Finally,
  Of,
  Do,
  TokenTypeLen
};

using ValidSymbols = bitset<(size_t)TokenType::TokenTypeLen>;

constexpr ValidSymbols make_valid_symbols(initializer_list<TokenType> syms)
{
  uint64_t result{};
  for (const auto sym : syms) {
    result |= 1ULL << uint8_t(sym);
  }
  return result;
}

enum class Flag { AfterNewline, NoImmediates, FlagLen };

struct State {
  vector<uint8_t> layout_stack;
  uint8_t line_indent;
  bitset<(size_t)Flag::FlagLen> flags;

  unsigned serialize(uint8_t* buffer)
  {
    // Since spans doesn't exist before C++20, we have to do pointer math here.
    // NOLINTBEGIN(*-pointer-arithmetic)
    unsigned length = 0;
    constexpr unsigned max_length = TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
    buffer[length++] = line_indent;
    static_assert(
        (int)Flag::FlagLen <= BitsInByte, "Flag set is bigger than expected!");
    buffer[length++] = (uint8_t)flags.to_ulong();
    for (const auto indent : layout_stack) {
      // Terrible failure mode, but there isn't much to do here.
      if (length >= max_length) {
        break;
      }
      buffer[length++] = indent;
    }
    return length;
    // NOLINTEND(*-pointer-arithmetic)
  }

  void deserialize(const uint8_t* buffer, unsigned length)
  {
    // NOLINTBEGIN(*-pointer-arithmetic)
    line_indent = 0;
    layout_stack.clear();

    if (length == 0) {
      return;
    }

    unsigned cursor = 0;
    line_indent = buffer[cursor++];
    flags = buffer[cursor++];
    const auto stack_size = length - cursor;
    layout_stack.resize(stack_size);
    for (unsigned i = 0; i < stack_size; i++) {
      layout_stack.at(i) = buffer[cursor++];
    }
    // NOLINTEND(*-pointer-arithmetic)
  }

  void set_flag(Flag flag) { flags.set(static_cast<size_t>(flag)); }

  void reset_flag(Flag flag) { flags.reset(static_cast<size_t>(flag)); }

  bool test_flag(Flag flag) const
  {
    return flags.test(static_cast<size_t>(flag));
  }
};

#ifdef TREE_SITTER_INTERNAL_BUILD
ostream& operator<<(ostream& stream, const State& state)
{
  stream << "current indentation: " << (int32_t)state.line_indent;
  stream << ", indentation stack: [ ";
  for (const auto indent : state.layout_stack) {
    stream << (int32_t)indent << " ";
  }
  stream << "]";
  stream << ", flags: " << state.flags;
  return stream;
}
#endif

/// Context for a scanning session.
///
/// This class manages the lexing context and abstracts over TSLexer.
class Context {
public:
  /// Creates a new Context.
  ///
  /// @param lexer - The lexer instance provided by tree-sitter. Must not be
  /// NULL.
  /// @param validsyms - The array of valid symbols provide by tree-sitter. Must
  /// not be NULL.
  Context(TSLexer* lexer, State* state, const bool* validsyms) :
      lexer_(lexer), state_(state)
  {
    for (auto i = (int)TokenType::TokenTypeStart;
         i < (int)TokenType::TokenTypeLen; i++) {
      // NOLINTNEXTLINE(cppcoreguidelines-pro-bounds-pointer-arithmetic)
      valid_.set(i, validsyms[i]);
    }

    mark_end();

#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: valid symbols: " << valid_ << '\n';
    }
#endif
  };

  /// Returns whether the given token type is a valid token at this parsing
  /// state.
  [[nodiscard]] bool valid(enum TokenType type) const
  {
    return valid_.test(static_cast<size_t>(type));
  }

  /// Returns whether any of the given tokens in `sym` are valid at the current
  /// position.
  [[nodiscard]] bool any_valid(ValidSymbols sym) const
  {
    return (valid_ & sym).any();
  }

  /// Returns whether all of the given tokens in `sym` are valid at the current
  /// position.
  [[nodiscard]] bool all_valid(ValidSymbols sym) const
  {
    return (valid_ & sym) == sym;
  }

  /// Returns whether tree-sitter is in error recovery mode.
  [[nodiscard]] bool error() const { return valid_.all(); }

  /// Returns the current lookahead symbol.
  [[nodiscard]] char32_t lookahead() const { return lexer_->lookahead; }

  /// Advance the lexer.
  ///
  /// The advanced character will not be counted into the resulting token.
  /// Advancing will change the current state.
  ///
  /// @param skip - Whether to skip the token from the scanned range. Useful for
  /// spaces.
  /// @returns The next lookahead character.
  char32_t advance(bool skip = false)
  {
    counter_ += (int)!eof();
    if (!eof() && state_->test_flag(Flag::AfterNewline)) {
#ifdef TREE_SITTER_INTERNAL_BUILD
      if (getenv("TREE_SITTER_DEBUG")) {
        cerr << "lex_nim: invalidating after newline due to advance\n";
      }
#endif
      state_->reset_flag(Flag::AfterNewline);
    }
    lexer_->advance(lexer_, skip);
    return lookahead();
  }

  /// Returns the advance counter.
  ///
  /// This count changes every time the lexer is advanced.
  uint32_t counter() const { return counter_; }

  /// Returns whether we are at EOF.
  bool eof() const { return lexer_->eof(lexer_); }

  /// Mark the current scanning position as the end of the resulting token.
  void mark_end() { lexer_->mark_end(lexer_); }

  /// Advances and mark the new position as the end.
  ///
  /// This effectively consumes the lookahead into the token.
  ///
  /// @param skip - See {@link advance}.
  /// @returns The next lookahead character.
  char32_t consume(bool skip = false)
  {
    const auto result = advance(skip);
    mark_end();
    return result;
  }

  /// Set the result symbol type and returns true.
  [[nodiscard]] bool finish(enum TokenType type)
  {
#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: finish state: " << *state_ << '\n';
    }
#endif
    lexer_->result_symbol = (TSSymbol)type;
    return true;
  }

  /// Access the persistent state.
  State& state() { return *state_; }

private:
  TSLexer* lexer_;
  State* state_;
  uint32_t counter_{};
  ValidSymbols valid_{};
};

/// Try lexing with the given function.
///
/// If the function succeed, the lexer returns immediately.
/// Otherwise, if no input were consumed, the lexer will continue.
///
/// The lexer will stop immediately if input was consumed and the given lexing
/// function fails.
///
/// @param ctx - The context to monitor state with, and as input to `fn`.
/// @param fn - The lexing function
// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define TRY_LEX(ctx, fn)                             \
  do {                                               \
    const auto last_count = (ctx).counter();         \
    if (fn((ctx))) {                                 \
      return true;                                   \
    }                                                \
    if ((ctx).counter() != last_count) return false; \
  } while (false)

/// Same as {@link TRY_LEX}, but allows passing extra arguments to the lexing
/// function.
// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define TRY_LEXN(ctx, fn, ...)                       \
  do {                                               \
    const auto last_count = (ctx).counter();         \
    if (fn((ctx), __VA_ARGS__)) {                    \
      return true;                                   \
    }                                                \
    if ((ctx).counter() != last_count) return false; \
  } while (false)

/// The maximum value of `char`. Useful for unicode testing.
constexpr char MaxAsciiChar = 0x7f;

constexpr bool is_digit(char32_t chr) { return chr >= '0' && chr <= '9'; }

constexpr bool is_lower(char32_t chr) { return chr >= 'a' && chr <= 'z'; }

constexpr bool is_upper(char32_t chr) { return chr >= 'A' && chr <= 'Z'; }

constexpr bool is_keyword(char32_t chr)
{
  return is_lower(chr) || is_upper(chr) || chr == '_';
}

constexpr bool is_identifier(char32_t chr)
{
  return is_keyword(chr) || is_digit(chr);
}

constexpr char32_t to_upper(char32_t chr)
{
  constexpr char32_t lower_case_bit = 1U << 5U;
  return is_lower(chr) ? chr & ~lower_case_bit : chr;
}

bool lex_inline_layout(Context& ctx, bool read_dot = false)
{
  if (ctx.state().layout_stack.empty()) {
    return false;
  }

  const auto line_indent = ctx.state().line_indent;

  if (line_indent == InvalidIndent) {
#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: invalid indentation reached\n";
    }
#endif
    return false;
  }

  switch (ctx.lookahead()) {
  case ',':
    if (ctx.valid(TokenType::Comma)) {
      return false;
    }
    break;
  case ')':
    if (ctx.valid(TokenType::ParenClose)) {
      return false;
    }
    break;
#if 0  // Keep off until grammar can support it
  case ']':
    if (ctx.valid(TokenType::BracketClose)) {
      return false;
    }
    break;
  case '}':
    if ((!read_dot && ctx.valid(TokenType::CurlyClose)) ||
        (read_dot && ctx.valid(TokenType::CurlyDotClose))) {
      return false;
    }
    break;
  case '.':
    if (!read_dot) {
      ctx.advance();
      return lex_inline_layout(ctx, true);
    }
    return false;
#endif
  default:
    return false;
  }

  if (ctx.valid(TokenType::LayoutTerminator)) {
#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: terminate via delimiter\n";
    }
#endif
    return ctx.finish(TokenType::LayoutTerminator);
  }

  if (ctx.valid(TokenType::LayoutEnd) && ctx.state().layout_stack.size() > 1) {
#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: end layout via delimiter\n";
    }
#endif
    ctx.state().layout_stack.pop_back();
    return ctx.finish(TokenType::LayoutEnd);
  }

  return false;
}

namespace operators {

/// The set of all BinaryOps tokens.
constexpr ValidSymbols BinaryOps = make_valid_symbols(
    {TokenType::BinaryOp10Left, TokenType::BinaryOp10Right,
     TokenType::BinaryOp9, TokenType::BinaryOp8, TokenType::BinaryOp7,
     TokenType::BinaryOp6, TokenType::BinaryOp5, TokenType::BinaryOp2,
     TokenType::BinaryOp1, TokenType::BinaryOp0});
constexpr ValidSymbols UnaryOps =
    make_valid_symbols({TokenType::UnaryOp, TokenType::SigilOp});

// TODO: Invent something to encapsulate this structure.

/// All ASCII operator characters.
///
/// The ordering is done so that it reflects the precedence structure.
constexpr array<char, 19> Chars{// OP10
                                /* 0 */ '$', '^',
                                // OP9
                                /* 2 */ '*', '%', '\\', '/',
                                // OP8
                                /* 6 */ '+', '-', '~', '|',
                                // OP7
                                /* 10 */ '&',
                                // OP6
                                /* 11 */ '.',
                                // OP5
                                /* 12 */ '=', '<', '>', '!',
                                // OP2
                                /* 16 */ ':', '?', '@'};

/// Mapping of {@link Chars} starting index and offset from BinaryOpsStart.
constexpr array<int8_t, 8> CharRanges{
    /* BinaryOpStart | BinaryOp10Left */ 0,
    /* BinaryOp10Right */ 1,
    /* BinaryOp9 */ 2,
    /* BinaryOp8 */ 6,
    /* BinaryOp7 */ 10,
    /* BinaryOp6 */ 11,
    /* BinaryOp5 */ 12,
    /* BinaryOp2 */ 16};

/// All Unicode operator characters.
///
/// The ordering is done so that it reflects the precedence structure.
constexpr array<char16_t, 21> UnicodeChars{
    // OP9
    /* 0 */ u'∙', u'∘', u'×', u'★', u'⊗', u'⊘', u'⊙', u'⊛', u'⊠', u'⊡', u'∩',
    u'∧', u'⊓',
    // OP8
    /* 13 */ u'±', u'⊕', u'⊖', u'⊞', u'⊟', u'∪', u'∨', u'⊔'};

/// Mapping of {@link UnicodeChars} starting index and offset from
/// BinaryOpsStart.
constexpr array<int8_t, 2> UnicodeRanges{
    /* BinaryOp9 */ 0,
    /* BinaryOp8 */ 13};

/// Given a segmented array, returns the segment the given value is in.
///
/// @param array - The segmented array.
/// @param mapping - The start of each segment, sorted from low to high.
/// @param value - The value to search for.
/// @param fallback - The value returned if `value` is not in `array`, that the
/// segment found is not in `mapping`.
///
/// @returns The index of the segment in `mapping`.
template<class InputT, class MapT, class T>
int mapped_find(
    const InputT& array, const MapT& mapping, T value, int fallback = -1)
{
  const auto iter = find(array.begin(), array.end(), value);
  if (iter == array.end()) {
    return fallback;
  }
  const auto idx = iter - array.begin();
  const auto mapped_iter = find_if(
      mapping.rbegin(), mapping.rend(),
      [=](auto rangeStart) { return rangeStart <= idx; });
  if (mapped_iter == mapping.rend()) {
    return fallback;
  }

  return mapping.rend() - mapped_iter - 1;
}

/// Returns the BinaryOp token type corresponding to the given `character`.
///
/// Returns `TokenType::TokenTypeLen` if the character is not a valid operator.
TokenType classify(char32_t character)
{
  if (character <= MaxAsciiChar) {
    const auto idx = mapped_find(Chars, CharRanges, character);
    if (idx != -1) {
      return (TokenType)(idx + (uint8_t)TokenType::BinaryOpStart);
    }

    return TokenType::TokenTypeLen;
  }

  const auto idx = mapped_find(UnicodeChars, UnicodeRanges, character);
  if (idx != -1) {
    return (TokenType)(idx + (uint8_t)TokenType::BinaryOp9);
  }

  return TokenType::TokenTypeLen;
}

/// Returns whether `character` is a valid operator character.
bool is_op_char(char32_t character)
{
  if (character <= MaxAsciiChar) {
    return find(Chars.begin(), Chars.end(), character) != Chars.end();
  }

  return find(UnicodeChars.begin(), UnicodeChars.end(), character) !=
         UnicodeChars.end();
}

TokenType scan_operator(Context& ctx, bool immediate)
{
  enum class State {
    Arrow,
    Assignment,
    Colon,
    ColonColon,
    Dot,
    Equal,
    MaybeArrow,
    Minus,
    Regular,
  };

  auto state{State::Regular};
  const auto first_character = ctx.lookahead();
  auto result = classify(first_character);
#ifdef TREE_SITTER_INTERNAL_BUILD
  if (getenv("TREE_SITTER_DEBUG")) {
    cerr << "lex_nim: operator first symbol classification: " << (int)result
         << '\n';
  }
#endif
  if (result == TokenType::TokenTypeLen) {
    return result;
  }

  switch (first_character) {
  case '.':
    ctx.advance();
    state = State::Dot;
    break;
  case '=':
    ctx.advance();
    state = State::Equal;
    break;
  case ':':
    ctx.advance();
    state = State::Colon;
    break;
  case '-':
    ctx.advance();
    state = State::Minus;
    break;
  default:
    state = State::Regular;
    break;
  }

  while (is_op_char(ctx.lookahead())) {
    switch (state) {
    case State::Assignment:
    case State::Equal:
    case State::MaybeArrow:
    case State::Minus:
      switch (ctx.lookahead()) {
      case '>':
        state = State::Arrow;
        ctx.advance();
        break;
      default:
        state = State::Regular;
      }
      break;
    case State::Arrow:
    case State::Colon:
    case State::ColonColon:
    case State::Dot:
    case State::Regular:
      switch (ctx.lookahead()) {
      case '~':
      case '-':
        state = State::MaybeArrow;
        break;
      case '=':
        state = State::Assignment;
        break;
      case ':':
        state = state == State::Colon ? State::ColonColon : State::Regular;
        break;
      default:
        state = State::Regular;
        break;
      }
      ctx.advance();
      break;
    }
  }

  switch (state) {
  case State::Arrow:
    result = TokenType::BinaryOp0;
    break;
  case State::Assignment:
    switch (first_character) {
    case '<':
    case '>':
    case '!':
    case '=':
    case '~':
    case '?':
      break;
    default:
      result = TokenType::BinaryOp1;
    }
    break;
  case State::Equal:
  case State::Colon:
  case State::ColonColon:
  case State::Dot:
    return TokenType::TokenTypeLen;
  case State::Minus:
    if (is_digit(ctx.lookahead())) {
      return TokenType::TokenTypeLen;
    }
    break;
  default:
    break;
  }

  if (immediate) {
    return result;
  }

  switch (ctx.lookahead()) {
  case ' ':
  case '\n':
  case '\r':
    break;
  default:
    result = TokenType::UnaryOp;
  }

  return result;
}

/// Lexer for binary operators.
///
/// @param ctx - The context to scan from.
/// @param immediate - Whether the lexer was called before any spaces were
/// scanned.
bool lex(Context& ctx, bool immediate)
{
  if (!ctx.all_valid(BinaryOps) && !ctx.any_valid(UnaryOps)) {
    return false;
  }

  bool is_sigil = ctx.lookahead() == '@';
  bool is_dot = ctx.lookahead() == '.';
  auto result = scan_operator(ctx, immediate);

  if (result == TokenType::TokenTypeLen) {
    if (is_dot) {
      TRY_LEXN(ctx, lex_inline_layout, true);
    }
    return false;
  }

  if (!ctx.all_valid(BinaryOps) || result == TokenType::UnaryOp) {
    result = is_sigil ? TokenType::SigilOp : TokenType::UnaryOp;
  }

#ifdef TREE_SITTER_INTERNAL_BUILD
  if (getenv("TREE_SITTER_DEBUG")) {
    cerr << "lex_nim: operator final classification: " << (int)result << '\n';
    cerr << "lex_nim: binary valid: " << ctx.all_valid(BinaryOps) << '\n';
    cerr << "lex_nim: unary valid: " << ctx.any_valid(UnaryOps) << '\n';
  }
#endif

  if (!ctx.valid(result)) {
    return false;
  }

  ctx.mark_end();
  return ctx.finish(result);
}

}  // namespace operators

namespace comment {
enum class Marker { Invalid, LineComment, BlockComment, BlockDocComment };

Marker start_marker(Context& ctx)
{
  switch (ctx.lookahead()) {
  case '#':
    switch (ctx.consume()) {
    case '#':
      if (ctx.consume() == '[') {
        return Marker::BlockDocComment;
      }
      return Marker::LineComment;
    case '[':
      return Marker::BlockComment;
    }
    return Marker::LineComment;
  default:
    return Marker::Invalid;
  }
}

bool consume_end_marker(Context& ctx, Marker type)
{
  switch (type) {
  case Marker::BlockComment:
  case Marker::BlockDocComment:
    if (ctx.lookahead() != ']') {
      return false;
    }
    if (ctx.consume() != '#') {
      return false;
    }
    if (type == Marker::BlockComment) {
      ctx.consume();
      return true;
    }
    if (ctx.consume() != '#') {
      return false;
    }
    ctx.consume();
    return true;
  default:
    return false;
  }
}

bool handle_line_comment(Context& ctx)
{
  while (!ctx.eof()) {
    switch (ctx.lookahead()) {
    case '\n':
    case '\r':
      return ctx.finish(TokenType::Comment);
    }
    ctx.consume();
  }
  return ctx.finish(TokenType::Comment);
}

bool lex(Context& ctx)
{
  if (!ctx.valid(TokenType::Comment)) {
    return false;
  }

  bool long_doc = false;
  switch (start_marker(ctx)) {
  case Marker::LineComment:
    return handle_line_comment(ctx);
  case Marker::BlockDocComment:
    long_doc = true;
    [[fallthrough]];
  case Marker::BlockComment:
    break;
  default:
    return false;
  }

  uint32_t nesting = 0;
  while (!ctx.eof()) {
    const auto last_state = ctx.counter();

    switch (start_marker(ctx)) {
    case Marker::BlockComment:
    case Marker::BlockDocComment:
      nesting++;
#ifdef TREE_SITTER_INTERNAL_BUILD
      if (getenv("TREE_SITTER_DEBUG")) {
        cerr << "lex_nim: block comment nest level: " << nesting << '\n';
      }
#endif
      break;
    default:
      break;
    }
    const auto want_end = nesting > 0 || !long_doc ? Marker::BlockComment
                                                   : Marker::BlockDocComment;

    if (consume_end_marker(ctx, want_end)) {
#ifdef TREE_SITTER_INTERNAL_BUILD
      if (getenv("TREE_SITTER_DEBUG")) {
        cerr << "lex_nim: block comment terminate nest level: " << nesting
             << '\n';
      }
#endif
      if (nesting == 0) {
        ctx.state().set_flag(Flag::NoImmediates);
        return ctx.finish(TokenType::Comment);
      }
      nesting--;
    }

    if (last_state == ctx.counter()) {
      ctx.consume();
    }
  }

  return false;
}
}  // namespace comment

namespace string_lex {
constexpr auto StringTokens = make_valid_symbols(
    {TokenType::StringContent, TokenType::RawStringContent,
     TokenType::LongStringContent});
constexpr auto StringStartTokens = make_valid_symbols(
    {TokenType::ImmediateStringStart, TokenType::ImmediateLongStringStart});
constexpr auto RawStringType = make_valid_symbols(
    {TokenType::LongStringContent, TokenType::RawStringContent});

bool handle_string_quote(Context& ctx)
{
  if (ctx.lookahead() != '"' || !ctx.any_valid(RawStringType)) {
    return false;
  }

  ctx.consume();
  if (ctx.valid(TokenType::RawStringContent)) {
    if (ctx.lookahead() == '"') {
      ctx.consume();
      return ctx.finish(TokenType::RawStringContent);
    }

    return false;
  }

  if (ctx.valid(TokenType::LongStringContent)) {
    uint8_t count = 1;
    while (ctx.lookahead() == '"' && count < 3) {
      ctx.advance();
      count++;
    }

    if (count < 3 || ctx.lookahead() == '"') {
      return ctx.finish(TokenType::LongStringContent);
    }
    return false;
  }

  return false;
}

bool lex_string_start(Context& ctx)
{
  if (!ctx.any_valid(StringStartTokens) ||
      ctx.state().test_flag(Flag::NoImmediates) || ctx.lookahead() != '"') {
    return false;
  }

  ctx.consume();
  if (ctx.valid(TokenType::ImmediateLongStringStart)) {
    uint8_t count = 1;
    while (ctx.lookahead() == '"' && count < 3) {
      ctx.advance();
      count++;
    }
    if (count == 3) {
      ctx.mark_end();
      return ctx.finish(TokenType::ImmediateLongStringStart);
    }
  }

  return ctx.finish(TokenType::ImmediateStringStart);
}

bool lex(Context& ctx)
{
  if (!ctx.any_valid(StringTokens) || ctx.error()) {
    return false;
  }

  TRY_LEX(ctx, handle_string_quote);
  bool has_content = false;
  // NOLINTBEGIN(*-avoid-goto)
  while (!ctx.eof()) {
    switch (ctx.lookahead()) {
    case '\n':
    case '\r':
      if (!ctx.valid(TokenType::LongStringContent)) {
        goto loop_break;
      }
      [[fallthrough]];
    case '\\':
      if (!ctx.any_valid(RawStringType)) {
        goto loop_break;
      }
      break;
    case '"':
      goto loop_break;
    }

    has_content = true;
    ctx.consume();
  }
  // NOLINTEND(*-avoid-goto)

loop_break:
  return has_content && ctx.finish(
                            ctx.valid(TokenType::LongStringContent)
                                ? TokenType::LongStringContent
                            : ctx.valid(TokenType::RawStringContent)
                                ? TokenType::RawStringContent
                                : TokenType::StringContent);
}
}  // namespace string_lex

constexpr auto ImmediateTokens = make_valid_symbols(
    {TokenType::ImmediateParenOpen, TokenType::ImmediateBracketOpen,
     TokenType::ImmediateCurlyOpen, TokenType::ImmediateStringStart,
     TokenType::ImmediateLongStringStart, TokenType::StringContent,
     TokenType::LongStringContent, TokenType::RawStringContent});

void skip_underscore(Context& ctx)
{
  if (ctx.lookahead() == '_') {
    ctx.advance();
  }
}

bool lex_keyword(Context& ctx)
{
  constexpr ValidSymbols keywords = make_valid_symbols(
      {TokenType::Elif, TokenType::Else, TokenType::Except, TokenType::Finally,
       TokenType::Of, TokenType::Do});

  if (!ctx.any_valid(keywords)) {
    return false;
  }

// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define CASE_CHAR(chr) \
chr:                   \
  case to_upper(chr)

// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define NEXT_OR_FAIL(chr)      \
  do {                         \
    ctx.advance();             \
    skip_underscore(ctx);      \
    switch (ctx.lookahead()) { \
    case CASE_CHAR(chr):       \
      break;                   \
    default:                   \
      return false;            \
    }                          \
  } while (false)

// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define CONTINUE_ON(cond) \
  if (!(cond)) {          \
    return false;         \
  }

// NOLINTNEXTLINE(cppcoreguidelines-macro-usage)
#define FINISH_IF_END(token)              \
  do {                                    \
    ctx.advance();                        \
    if (is_identifier(ctx.lookahead())) { \
      return false;                       \
    }                                     \
    ctx.mark_end();                       \
    return ctx.finish(token);             \
  } while (false)

  if (ctx.lookahead() == 'e' &&
      ctx.any_valid(make_valid_symbols(
          {TokenType::Else, TokenType::Elif, TokenType::Except}))) {
    ctx.advance();
    skip_underscore(ctx);
    switch (ctx.lookahead()) {
    case CASE_CHAR('l'):
      CONTINUE_ON(ctx.any_valid(
          make_valid_symbols({TokenType::Else, TokenType::Elif})));
      ctx.advance();
      skip_underscore(ctx);
      switch (ctx.lookahead()) {
      case CASE_CHAR('s'):
        CONTINUE_ON(ctx.valid(TokenType::Else));
        NEXT_OR_FAIL('e');
        FINISH_IF_END(TokenType::Else);

      case CASE_CHAR('i'):
        CONTINUE_ON(ctx.valid(TokenType::Elif));
        NEXT_OR_FAIL('f');
        FINISH_IF_END(TokenType::Elif);
      }

      return false;
    case CASE_CHAR('x'):
      CONTINUE_ON(ctx.valid(TokenType::Except));
      NEXT_OR_FAIL('c');
      NEXT_OR_FAIL('e');
      NEXT_OR_FAIL('p');
      NEXT_OR_FAIL('t');
      FINISH_IF_END(TokenType::Except);
    }
  }

  if (ctx.lookahead() == 'f' && ctx.valid(TokenType::Finally)) {
    NEXT_OR_FAIL('i');
    NEXT_OR_FAIL('n');
    NEXT_OR_FAIL('a');
    NEXT_OR_FAIL('l');
    NEXT_OR_FAIL('l');
    NEXT_OR_FAIL('y');
    FINISH_IF_END(TokenType::Finally);
  }

  if (ctx.lookahead() == 'o' && ctx.valid(TokenType::Of) &&
      ctx.state().test_flag(Flag::AfterNewline)) {
    NEXT_OR_FAIL('f');
    FINISH_IF_END(TokenType::Of);
  }

  if (ctx.lookahead() == 'd' && ctx.valid(TokenType::Do)) {
    NEXT_OR_FAIL('o');
    FINISH_IF_END(TokenType::Do);
  }

  return false;

#undef CASE_CHAR
#undef CONTINUE_ON
#undef NEXT_OR_FAIL
#undef FINISH_IF_END
}

bool lex_indent(Context& ctx)
{
  if (ctx.lookahead() == '#' || ctx.state().layout_stack.empty()) {
    return false;
  }

  const auto line_indent = ctx.state().line_indent;

  if (line_indent == InvalidIndent) {
#ifdef TREE_SITTER_INTERNAL_BUILD
    if (getenv("TREE_SITTER_DEBUG")) {
      cerr << "lex_nim: invalid indentation reached\n";
    }
#endif
    return false;
  }

  const int32_t current_layout = ctx.state().layout_stack.back();

  if (ctx.state().test_flag(Flag::AfterNewline) &&
      ctx.valid(TokenType::LayoutStart) && current_layout < line_indent) {
    ctx.state().layout_stack.push_back(line_indent);
    ctx.mark_end();
    ctx.state().reset_flag(Flag::AfterNewline);
    return ctx.finish(TokenType::LayoutStart);
  }

  if (ctx.valid(TokenType::LayoutEmpty) &&
      ctx.state().test_flag(Flag::AfterNewline) &&
      current_layout == line_indent) {
    ctx.mark_end();
    return ctx.finish(TokenType::LayoutEmpty);
  }

  if (ctx.valid(TokenType::LayoutTerminator)) {
    if (ctx.state().test_flag(Flag::AfterNewline) &&
        current_layout >= line_indent) {
      ctx.mark_end();
      if (current_layout == line_indent && lex_keyword(ctx)) {
        return true;
      }
      ctx.state().reset_flag(Flag::AfterNewline);
      return ctx.finish(TokenType::LayoutTerminator);
    }
  }

  if (ctx.valid(TokenType::LayoutEnd) && ctx.state().layout_stack.size() > 1) {
    if (current_layout > line_indent || ctx.eof()) {
      ctx.state().set_flag(Flag::AfterNewline);
      ctx.state().layout_stack.pop_back();
      ctx.mark_end();
      return ctx.finish(TokenType::LayoutEnd);
    }
  }

  if (current_layout > line_indent && !ctx.eof()) {
    ctx.mark_end();
    return ctx.finish(TokenType::InvalidLayout);
  }

  return false;
}

size_t scan_spaces(Context& ctx, bool force_update = false)
{
  bool update_indent = force_update;
  uint8_t indent = 0;
  size_t spaces = 0;
  while (true) {
    // Need goto to break out of loop
    // NOLINTBEGIN(*-avoid-goto)
    switch (ctx.lookahead()) {
    case ' ':
      indent += (int)(indent != InvalidIndent);
      spaces++;
      ctx.advance(true);
      break;
    case '\n':
    case '\r':
      update_indent = true;
      indent = 0;
      spaces++;
      ctx.advance(true);
      break;
    case '\0':
      if (ctx.eof()) {
        update_indent = true;
        indent = 0;
      }
      goto loop_end;
    default:
      goto loop_end;
    }
    // NOLINTEND(*-avoid-goto)
  }
loop_end:
  if (update_indent) {
    ctx.state().line_indent = indent;
    ctx.state().set_flag(Flag::AfterNewline);
  }

  return spaces;
}

bool lex_init(Context& ctx)
{
  if (!ctx.state().layout_stack.empty()) {
    return false;
  }

  scan_spaces(ctx, true);
  TRY_LEX(ctx, comment::lex);

  ctx.mark_end();
  ctx.state().layout_stack.push_back(ctx.state().line_indent);
  return ctx.finish(TokenType::Spaces);
}

bool lex_immediates(Context& ctx)
{
  if (!ctx.any_valid(ImmediateTokens) ||
      ctx.state().test_flag(Flag::NoImmediates)) {
    return false;
  }

  TRY_LEX(ctx, string_lex::lex_string_start);

  if (ctx.lookahead() == '(' && ctx.valid(TokenType::ImmediateParenOpen)) {
    ctx.consume();
    return ctx.finish(TokenType::ImmediateParenOpen);
  }
  if (ctx.lookahead() == '[' && ctx.valid(TokenType::ImmediateBracketOpen)) {
    ctx.consume();
    return ctx.finish(TokenType::ImmediateBracketOpen);
  }
  if (ctx.lookahead() == '{' && ctx.valid(TokenType::ImmediateCurlyOpen)) {
    ctx.consume();
    if (ctx.lookahead() == '.') {
      return false;
    }
    return ctx.finish(TokenType::ImmediateCurlyOpen);
  }
  return false;
}

bool lex_main(Context& ctx)
{
  TRY_LEX(ctx, lex_init);

  TRY_LEX(ctx, lex_immediates);
  TRY_LEX(ctx, string_lex::lex);
  TRY_LEXN(ctx, operators::lex, true);

  auto spaces = scan_spaces(ctx);
  ctx.mark_end();

  TRY_LEX(ctx, comment::lex);
  TRY_LEX(ctx, lex_indent);
  TRY_LEXN(ctx, operators::lex, false);
  TRY_LEX(ctx, lex_keyword);
  TRY_LEX(ctx, lex_inline_layout);

  if (spaces > 0 && !ctx.state().test_flag(Flag::NoImmediates)) {
    ctx.state().set_flag(Flag::NoImmediates);
    return ctx.finish(TokenType::Spaces);
  }

  return false;
}

}  // namespace

extern "C" {
void* tree_sitter_nim_external_scanner_create() noexcept { return new State{}; }

void tree_sitter_nim_external_scanner_destroy(void* payload) noexcept
{
  auto* state = static_cast<State*>(payload);
  // We own this and the code does not do anything to justify pulling
  // unique_ptr in.
  //
  // NOLINTNEXTLINE(*-owning-memory)
  delete state;
}

unsigned tree_sitter_nim_external_scanner_serialize(
    void* payload, uint8_t* buffer) noexcept
{
  auto* state = static_cast<State*>(payload);
  return state->serialize(buffer);
}

void tree_sitter_nim_external_scanner_deserialize(
    void* payload, const uint8_t* buffer, unsigned length) noexcept
{
  auto* state = static_cast<State*>(payload);
  state->deserialize(buffer, length);
}

bool tree_sitter_nim_external_scanner_scan(
    void* payload, TSLexer* lexer, const bool* valid_symbols) noexcept
{
  Context ctx{lexer, static_cast<State*>(payload), valid_symbols};

#ifdef TREE_SITTER_INTERNAL_BUILD
  if (getenv("TREE_SITTER_DEBUG")) {
    cerr << "lex_nim: start state: " << ctx.state() << '\n';
  }
#endif

  if (lex_main(ctx)) {
    return true;
  }

  if (!ctx.eof() && !ctx.any_valid(ImmediateTokens)) {
    bool commit = false;
    if (ctx.state().test_flag(Flag::AfterNewline)) {
#ifdef TREE_SITTER_INTERNAL_BUILD
      if (getenv("TREE_SITTER_DEBUG")) {
        cerr << "lex_nim: resetting after newline flag\n";
      }
#endif
      ctx.state().reset_flag(Flag::AfterNewline);
      commit = true;
    }
    if (ctx.state().test_flag(Flag::NoImmediates)) {
#ifdef TREE_SITTER_INTERNAL_BUILD
      if (getenv("TREE_SITTER_DEBUG")) {
        cerr << "lex_nim: resetting no immediate flag\n";
      }
#endif
      ctx.state().reset_flag(Flag::NoImmediates);
      commit = true;
    }

    if (commit) {
      return ctx.finish(TokenType::Spaces);
    }
  }

  return false;
}
}
