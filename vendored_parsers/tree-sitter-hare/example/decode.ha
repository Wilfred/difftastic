use types;

fn toutf8(in: str) []u8 = *(&in: *[]u8);

// The state for the UTF-8 decoder.
export type decoder = struct {
	offs: size,
	src: []u8,
};

// Initializes a new UTF-8 decoder.
export fn decode(src: (str | []u8)) decoder = match (src) {
	s: str  => decoder { src = toutf8(s), ...  },
	b: []u8 => decoder { src = b, ...  },
};

// Indicates that more data is needed, i.e. that a partial UTF-8 sequence was
// encountered.
export type more = void;

// An error indicating that an invalid UTF-8 sequence was found.
export type invalid = void!;

// Returns the next rune from a decoder. If the slice ends with a complete UTF-8
// sequence, void is returned. If an incomplete sequence is encountered, more is
// returned. And if an invalid sequence is encountered, invalid is returned.
export fn next(d: *decoder) (rune | void | more | invalid) = {
	assert(d.offs <= len(d.src));
	if (d.offs == len(d.src)) {
		return;
	};

	// XXX: It would be faster if we decoded and measured at the same time.
	const n = utf8sz(d.src[d.offs]);
	if (n == types::SIZE_MAX) {
		return invalid;
	} else if (d.offs + n > len(d.src)) {
		return more;
	};
	let bytes = d.src[d.offs..d.offs+n];
	d.offs += n;

	let r = 0u32;
	if (bytes[0] < 128) {
		// ASCII
		return bytes[0]: u32: rune;
	};

	const mask = masks[n - 1];
	r = bytes[0] & mask;
	for (let i = 1z; i < len(bytes); i += 1) {
		r <<= 6;
		r |= bytes[i] & 0x3F;
	};
	return r: rune;
};

// Returns the previous rune from a decoder. If the slice starts with a complete UTF-8
// sequence, void is returned. If an incomplete sequence is encountered, more is
// returned. And if an invalid sequence is encountered, invalid is returned.
export fn prev(d: *decoder) (rune | void | more | invalid) = {
	if (d.offs == 0) {
		return;
	};

	let n = 0z;
	let r = 0u32;

	for (let i = 0z; i < d.offs; i += 1) {
		if ((d.src[d.offs - i - 1] & 0xC0) == 0x80) {
			let tmp: u32 = d.src[d.offs - i - 1] & 0x3F;
			r |= tmp << (i * 6): u32;
		} else {
			n = i + 1;
			let tmp: u32 = d.src[d.offs - i - 1] & masks[i];
			r |=  tmp << (i * 6): u32;
			break;
		};
	};
	if (n == 0) {
		return more;
	};
	d.offs -= n;
	if (n != utf8sz(d.src[d.offs])) {
		return invalid;
	};
	return r: rune;
};

@test fn decode() void = {
	const input: [_]u8 = [
		0xE3, 0x81, 0x93, 0xE3, 0x82, 0x93, 0xE3, 0x81,
		0xAB, 0xE3, 0x81, 0xA1, 0xE3, 0x81, 0xAF, 0x00,
	];
	const expected = ['こ', 'ん', 'に', 'ち', 'は', '\0'];
	let decoder = decode(input);
	for (let i = 0z; i < len(expected); i += 1) {
		match (next(&decoder)) {
			(invalid | more | void) => abort(),
			r: rune => assert(r == expected[i]),
		};
	};
	assert(next(&decoder) is void);
	assert(decoder.offs == len(decoder.src));
	for (let i = 0z; i < len(expected); i += 1) {
		match (prev(&decoder)) {
			(invalid | more | void) => abort(),
			r: rune => assert(r == expected[len(expected) - i - 1]),
		};
	};
	assert(prev(&decoder) is void);

	// TODO: Test more invalid sequences
	const invalid: [_]u8 = [0xA0, 0xA1];
	decoder = decode(invalid);
	assert(next(&decoder) is invalid);
	decoder.offs = 2;
	assert(prev(&decoder) is more);

	const incomplete: [_]u8 = [0xE3, 0x81];
	decoder = decode(incomplete);
	assert(next(&decoder) is more);
	decoder.offs = 2;
	assert(prev(&decoder) is invalid);
};

// Returns true if a given string or byte slice contains only valid UTF-8
// sequences. Note that Hare strings (str) are always valid UTF-8 - if this
// returns false for a str type, something funny is going on.
export fn valid(src: (str | []u8)) bool = {
	let decoder = decode(src);
	for (true) {
		match (next(&decoder)) {
			void    => return true,
			invalid => return false,
			more    => return false,
			rune    => void,
		};
	};
	abort();
};

// Returns the expected length of a UTF-8 character in bytes.
export fn utf8sz(c: u8) size = {
	for (let i = 0z; i < len(sizes); i += 1) {
		if (c & sizes[i].mask == sizes[i].result) {
			return sizes[i].octets;
		};
	};
	return types::SIZE_MAX;
};
