// TODO: work when _NSIG != 64

export fn sigemptyset(set: *sigset) int = {
	if (set.__val[0] == 0) {
		return 1;
	};
	set.__val[0] = 0;
	return 0;
};

export fn sigaddset(set: *sigset, signum: int) (int | errno) = {
	if (signum > NSIG) {
		return EINVAL;
	};
	signum -= 1;
	set.__val[0] |= (1 << signum): u64;
	return 0;
};

export fn sigdelset(set: *sigset, signum: int) (int | errno) = {
	if (signum > NSIG) {
		return EINVAL;
	};
	signum -= 1;
	set.__val[0] &= ~(1 << signum: u64);
	return 0;
};

export fn sigismember(set: *sigset, signum: int) (int | errno) = {
	if (signum > NSIG) {
		return EINVAL;
	};
	signum -= 1;
	if ((set.__val[0] & (1 << signum: u64)) != 0) {
		return 1;
	} else {
		return 0;
	};
};

export fn sigfillset(set: *sigset) (int | errno) = {
	set.__val[0] = 0xffffffffffffffff: u64;
	return 0;
};
