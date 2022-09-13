use strings;

// Compares two strings by their ASCII sort order. If either string is not
// entirely composed of ASCII characters, void is returned. Otherwise, zero is
// returned if the strings are equal, a negative value if a is less than b, or a
// positive value if a is greater than b.
export fn strcmp(a: str, b: str) (int | void) = {
	let a = strings::iter(a), b = strings::iter(b);
	for (true) {
		let ra = match (strings::next(&a)) {
			void => return match (strings::next(&b)) {
				void => 0,
				rune => -1,
			},
			r: rune => r,
		};
		let rb = match (strings::next(&b)) {
			void => return 1,
			r: rune => r,
		};
		if (!isascii(ra) || !isascii(rb)) {
			return;
		};
		if (ra != rb) {
			return ra: u32: int - rb: u32: int;
		};
	};
};

@test fn strcmp() void = {
	assert(strcmp("ABC", "ABC") as int == 0);
	assert(strcmp("ABC", "AB") as int == 1);
	assert(strcmp("AB", "ABC") as int == -1);
	assert(strcmp("BCD", "ABC") as int == 1);
	assert(strcmp("ABC", "こんにちは") is void);
};
