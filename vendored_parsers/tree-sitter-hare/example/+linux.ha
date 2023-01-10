let start: timespec = timespec { ... };

fn time_start() void = {
	clock_gettime(CLOCK_MONOTONIC, &start) as void;
};

// Returns elapsed time as (seconds, milliseconds)
fn time_stop() (size, size) = {
	let end: timespec = timespec { ... };
	clock_gettime(CLOCK_MONOTONIC, &end) as void;
	return ((end.tv_sec - start.tv_sec): size,
		(end.tv_nsec - start.tv_nsec): size / 10000z);
};
