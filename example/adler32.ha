// Implements the Adler-32 checksum algorithm. It is a non-cryptographic
// checksum.

use endian;
use hash;
use io;
use strings;

type state = struct {
	hash: hash::hash,
	a: u32,
	b: u32,
};

// Creates a [hash::hash] which computes the Adler-32 checksum algorithm.
export fn adler32() *hash::hash = alloc(state {
	hash = hash::hash {
		stream = io::stream {
			writer = &write,
			closer = &close,
			...
		},
		sum = &sum,
		reset = &reset,
		sz = 4,
	},
	a = 1,
	b = 0,
}): *hash::hash;

fn close(s: *io::stream) void = free(s);

fn write(s: *io::stream, buf: const []u8) (size | io::error) = {
	let s = s: *state;
	for (let i = 0z; i < len(buf); i += 1) {
		s.a = (s.a + buf[i]) % 65521;
		s.b = (s.b + s.a) % 65521;
	};
	return len(buf);
};

fn reset(h: *hash::hash) void = {
	let h = h: *state;
	h.a = 1;
	h.b = 0;
};

fn sum(h: *hash::hash) []u8 = {
	let h = h: *state;
	let buf: [4]u8 = [0...];
	// RFC 1950 specifies that Adler-32 checksums are stored in network
	// order.
	endian::beputu32(buf, (h.b << 16) | h.a);
	return alloc(buf);
};

export fn sum32(h: *hash::hash) u32 = {
	assert(h.reset == &reset);
	let h = h: *state;
	return h.b << 16 | h.a;
};

@test fn adler32() void = {
	const vectors: [](str, u32) = [
		("", 1),
		("hello world", 436929629),
		("Hare is a cool language", 1578567727),
		("'UNIX was not designed to stop its users from doing stupid things, as that would also stop them from doing clever things' - Doug Gwyn", 2140876731),
		("'Life is too short to run proprietary software' - Bdale Garbee", 3135706652),
		("'The central enemy of reliability is complexity.' - Geer et al", 3170309588),
		("'A language that doesn’t have everything is actually easier to program in than some that do.' - Dennis Ritchie", 1148528899),

	];
	let hash = adler32();
	defer hash::close(hash);
	for (let i = 0z; i < len(vectors); i += 1) {
		let vec = vectors[i];
		hash::reset(hash);
		hash::write(hash, strings::toutf8(vec.0));
		let s = hash::sum(hash);
		defer free(s);
		assert(endian::begetu32(s) == vec.1);
		assert(sum32(hash) == vec.1);
	};
};
