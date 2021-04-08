// The set of functions used for endian-aware encoding.
export type endian = struct {
	getu16: *fn(buf: []u8) u16,
	putu16: *fn(buf: []u8, in: u16) void,
	getu32: *fn(buf: []u8) u32,
	putu32: *fn(buf: []u8, in: u32) void,
	getu64: *fn(buf: []u8) u64,
	putu64: *fn(buf: []u8, in: u64) void,
};

// Big endian; MSB first.
export const big: endian = endian {
	getu16 = &begetu16,
	putu16 = &beputu16,
	getu32 = &begetu32,
	putu32 = &beputu32,
	getu64 = &begetu64,
	putu64 = &beputu64,
};

// Little endian; LSB first.
export const little: endian = endian {
	getu16 = &legetu16,
	putu16 = &leputu16,
	getu32 = &legetu32,
	putu32 = &leputu32,
	getu64 = &legetu64,
	putu64 = &leputu64,
};
