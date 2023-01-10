use rt;

// Exit the program with the provided status code.
export @noreturn fn exit(status: int) void = rt::exit(status);
