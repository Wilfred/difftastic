# tree-sitter-c-sharp

[![Build Status](https://github.com/tree-sitter/tree-sitter-c-sharp/workflows/build/badge.svg)](https://github.com/tree-sitter/tree-sitter-c-sharp/actions?query=workflow%3Abuild)

C# grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter) based upon the Roslyn grammar with changes in order to:

- Deal with differences between the parsing technologies
- Work around some bugs in that grammar
- Handle `#if`, `#else`, `#elif`, `#endif` blocks
- Support syntax highlighting/parsing of fragments
- Simplify the output tree

### Status

Comprehensive supports C# 1 through 10.0 with the following exceptions:

- [ ] `async`, `var` and `await` cannot be used as identifiers everywhere they are valid

#### C# 9.0 (complete)

- [x] Covariant returns
- [x] Extending partial methods
- [x] Extension GetEnumerator
- [x] Function pointers
- [x] Init properties
- [x] Lambda discard parameters
- [x] Local function attributes
- [x] Module initializers
- [x] Native integers
- [x] Patterns
  - [x] Simple type patterns
  - [x] Relational patterns
  - [x] Logical patterns
- [x] Records
- [x] Skip Locals Init
- [x] Static anonymous functions
- [x] Target-typed conditional expression
- [x] Target-typed new
- [x] Top-level statements

#### C# 10.0 (complete?)

- [x] global using directives
- [x] File-scoped namespace declaration
- [x] Extended property patterns
- [x] Allow const interpolated strings
- [x] Record types can seal ToString()
- [x] Allow both assignment and declaration in the same deconstruction
- [x] Allow AsyncMethodBuilder attribute on methods
- [x] Record structs

### References

- [Official C# 6 Language Spec](https://github.com/dotnet/csharplang/blob/master/spec/) provides chapters that formally define the language grammar.
- [Roslyn C# language grammar export](https://github.com/dotnet/roslyn/blob/master/src/Compilers/CSharp/Portable/Generated/CSharp.Generated.g4)
- [SharpLab](https://sharplab.io) (web-based syntax tree playground based on Roslyn)
