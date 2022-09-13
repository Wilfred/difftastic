// crypto::math provides constant-time mathematical operations useful for
// cryptographic algorithms.

// Rotates a 32-bit unsigned integer left by k bits. k may be negative to rotate
// right instead, or see [rotr32].
export fn rotl32(x: u32, k: int) u32 = {
	const n = 32u32;
	const s = k: u32 & (n - 1);
	return x << s | x >> (n - s);
};

// Rotates a 32-bit unsigned integer right by k bits. k may be negative to
// rotate left instead, or see [rotl32].
export fn rotr32(x: u32, k: int) u32 = rotl32(x, -k);

@test fn lrot32() void = {
	let a = 0b11110000111100001111000011110000u32;
	assert(rotl32(a, 2) == 0b11000011110000111100001111000011u32);
	assert(rotl32(a, -2) == 0b00111100001111000011110000111100u32);
	assert(rotl32(a, 32) == 0b11110000111100001111000011110000u32);
	assert(rotl32(a, 64) == 0b11110000111100001111000011110000u32);
};

// Rotates a 64-bit unsigned integer left by k bits. k may be negative to rotate
// right instead, or see [rotr64].
export fn rotl64(x: u64, k: int) u64 = {
	const n = 64u64;
	const s = k: u64 & (n - 1);
	return x << s | x >> (n - s);
};

// Rotates a 64-bit unsigned integer right by k bits. k may be negative to rotate
// left instead, or see [rotl64].
export fn rotr64(x: u64, k: int) u64 = rotl64(x, -k);

@test fn lrot64() void = {
	let a = 1u64;
	assert(rotl64(a, 1) == 0b10);
	assert(rotl64(a, -1) == 0b1000000000000000000000000000000000000000000000000000000000000000);
	assert(rotl64(a, 39) == (1u64 << 39));

	let a = 0b1111000011110000111100001111000011110000111100001111000011110000u64;
	assert(rotl64(a, 64) == a);
	assert(rotl64(a, 0) == a);
	assert(rotl64(a, 2) == 0b1100001111000011110000111100001111000011110000111100001111000011u64);
	assert(rotl64(a, -2) == 0b0011110000111100001111000011110000111100001111000011110000111100u64);

};
