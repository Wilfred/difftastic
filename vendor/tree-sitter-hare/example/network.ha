// Converts a u16 from host order to network order.
export fn htonu16(in: u16) u16 = {
	if (host == &big) return in;
	return in >> 8 | (in & 0xFF) << 8;
};

// Converts a u32 from host order to network order.
export fn htonu32(in: u32) u32 = {
	if (host == &big) return in;
	return in >> 24 | in >> 8 & 0xFF00 | in << 8 & 0xFF0000 | in << 24;
};

// Converts a u64 from host order to network order.
export fn htonu64(in: u64) u64 = {
	if (host == &big) return in;
	return (htonu32(in: u32): u64 << 32u64) | htonu32((in >> 32): u32): u64;
};

@test fn hton() void = {
	if (host == &big) return;
	assert(htonu16(0xCAFE) == 0xFECA);
	assert(htonu32(0xDEADBEEF) == 0xEFBEADDE);
	assert(htonu64(0xCAFEBABEDEADBEEF) == 0xEFBEADDEBEBAFECA);
};

// Converts a u16 from network order to host order.
export fn ntohu16(in: u16) u16 = htonu16(in);

// Converts a u32 from network order to host order.
export fn ntohu32(in: u32) u32 = htonu32(in);

// Converts a u64 from network order to host order.
export fn ntohu64(in: u64) u64 = htonu64(in);

@test fn ntoh() void = {
	if (host == &big) return;
	assert(htonu16(0xFECA) == 0xCAFE);
	assert(htonu32(0xEFBEADDE) == 0xDEADBEEF);
	assert(htonu64(0xEFBEADDEBEBAFECA) == 0xCAFEBABEDEADBEEF);
};
