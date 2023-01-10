// Allocates a segment.
fn segmalloc(n: size) nullable *void = {
	return match(mmap(null, n,
			PROT_READ | PROT_WRITE,
			MAP_PRIVATE | MAP_ANON, -1, 0)) {
		err: errno => {
			assert(err == ENOMEM: errno);
			null;
		},
		p: *void => p,
	};
};

// Frees a segment allocated with segmalloc.
fn segfree(p: *void, s: size) void = {
	match (munmap(p, s)) {
		err: errno => abort("munmap failed"),
		void => void,
	};
};

// Marks a segment as writable and drops the execute bit.
fn segwrite(seg: *void, n: size) void = mprotect(seg, n, PROT_READ | PROT_WRITE);

// Marks a segment as executable and drops the write bit.
fn segexec(seg: *void, n: size) void = mprotect(seg, n, PROT_READ | PROT_EXEC);
