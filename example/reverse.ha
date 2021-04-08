// Reverses a slice.
export fn reverse(b: []void, membsz: size) void = {
	if (len(b) == 0) {
		return;
	};
	let a = b: *[*]u8;
	for (let s = 0z, e = len(b) - 1; s < e) {
		for (let i = 0z; i < membsz; i += 1z) {
			let z = a[s * membsz + i];
			a[s * membsz + i] = a[e * membsz + i];
			a[e * membsz + i] = z;
		};
		s += 1;
		e -= 1;
	};
};

@test fn reverse() void = {
	let a: []int = [1, 2, 3, 4];
	reverse(a, size(int));
	assert(a[0] == 4 && a[1] == 3 && a[2] == 2 && a[3] == 1);
};
