use encoding::utf8;
use types;
use rt;

let emptybuf: [1]u8 = [0];

// A C-compatible empty string. Empty Hare strings have a null pointer instead
// of containing only '\0', so a special string is needed for this case.
export let c_empty: *const char = &emptybuf: *[*]u8: *const char;

// Computes the length of a NUL-terminated C string, in octets, in O(n). The
// computed length does not include the NUL terminator.
export fn cstrlen(cstr: *const char) size = {
	const ptr = cstr: *[*]u8;
	let ln = 0z;
	for (ptr[ln] != 0; ln += 1) void;
	return ln;
};

// Converts a C string to a Hare string in O(n), and does not check if it's
// valid UTF-8.
export fn fromc_unsafe(cstr: *const char) const str = {
	const l = cstrlen(cstr);
	const s = types::string {
		data     = cstr: *[*]u8,
		length   = l,
		capacity = l,
	};
	return *(&s: *const str);
};

// Converts a C string to a Hare string in O(n). If the string is not valid
// UTF-8, abort.
export fn fromc(cstr: *const char) const str = {
	let s = fromc_unsafe(cstr);
	assert(utf8::valid(s));
	return s;
};

// Converts a Hare string to a C string. The result is allocated, the caller
// must free it when they're done.
export fn to_c(s: const str) *char = {
	let ptr = rt::malloc(len(s) + 1): nullable *[*]u8;
	let ptr = match (ptr) {
		null => abort("Out of memory"),
		p: *[*]u8 => p,
	};
	rt::memcpy(ptr, (&s: *types::string).data, len(s));
	ptr[len(s)] = 0;
	return ptr: *char;
};
