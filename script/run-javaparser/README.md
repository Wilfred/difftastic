# Run-Javaparser

This is a command-line program for running the [`Javaparser`](https://javaparser.org/) library on a Java source file.

In developing this grammar, it is helpful to compare the syntax trees to those produced by `Javaparser`, the most popular Java-parsing library in the Java ecosystem. Unlike the Java language spec, `Javaparser` is designed to produce syntax trees that are useful for code analysis.

## Usage

On macOS, compile the parser with this script:

```sh
./bootstrap
```

Then run it on a java file like this

```sh
./run path/to/the/file.java
```
