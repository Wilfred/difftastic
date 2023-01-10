use ascii;
use bytes;
use fmt;
use io;
use strconv;
use strings;
use strio;

// Error returned when attempting to decode an invalid hex string.
export type invalid = void!;

// Encodes a byte slice as a hexadecimal string and writes it to a stream.
export fn encode(sink: *io::stream, b: []u8) (size | io::error) = {
	let z = 0z;
	for (let i = 0z; i < len(b); i += 1) {
		let s = strconv::u8tosb(b[i], strconv::base::HEX_LOWER);
		if (len(s) == 1) {
			z += io::write(sink, ['0': u32: u8])?;
		};
		z += io::write(sink, strings::toutf8(s))?;
	};
	return z;
};

// Encodes a byte slice as a hexadecimal string and returns it. The caller must
// free the return value.
export fn encodestr(b: []u8) str = {
	let sink = strio::dynamic();
	encode(sink, b) as size;
	return strio::finish(sink);
};

@test fn encode() void = {
	let in: [_]u8 = [0xCA, 0xFE, 0xBA, 0xBE, 0xDE, 0xAD, 0xF0, 0x0D];
	let s = encodestr(in);
	defer free(s);
	assert(s == "cafebabedeadf00d");
};

// Decodes a string of hexadecimal bytes into a byte slice. The caller must free
// the return value.
export fn decode(s: str) ([]u8 | invalid) = {
	if (len(s) % 2 != 0) {
		return invalid;
	};
	let buf: []u8 = alloc([], len(s) / 2);
	let s = strings::toutf8(s);
	for (let i = 0z; i < len(s) / 2; i += 1) {
		let oct = strings::fromutf8_unsafe(s[i * 2..i * 2 + 2]);
		let u = match (strconv::stou8b(oct, 16)) {
			(strconv::invalid | strconv::overflow) => return invalid,
			u: u8 => u,
		};
		append(buf, u);
	};
	return buf;
};

@test fn decode() void = {
	let s = decode("cafebabedeadf00d") as []u8;
	defer free(s);
	assert(bytes::equal(s, [0xCA, 0xFE, 0xBA, 0xBE, 0xDE, 0xAD, 0xF0, 0x0D]));

	decode("this is not hex") as invalid;
};

// Outputs a dump of hex data to a stream alongside the offset and an ASCII
// representation (if applicable).
//
// Example output:
//
// 	00000000  7f 45 4c 46 02 01 01 00  00 00 00 00 00 00 00 00  |.ELF............|
// 	00000010  03 00 3e 00 01 00 00 00  80 70 01 00 00 00 00 00  |..>......p......|
export fn dump(out: *io::stream, data: []u8) (void | io::error) = {
	let datalen = len(data): u32;

	for (let off = 0u32; off < datalen; off += 16) {
		fmt::fprintf(out, "{:08x}  ", off)?;

		let toff = 0z;
		for (let i = 0z; i < 16 && off + i < datalen; i += 1) {
			let val = data[off + i];
			toff += fmt::fprintf(out, "{}{:02x} ",
				if (i == 8) " " else "", val)?;
		};

		// Align ASCII representation, max width of hex part (48) +
		// spacing around it
		for (toff < 50; toff += 1) {
			fmt::fprint(out, " ")?;
		};

		fmt::fprint(out, "|")?;
		for (let i = 0z; i < 16 && off + i < datalen; i += 1) {
			let r = data[off + i]: u32: rune;

			fmt::fprint(out, if (ascii::isprint(r)) r else '.')?;
		};
		fmt::fprint(out, "|\n")?;
	};
};

@test fn dump() void = {
	let in: [_]u8 = [
		0x7F, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00, 0xCA, 0xFE,
		0xBA, 0xBE, 0xDE, 0xAD, 0xF0, 0x0D, 0xCE, 0xFE, 0xBA, 0xBE,
		0xDE, 0xAD, 0xF0, 0x0D
	];

	let sink = strio::dynamic();
	dump(sink, in) as void;

	let s = strio::finish(sink);
	assert(s ==
		"00000000  7f 45 4c 46 02 01 01 00  ca fe ba be de ad f0 0d  |.ELF............|\n"
		"00000010  ce fe ba be de ad f0 0d                           |........|\n");
};
