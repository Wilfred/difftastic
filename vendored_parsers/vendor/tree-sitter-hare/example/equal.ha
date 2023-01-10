// Returns true if the two byte sequences are identical.
export fn equal(a: []u8, b: []u8) bool = {
	if (len(a) != len(b)) {
		return false;
	};
	for (let i = 0z; i < len(a); i += 1) {
		if (a[i] != b[i]) {
			return false;
		};
	};
	return true;
};

@test fn equal() void = {
	let a: []u8 = [1, 2, 3];
	let b: []u8 = [1, 2, 3];
	let c: []u8 = [1, 4, 5];
	let d: []u8 = [1, 2, 3, 4];
	let e: []u8 = [1, 2];
	assert(equal(a, b));
	assert(!equal(a, c));
	assert(!equal(a, d));
	assert(!equal(a, e));
};
