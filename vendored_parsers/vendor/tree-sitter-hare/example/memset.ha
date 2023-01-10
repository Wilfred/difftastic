export fn memset(dest: *void, val: u8, amt: size) void = {
	let a = dest: *[*]u8;
	for (let i = 0z; i < amt; i += 1) {
		a[i] = val;
	};
};
