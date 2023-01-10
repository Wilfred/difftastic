use bytes;
use io;
use strings;

type fixed_stream = struct {
	stream: io::stream,
	buf: []u8,
};

// Creates an [io::stream] for a fixed, caller-supplied buffer. Supports either
// read or write, but not both. The program aborts if writes would exceed the
// buffer's capacity.
export fn fixed(in: []u8, mode: io::mode) *io::stream = {
	let s = alloc(fixed_stream {
		stream = io::stream {
			name = "<bufio::fixed>",
			...
		},
		buf = in,
	});
	if (mode & io::mode::READ == io::mode::READ) {
		assert(mode & io::mode::WRITE != io::mode::WRITE);
		s.stream.reader = &fixed_read;
	};
	if (mode & io::mode::WRITE == io::mode::WRITE) {
		assert(mode & io::mode::READ != io::mode::READ);
		s.stream.writer = &fixed_write;
	};
	return &s.stream;
};

fn fixed_read(s: *io::stream, buf: []u8) (size | io::error | io::EOF) = {
	let stream = s: *fixed_stream;
	if (len(stream.buf) == 0) {
		return io::EOF;
	};
	const n = if (len(buf) > len(stream.buf)) len(stream.buf) else len(buf);
	buf[..n] = stream.buf[..n];
	stream.buf = stream.buf[n..];
	return n;
};

fn fixed_write(s: *io::stream, buf: const []u8) (size | io::error) = {
	let stream = s: *fixed_stream;
	if (len(stream.buf) == 0) {
		abort("bufio::fixed buffer exceeded");
	};
	const n = if (len(buf) > len(stream.buf)) len(stream.buf) else len(buf);
	stream.buf[..n] = buf[..n];
	stream.buf = stream.buf[n..];
	return n;
};

@test fn fixed() void = {
	// TODO: add a read test too
	static let buf: [1024]u8 = [0...];
	let stream = fixed(buf, io::mode::WRITE);
	let n = 0z;
	n += io::write(stream, strings::toutf8("hello ")) as size;
	n += io::write(stream, strings::toutf8("world")) as size;
	assert(bytes::equal(buf[..n], strings::toutf8("hello world")));
};
