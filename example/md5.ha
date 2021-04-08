use hash;
use io;
use crypto::math;
use endian;

// The size, in bytes, of a MD5 digest.
export def SIZE: size = 16;

def chunk: size = 64;
def init0: u32 = 0x67452301;
def init1: u32 = 0xEFCDAB89;
def init2: u32 = 0x98BADCFE;
def init3: u32 = 0x10325476;

type digest = struct {
	hash: hash::hash,
	h: [4]u32,
	x: [chunk]u8,
	nx: size,
	ln: size,
};

// Creates a [hash::hash] which computes a MD5 hash as defined in RFC 1321. Note
// that MD5 is cryptographically broken and should not be used for secure
// applications. Where possible, applications are encouraged to use [sha256] or
// [sha512] instead.
export fn md5() *hash::hash = {
	let md5 = alloc(digest {
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
	let hash = &md5.hash;
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

fn reset(h: *hash::hash) void = {
	let h = h: *digest;
	h.h[0] = init0;
	h.h[1] = init1;
	h.h[2] = init2;
	h.h[3] = init3;
	h.nx = 0;
	h.ln = 0;
};

fn sum(h: *hash::hash) []u8 = {
	let h = h: *digest;
	let copy = *h;
	let h = &copy;

	// Padding. Add a 1 bit and 0 bits until 56 bytes mod 64.
	let ln = h.ln;
	let tmp: [1 + 63 + 8]u8 = [0x80, 0...];
	const pad = (55 - ln) % 64;
	endian::leputu32(tmp[1+pad..], (ln << 3) : u32);
	write(&h.hash.stream, tmp[..1+pad+8]); // append the length in bits

	assert(h.nx == 0);

	// Where we write the digest
	let d: [SIZE]u8 = [0...];
	endian::leputu32(d[0..], h.h[0]);
	endian::leputu32(d[4..], h.h[1]);
	endian::leputu32(d[8..], h.h[2]);
	endian::leputu32(d[12..], h.h[3]);

	let slice: []u8 = alloc([], SIZE);
	append(slice, ...d);
	return slice;
};

// A generic, pure Hare version of the MD5 block step
fn block(h: *digest, p: []u8) void = {
	// load state
	let a = h.h[0];
	let b = h.h[1];
	let c = h.h[2];
	let d = h.h[3];

	for (len(p) >= chunk; p = p[chunk..]) {

		// save current state
		let aa = a, bb = b, cc = c, dd = d;

		// load input block
		let x0 = endian::legetu32(p[4 * 0x0..]);
		let x0 = endian::legetu32(p[4 * 0x0..]);
		let x1 = endian::legetu32(p[4 * 0x1..]);
		let x2 = endian::legetu32(p[4 * 0x2..]);
		let x3 = endian::legetu32(p[4 * 0x3..]);
		let x4 = endian::legetu32(p[4 * 0x4..]);
		let x5 = endian::legetu32(p[4 * 0x5..]);
		let x6 = endian::legetu32(p[4 * 0x6..]);
		let x7 = endian::legetu32(p[4 * 0x7..]);
		let x8 = endian::legetu32(p[4 * 0x8..]);
		let x9 = endian::legetu32(p[4 * 0x9..]);
		let xa = endian::legetu32(p[4 * 0xa..]);
		let xb = endian::legetu32(p[4 * 0xb..]);
		let xc = endian::legetu32(p[4 * 0xc..]);
		let xd = endian::legetu32(p[4 * 0xd..]);
		let xe = endian::legetu32(p[4 * 0xe..]);
		let xf = endian::legetu32(p[4 * 0xf..]);

		// round 1
		a = b + math::rotl32((((c^d)&b)^d)+a+x0+0xd76aa478, 7);
		d = a + math::rotl32((((b^c)&a)^c)+d+x1+0xe8c7b756, 12);
		c = d + math::rotl32((((a^b)&d)^b)+c+x2+0x242070db, 17);
		b = c + math::rotl32((((d^a)&c)^a)+b+x3+0xc1bdceee, 22);
		a = b + math::rotl32((((c^d)&b)^d)+a+x4+0xf57c0faf, 7);
		d = a + math::rotl32((((b^c)&a)^c)+d+x5+0x4787c62a, 12);
		c = d + math::rotl32((((a^b)&d)^b)+c+x6+0xa8304613, 17);
		b = c + math::rotl32((((d^a)&c)^a)+b+x7+0xfd469501, 22);
		a = b + math::rotl32((((c^d)&b)^d)+a+x8+0x698098d8, 7);
		d = a + math::rotl32((((b^c)&a)^c)+d+x9+0x8b44f7af, 12);
		c = d + math::rotl32((((a^b)&d)^b)+c+xa+0xffff5bb1, 17);
		b = c + math::rotl32((((d^a)&c)^a)+b+xb+0x895cd7be, 22);
		a = b + math::rotl32((((c^d)&b)^d)+a+xc+0x6b901122, 7);
		d = a + math::rotl32((((b^c)&a)^c)+d+xd+0xfd987193, 12);
		c = d + math::rotl32((((a^b)&d)^b)+c+xe+0xa679438e, 17);
		b = c + math::rotl32((((d^a)&c)^a)+b+xf+0x49b40821, 22);

		// round 2
		a = b + math::rotl32((((b^c)&d)^c)+a+x1+0xf61e2562, 5);
		d = a + math::rotl32((((a^b)&c)^b)+d+x6+0xc040b340, 9);
		c = d + math::rotl32((((d^a)&b)^a)+c+xb+0x265e5a51, 14);
		b = c + math::rotl32((((c^d)&a)^d)+b+x0+0xe9b6c7aa, 20);
		a = b + math::rotl32((((b^c)&d)^c)+a+x5+0xd62f105d, 5);
		d = a + math::rotl32((((a^b)&c)^b)+d+xa+0x02441453, 9);
		c = d + math::rotl32((((d^a)&b)^a)+c+xf+0xd8a1e681, 14);
		b = c + math::rotl32((((c^d)&a)^d)+b+x4+0xe7d3fbc8, 20);
		a = b + math::rotl32((((b^c)&d)^c)+a+x9+0x21e1cde6, 5);
		d = a + math::rotl32((((a^b)&c)^b)+d+xe+0xc33707d6, 9);
		c = d + math::rotl32((((d^a)&b)^a)+c+x3+0xf4d50d87, 14);
		b = c + math::rotl32((((c^d)&a)^d)+b+x8+0x455a14ed, 20);
		a = b + math::rotl32((((b^c)&d)^c)+a+xd+0xa9e3e905, 5);
		d = a + math::rotl32((((a^b)&c)^b)+d+x2+0xfcefa3f8, 9);
		c = d + math::rotl32((((d^a)&b)^a)+c+x7+0x676f02d9, 14);
		b = c + math::rotl32((((c^d)&a)^d)+b+xc+0x8d2a4c8a, 20);

		// round 3
		a = b + math::rotl32((b^c^d)+a+x5+0xfffa3942, 4);
		d = a + math::rotl32((a^b^c)+d+x8+0x8771f681, 11);
		c = d + math::rotl32((d^a^b)+c+xb+0x6d9d6122, 16);
		b = c + math::rotl32((c^d^a)+b+xe+0xfde5380c, 23);
		a = b + math::rotl32((b^c^d)+a+x1+0xa4beea44, 4);
		d = a + math::rotl32((a^b^c)+d+x4+0x4bdecfa9, 11);
		c = d + math::rotl32((d^a^b)+c+x7+0xf6bb4b60, 16);
		b = c + math::rotl32((c^d^a)+b+xa+0xbebfbc70, 23);
		a = b + math::rotl32((b^c^d)+a+xd+0x289b7ec6, 4);
		d = a + math::rotl32((a^b^c)+d+x0+0xeaa127fa, 11);
		c = d + math::rotl32((d^a^b)+c+x3+0xd4ef3085, 16);
		b = c + math::rotl32((c^d^a)+b+x6+0x04881d05, 23);
		a = b + math::rotl32((b^c^d)+a+x9+0xd9d4d039, 4);
		d = a + math::rotl32((a^b^c)+d+xc+0xe6db99e5, 11);
		c = d + math::rotl32((d^a^b)+c+xf+0x1fa27cf8, 16);
		b = c + math::rotl32((c^d^a)+b+x2+0xc4ac5665, 23);

		// round 4
		a = b + math::rotl32((c^(b|~d))+a+x0+0xf4292244, 6);
		d = a + math::rotl32((b^(a|~c))+d+x7+0x432aff97, 10);
		c = d + math::rotl32((a^(d|~b))+c+xe+0xab9423a7, 15);
		b = c + math::rotl32((d^(c|~a))+b+x5+0xfc93a039, 21);
		a = b + math::rotl32((c^(b|~d))+a+xc+0x655b59c3, 6);
		d = a + math::rotl32((b^(a|~c))+d+x3+0x8f0ccc92, 10);
		c = d + math::rotl32((a^(d|~b))+c+xa+0xffeff47d, 15);
		b = c + math::rotl32((d^(c|~a))+b+x1+0x85845dd1, 21);
		a = b + math::rotl32((c^(b|~d))+a+x8+0x6fa87e4f, 6);
		d = a + math::rotl32((b^(a|~c))+d+xf+0xfe2ce6e0, 10);
		c = d + math::rotl32((a^(d|~b))+c+x6+0xa3014314, 15);
		b = c + math::rotl32((d^(c|~a))+b+xd+0x4e0811a1, 21);
		a = b + math::rotl32((c^(b|~d))+a+x4+0xf7537e82, 6);
		d = a + math::rotl32((b^(a|~c))+d+xb+0xbd3af235, 10);
		c = d + math::rotl32((a^(d|~b))+c+x2+0x2ad7d2bb, 15);
		b = c + math::rotl32((d^(c|~a))+b+x9+0xeb86d391, 21);

		// add saved state
		a += aa;
		b += bb;
		c += cc;
		d += dd;
	};

	// save state
	h.h[0] = a;
	h.h[1] = b;
	h.h[2] = c;
	h.h[3] = d;
};
