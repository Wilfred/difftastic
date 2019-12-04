tree-sitter-c-sharp
===========================

[![Build Status](https://travis-ci.org/tree-sitter/tree-sitter-c-sharp.svg?branch=master)](https://travis-ci.org/tree-sitter/tree-sitter-c-sharp)

C# grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

### Status

Based on an export of the Roslyn grammar export with various changes in order to:

- Deal with differences between the parsing technologies
- Work around some bugs in that grammar
- Handle `#if`, `#else`, `#elif`, `#endif` blocks
- Support syntax highlighting/parsing of fragments
- Simplify the output tree

### Detailed status

Comprehensive support for C# exists with the following exceptions:

- [ ] [Non-ASCII identifiers](#37)
- [ ] [Contextual keywords](#47)
- [ ] [Global statements](#12)

#### C# 7.0

- [ ] [Tuples](#15)
- [x] Discards
- [x] Basic pattern matching
- [ ] [Recursive pattern matching](#19)
- [ ] [Ref locals and return](#14)
- [x] Local function statements
- [x] Expression bodied constructors
- [x] Expression bodied destructors/finalizers
- [x] Throw expressions
- [x] Binary and `_` literal support

#### C# 7.1

- [x] `async` main method
- [x] Default literals (as `default_expression`)
- [ ] Inferred tuple element names
- [ ] Generic type pattern matching

#### C# 7.2

- [x] `in` parameter modifiers
- [x] `ref readonly` method returns
- [x] `readonly struct`
- [x] `ref struct`
- [x] Non-trailing named arguments
- [x] `_` leading binary and hex literals
- [x] `private protected` modifier
- [ ] Conditional `ref` expressions

#### C# 7.3

- [x] `stackalloc` array initializers
- [x] `unmanaged` generic type parameter constraint
- [x] Attributes attached to auto property backing fields
- [x] `out` support for parameters on initializers, constructors etc.

#### C# 8.0

- [x] `readonly` members
- [x] Default interface methods
- [x] `switch` expressions
- [ ] `switch` property patterns
- [ ] `switch` tuple patterns
- [x] `static` local functions
- [x] nullable reference types
- [x] null-forgiving operator

### References

* [Official C# 6 Language Spec](https://github.com/dotnet/csharplang/blob/master/spec/) provides chapters that formally define the language grammar.
* [Roslyn C# language grammar export](https://github.com/dotnet/roslyn/blob/master/src/Compilers/CSharp/Portable/Generated/CSharp.Generated.g4)
* [SharpLab](https://sharplab.io) (web-based syntax tree playground based on Roslyn)
