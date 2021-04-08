use rt;
use types;

// Appends an item, or items, to a slice, returning a new slice.
export fn appendto(sl: *[]void, itemsz: size, items: const *void...) void = {
	if (len(items) == 0) {
		return;
	};
	let sl = sl: *types::slice;
	let end = sl.length;
	sl.length += len(items);
	rt::ensure(sl, itemsz);
	let data = sl.data: *[*]u8;
	for (let i = 0z; i < len(items); i += 1) {
		rt::memcpy(&data[(end + i) * itemsz], items[i], itemsz);
	};
};

@test fn appendto() void = {
	let input: []int = [];
	let num = 1337;
	appendto(&input: *[]void, size(int), &num, &num);
	assert(len(input) == 2 && input[0] == 1337 && input[1] == 1337);
	free(input);
};

// Swaps two elements of a slice.
export fn swap(sl: []void, itemsz: size, a: size, b: size) void = {
	assert(a < len(sl) && b < len(sl));
	let sl = sl: *[*]u8;
	let a = &sl[a * itemsz]: *[*]u8, b = &sl[b * itemsz]: *[*]u8;
	for (let i = 0z; i < itemsz; i += 1) {
		let c = a[i];
		a[i] = b[i];
		b[i] = c;
	};
};

@test fn swap() void = {
	let x: []int = [1, 2, 3];
	swap(x: []void, size(int), 0, 2);
	assert(x[0] == 3 && x[2] == 1);
};

// Returns a pointer to the nth item of a slice.
export fn index(sl: []void, itemsz: size, n: size) *void = {
	assert(n < len(sl));
	let ba = sl: *[*]u8;
	return &ba[n * itemsz];
};

@test fn index() void = {
	let x: []int = [1, 2, 3];
	let ptr = index(x, size(int), 1): *int;
	assert(*ptr == 2);
};
