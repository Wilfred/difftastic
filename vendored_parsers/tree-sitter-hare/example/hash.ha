use io;
// TODO: Let caller supply the output buffer, to avoid the slice allocation

// The general purpose interface for a hashing function.
export type hash = struct {
	// A stream which only supports writes and never returns errors.
	stream: io::stream,

	// Returns the current hash.
	sum: *fn(hash: *hash) []u8,

	// Resets the hash function to its initial state.
	reset: *fn(hash: *hash) void,

	// Size of the hash in bytes.
	sz: size,
};

// Returns a writable [io::stream] for a given hash.
export fn writer(h: *hash) *io::stream = &h.stream;

// Writes an input to the hash function.
export fn write(h: *hash, buf: const []u8) size =
	io::write(&h.stream, buf) as size;

// Finalizes the hash, frees resources associated with the hash, and returns the
// sum. The return value is heap allocated, the caller needs to free it.
export fn finish(h: *hash) []u8 = {
	let sum = sum(h);
	io::close(&h.stream);
	return sum;
};

// Closes a hash, freeing its resources and discarding the checksum.
export fn close(h: *hash) void = io::close(&h.stream);

// Returns the current sum. The return value is heap allocated, the caller
// needs to free it.
export fn sum(h: *hash) []u8 = h.sum(h);

// Resets the hash function to its initial state.
export fn reset(h: *hash) void = h.reset(h);

// Returns the size of the hash in bytes. This is consistent regardless
// of the hash state.
export fn sz(h: *hash) size = h.sz;
