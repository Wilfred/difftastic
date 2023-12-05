/// Successfully ran a diff, found no syntactic changes in text files
/// or byte changes in binary files.
pub(crate) const EXIT_SUCCESS: i32 = 0;

/// Successfully ran a diff, found syntactic changes in text files or
/// byte changes in binary files.
pub(crate) const EXIT_FOUND_CHANGES: i32 = 1;

/// Invalid arguments given to difftastic. This could be usage errors
/// (e.g. invalid numbers of arguments) or invalid paths (e.g. files
/// we don't have permission to read).
pub(crate) const EXIT_BAD_ARGUMENTS: i32 = 2;
