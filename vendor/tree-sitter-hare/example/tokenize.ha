use bytes;
use types;

// The state for a tokenizer.
export type tokenizer = bytes::tokenizer;

// Returns a tokenizer which yields sub-strings tokenized by a delimiter.
//
// 	let tok = strings::tokenize("hello, my name is drew", " ");
// 	assert(strings::next_token(tok) == "hello,");
// 	assert(strings::next_token(tok) == "my");
// 	assert(strings::next_token(tok) == "name");
// 	assert(strings::remaining_tokens(tok) == "is drew");
export fn tokenize(s: str, delim: str) tokenizer =
	bytes::tokenize(toutf8(s), toutf8(delim));

// Returns the next string from a tokenizer, and advances the cursor. Returns
// void if there are no tokens left.
export fn next_token(s: *tokenizer) (str | void) = {
	return match (bytes::next_token(s)) {
		b: []u8 => fromutf8(b),
		void => void,
	};
};

// Same as next_token(), but does not advance the cursor
export fn peek_token(s: *tokenizer) (str | void) = {
	return match (bytes::peek_token(s)) {
		b: []u8 => fromutf8(b),
		void => void,
	};
};

// Returns the remainder of the string associated with a tokenizer, without doing
// any further tokenization.
export fn remaining_tokens(s: *tokenizer) str = {
	return fromutf8(bytes::remaining_tokens(s));
};

@test fn tokenize() void = {
	let tok = tokenize("Hello, my name is drew", " ");
	match (next_token(&tok)) {
		s: str => assert(s == "Hello,"),
		void   => abort(),
	};

	match (next_token(&tok)) {
		s: str => assert(s == "my"),
		void   => abort(),
	};

	match (peek_token(&tok)) {
		s: str => assert(s == "name"),
		void   => abort(),
	};


	match (next_token(&tok)) {
		s: str => assert(s == "name"),
		void   => abort(),
	};

	assert(remaining_tokens(&tok) == "is drew");
	assert(peek_token(&tok) as str == "is");
	assert(remaining_tokens(&tok) == "is drew");

	tok = tokenize("foo", "foo");

	assert(peek_token(&tok) as str == "");
	assert(next_token(&tok) as str == "");

	assert(peek_token(&tok) as str == "");
	assert(next_token(&tok) as str == "");

	assert(peek_token(&tok) is void);
	assert(next_token(&tok) is void);

	tok = tokenize("", "foo");
	assert(peek_token(&tok) is void);
	assert(next_token(&tok) is void);
};

// Splits a string into tokens delimited by 'delim', returning a slice of up to
// N tokens. The caller must free this slice. The strings within the slice are
// borrowed from 'in', and needn't be freed - but should be [strings::dup_all]'d
// if they should outlive 'in'.
export fn splitN(in: str, delim: str, n: size) []str = {
	let toks: []str = alloc([]);
	let tok = tokenize(in, delim);
	for (let i = 0z; i < n - 1z; i += 1) {
		match (next_token(&tok)) {
			s: str => append(toks, s),
			void => return toks,
		};
	};
	append(toks, remaining_tokens(&tok));
	return toks;
};

// Splits a string into tokens delimited by 'delim'.  The caller must free the
// returned slice. The strings within the slice are borrowed from 'in', and
// needn't be freed - but must be [strings::dup_all]'d if they should outlive
// 'in'.
export fn split(in: str, delim: str) []str = splitN(in, delim, types::SIZE_MAX);

@test fn split() void = {
	const expected = ["Hello,", "my", "name", "is Drew"];
	const actual = splitN("Hello, my name is Drew", " ", 4z);
	assert(len(expected) == len(actual));
	for (let i = 0z; i < len(expected); i += 1) {
		assert(expected[i] == actual[i]);
	};

	const expected2 = ["Hello,", "my", "name", "is", "Drew"];
	const actual2 = split("Hello, my name is Drew", " ");
	assert(len(expected2) == len(actual2));
	for (let i = 0z; i < len(expected2); i += 1) {
		assert(expected2[i] == actual2[i]);
	};
};
