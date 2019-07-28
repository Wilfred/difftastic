# KotlinLanguageGrammars
[TextMate](https://macromates.com/manual/en/language_grammars) and [Tree-Sitter](http://tree-sitter.github.io/tree-sitter/) language grammars for [Kotlin](https://kotlinlang.org).

![Icon](Icon128.png)

The grammars are based on the [official language grammar](https://kotlinlang.org/docs/reference/grammar.html).

## Tree-Sitter

### Setup

First, make sure to have Node.js 8 installed. Then run

>`npm install -g tree-sitter-cli`

to install the parser generator.

### Compilation

To re-compile the grammar, navigate to the `tree-sitter` directory and run:

>`tree-sitter generate`

## See also

* [KotlinLanguageServer](https://github.com/fwcd/KotlinLanguageServer) for code completion, diagnostics and more
* [KotlinDebugAdapter](https://github.com/fwcd/KotlinDebugAdapter) for JVM debugging support
