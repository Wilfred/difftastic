use encoding::utf8;

export type end = void;

fn utf8_byte_len_bounded(iter: *iterator, end: size) size = {
	let pos = 0z;
	for (let i = 0z; i < end; i += 1) {
		let r: rune = match (strings::next(iter)) {
			void => break,
			r: rune => r,
		};

		pos += utf8::runesz(r);
	};
	return pos;
};

fn utf8_byte_len_unbounded(iter: *iterator) size = {
	let pos = 0z;
	for (true) {
		let r: rune = match (strings::next(iter)) {
			void => break,
			r: rune => r,
		};

		pos += utf8::runesz(r);
	};
	return pos;
};

// Returns a substring in the range [start, end - 1], where each argument is the
// index of the Nth rune. If the end argument is given as [strings::end], the
// end of the substring is the end of the original string. The lifetime of the
// substring is the same as that of the original string.
//
// Note that substringing runewise is not always the correct thing to do, and it
// may cause unexpected linguistic errors to arise. You may need to use
// [unicode::graphsub] instead.
export fn sub(s: str, start: size, end: (size | end)) str = {
	let iter = iter(s);
	let starti = utf8_byte_len_bounded(&iter, start);
	let endi = match (end) {
		sz: size => starti + utf8_byte_len_bounded(&iter, sz - start),
		end => starti + utf8_byte_len_unbounded(&iter),
	};
	let bytes = toutf8(s);
	return fromutf8_unsafe(bytes[starti..endi]);
};

@test fn sub() void = {
	assert(sub("a string", 2, end) == "string");
	assert(sub("a string", 0, 1) == "a");
	assert(sub("a string", 0, 3) == "a s");
	assert(sub("a string", 2, 8) == "string");
};
