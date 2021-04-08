use bytes;
use types;

// Converts a u64 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u64tosb(u: u64, b: base) const str = {
	static assert(types::U64_MAX == 18446744073709551615);
	static let buf: [64]u8 = [0...]; // 64 binary digits

	static const lut_upper = [
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
	], lut_lower = [
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'a', 'b', 'c', 'd', 'e', 'f',
	];
	const lut = if (b != base::HEX_LOWER) &lut_upper else {
		b = base::HEX_UPPER;
		&lut_lower;
	};

	let s = types::string { data = &buf, ... };
	if (u == 0) {
		buf[s.length] = '0': u32: u8;
		s.length += 1z;
	};

	for (u > 0u64) {
		buf[s.length] = lut[u % b: u64]: u32: u8;
		s.length += 1;
		u /= b;
	};

	bytes::reverse(buf[..s.length]);
	return *(&s: *str);
};

// Converts a u32 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u32tosb(u: u32, b: base) const str = u64tosb(u, b);

// Converts a u16 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u16tosb(u: u16, b: base) const str = u64tosb(u, b);

// Converts a u8 to a string in the given base. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u8tosb(u: u8, b: base) const str = u64tosb(u, b);

// Converts a uint to a string in the given base. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn utosb(u: uint, b: base) const str = u64tosb(u, b);

// Converts a size to a string in the given base. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn ztosb(u: size, b: base) const str = u64tosb(u, b);

// Converts a size to a string in the given base. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn uptrtosb(uptr: uintptr, b: base) const str = u64tosb(uptr: u64, b);

// Converts a u64 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u64tos(u: u64) const str = u64tosb(u, base::DEC);

// Converts a u32 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u32tos(u: u32) const str = u64tos(u);

// Converts a u16 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u16tos(u: u16) const str = u64tos(u);

// Converts a u8 to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn u8tos(u: u8) const str = u64tos(u);

// Converts a uint to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn utos(u: uint) const str = u64tos(u);

// Converts a size to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result, or [strconv::itosb] to pass your own string buffer.
export fn ztos(z: size) const str = u64tos(z);

// Converts a uintptr to a string in base 10. The return value is statically
// allocated and will be overwritten on subsequent calls; see [strings::dup] to
// duplicate the result.
export fn uptrtos(uptr: uintptr) const str = u64tos(uptr: u64);

@test fn utosb() void = {
	assert("11010" == u64tosb(0b11010, base::BIN));
	assert("1234567" == u64tosb(0o1234567, base::OCT));
	assert("123456789" == u64tosb(123456789, base::DEC));
	assert("123456789ABCDEF" == u64tosb(0x123456789ABCDEF, base::HEX));
	assert("123456789ABCDEF" == u64tosb(0x123456789ABCDEF, base::HEX_UPPER));
	assert("123456789abcdef" == u64tosb(0x123456789ABCDEF, base::HEX_LOWER));
	assert("1111111111111111111111111111111111111111111111111111111111111111"
		== u64tosb(types::U64_MAX, base::BIN));
};

@test fn utos() void = {
	const samples: [_]u64 = [
		1234,
		4321,
		types::U64_MIN,
		types::U64_MAX,
	];
	const expected = [
		"1234",
		"4321",
		"0",
		"18446744073709551615",
	];

	for (let i = 0z; i < len(samples); i += 1) {
		const s = u64tos(samples[i]);
		assert(s == expected[i]);
	};
};
