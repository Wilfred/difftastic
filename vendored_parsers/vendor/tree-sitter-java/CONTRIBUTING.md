# Introduction

These guidelines are intended to help developers contribute to the grammar and preserve consistency across the project while doing so.

### Contributions needed

The main objective of this project is to support all versions of the Java language. This means addressing issues with the "todo" and "known error" labels, assigning yourself to a problem that you're working on so that work isn't duplicated. We're also open to documentation improvements and feature enhancements and recommend filing an issue.

# Java Grammar Development Guide

#### General grammar structure

Language constructs are grouped into the top-level categories denoting declarations, statements within methods and expressions. All granular constructs feed into those through the defined grammar hierarchy.

```
rules: {
    program: $ => repeat($._statement),

    _statement: $ => prec(1, choice(
      $._expression_statement,
      $._declaration,
      $._method_statement
    )),
```

#### Deviating from the language spec

The `grammar.js` file follows the BNF grammar outlined in the [Java Language Specification](https://docs.oracle.com/javase/specs/jls/se9/html/jls-19.html).

There are situations where we've deviated from the spec:

- **Prefered naming:** if common developer parlance prefers a naming convention other than the spec, we tend to deviate. An example of this is for `generic_type` as the outer wrapper for `type_arguments`, since generics are a familiar Java programming concept.
- **Simplicity:** The spec is convoluted and not conducive to compact, readable code. In this situation, we've preferred structuring things in a way that are more reusable throughout the grammar and also read clearly. An example of this is our preference to use `binary_` and `unary_` expressions to model relationships between operators, as opposed to supporting the spec's [`ConditionalExpression`](https://docs.oracle.com/javase/specs/jls/se9/html/jls-15.html#jls-ConditionalExpression) hierarchy.

#### When it's okay to parse invalid Java

There are situations in which we parse invalid code to support end-user experiences. For example, it's important to ensure syntax-highlighting doesn't break down for a snippet of Java code in a markdown file. For this reason, we currently allow expressions to be parsed outside of methods, even though that is not valid Java.

To know what is "valid enough", consider what good documentation would look like:

- ✅ `int x = (1 + 2);` = This is invalid since it is not within a method, but still comprehensible. Parse this.
- ❌ `int x = (1 + ) =;` This is not only invalid Java, but it is invalid logic. It wouldn't make sense in documentation. Don't parse this.

Running your code using something like [JavaRepl](https://github.com/albertlatacz/java-repl) is also a good way to verify the correctness of the input program.

#### Adding unit tests

The recommendation is to be comprehensive in adding tests. If it's a visible node, add it to a `/corpus/` test file. It's typically a good idea to test as many permutations of a particular language construct as possible. This increases test coverage, but doubly acquaints readers with a way to examine expected outputs and understand the "edges" of a language.

#### Testing on external repos

Three of the "most popular" Java repositories have been cloned into the project under the `/examples` directory (where popularity is defined by repositories that are most starred and have highest number of active contributers within the last month). Parsing these repos allows us to gauge how well our grammar performs at parsing "real world" Java.

_To test:_
- `./script/parse-examples` runs the tests and outputs them to `known-errors.txt`, representing the files that have any errors or `MISSING ;` flags.
- The goal is to drive down the errors in `known-errors.txt` to 0.
- `known-errors.txt` allows you to find erroring files and parse them individually to diagnose and debug errors.

#### Testing with other parsers

It's worth consulting other LR Java parsers (such as [JavaParser](https://github.com/javaparser/javaparser)) to guide your own grammar development. Comparing tree structure and naming can provide valuable insight into what is usable.

#### References

- [JavaParser](https://github.com/javaparser/javaparser)
- [Java Language Specification](https://docs.oracle.com/javase/specs/jls/se9/html/jls-19.html)
- [Tree-sitter documentation](http://tree-sitter.github.io/tree-sitter/creating-parsers.html)
- [JavaRepl](https://github.com/albertlatacz/java-repl)
