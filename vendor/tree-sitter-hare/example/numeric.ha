use types;

// Converts any [types::signed] to a string in a given base. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn signedtosb(n: types::signed, b: base) const str = {
	return match (n) {
		i: int => itosb(i, b),
		i: i8  => i8tosb(i, b),
		i: i16 => i16tosb(i, b),
		i: i32 => i32tosb(i, b),
		i: i64 => i64tosb(i, b),
	};
};

// Converts any [types::signed] to a string in base 10. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn signedtos(n: types::signed) const str = signedtosb(n, base::DEC);

// Converts any [types::unsigned] to a string in a given base. The return value
// is statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn unsignedtosb(n: types::unsigned, b: base) const str = {
	return match (n) {
		u: size => ztosb(u, b),
		u: uint => utosb(u, b),
		u: u8   => u8tosb(u, b),
		u: u16  => u16tosb(u, b),
		u: u32  => u32tosb(u, b),
		u: u64  => u64tosb(u, b),
	};
};

// Converts any [types::unsigned] to a string in base 10. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn unsignedtos(n: types::unsigned) const str = unsignedtosb(n, base::DEC);

// Converts any [types::integer] to a string in a given base, which must be 2,
// 8, 10, or 16. The return value is statically allocated and will be
// overwritten on subsequent calls; see [strings::dup] to duplicate the result.
export fn integertosb(n: types::integer, b: base) const str = {
	return match (n) {
		s: types::signed   => signedtosb(s, b),
		u: types::unsigned => unsignedtosb(u, b),
	};
};

// Converts any [types::integer] to a string in base 10. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn integertos(n: types::integer) const str = integertosb(n, base::DEC);

// Converts any [types::floating] to a string in a given base. The return value
// is statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn floatingtosb(n: types::floating, b: base) const str = {
	abort(); // TODO
};

// Converts any [types::floating] to a string in base 10. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn floatingtos(n: types::floating) const str = floatingtosb(n, base::DEC);

// Converts any [types::numeric] to a string in a given base. The return value
// is statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn numerictosb(n: types::numeric, b: base) const str = {
	return match (n) {
		i: types::integer  => integertosb(i, b),
		f: types::floating => floatingtosb(f, b),
	};
};

// Converts any [types::numeric] to a string in base 10. The return value is
// statically allocated and will be overwritten on subsequent calls; see
// [strings::dup] to duplicate the result.
export fn numerictos(n: types::numeric) const str = numerictosb(n, base::DEC);

@test fn numeric() void = {
	const cases: [_]types::numeric = [
		42u8, 1337u16, 1337u32, 1337u64, 42i8, -42i8, 1337i16, -1337i16,
		1337i32, -1337i32, 1337i64, -1337i64, 1337i, -1337i, 1337u,
		-1337i,
	];
	const expected = [
		"42", "1337", "1337", "1337", "42", "-42", "1337", "-1337",
		"1337", "-1337", "1337", "-1337", "1337", "-1337", "1337",
		"-1337",
	];
	for (let i = 0z; i < len(cases); i += 1) {
		assert(numerictos(cases[i]) == expected[i]);
	};
};
