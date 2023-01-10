fn bytes_reverse(b: []u8) void = {
	if (len(b) == 0) {
		return;
	};
	for (let s = 0z, e = len(b) - 1; s < e) {
		let x = b[s];
		b[s] = b[e];
		b[e] = x;
		s += 1;
		e -= 1;
	};
};

fn ztos(u: size) const str = {
	static let buf: [21]u8 = [0...]; // 20 digits plus NUL
	buf = [0...];

	let s = struct {
		b: *[*]u8 = &buf,
		l: size = 0,
		c: size = 0,
	};

	if (u == 0) {
		s.b[s.l] = '0': u32: u8;
		s.l += 1;
	};

	for (u > 0) {
		s.b[s.l] = '0': u32: u8 + (u % 10): u8;
		s.l += 1;
		u /= 10;
	};

	bytes_reverse(s.b[..s.l]);
	s.b[s.l] = 0;
	return *(&s: *str);
};
