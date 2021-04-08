// The slice module provides some utility functions for working with slices. In
// order to work with a user-supplied slice of an arbitrary type, the slice must
// be cast to []void and the size of the member type passed alongside it. These
// functions provide support code for common operations such as indexing and
// appending, which are normally provided by language features, but which are
// not available for []void slices.
