use strings;

type limited_stream = struct {
	stream: stream,
	source: *stream,
	limit: size,
};

fn limited_stream_new(source: *stream, limit: size) *limited_stream = {
	return alloc(limited_stream {
		stream = stream {
			name = strings::dup(source.name),
			closer = &limited_close,
			...
		},
		source = source,
		limit = limit,
	});
};

// Create an overlay stream that only allows a limited amount of bytes to be
// read from the underlying stream.
export fn limitreader(source: *stream, limit: size) *stream = {
	let stream = limited_stream_new(source, limit);
	stream.stream.reader = &limited_read;
	return &stream.stream;
};

// Create an overlay stream that only allows a limited amount of bytes to be
// written to the underlying stream.
export fn limitwriter(source: *stream, limit: size) *stream = {
	let stream = limited_stream_new(source, limit);
	stream.stream.writer = &limited_write;
	return &stream.stream;
};

fn limited_read(s: *stream, buf: []u8) (size | EOF | error) = {
	let stream = s: *limited_stream;
	if (len(buf) > stream.limit) {
		buf = buf[..stream.limit];
	};
	stream.limit -= len(buf);
	return read(stream.source, buf);
};

fn limited_write(s: *stream, buf: const []u8) (size | error) = {
	let stream = s: *limited_stream;
	let slice = if (len(buf) > stream.limit) {
		buf[..stream.limit];
	} else {
		buf[..];
	};
	stream.limit -= len(slice);
	return write(stream.source, slice);
};

fn limited_close(s: *stream) void = {
	free(s.name);
	free(s);
};
