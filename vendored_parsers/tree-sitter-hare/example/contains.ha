use bytes;
use encoding::utf8;

// Returns true if a string contains a rune or a sub-string.
export fn contains(haystack: str, needle: (str | rune)) bool = match (needle) {
	s: str  => bytes::contains(toutf8(haystack), toutf8(s)),
	r: rune => bytes::contains(toutf8(haystack), utf8::encoderune(r)),
};

@test fn contains() void = {
	assert(contains("hello world", "hello"));
	assert(contains("hello world", "world"));
	assert(contains("hello world", ""));
	assert(!contains("hello world", "foobar"));
};
