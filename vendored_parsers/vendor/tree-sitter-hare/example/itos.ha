use bytes;
use types;
use strings;

// Converts an i64 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i64tosb(i: i64, b: base) const str = {
	static assert(types::I64_MAX == 9223372036854775807);
	if (i >= 0) return u64tosb(i: u64, b);

	static let buf: [65]u8 = [0...]; // 64 binary digits plus -

	let s = types::string { data = &buf, ... };

	buf[0] = '-': u32: u8;
	s.length = 1;

	let u = strings::toutf8(u64tosb((-i): u64, b));
	assert(len(u) < len(buf));

	bytes::copy(buf[1..len(u) + 1], u);
	s.length += len(u);

	return *(&s: *str);
};

// Converts a i32 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i32tosb(i: i32, b: base) const str = i64tosb(i, b);

// Converts a i16 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i16tosb(i: i16, b: base) const str = i64tosb(i, b);

// Converts a i8 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i8tosb(i: i8, b: base) const str = i64tosb(i, b);

// Converts an int to a string in the given base. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn itosb(i: int, b: base) const str = i64tosb(i, b);

// Converts a i64 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i64tos(i: i64) const str = i64tosb(i, base::DEC);

// Converts a i32 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i32tos(i: i32) const str = i64tos(i);

// Converts a i16 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i16tos(i: i16) const str = i64tos(i);

// Converts a i8 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn i8tos(i: i8) const str = i64tos(i);

// Converts a int to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn itos(i: int) const str = i64tos(i);

@test fn itosb() void = {
	assert("11010" == i64tosb(0b11010, base::BIN));
	assert("1234567" == i64tosb(0o1234567, base::OCT));
	assert("123456789" == i64tosb(123456789, base::DEC));
	assert("123456789ABCDEF" == i64tosb(0x123456789ABCDEF, base::HEX));
	assert("123456789ABCDEF" == i64tosb(0x123456789ABCDEF, base::HEX_UPPER));
	assert("123456789abcdef" == i64tosb(0x123456789ABCDEF, base::HEX_LOWER));
	assert("-1000000000000000000000000000000000000000000000000000000000000000"
		== i64tosb(types::I64_MIN, base::BIN));
};

@test fn itos() void = {
	const samples: [_]i64 = [
		1234,
		4321,
		-1337,
		0,
		types::I64_MAX,
		types::I64_MIN,
	];
	const expected = [
		"1234",
		"4321",
		"-1337",
		"0",
		"9223372036854775807",
		"-9223372036854775808",
	];

	for (let i = 0z; i < len(samples); i += 1) {
		const s = i64tos(samples[i]);
		assert(s == expected[i]);
	};
};
