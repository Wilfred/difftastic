use rt;

// Wraps an [rt::errno] to produce an [errors::opaque]. This is a non-portable
// interface which is mainly provided to support internal stdlib requirements.
export fn errno(errno: rt::errno) opaque = {
	static assert(size(rt::errno) <= size(opaque_data));
	let err = opaque { strerror = &rt_strerror, ... };
	let ptr = &err.data: *rt::errno;
	*ptr = errno;
	return err;
};

fn rt_strerror(err: *opaque_data) const str = {
	let err = &err: *rt::errno;
	return rt::strerror(*err);
};
