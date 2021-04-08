use encoding::utf8;
use types;

// Converts a byte slice into a string WITHOUT checking that the byte slice is a
// valid UTF-8 string.
export fn fromutf8_unsafe(in: []u8) str = {
	const s = types::string {
		data     = in: *[*]u8,
		length   = len(in),
		capacity = len(in),
	};
	return *(&s: *const str);
};

// Converts a byte slice into a string. Aborts if the bytes contain invalid
// UTF-8. To handle such an error without aborting, see
// [encoding::utf8::decode] instead.
export fn fromutf8(in: []u8) str = {
	let s = fromutf8_unsafe(in);
	assert(utf8::valid(s), "attempted to load invalid UTF-8 string");
	return s;
};

// Converts a byte slice into a string. If the slice contains invalid UTF-8
// sequences, void is returned instead.
export fn try_fromutf8(in: []u8) (str | utf8::invalid) = {
	let s = fromutf8_unsafe(in);
	if (!utf8::valid(s)) {
		return utf8::invalid;
	};
	return s;
};

// Converts a string to a UTF-8 slice.
export fn toutf8(in: str) []u8 = *(&in: *[]u8);

@test fn utf8() void = {
	assert(fromutf8([
		0x68, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x77, 0x6f, 0x72, 0x6c, 0x64,
	]) == "hello world");
	assert(fromutf8([]) == "");
};
