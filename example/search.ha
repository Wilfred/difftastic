// Performs a binary search over a sorted slice. 'in' shall be the sorted slice,
// and 'sz' shall be the size of each array member. The 'cmp' function will be
// called with the key value and an array member, and shall return a integer
// less than, equal to, or greater than zero if the key is, respectively, less
// than, equal to, or greater than the array member.
export fn search(
	in: []void,
	sz: size,
	key: const *void,
	cmp: *fn(a: const *void, b: const *void) int,
) nullable *void = {
	let ba = in: *[*]u8;
	for (let nmemb = len(in); nmemb > 0) {
		let v = &ba[nmemb / 2 * sz];
		let r = cmp(key, v);
		if (r < 0) {
			nmemb /= 2;
		} else if (r > 0) {
			ba = (v: uintptr + sz: uintptr): *[*]u8;
			nmemb -= nmemb / 2 + 1;
		} else {
			return v;
		};
	};
	return null;
};
