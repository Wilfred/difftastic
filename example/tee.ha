type tee_stream = struct {
	stream: stream,
	source: *stream,
	sink: *stream,
};

// Creates a reader which copies reads into a sink before forwarding them to the
// caller. Does not close the secondary streams when the tee stream is closed.
export fn tee(source: *stream, sink: *stream) *stream = {
	return alloc(tee_stream {
		stream = stream {
			reader = &tee_read,
			closer = &tee_close,
			...
		},
		source = source,
		sink = sink,
	}): *io::stream;
};

fn tee_read(s: *stream, buf: []u8) (size | EOF | error) = {
	let s = s: *tee_stream;
	let z = match (read(s.source, buf)) {
		err: error => return err,
		EOF => return EOF,
		z: size => z,
	};
	for (let n = 0z; n < z) {
		n += write(s.sink, buf[n..z])?;
	};
	return z;
};

fn tee_close(s: *stream) void = free(s);
