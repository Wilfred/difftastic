use bytes;
use errors;
use io;

type dynamic_stream = struct {
	stream: io::stream,
	buf: []u8,
	pos: size,
};

// Creates an [io::stream] which dynamically allocates a buffer to store writes
// into. Subsequent reads will consume the buffered data. Upon failure to
// allocate sufficient memory to store writes, the program aborts.
//
// Calling [io::close] on this stream will free the buffer. Call [bufio::finish]
// instead to free up resources associated with the stream, but transfer
// ownership of the buffer to the caller.
export fn dynamic(mode: io::mode) *io::stream = dynamic_from([], mode);

// Like [dynamic], but takes an existing slice as input. Writes are appended to
// it and reads consume bytes from the initial buffer, plus any additional
// writes. Like [dynamic], calling [io::close] will free the buffer, and
// [bufio::finish] can be used to return ownership of the buffer to the caller.
export fn dynamic_from(in: []u8, mode: io::mode) *io::stream = {
	let s = alloc(dynamic_stream {
		stream = io::stream {
			closer = &dynamic_close,
			seeker = &dynamic_seek,
			...
		},
		buf = in,
		pos = 0,
	}): *io::stream;
	if (mode & io::mode::READ == io::mode::READ) {
		s.reader = &dynamic_read;
	};
	if (mode & io::mode::WRITE == io::mode::WRITE) {
		s.writer = &dynamic_write;
	};
	return s;
};

fn dynamic_write(s: *io::stream, buf: const []u8) (size | io::error) = {
	let s = s: *dynamic_stream;
	if (s.pos == len(s.buf)) {
		append(s.buf, ...buf);
	} else {
		// TODO: update this after we add insert
		let new: []u8 = alloc([], len(s.buf) + len(buf));
		append(new, ...s.buf[..s.pos]);
		append(new, ...buf[..]);
		append(new, ...s.buf[s.pos..]);
		free(s.buf);
		s.buf = new;
	};

	s.pos += len(buf);
	return len(buf);
};

fn dynamic_read(s: *io::stream, buf: []u8) (size | io::EOF | io::error) = {
	let s = s: *dynamic_stream;
	if (len(s.buf) == s.pos && len(buf) != 0) {
		return io::EOF;
	};
	const n = if (len(s.buf) - s.pos < len(buf)) {
		len(s.buf) - s.pos;
	} else {
		len(buf);
	};
	buf[..n] = s.buf[s.pos..s.pos + n];
	s.pos += n;
	return n;
};

fn dynamic_seek(
	s: *io::stream,
	off: io::off,
	w: io::whence
) (io::off | io::error) = {
	let stream = s: *dynamic_stream;
	switch (w) {
		io::whence::SET => {
			if (len(stream.buf) < off: size) {
				abort("invalid offset");
			};
			stream.pos = off: size;
		},
		io::whence::CUR => {
			if (stream.pos + off: size > len(stream.buf)) {
				abort("invalid offset");
			};
			stream.pos += off: size;
		},
		io::whence::END => {
			if (len(stream.buf) - (-off): size < len(stream.buf)) {
				abort("invalid offset");
			};
			stream.pos = len(stream.buf) - (-off): size;
		},
	};
	return stream.pos: io::off;
};

fn dynamic_close(s: *io::stream) void = {
	const s = s: *dynamic_stream;
	free(s.buf);
	free(s);
};

// Closes the stream without freeing the buffer, instead transferring ownership
// of it to the caller.
export fn finish(s: *io::stream) []u8 = {
	if (s.closer != &dynamic_close) {
		abort("bufio::finish called on non-bufio stream");
	};
	let s = s: *dynamic_stream;
	let buf = s.buf;
	free(s);
	return buf;
};

// Returns the current buffer.
export fn buffer(s: *io::stream) []u8 = {
	if (s.closer != &dynamic_close) {
		abort("bufio::buffer called on non-bufio stream");
	};
	let s = s: *dynamic_stream;
	return s.buf;
};

// Resets the buffer's length to zero, but keeps the allocated memory around for
// future writes.
export fn reset(s: *io::stream) void = {
	if (s.closer != &dynamic_close) {
		abort("bufio::reset called on non-bufio stream");
	};
	const s = s: *dynamic_stream;
	s.pos = 0;
	s.buf = s.buf[..0];
};

// Truncates the buffer, freeing memory associated with it and setting its
// length to zero.
export fn truncate(s: *io::stream) (void | errors::unsupported) = {
	if (s.closer != &dynamic_close) {
		return errors::unsupported;
	};
	let s = s: *dynamic_stream;
	s.pos = 0;
	delete(s.buf[..]);
};

@test fn dynamic() void = {
	// TODO: slice/array equality
	let s = dynamic(io::mode::RDWR);
	assert(io::write(s, [1, 2, 3]) as size == 3);
	assert(bytes::equal(buffer(s), [1, 2, 3]));
	assert(io::write(s, [4, 5]) as size == 2);
	assert(bytes::equal(buffer(s), [1, 2, 3, 4, 5]));
	let buf: [2]u8 = [0...];
	assert(io::seek(s, 0, io::whence::SET) as io::off == 0: io::off);
	assert(io::read(s, buf[..]) as size == 2 && bytes::equal(buf, [1, 2]));
	assert(io::read(s, buf[..]) as size == 2 && bytes::equal(buf, [3, 4]));
	assert(io::read(s, buf[..]) as size == 1 && buf[0] == 5);
	assert(io::read(s, buf[..]) is io::EOF);
	assert(io::write(s, [6, 7, 8]) as size == 3);
	assert(bytes::equal(buffer(s), [1, 2, 3, 4, 5, 6, 7, 8]));
	reset(s);
	assert(len(buffer(s)) == 0);
	assert(io::write(s, [1, 2, 3]) as size == 3);
	assert(truncate(s) is void);
	assert(len(buffer(s)) == 0);

	let sl: []u8 = alloc([1, 2, 3]);
	let s = dynamic_from(sl, io::mode::WRITE);
	assert(io::write(s, [0, 0]) as size == 2);
	assert(io::seek(s, 0, io::whence::END) as io::off == 5: io::off);
	assert(io::write(s, [4, 5, 6]) as size == 3);
	assert(bytes::equal(buffer(s), [0, 0, 1, 2, 3, 4, 5, 6]));
	// TODO: this should check for errors::unsupported (harec bug prevents that)
	assert(io::read(s, buf[..]) is io::error);
	io::close(s);

	sl = alloc([1, 2]);
	let s = dynamic_from(sl, io::mode::READ);
	assert(io::read(s, buf[..1]) as size == 1 && buf[0] == 1);
	assert(io::seek(s, 1, io::whence::CUR) as io::off == 2: io::off);
	assert(io::read(s, buf[..]) is io::EOF);
	// TODO: this should check for errors::unsupported (harec bug prevents that)
	assert(io::write(s, [1, 2]) is io::error);
};
