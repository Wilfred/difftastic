// Concatenates two or more strings. The caller must free the return value.
export fn concat(strs: str...) str = {
	let z = 0z;
	for (let i = 0z; i < len(strs); i += 1) {
		z += len(strs[i]);
	};
	let new: []u8 = alloc([], z);
	for (let i = 0z; i < len(strs); i += 1) {
		append(new, ...toutf8(strs[i]));
	};
	return fromutf8_unsafe(new[..z]);
};

@test fn concat() void = {
	let s = concat("hello ", "world");
	assert(s == "hello world");
	free(s);

	s = concat("hello", " ", "world");
	assert(s == "hello world");
	free(s);

	s = concat("hello", "", "world");
	assert(s == "helloworld");
	free(s);

	s = concat("", "");
	assert(s == "");
	free(s);

	s = concat();
	assert(s == "");
	free(s);
};
