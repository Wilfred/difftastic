@test fn stoi() void = {
	assert(stoi64("") as invalid == 0: strconv::invalid);
	assert(stoi64("abc") as invalid == 0: strconv::invalid);
	assert(stoi64("1a") as invalid == 1: strconv::invalid);

	assert(stoi64("9223372036854775808") is overflow);
	assert(stoi64("-9223372036854775809") is overflow);

	assert(stoi64("0") as i64 == 0);
	assert(stoi64("1") as i64 == 1);
	assert(stoi64("-1") as i64 == -1);
	assert(stoi64("9223372036854775807") as i64 == 9223372036854775807);
	assert(stoi64("-9223372036854775808") as i64 == -9223372036854775808);

	assert(stoi32("2147483648") is overflow);
	assert(stoi32("-2147483649") is overflow);

	assert(stoi32("2147483647") as i32 == 2147483647);
	assert(stoi32("-2147483648") as i32 == -2147483648);
};
