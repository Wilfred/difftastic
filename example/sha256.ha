use crypto::math;
use endian;
use hash;
use io;

// The size, in bytes, of a SHA-256 digest.
export def SIZE: size = 32;

// Loosely based on the Go implementation
def chunk: size = 64;
def init0: u32 = 0x6A09E667;
def init1: u32 = 0xBB67AE85;
def init2: u32 = 0x3C6EF372;
def init3: u32 = 0xA54FF53A;
def init4: u32 = 0x510E527F;
def init5: u32 = 0x9B05688C;
def init6: u32 = 0x1F83D9AB;
def init7: u32 = 0x5BE0CD19;

const k: [_]u32 = [
	0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5, 0x3956c25b, 0x59f111f1,
	0x923f82a4, 0xab1c5ed5, 0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
	0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174, 0xe49b69c1, 0xefbe4786,
	0x0fc19dc6, 0x240ca1cc, 0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
	0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7, 0xc6e00bf3, 0xd5a79147,
	0x06ca6351, 0x14292967, 0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
	0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85, 0xa2bfe8a1, 0xa81a664b,
	0xc24b8b70, 0xc76c51a3, 0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
	0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5, 0x391c0cb3, 0x4ed8aa4a,
	0x5b9cca4f, 0x682e6ff3, 0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
	0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2,
];

type state = struct {
	hash: hash::hash,
	h: [8]u32,
	x: [chunk]u8,
	nx: size,
	ln: size,
};

// Creates a [hash::hash] which computes a SHA-256 hash.
export fn sha256() *hash::hash = {
	let sha = alloc(state {
		hash = hash::hash {
			stream = io::stream {
				writer = &write,
				closer = &close,
				...
			},
			sum = &sum,
			reset = &reset,
			sz = SIZE,
			...
		},
	});
	let hash = &sha.hash;
	hash::reset(hash);
	return hash;
};

fn reset(h: *hash::hash) void = {
	let h = h: *state;
	h.h[0] = init0;
	h.h[1] = init1;
	h.h[2] = init2;
	h.h[3] = init3;
	h.h[4] = init4;
	h.h[5] = init5;
	h.h[6] = init6;
	h.h[7] = init7;
	h.nx = 0;
	h.ln = 0;
};

fn write(st: *io::stream, buf: const []u8) (size | io::error) = {
	let h = st: *state;
	let b: []u8 = buf;
	let n = len(b);
	h.ln += n;
	if (h.nx > 0) {
		let n = if (len(b) > len(h.x) - h.nx) {
			len(h.x) - h.nx;
		} else len(b);
		h.x[h.nx..] = b[..n];
		h.nx += n;
		if (h.nx == chunk) {
			block(h, h.x[..]);
			h.nx = 0;
		};
		b = b[n..];
	};
	if (len(b) >= chunk) {
		let n = len(b) & ~(chunk - 1);
		block(h, b[..n]);
		b = b[n..];
	};
	if (len(b) > 0) {
		let n = len(b);
		h.x[..n] = b[..];
		h.nx = n;
	};
	return n;
};

fn close(st: *io::stream) void = {
	free(st);
};

fn sum(h: *hash::hash) []u8 = {
	let h = h: *state;
	let copy = *h;
	let h = &copy;

	// Add padding
	let ln = h.ln;
	let tmp: [64]u8 = [0...];
	tmp[0] = 0x80;
	const n = if ((ln % 64z) < 56z) 56z - ln % 64z
		else 64z + 56z - ln % 64z;
	write(&h.hash.stream, tmp[..n]);

	ln <<= 3;
	endian::beputu64(tmp, ln: u64);
	write(&h.hash.stream, tmp[..8]);

	assert(h.nx == 0);

	let digest: [SIZE]u8 = [0...];
	endian::beputu32(digest[0..], h.h[0]);
	endian::beputu32(digest[4..], h.h[1]);
	endian::beputu32(digest[8..], h.h[2]);
	endian::beputu32(digest[12..], h.h[3]);
	endian::beputu32(digest[16..], h.h[4]);
	endian::beputu32(digest[20..], h.h[5]);
	endian::beputu32(digest[24..], h.h[6]);
	endian::beputu32(digest[28..], h.h[7]);

	let slice: []u8 = alloc([], SIZE);
	append(slice, ...digest);
	return slice;
};

// TODO: Rewrite me in assembly
fn block(h: *state, buf: []u8) void = {
	let w: [64]u32 = [0...];
	let h0 = h.h[0], h1 = h.h[1], h2 = h.h[2], h3 = h.h[3],
		h4 = h.h[4], h5 = h.h[5], h6 = h.h[6], h7 = h.h[7];
	for (len(buf) >= chunk) {
		for (let i = 0; i < 16; i += 1) {
			let j = i * 4;
			w[i] = buf[j]: u32 << 24
				| buf[j+1]: u32 << 16
				| buf[j+2]: u32 << 8
				| buf[j+3]: u32;
		};

		for (let i = 16; i < 64; i += 1) {
			let v1 = w[i - 2];
			let t1 = (math::rotr32(v1, 17))
				^ (math::rotr32(v1, 19))
				^ (v1 >> 10);
			let v2 = w[i - 15];
			let t2 = (math::rotr32(v2, 7))
				^ (math::rotr32(v2, 18))
				^ (v2 >> 3);
			w[i] = t1 + w[i - 7] + t2 + w[i - 16];
		};

		let a = h0, b = h1, c = h2, d = h3,
			e = h4, f = h5, g = h6, h = h7;
		for (let i = 0; i < 64; i += 1) {
			let t1 = h + ((math::rotr32(e, 6))
				^ (math::rotr32(e, 11))
				^ (math::rotr32(e, 25)))
				+ ((e & f) ^ (~e & g)) + k[i] + w[i];

			let t2 = ((math::rotr32(a, 2))
				^ (math::rotr32(a, 13))
				^ (math::rotr32(a, 22)))
				+ ((a & b) ^ (a & c) ^ (b & c));
			h = g;
			g = f;
			f = e;
			e = d + t1;
			d = c;
			c = b;
			b = a;
			a = t1 + t2;
		};

		h0 += a;
		h1 += b;
		h2 += c;
		h3 += d;
		h4 += e;
		h5 += f;
		h6 += g;
		h7 += h;

		buf = buf[chunk..];
	};

	h.h[0] = h0;
	h.h[1] = h1;
	h.h[2] = h2;
	h.h[3] = h3;
	h.h[4] = h4;
	h.h[5] = h5;
	h.h[6] = h6;
	h.h[7] = h7;
};
