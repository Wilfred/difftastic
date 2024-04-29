from ._tree_sitter_python import lib as _lib, ffi as _ffi

def language():
    """Get the tree-sitter language for this grammar."""
    return int(_ffi.cast("uintptr_t", _lib.tree_sitter_python()))
