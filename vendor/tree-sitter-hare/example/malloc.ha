// This is a simple memory allocator, based on Appel, Andrew W., and David A.
// Naumann. "Verified sequential malloc/free." It is not thread-safe.
//
// Large allocations are handled with mmap.
//
// For small allocations, we set up 50 bins, where each bin is responsible for
// 16 different allocation sizes (e.g. bin 1 handles allocations from 10 thru 26
// bytes); except for the first and last bin, which are responsible for fewer
// than 16 allocation sizes.
//
// Each bin is 1MiB (BIGBLOCK) in size. We ceil the allocation size to the
// largest size supported for this bin, then break the bin up into smaller
// blocks. Each block is structured as [{sz: size, data..., link: *void}...];
// where sz is the size of this (small) block, data is is set aside for the
// user's actual allocation, and link is a pointer to the next bin's data field.
//
// In short, a bin for a particular size is pre-filled with all allocations of
// that size, and the first word of each allocation is set to a pointer to the
// next allocation. As such, malloc becomes:
//
// 1. Look up bin; pre-fill if not already allocated
// 2. Let p = bin; bin = *bin; return p
//
// Then, free is simply:
// 1. Look up bin
// 2. *p = bin;
// 3. bin = p;
//
// Note that over time this can cause the ordering of the allocations in each
// bin to become non-continuous. This has no consequences for performance or
// correctness.

def ALIGN: size = 2;
def WORD: size = size(size);
def WASTE: size = WORD * ALIGN - WORD;
def BIGBLOCK: size = (2 << 16) * WORD;

let bins: [50]nullable *void = [null...];

fn bin2size(b: size) size = ((b + 1) * ALIGN - 1) * WORD;

fn size2bin(s: size) size = {
	assert(s <= bin2size(len(bins) - 1), "Size exceeds maximum for bin");
	return (s + (WORD * (ALIGN - 1) - 1)) / (WORD * ALIGN);
};

// Allocates n bytes of memory and returns a pointer to them, or null if there
// is insufficient memory.
export fn malloc(n: size) nullable *void = {
	return if (n == 0) null
		else if (n > bin2size(len(bins) - 1)) malloc_large(n)
		else malloc_small(n);
};

fn malloc_large(n: size) nullable *void = {
	let p = segmalloc(n + WASTE + WORD);
	if (p == null) {
		return null;
	};
	let bsize = (p: uintptr + WASTE: uintptr): *[1]size;
	bsize[0] = n;
	return (p: uintptr + WASTE: uintptr + WORD: uintptr): nullable *void;
};

fn malloc_small(n: size) nullable *void = {
	const b = size2bin(n);
	let p = bins[b];
	if (p == null) {
		p = fill_bin(b);
		if (p != null) {
			bins[b] = p;
		};
	};
	return if (p != null) {
		let q = *(p: **void);
		bins[b] = q;
		p;
	} else null;
};

fn fill_bin(b: size) nullable *void = {
	const s = bin2size(b);
	let p = segmalloc(BIGBLOCK);
	return if (p == null) null else list_from_block(s, p: uintptr);
};

fn list_from_block(s: size, p: uintptr) nullable *void = {
	const nblocks = (BIGBLOCK - WASTE) / (s + WORD);

	let q = p + WASTE: uintptr; // align q+WORD
	for (let j = 0z; j != nblocks - 1; j += 1) {
		let sz = q: *size;
		let useralloc = q + WORD: uintptr; // aligned
		let next = (useralloc + s: uintptr + WORD: uintptr): *void;
		*sz = s;
		*(useralloc: **void) = next;
		q += s: uintptr + WORD: uintptr;
	};

	// Terminate last block:
	(q: *[1]size)[0] = s;
	*((q + 1: uintptr): *nullable *void) = null;

	// Return first block:
	return (p + WASTE: uintptr + WORD: uintptr): *void;
};

// Frees a pointer previously allocated with [malloc].
export @symbol("rt.free") fn free_(_p: nullable *void) void = {
	if (_p != null) {
		let p = _p: *void;
		let bsize = (p: uintptr - size(size): uintptr): *[1]size;
		let s = bsize[0];
		if (s <= bin2size(len(bins) - 1)) free_small(p, s)
		else free_large(p, s);
	};
};

fn free_large(_p: *void, s: size) void = {
	let p = (_p: uintptr - (WASTE: uintptr + WORD: uintptr)): *void;
	segfree(p, s + WASTE + WORD);
};

fn free_small(p: *void, s: size) void = {
	let b = size2bin(s);
	let q = bins[b];
	*(p: **void) = q;
	bins[b] = p: nullable *void;
};

// Changes the allocation size of a pointer to n bytes. If n is smaller than
// the prior allocation, it is truncated; otherwise the allocation is expanded
// and the values of the new bytes are undefined. May return a different pointer
// than the one given if there is insufficient space to expand the pointer
// in-place. Returns null if there is insufficient memory to support the
// request.
export fn realloc(_p: nullable *void, n: size) nullable *void = {
	if (n == 0) {
		free_(_p);
		return null;
	} else if (_p == null) {
		return malloc(n);
	};

	let p = _p: *void;
	let bsize = (p: uintptr - size(size): uintptr): *size;
	let s = *bsize;
	if (s >= n) {
		return p;
	};

	if (n < bin2size(len(bins) - 1) && size2bin(n) == size2bin(s)) {
		return p;
	};

	let new = malloc(n);
	if (new != null) {
		memcpy(new: *void, p, s);
		free(p);
	};

	return new;
};
