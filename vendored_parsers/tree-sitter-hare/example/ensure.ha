export type slice = struct {
	data: nullable *void,
	length: size,
	capacity: size,
};

export fn ensure(s: *slice, membsz: size) void = {
	let cap = s.capacity;
	if (cap >= s.length) {
		return;
	};
	for (cap < s.length) {
		assert(cap >= s.capacity, "slice out of memory (overflow)");
		if (cap == 0) {
			cap = s.length;
		} else {
			cap *= 2;
		};
	};
	s.capacity = cap;
	const data = realloc(s.data, s.capacity * membsz);
	assert(data != null || s.capacity * membsz == 0);
	s.data = data;
};

export fn unensure(s: *slice, membsz: size) void = {
	let cap = s.capacity;
	for (cap > s.length) {
		cap /= 2;
	};
	cap *= 2;
	s.capacity = cap;
	const data = realloc(s.data, s.capacity * membsz);
	assert(data != null || s.capacity * membsz == 0);
	s.data = data;
};
