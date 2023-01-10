fn c_strlen(cstr: *const char) size = {
	const ptr = cstr: *[*]u8;
	let ln = 0z;
	for (ptr[ln] != 0; ln += 1) void;
	return ln;
};

fn from_c_unsafe(cstr: *const char) const str = {
	const l = c_strlen(cstr);
	const s = struct {
		data: *[*]u8   = cstr: *[*]u8,
		length: size   = l,
		capacity: size = l,
	};
	return *(&s: *const str);
};
