/*
 * Scanner (lexer) for D code for use by Tree-Sitter.
 *
 * Copyright 2022 Garrett D'Amore
 *
 * Distributed under the MIT License.
 * (See accompanying file LICENSE.txt or https://opensource.org/licenses/MIT)
 * SPDX-License-Identifier: MIT
 */
#include "tree_sitter/parser.h"
#include <assert.h>
#include <ctype.h>
#include <wctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// NB: It is very important that two things are true.
// First, this must match the externals in the grammar.js.
// Second, symbols and keywords must appear with least
// specific matches in front of more specific matches.
enum TokenType {
	END_FILE,
	COMMENT,
	DIRECTIVE, // # <to end of line>
	SHEBANG,   // #!
	L_INT,
	L_FLOAT,
	L_CHAR,   // 'c', or '\x12', or similar
	L_STRING, // string literal (all forms)
	NOT_IN,
	NOT_IS,
};

static bool
is_eol(int c)
{
	return ((c == '\n') || (c == '\r') || (c == 0x2028) || (c == 0x2029));
}

// This just looks for a valid escape sequence.
// If it passes, it advances just past the escape and returns true.
// Do not use this unless you are certainly in escape context.
// The current lookahead should be \.  If this returns true
// the the lexer will be pointing at the next character after
// the escape sequence.
static bool
match_escape(TSLexer *lexer)
{
	assert(lexer->lookahead == '\\');

	// now we parsing an escape
	lexer->advance(lexer, false);
	switch (lexer->lookahead) {
	case '\'':
	case '"':
	case '?':
	case '\\':
	case 'a':
	case 'b':
	case 'f':
	case 'n':
	case 'r':
	case 't':
	case 'v':
		lexer->advance(lexer, false);
		return (true);
	case 'x':
		for (int i = 0; i < 2; i++) { // expect two hex digits
			lexer->advance(lexer, false);
			if (!(lexer->lookahead >= 0 && lexer->lookahead <= 127) ||
			    !iswxdigit(lexer->lookahead)) {
				return (false);
			}
		}
		lexer->advance(lexer, false);
		return (true);

	case 'u':
		for (int i = 0; i < 4; i++) {
			lexer->advance(lexer, false);
			if (!(lexer->lookahead >= 0 && lexer->lookahead <= 127) ||
			    !iswxdigit(lexer->lookahead)) {
				return (false);
			}
		}
		lexer->advance(lexer, false);
		return (true);

	case 'U':
		for (int i = 0; i < 8; i++) {
			lexer->advance(lexer, false);
			if (!(lexer->lookahead >= 0 && lexer->lookahead <= 127) ||
			    !iswxdigit(lexer->lookahead)) {
				return (false);
			}
		}
		lexer->advance(lexer, false);
		return (true);

	case '0': // octal
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
		for (int i = 0; i < 3; i++) {
			lexer->advance(lexer, false);
			if (lexer->lookahead < '0' || lexer->lookahead > '7')
				break;
		}
		return (true);

	case '&': // HTML entity - we don't validate the names
		for (int i = 0; i < 64; i++) { // no names longer than this
			lexer->advance(lexer, false);
			if (lexer->lookahead == ';') {
				if (i < 2) {
					// need at least 2 characters in an
					// entity name
					return (false);
				}
				break;
			}
			if (!(lexer->lookahead >= 0 && lexer->lookahead <= 127) ||
			    !iswalnum(lexer->lookahead)) {
				return (false);
			}
		}
		lexer->advance(lexer, true);
		return (true);

	case '`':
	default:
		return (false);
	}
}

static bool
match_char_literal(TSLexer *lexer)
{
	assert(lexer->lookahead == '\'');
	lexer->advance(lexer, false);
	if (lexer->lookahead == '\'') {
		// syntax error
		return (false);
	}
	if (lexer->lookahead != '\\') {
		// simple unescaped character
		lexer->advance(lexer, false);
		if (lexer->lookahead != '\'') {
			return (false); // closing single quote missing
		}
		lexer->advance(lexer, false); // to get the closer
		lexer->mark_end(lexer);
		lexer->result_symbol = L_CHAR;
		return (true);
	}

	if ((!match_escape(lexer)) || (lexer->lookahead != '\'')) {
		return (false);
	}
	lexer->advance(lexer, false);
	lexer->mark_end(lexer);
	lexer->result_symbol = L_CHAR;
	return (true); // missing closing quote
}

// this looks for the optional suffix closer on various
// string literals (c, d, or w).  The assumption is that
// the caller will have already marked the end, and we
// can safely look ahead a little bit more.  It always
// succeeds because there is no case where we can fail --
// we simply either extend the match for the string, or we don't.
static void
match_string_suffix(TSLexer *lexer)
{
	int c = lexer->lookahead;
	if ((c == 'c') || (c == 'd') || (c == 'w')) {
		// special string form
		// advance so we include the suffix
		lexer->advance(lexer, false);
	}
	// and mark the end (regardless whether we did or did not)
	lexer->mark_end(lexer);
}

static bool
match_dq_string(TSLexer *lexer)
{
	int c = lexer->lookahead;
	assert(c == '"');

	lexer->advance(lexer, false);

	while ((c = lexer->lookahead) != 0) {

		if (c == '\\') {
			if (!match_escape(lexer)) {
				return (false);
			}
			continue;
		}

		if (c == '"') {
			// end of string!
			lexer->result_symbol = L_STRING;
			lexer->advance(lexer, false);
			match_string_suffix(lexer);
			return (true);
		}
		lexer->advance(lexer, false);
	}
	// unterminated
	return (false);
}

static bool
match_raw_string(TSLexer *lexer, int quote, int token)
{
	int c = lexer->lookahead;
	assert(c == quote);
	lexer->advance(lexer, false); // skip over starting quote
	while ((c = lexer->lookahead) != 0) {
		if (c == quote) {
			lexer->advance(lexer, false);
			lexer->result_symbol = token;
			match_string_suffix(lexer);
			return (true);
		}
		lexer->advance(lexer, false);
	}
	// unterminated
	return (false);
}

static bool
match_delimited_string(TSLexer *lexer, int start, int end)
{
	int  c;
	int  nest  = 0;
	bool first = true;
	lexer->advance(lexer, false); // skip opener
	while ((c = lexer->lookahead) != 0) {
		if (c == start && start != 0) {
			// nesting, increase the nest level
			nest++;
		}
		if (c == end) {
			if (nest > 0) {
				nest--;
			} else if (!first) {
				lexer->advance(lexer, false);
				if ((c = lexer->lookahead) != '"') {
					// do *not* advance, we already did
					// this ensures e.g. }}" will work
					continue;
				}
				lexer->advance(lexer, false);
				lexer->result_symbol = L_STRING;
				match_string_suffix(lexer);
				return (true);
			}
		}
		first = false;
		lexer->advance(lexer, false);
	}
	return (false);
}

static bool
match_heredoc_string(TSLexer *lexer)
{
	// this is an arbitrary, but reasonable limit
	// no identifiers longer than this
	int    identifier[256 + 2]; // +2 for closing " and null
	size_t i = 0;
	size_t j;
	int    c;

	// get the delimiter
	while (i < (sizeof(identifier) - 2)) {
		c = lexer->lookahead;
		// technically should not start with a digit, but we allow
		if (is_eol(c) || ((!iswalnum(c)) && (c != '_'))) {
			break;
		}
		identifier[i++] = c;
		lexer->advance(lexer, false);
	}
	if (i == 0) {
		return (false);
	}
	// inject the closing quote at the end of the identifier
	// this makes our logic below simpler
	identifier[i++] = '"';
	identifier[i]   = 0;

	while ((c = lexer->lookahead) != 0) {
		while ((!is_eol(c)) && (c != 0)) {
			lexer->advance(lexer, false);
			c = lexer->lookahead;
		}
		lexer->advance(lexer, false); // advance past the newline

		j = 0;
		while (((c = lexer->lookahead) != 0) && (j < i)) {
			if (c != identifier[j]) {
				// no match
				break;
			}
			lexer->advance(lexer, false);
			j++;
		}
		if (j == i) {
			// skip the quote
			match_string_suffix(lexer);
			lexer->result_symbol = L_STRING;
			return (true);
		}
	}
	return (false);
}

// NB: this scans ahead aggressively, so it cannot
// be used if other symbols start with underscore.
// As of right now, only __EOF__ needs special lexer support.
static bool
match_eof(TSLexer *lexer)
{
	const char *want = "__EOF__";
	int         i    = 0;
	int         l    = strlen(want);
	int         c;

	if ((c = lexer->lookahead) != '\x1a') { // 0x1A is always EOF
		for (i = 0; i < l; i++) {
			if (lexer->lookahead != want[i]) {
				return (false);
			}
			lexer->advance(lexer, false);
			c = lexer->lookahead;
		}
		if (iswalnum(c) || (c == '_') || (c > 0x7f && !is_eol(c))) {
			return (false);
		}
	}
	// eat entire file
	while (lexer->lookahead != 0) {
		lexer->advance(lexer, false);
	}

	lexer->mark_end(lexer);
	lexer->result_symbol = END_FILE;
	return (true);
}

static bool
match_hash_or_shebang(TSLexer *lexer, const bool *valid)
{
	int c = lexer->lookahead;
	assert(c == '#');
	if (valid[SHEBANG] || valid[DIRECTIVE]) {
		lexer->advance(lexer, false);
		c = lexer->lookahead;
		if (valid[SHEBANG] && c == '!') {
			lexer->result_symbol = SHEBANG;
		} else if (valid[DIRECTIVE]) {
			lexer->result_symbol = DIRECTIVE;
		} else {
			return (false);
		}
		while ((!is_eol(c)) && (c)) {
			lexer->advance(lexer, false);
			c = lexer->lookahead;
		}
		// consume the newline
		lexer->advance(lexer, false);
		lexer->mark_end(lexer);
		return (true);
	} else {
		// not sure there are any parse contexts where this is invalid
		// actually!
		assert(0);
		return (false);
	}
}

static bool
match_line_comment(TSLexer *lexer, const bool *valid)
{
	int c = lexer->lookahead;
	assert(c == '/');
	if (!valid[COMMENT]) {
		return (false);
	}
	while ((!is_eol(c)) && (c)) {
		lexer->advance(lexer, false);
		c = lexer->lookahead;
	}
	lexer->mark_end(lexer);
	lexer->result_symbol = COMMENT;
	return (true);
}

static bool
match_block_comment(TSLexer *lexer, const bool *valid)
{
	int c = lexer->lookahead;
	assert(c == '*');

	if (!valid[COMMENT]) {
		return (false);
	}
	int state = 0;
	while (c != 0) {
		lexer->advance(lexer, false);
		c = lexer->lookahead;
		switch (state) {
		case 0:
			if (c == '*') {
				state = 1;
			}
			break;
		case 1:
			if (c == '/') {
				// closing comment, hurrah!
				lexer->advance(lexer, false);
				lexer->mark_end(lexer);
				lexer->result_symbol = COMMENT;
				return (true);
			} else if (c != '*') {
				state = 0;
			}
			break;
		}
	}

	return (false); // unterminated
}

static bool
match_nest_comment(TSLexer *lexer, const bool *valid)
{
	int c    = lexer->lookahead;
	int nest = 1;
	int prev = 0;
	assert(c == '+');

	if (!valid[COMMENT]) {
		return (false);
	}

	while (!lexer->eof(lexer)) {
		lexer->advance(lexer, false);
		c = lexer->lookahead;
		switch (prev) {
		case '/':
			if (c == '+') {
				nest++;
				c = 0;
			}
			break;
		case '+':
			if (c == '/') {
				nest--;
				if (nest == 0) {
					// outtermost closing comment, hurrah!
					lexer->advance(lexer, false);
					lexer->mark_end(lexer);
					lexer->result_symbol = COMMENT;
					return (true);
				}
				c = 0;
			}
		}
		prev = c;
	}
	return (false);
}

static bool
match_number_suffix(TSLexer *lexer, const bool *valid, bool is_float)
{
	int  c;
	bool seen_l = false;
	bool seen_i = false;
	bool seen_u = false;
	;
	bool seen_f = false;
	int  tok    = 0;
	bool done   = false;

	while (((c = lexer->lookahead) != 0) && !done) {
		switch (c) {
		case 'u':
		case 'U': // we can treat both u and U identically
			if (seen_u || seen_i || seen_f || is_float) {
				return (false);
			}
			seen_u = true;
			tok    = L_INT;
			break;

		case 'f':
		case 'F':
			if (seen_u || seen_f || seen_i) {
				return (false);
			}
			seen_f = true;
			tok    = L_FLOAT;
			break;

		case 'i':
			// i means its an imaginary floating point, and it
			// *must* be the last thing seen.  (It's also
			// deprecated.)
			if (seen_i || seen_u) {
				return (false);
			}
			tok    = L_FLOAT;
			seen_i = true;
			break;

		case 'L':
			// L can mean long, or it can mean real
			// it conflicts with f, F, and must appear before i.
			if (seen_l || seen_f || seen_i) {
				return (false);
			}
			seen_l = true;
			break;

		default:
			done = true;
			break;
		}
		if (!done) {
			lexer->advance(lexer, false);
		}
	}

	// what follows the suffix must *NOT* be digit or a number.
	if (iswalnum(c) || (c > 0x7f && !is_eol(c))) {
		return (false);
	}
	if (is_float) {
		tok = L_FLOAT;
	}
	if (valid[L_INT] && tok != L_FLOAT) {
		lexer->result_symbol = L_INT;
		lexer->mark_end(lexer);
		return (true);
	}
	if (valid[L_FLOAT] && tok != L_INT) {
		lexer->result_symbol = L_FLOAT;
		lexer->mark_end(lexer);
		return (true);
	}
	return (false);
}

static bool
match_number(TSLexer *lexer, const bool *valid)
{
	// starting item can be a digit or .
	// if it is '.', then it can be the start of a number,
	// the "." by itself, or "..", or "...".  We handle
	// the forms here in this one place to make it easy.
	// Note that there are ambiguities in the way DMD handles
	// decimal points.  For example, 0..stringof is illegal,
	// but so is 00.stringof, but 0.stringof is ok and so is 00.
	// Some of this feels like grammar bugs in DMD's implementation
	// and we have not elected to be bug-for-bug compatible.
	int  c = lexer->lookahead;
	int  next;
	int  prev;
	bool is_hex    = false;
	bool is_bin    = false;
	bool has_digit = false;
	bool has_dot   = false;
	bool in_exp    = false;

	if (c == '.') {
		lexer->advance(lexer, false);
		c = lexer->lookahead;

		// at this point, we either have a digit, or
		// something that is not a valid number (and thus the sole dot
		// might apply from above).  Note that underscores are *not*
		// permitted as the first character after the decimal point.
		if (!iswdigit(c)) {
			return (false);
		}
		has_dot = true;

	} else if (c == '0') {
		// the next value can be b, B, x, X indicating a base,
		// a dot (making this a floating point number) or a digit or an
		// underscore. if it is anything else, then we have just the
		// value 0 (but it might have a suffix -- for example 0f)
		lexer->advance(lexer, false);
		c = lexer->lookahead;
		switch (c) {
		case 'b':
		case 'B':
			is_bin = true;
			lexer->advance(lexer, false);
			break;
		case 'x':
		case 'X':
			is_hex = true;
			lexer->advance(lexer, false);
			break;
		default:
			has_digit = true;
			break;
		}
	}

	if (!(valid[L_INT] || valid[L_FLOAT])) {
		return (false);
	}

	bool done = false;
	while (((next = lexer->lookahead) != 0) && (!done)) {
		prev = c;
		c    = next;
		if ((c > 0x7f) || iswspace(c) || (c == ';')) {
			// optimization: not a valid number, that ends the
			// sequence
			break;
		}
		if ((is_bin) && ((c == '0') || (c == '1'))) {
			lexer->advance(lexer, false);
			lexer->mark_end(lexer);
			has_digit = true;
			continue;
		} else if (iswdigit(c) ||
		    (is_hex && (!in_exp) && (iswxdigit(c)))) {
			lexer->advance(lexer, false);
			lexer->mark_end(lexer);
			has_digit = true;
			continue;
		}

		switch (c) {
		case '.':
			// if we already have a decimal, or we haven't yet
			// collected one, or we are in the exponent, then this
			// dot is not part of our number.  (If we haven't seen
			// a digit yet, then this will be a failed parse.)
			// also binary numbers don't support floating point.
			if (!has_digit || has_dot || in_exp || is_bin) {
				lexer->mark_end(lexer);
				done = true;
				break;
			}
			lexer->mark_end(lexer);
			lexer->advance(lexer, false);
			c = lexer->lookahead;
			// if the next character is a valid digit (note that
			// binary doesn't support this, then we're good
			if (iswdigit(c) || (is_hex && iswxdigit(c))) {
				has_dot = true;
				continue;
			}
			// look ahead to see if the next thing looks like a
			// property. if it does, then this is a property
			// lookup, otherwise we want to consume the dot and
			// make it a floating point number. Note that lone
			// trailing periods like 1. are nuts, but this is what
			// DMD does.
			if (iswalnum(c) || c == '_' || c == '.' ||
			    (c > 0x7f && !is_eol(c))) {
				// its something like ._property or somesuch
				// in that case we just want the original int,
				// without the period.
				lexer->result_symbol = L_INT;
				return (valid[L_INT]);
			}
			lexer->result_symbol = L_FLOAT;
			lexer->mark_end(lexer);
			return (valid[L_FLOAT]);

		case '_':
			// an embedded (or possibly trailing) underscore.
			lexer->advance(lexer, false);
			continue;

		case 'e':
		case 'E':
		case 'p':
		case 'P':
			if (in_exp || is_bin) {
				return (false);
			}
			if (is_hex && (c == 'e' || c == 'E')) {
				return (false);
			}
			if ((!is_hex) && (c == 'p' || c == 'P')) {
				return (false);
			}
			lexer->advance(lexer, false);
			c = lexer->lookahead;
			if ((c == '+') || (c == '-')) {
				lexer->advance(lexer, false);
			}
			has_digit = false; // so we need
			in_exp    = true;
			continue;

		default:
			done = true;
			break;
		}
	}
	if (!has_digit) {
		return (false);
	}
	return (match_number_suffix(lexer, valid, has_dot || in_exp));
}

static bool
match_not_in_is(TSLexer *lexer, const bool *valid)
{
	int c;
	int token;
	if (!valid[NOT_IN] && !valid[NOT_IS]) {
		return (false);
	}
	assert(lexer->lookahead == '!');
	lexer->advance(lexer, false);
	// eat intervening whitespace... usually there isn't any
	while ((c = lexer->lookahead) != 0) {
		if (!iswspace(c) && !is_eol(c)) {
			break;
		}
		lexer->advance(lexer, false);
	}

	if (lexer->lookahead != 'i') {
		return (false);
	}
	lexer->advance(lexer, false);
	switch (lexer->lookahead) {
	case 'n':
		token = NOT_IN;
		break;
	case 's':
		token = NOT_IS;
		break;
	default:
		return (false);
	}
	if (!valid[token]) {
		return (false);
	}
	lexer->advance(lexer, false);
	c = lexer->lookahead;
	if (iswalnum(c) || ((c > 0x7F) && (!is_eol(c)))) {
		return (false);
	}
	lexer->result_symbol = token;
	lexer->mark_end(lexer);
	return (true);
}

void *
tree_sitter_d_external_scanner_create()
{
	return (NULL);
}

void
tree_sitter_d_external_scanner_destroy(void *arg)
{
}

unsigned
tree_sitter_d_external_scanner_serialize(void *arg, char *buffer)
{
	return (0); // we are completely stateless! :-)
}

void
tree_sitter_d_external_scanner_deserialize(
    void *arg, const char *buffer, unsigned length)
{
}

bool
tree_sitter_d_external_scanner_scan(
    void *arg, TSLexer *lexer, const bool *valid)
{
	int c = lexer->lookahead;
	// consume whitespace -- we also skip newlines here
	while ((iswspace(c) || is_eol(c)) && (c)) {
		lexer->advance(lexer, true);
		c = lexer->lookahead;
	}

	if (lexer->eof(lexer)) { // in case we had ending whitespace
		return (false);
	}

	// either possibly __EOF__ or the special EOF character
	if ((c == '_') || (c == '\x1A')) {
		return (match_eof(lexer));
	}

	if (c == '.' || isdigit(c)) {
		return (match_number(lexer, valid));
	}

	// we have to treat !in and !is specially to recognize them
	// as tokens without fighting precedence rules.
	if (c == '!') {
		return (match_not_in_is(lexer, valid));
	}

	if (c == '\'') {
		return (valid[L_CHAR] ? match_char_literal(lexer) : false);
	}
	if (c == '"') { // double quoted string, always unambiguous
		return (valid[L_STRING] ? match_dq_string(lexer) : false);
	}

	if ((c == 'r') && (valid[L_STRING])) {
		lexer->advance(lexer, false);
		if (lexer->lookahead == '"') {
			return (match_raw_string(lexer, '"', L_STRING));
		}
		return (false);
	}

	if ((c == 'q') && (valid[L_STRING])) {
		lexer->advance(lexer, false);
		if (lexer->lookahead != '"') {
			return (false);
		}
		lexer->advance(lexer, false);
		switch ((c = lexer->lookahead)) {
		case '(':
			return (match_delimited_string(lexer, '(', ')'));
		case '[':
			return (match_delimited_string(lexer, '[', ']'));
		case '{':
			return (match_delimited_string(lexer, '{', '}'));
		case '<':
			return (match_delimited_string(lexer, '<', '>'));
		default:;
			if (iswalnum(c) || c == '_') {
				return (match_heredoc_string(lexer));
			}
			// non-nesting deliimted string
			return (match_delimited_string(lexer, 0, c));
		}
	}

	if (c == '`') { // raw string, also unambiguous
		return (valid[L_STRING]
		        ? match_raw_string(lexer, '`', L_STRING)
		        : false);
	}

	if (c == '#') {
		return (match_hash_or_shebang(lexer, valid));
	}

	if (c == '/') {
		// can be one of three comment forms, or /, or /=
		lexer->advance(lexer, false);
		c = lexer->lookahead;
		if (c == '/') {
			return (match_line_comment(lexer, valid));
		}
		if (c == '*') {
			return (match_block_comment(lexer, valid));
		}
		if (c == '+') {
			return (match_nest_comment(lexer, valid));
		}
		return (false);
	}

	return (false);
}
