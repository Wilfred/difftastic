use crypto::math;
use endian;
use hash;
use io;

// Package sha512 implements the SHA-384, SHA-512, SHA-512/224, and SHA-512/256
// hash algorithms as defined in FIPS 180-4.

type variant = enum {
	SHA384,
	SHA512,
	SHA512_224,
	SHA512_256,
};

// The size, in bytes, of the SHA-512 checksum.
export def SIZE: size = 64;

// The size, in bytes, of the SHA-512/224 checksum.
export def SIZE224: size = 28;

// The size, in bytes, of the SHA-512/256 checksum.
export def SIZE256: size = 32;

// The size, in bytes, of the SHA-384 checksum.
export def SIZE384: size = 48;

def chunk: size = 128;
def init0: u64 = 0x6a09e667f3bcc908;
def init1: u64 = 0xbb67ae8584caa73b;
def init2: u64 = 0x3c6ef372fe94f82b;
def init3: u64 = 0xa54ff53a5f1d36f1;
def init4: u64 = 0x510e527fade682d1;
def init5: u64 = 0x9b05688c2b3e6c1f;
def init6: u64 = 0x1f83d9abfb41bd6b;
def init7: u64 = 0x5be0cd19137e2179;
def init0_224: u64 = 0x8c3d37c819544da2;
def init1_224: u64 = 0x73e1996689dcd4d6;
def init2_224: u64 = 0x1dfab7ae32ff9c82;
def init3_224: u64 = 0x679dd514582f9fcf;
def init4_224: u64 = 0x0f6d2b697bd44da8;
def init5_224: u64 = 0x77e36f7304c48942;
def init6_224: u64 = 0x3f9d85a86a1d36c8;
def init7_224: u64 = 0x1112e6ad91d692a1;
def init0_256: u64 = 0x22312194fc2bf72c;
def init1_256: u64 = 0x9f555fa3c84c64c2;
def init2_256: u64 = 0x2393b86b6f53b151;
def init3_256: u64 = 0x963877195940eabd;
def init4_256: u64 = 0x96283ee2a88effe3;
def init5_256: u64 = 0xbe5e1e2553863992;
def init6_256: u64 = 0x2b0199fc2c85b8aa;
def init7_256: u64 = 0x0eb72ddc81c52ca2;
def init0_384: u64 = 0xcbbb9d5dc1059ed8;
def init1_384: u64 = 0x629a292a367cd507;
def init2_384: u64 = 0x9159015a3070dd17;
def init3_384: u64 = 0x152fecd8f70e5939;
def init4_384: u64 = 0x67332667ffc00b31;
def init5_384: u64 = 0x8eb44a8768581511;
def init6_384: u64 = 0xdb0c2e0d64f98fa7;
def init7_384: u64 = 0x47b5481dbefa4fa4;

type digest = struct {
	hash: hash::hash,
	h: [8]u64,
	x: [chunk]u8,
	nx: size,
	ln: size,
	var: variant,
};

// Creates a [hash::hash] which computes a SHA-512 hash.
export fn sha512() *hash::hash = init(variant::SHA512, SIZE);

// Creates a [hash::hash] which computes a SHA-512/224 hash.
export fn sha512_224() *hash::hash = init(variant::SHA512_224, SIZE224);

// Creates a [hash::hash] which computes a SHA-512/256 hash.
export fn sha512_256() *hash::hash = init(variant::SHA512_256, SIZE256);

// Creates a [hash::hash] which computes a SHA-384 hash.
export fn sha384() *hash::hash = init(variant::SHA384, SIZE384);

// Internal initialization function
fn init(var: variant, sz: size) *hash::hash = {
	let sha = alloc(digest {
		hash = hash::hash {
			stream = io::stream {
				writer = &write,
				closer = &close,
				...
			},
			sum = &sum,
			reset = &reset,
			sz = sz,
			...
		},
		var = var,
	});

	let hash = &sha.hash;
	hash::reset(hash);
	return hash;
};

fn write(st: *io::stream, buf: const []u8) (size | io::error) = {
	let h = st: *digest;
	let b: []u8 = buf;
	let nn = len(buf);

	h.ln += nn;

	if (h.nx > 0) {
		// Compute how many bytes can be copied into h.x
		let r = len(h.x) - h.nx;
		let n = if (nn > r) r else nn;
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
	return nn;
};

fn close(st: *io::stream) void = free(st);

fn sum(h: *hash::hash) []u8 = {
	let d = h: *digest;
	let copy = *d;
	let d = &copy;

	// Padding. Add a 1 bit and 0 bits until 112 bytes mod 128
	let ln = d.ln;
	let tmp: [chunk]u8 = [0x80, 0...];
	if ((ln % 128) < 112) {
		const n = 112 - (ln % 128);
		write(&d.hash.stream, tmp[..n]);
	} else {
		const n = 128 + 112 - (ln % 128);
		write(&d.hash.stream, tmp[..n]);
	};

	// Length in bits
	ln <<= 3;
	endian::beputu64(tmp, 0u64); // upper 64 bits are always zero
	endian::beputu64(tmp[8..], ln : u64);
	write(&d.hash.stream, tmp[..16]);

	assert(d.nx == 0);

	let dig: [SIZE]u8 = [0...];
	endian::beputu64(dig[0..], d.h[0]);
	endian::beputu64(dig[8..], d.h[1]);
	endian::beputu64(dig[16..], d.h[2]);
	endian::beputu64(dig[24..], d.h[3]);
	endian::beputu64(dig[32..], d.h[4]);
	endian::beputu64(dig[40..], d.h[5]);
	if (d.var != variant::SHA384) {
		endian::beputu64(dig[48..], d.h[6]);
		endian::beputu64(dig[56..], d.h[7]);
	};

        // We only copy the necessary bytes from fixed-size array into the
        // returned slice. The size is already found in the inner hash struct.
	let slice: []u8 = alloc([], d.hash.sz);
	append(slice, ...dig[..d.hash.sz]);
	return slice;
};

fn reset(h: *hash::hash) void = {
	let d = h: *digest;
	switch (d.var) {
		variant::SHA384 => {
			d.h[0] = init0_384;
			d.h[1] = init1_384;
			d.h[2] = init2_384;
			d.h[3] = init3_384;
			d.h[4] = init4_384;
			d.h[5] = init5_384;
			d.h[6] = init6_384;
			d.h[7] = init7_384;
		},
		variant::SHA512_224 => {
			d.h[0] = init0_224;
			d.h[1] = init1_224;
			d.h[2] = init2_224;
			d.h[3] = init3_224;
			d.h[4] = init4_224;
			d.h[5] = init5_224;
			d.h[6] = init6_224;
			d.h[7] = init7_224;
		},
		variant::SHA512_256 => {
			d.h[0] = init0_256;
			d.h[1] = init1_256;
			d.h[2] = init2_256;
			d.h[3] = init3_256;
			d.h[4] = init4_256;
			d.h[5] = init5_256;
			d.h[6] = init6_256;
			d.h[7] = init7_256;
		},
		* => {
			d.h[0] = init0;
			d.h[1] = init1;
			d.h[2] = init2;
			d.h[3] = init3;
			d.h[4] = init4;
			d.h[5] = init5;
			d.h[6] = init6;
			d.h[7] = init7;
		}
	};
	d.nx = 0;
	d.ln = 0;
};

const k: [_]u64 = [
	0x428a2f98d728ae22, 0x7137449123ef65cd, 0xb5c0fbcfec4d3b2f, 0xe9b5dba58189dbbc,
	0x3956c25bf348b538, 0x59f111f1b605d019, 0x923f82a4af194f9b, 0xab1c5ed5da6d8118,
	0xd807aa98a3030242, 0x12835b0145706fbe, 0x243185be4ee4b28c, 0x550c7dc3d5ffb4e2,
	0x72be5d74f27b896f, 0x80deb1fe3b1696b1, 0x9bdc06a725c71235, 0xc19bf174cf692694,
	0xe49b69c19ef14ad2, 0xefbe4786384f25e3, 0x0fc19dc68b8cd5b5, 0x240ca1cc77ac9c65,
	0x2de92c6f592b0275, 0x4a7484aa6ea6e483, 0x5cb0a9dcbd41fbd4, 0x76f988da831153b5,
	0x983e5152ee66dfab, 0xa831c66d2db43210, 0xb00327c898fb213f, 0xbf597fc7beef0ee4,
	0xc6e00bf33da88fc2, 0xd5a79147930aa725, 0x06ca6351e003826f, 0x142929670a0e6e70,
	0x27b70a8546d22ffc, 0x2e1b21385c26c926, 0x4d2c6dfc5ac42aed, 0x53380d139d95b3df,
	0x650a73548baf63de, 0x766a0abb3c77b2a8, 0x81c2c92e47edaee6, 0x92722c851482353b,
	0xa2bfe8a14cf10364, 0xa81a664bbc423001, 0xc24b8b70d0f89791, 0xc76c51a30654be30,
	0xd192e819d6ef5218, 0xd69906245565a910, 0xf40e35855771202a, 0x106aa07032bbd1b8,
	0x19a4c116b8d2d0c8, 0x1e376c085141ab53, 0x2748774cdf8eeb99, 0x34b0bcb5e19b48a8,
	0x391c0cb3c5c95a63, 0x4ed8aa4ae3418acb, 0x5b9cca4f7763e373, 0x682e6ff3d6b2b8a3,
	0x748f82ee5defb2fc, 0x78a5636f43172f60, 0x84c87814a1f0ab72, 0x8cc702081a6439ec,
	0x90befffa23631e28, 0xa4506cebde82bde9, 0xbef9a3f7b2c67915, 0xc67178f2e372532b,
	0xca273eceea26619c, 0xd186b8c721c0c207, 0xeada7dd6cde0eb1e, 0xf57d4f7fee6ed178,
	0x06f067aa72176fba, 0x0a637dc5a2c898a6, 0x113f9804bef90dae, 0x1b710b35131c471b,
	0x28db77f523047d84, 0x32caab7b40c72493, 0x3c9ebe0a15c9bebc, 0x431d67c49c100d4c,
	0x4cc5d4becb3e42b6, 0x597f299cfc657e2a, 0x5fcb6fab3ad6faec, 0x6c44198c4a475817,
];

fn block(h: *digest, p: []u8) void = {
	let w: [80]u64 = [0...];

	let h0 = h.h[0];
	let h1 = h.h[1];
	let h2 = h.h[2];
	let h3 = h.h[3];
	let h4 = h.h[4];
	let h5 = h.h[5];
	let h6 = h.h[6];
	let h7 = h.h[7];

	for (len(p) >= chunk; p = p[chunk..]) {
		for (let i = 0z; i < 16; i += 1) {
			let j = i * 8;
			w[i] = p[j]: u64 << 56
				| p[j+1]: u64 << 48
				| p[j+2]: u64 << 40
				| p[j+3]: u64 << 32
				| p[j+4]: u64 << 24
				| p[j+5]: u64 << 16
				| p[j+6]: u64 << 8
				| p[j+7]: u64;
		};
		for (let i = 16z; i < 80; i += 1) {
			let v1 = w[i - 2];
			let t1 = math::rotr64(v1, 19) ^ math::rotr64(v1, 61) ^ (v1 >> 6);
			let v2 = w[i - 15];
			let t2 = math::rotr64(v2, 1) ^ math::rotr64(v2, 8) ^ (v2 >> 7);

			w[i] = t1 + w[i - 7] + t2 + w[i - 16];
		};

		let a = h0;
		let b = h1;
		let c = h2;
		let d = h3;
		let e = h4;
		let f = h5;
		let g = h6;
		let h = h7;

		for (let i = 0z; i < 80; i += 1) {
			let t1 = h + (math::rotr64(e, 14)
				^ math::rotr64(e, 18)
				^ math::rotr64(e, 41))
				+ ((e & f) ^ (~e & g))
				+ k[i] + w[i];

			let t2 = (math::rotr64(a, 28)
				^ math::rotr64(a, 34)
				^ math::rotr64(a, 39))
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
