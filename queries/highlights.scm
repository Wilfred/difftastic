; highlights.scm
;
; Highlighting queries for D code for use by Tree-Sitter.
;
; Copyright 2022 Garrett D'Amore
;
; Distributed under the MIT License.
; (See accompanying file LICENSE.txt or https://opensource.org/licenses/MIT)
; SPDX-License-Identifier: MIT

[
    (abstract)
    (alias)
    (align)
    (asm)
    (assert)
    (auto)
    (break)
    (case)
    (cast)
    (catch)
    (class)
    (const)
    (continue)
    (debug)
    (default)
    (delegate)
    (delete)
    (deprecated)
    (do)
    (else)
    (enum)
    (export)
    (extern)
    (final)
    (finally)
    (for)
    (foreach)
    (foreach_reverse)
    (function)
    (goto)
    (if)
    (immutable)
    (import)
    (in)
    (inout)
    (interface)
    (invariant)
    (is)
    (lazy)
    ; "macro" - obsolete
    (mixin)
    (module)
    (new)
    (nothrow)
    (out)
    (override)
    (package)
    (pragma)
    (private)
    (protected)
    (public)
    (pure)
    (ref)
    (return)
    (scope)
    (shared)
    (static)
    (struct)
    (super)
    (switch)
    (synchronized)
    (template)
    (this)
    (throw)
    (try)
    (typeid)
    (typeof)
    (union)
    (unittest)
    (version)
    (while)
    (with)
    "__FILE__"
    "__FILE_FULL_PATH__"
    "__MODULE__"
    "__LINE__"
    "__FUNCTION__"
    "__PRETTY_FUNCTION__"
    (gshared)
    (traits)
    (vector)
    (parameters_)
] @keyword

[
    (not_in)
    (not_is)
    "/="
    "/"
    ".."
    "..."
    "&"
    "&="
    "&&"
    "|"
    "|="
    "||"
    "-"
    "-="
    "--"
    "+"
    "+="
    "++"
    "<"
    "<="
    "<<"
    "<<="
    ">"
    ">="
    ">>="
    ">>>="
    ">>"
    ">>>"
    "!"
    "!="
    "("
    ")"
    "["
    "]"
    "?"
    ","
    "$"
    "="
    "=="
    "*"
    "*="
    "%"
    "%="
    "^"
    "^="
    "^^"
    "^^="
    "~"
    "~="
    "@"
    "=>"
] @operator

[
    ";"
    "."
    ":"
] @delimiter

[
    (null)
    (true)
    (false)
] @constant

(special_keyword) @constant

(directive) @comment
(shebang) @comment

(comment) @comment

[
    (void)
    (bool)
    (byte)
    (ubyte)
    (char)
    (cent)
    (ucent)
    (short)
    (ushort)
    (wchar)
    (dchar)
    (int)
    (uint)
    (long)
    (ulong)
    (real)
    (double)
    (ifloat)
    (ireal)
    (idouble)
    (ifloat)
    (creal)
    (double)
    (cfloat)
] @type

(string_literal) @string
(int_literal) @number
(float_literal) @number
(char_literal) @number
(identifier) @variable
(at_attribute) @property
