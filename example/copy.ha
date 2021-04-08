use errors;

// Copies data from one stream into another. Note that this function will never
// return if the source stream is infinite.
export fn copy(dest: *stream, src: *stream) (error | size) = {
	match (dest.copier) {
		null       => void,
		c: *copier => match (c(dest, src)) {
			err: error => match (err) {
				errors::unsupported => void, // Use fallback
				* => return err,
			},
			s: size => return s,
		},
	};

	let w = 0z;
	static let buf: [4096]u8 = [0...];
	for (true) {
		match (read(src, buf[..])?) {
			n: size => for (let i = 0z; i < n) {
				let r = write(dest, buf[i..n])?;
				w += r;
				i += r;
			},
			EOF => break,
		};
	};
	return w;
};
