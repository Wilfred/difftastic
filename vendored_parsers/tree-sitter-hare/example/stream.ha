use errors;

// A stream of bytes which supports some subset of read, write, close, or seek
// operations. To create a custom stream, embed this type as the first member of
// a struct with user-specific data and fill out these fields as appropriate.
//
//	type my_stream = struct {
//		io::stream,
//		fd: int,
//	};
//
//	fn open(path: str) *io::stream = {
//		let fd = // ...
//		let stream = alloc(*my_stream, my_stream {
//			name   = strings::dup(path),
//			reader = &my_stream_read,
//			writer = &my_stream_write,
//			closer = null,
//			fd: fd,
//			...
//		});
//		return &stream.stream;
//	};
export type stream = struct {
	name:   str,
	reader: nullable *reader,
	writer: nullable *writer,
	closer: nullable *closer,
	copier: nullable *copier,
	seeker: nullable *seeker,
	unwrap: nullable *unwrap,
};

// Reads up to len(buf) bytes from the reader into the given buffer, returning
// the number of bytes read.
export fn read(s: *stream, buf: []u8) (size | EOF | error) = {
	return match (s.reader) {
		null => errors::unsupported,
		r: *reader => r(s, buf),
	};
};

// Writes up to len(buf) bytes to the stream from the given buffer, returning
// the number of bytes written.
export fn write(s: *stream, buf: const []u8) (size | error) = {
	return match (s.writer) {
		null => errors::unsupported,
		w: *writer => w(s, buf),
	};
};

// Closes the stream.
export fn close(s: *stream) (error | void) = {
	return match (s.closer) {
		null => errors::unsupported,
		c: *closer => c(s),
	};
};

// Sets the offset within the stream.
export fn seek(s: *stream, off: off, w: whence) (off | error) = {
	return match (s.seeker) {
		null => errors::unsupported,
		sk: *seeker => sk(s, off, w),
	};
};

// Returns the current offset within the stream.
export fn tell(s: *stream) (off | error) = {
	return match (s.seeker) {
		null => errors::unsupported,
		sk: *seeker => sk(s, 0, whence::CUR),
	};
};

// Returns the underlying stream for a stream which wraps another stream.
export fn source(s: *stream) (*io::stream | errors::unsupported) = {
	return match (s.unwrap) {
		null => errors::unsupported,
		uw: *unwrap => uw(s),
	};
};

let _empty: io::stream = io::stream {
	reader = &empty_read,
	writer = &empty_write,
	...
};

// A [stream] which always reads EOF and discards any writes.
export let empty: *io::stream = &_empty;

fn empty_read(s: *stream, buf: []u8) (size | EOF | error) = EOF;

fn empty_write(s: *stream, buf: const []u8) (size | error) = len(buf);
