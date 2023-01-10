// The requested resource is not available.
export type busy = void!;

// An attempt was made to create a resource which already exists.
export type exists = void!;

// An function was called with an invalid combination of arguments.
export type invalid = void!;

// The user does not have permission to use this resource.
export type noaccess = void!;

// An entry was requested which does not exist.
export type noentry = void;

// The requested operation caused a numeric overflow condition.
export type overflow = void!;

// The requested operation is not supported.
export type unsupported = void!;

// A tagged union of all error types.
export type error = (
	busy |
	exists |
	invalid |
	noaccess |
	noentry |
	overflow |
	unsupported |
	opaque
);
