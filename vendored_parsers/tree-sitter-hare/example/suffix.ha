// Returns true if 'in' has the given prefix.
export fn has_prefix(in: str, prefix: str) bool = {
	let a = toutf8(in), b = toutf8(prefix);
	if (len(a) < len(b)) {
		return false;
	};
	for (let i = 0z; i < len(b); i += 1) {
		if (a[i] != b[i]) {
			return false;
		};
	};
	return true;
};

@test fn prefix() void = {
	assert(has_prefix("abcde", "abc"));
	assert(has_prefix("abcde", "abcde"));
	assert(has_prefix("abcde", ""));
	assert(has_prefix("", ""));
	assert(!has_prefix("abcde", "cde"));
	assert(!has_prefix("abcde", "abcdefg"));
	assert(!has_prefix("", "abc"));
};

// Returns true if 'in' has the given prefix.
export fn has_suffix(in: str, suff: str) bool = {
	let a = toutf8(in), b = toutf8(suff);
	if (len(a) < len(b)) {
		return false;
	};
	for (let i = 0z; i < len(b); i += 1) {
		if (a[len(a) - len(b) + i] != b[i]) {
			return false;
		};
	};
	return true;
};

@test fn suffix() void = {
	assert(has_suffix("abcde", "cde"));
	assert(has_suffix("abcde", "abcde"));
	assert(has_suffix("abcde", ""));
	assert(has_suffix("", ""));
	assert(has_suffix("abcde", ""));
	assert(!has_suffix("abcde", "abc"));
	assert(!has_suffix("abcde", "fabcde"));
	assert(!has_suffix("", "abc"));
};
